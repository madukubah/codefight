#include<iostream>
#include<vector>

using namespace std;
std::vector< std::vector<int> > spiralNumbers(int n) {
     std::vector<int> z(n) ;
     std::vector< std::vector<int> > a ( n , z ) ;

     enum direction {up, down, left, right};

     direction dir;
     dir = right;
     int length = n*n;
     int x [] = {0, 0, -1, 1};
     int y [] = {-1, 1, 0, 0};
     int x1=-1;
     int y1=0;
     int k=n-1;
     int l = n;
     int col = 0;

     int downLeft = k+2;
     int upRight = k+1;
     for( int i=1; i<= length; i++ )
     {
          x1+= x[ dir ];
          y1+= y[ dir ];

          a[ y1 ][ x1 ] = i;
          //cout<<dir;
          switch( dir )
          {
               case up:
                    if( i == l )
                    {
                         dir = right;
                         l+= upRight;
                    }
                    break;
               case down:
                    if( i == l )
                    {
                         dir = left;
                         l+= downLeft ;
                    }
                    break;
               case left:
                    if( i == l )
                    {
                         dir = up;
                         // k--;
                         upRight-=2;
                         l += upRight ;
                    }
                    break;
               case right:
                    if( col == ( k )  || ( i == l) )
                    {
                        dir =  down;
                        downLeft-=2;
                         l += downLeft;
                    }
                    col++;
                    break;
          }
    }
     return a;
}

int main(){
    int n=5;
    std::vector< std::vector<int> >  x = spiralNumbers(n) ;
    for(int i=0; i< n; i++ )
    {
        for(int j=0; j< n; j++ )
        {
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
}
