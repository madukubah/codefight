/*
Given a matrix, find its transpose.
*/
std::vector<std::vector<int>> matrixTransposition(std::vector<std::vector<int>> matrix) {
    std::vector<std::vector<int>> result;
    std::vector<int> a;
    for(int i=0; i< matrix[0].size(); i++){
        for(int j=0; j< matrix.size(); j++){
            a.push_back(matrix[j][i]);
        }
        result.push_back(a);
        a.clear();
    }
    return result;
}

