/*
You are given an array of desired filenames in the order of their creation. Since two files cannot have equal names, the one which comes later will have an addition to its name in a form of (k), where k is the smallest positive integer such that the obtained name is not used yet.

Return an array of names that will be given to the files.

Example

For names = ["doc", "doc", "image", "doc(1)", "doc"], the output should be
fileNaming(names) = ["doc", "doc(1)", "image", "doc(1)(1)", "doc(2)"].

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.string names

Guaranteed constraints:
5 ≤ names.length ≤ 15,
1 ≤ names[i].length ≤ 15.

[output] array.string
*/
std::vector<std::string> fileNaming(std::vector<std::string> names) {
  struct HashMapElement {
    std::string element;
    int hash;
    int version; // the smallest possible integer to use with this name

    HashMapElement(std::string a, int b, int c) {
      element = a;
      hash = b;
      version = c;
    }
  };

  struct Helper {
    /*
      Information about the string in the hash map
      is stored in the following way:
      [string itself,
       its hash,
       the smallest possible integer to use with this name]
    */
    int hashMapSize;
    std::vector<HashMapElement> hashMap;

    Helper(int halfSize) {
      hashMapSize = halfSize * 2;
      ...
    }

    int calculateHash(std::string inputString) {
      const int P = 997;
      const int M = 28001;
      int hashValue = 0;
      for (int i = 0; i < inputString.size(); i++) {
        hashValue = (hashValue * P + int(inputString[i])) % M;
      }
      return hashValue;
    }

    int searchHM(int position, int hash) {
      while (hashMap[position].element != ""
          && hashMap[position].hash != hash) {
        position = (position + 1) % hashMapSize;
      }
      return position;
    }
  };

  std::vector<std::string> result;
  Helper h = Helper(names.size());

  for (int i = 0; i < names.size(); i++) {
    int hash = h.calculateHash(names[i]);
    int startPos = h.searchHM(hash % h.hashMapSize, hash);
    if (h.hashMap[startPos].element == "") {
      h.hashMap[startPos] = HashMapElement(names[i], hash, 1);
      result.push_back(names[i]);
    }
    else {
      std::string newName = names[i] + "(" +
          std::to_string(h.hashMap[startPos].version) + ")";
      int newNameHash = h.calculateHash(newName);
      int position = h.searchHM(newNameHash % h.hashMapSize, newNameHash);

      while (h.hashMap[position].element != "") {
        h.hashMap[startPos].version++;
        newName = names[i] + "(" +
            std::to_string(h.hashMap[startPos].version) + ")";
        newNameHash = h.calculateHash(newName);
        position = h.searchHM(newNameHash % h.hashMapSize, newNameHash);
      }
      h.hashMap[position] = HashMapElement(newName, newNameHash, 1);
      result.push_back(newName);
      h.hashMap[startPos].version++;
    }
  }
  return result;
}

