/*
Given the positions of a white bishop and a black pawn on the standard chess board, determine whether the bishop can capture the pawn in one move.

The bishop has no restrictions in distance for each move, but is limited to diagonal movement. Check out the example below to see how it can move:*/
bool bishopAndPawn(std::string bishop, std::string pawn) {
   struct Parser {
    int getX(char pos) {
      return pos - 'A';
    }

    int getY(char pos) {
      return pos - '1';
    }
  };

  Parser myParser;
  int x1 = myParser.getX(bishop[0]),
      y1 = myParser.getY(bishop[1]),
      x2 = myParser.getX(pawn[0]),
      y2 = myParser.getY(pawn[1]);

  if (x1 + y2 == x2 + y1 || x1 + y1 == x2 + y2) {
    return true;
  }

  return false;
}
