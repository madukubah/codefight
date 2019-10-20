/*
Given a position of a knight on the standard chessboard, find the number of different moves the knight can perform.

The knight can move to a square that is two squares horizontally and one square vertically, or two squares vertically and one square horizontally away from it. The complete move therefore looks like the letter L. Check out the image below to see all valid moves for a knight piece that is placed on one of the central squares.
*/

int chessKnight(std::string cell) {
    int k[] = {1, 2, -1, -2};
    int l[2][2] = {
        {2, -2},
        {1, -1}
    };
    int C1 = cell[0] - 'a';
    int C2 = cell[1] - '1';
    int r=0;
    for(int i=0; i< 4; i++){
        for(int j=0; j< 2; j++){
            if( (0 <= (C1 + k[i]) && (C1 + k[i]) <= 7 ) &&
                (0 <= (C2 + l[i%2][j]) && (C2 + l[i%2][j]) <= 7 )
              ){
                r++;
            }
        }
    }
    return r;


}
