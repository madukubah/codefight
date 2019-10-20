/*
Once upon a time, in a kingdom far, far away, there lived a king Byteasar I. As a kind and wise ruler, he did everything in his (unlimited) power to make life of his subjects comfortable and pleasant. One cold evening a messenger arrived to the king's castle with the latest news: all kings in the Kingdoms Union started to enforce traffic laws! In order not to lose his membership in the Union, king Byteasar had to do the same in his kingdom. But what would the citizens think of it?

The king decided to start introducing the changes with something more or less simple: change all the roads in the kingdom from two-directional to one-directional. He personally prepared the roadRegister of the new roads, and now he needs to make sure that the road system is convenient and there will be no traffic jams, i.e. each city has the same number of incoming and outgoing roads. As the Hand of the King, you're the one who should check it.
*/

bool newRoadSystem(std::vector<std::vector<bool>> roadRegister) {
    vector<int> incoming ( roadRegister.size(), 0 );
    vector<int> outgoing ( roadRegister.size(), 0 );

    for(int i=0; i< roadRegister.size(); i++){
        for(int j=0; j< roadRegister.size(); j++){
            if( roadRegister[i][j] ){
                outgoing[i] ++;
                incoming[j] ++;
            }
        }
    }

    for(int i=0; i< roadRegister.size(); i++){
        if ( outgoing[i] != incoming[i] ) return false;
    }
    return true;
}

BEST
bool newRoadSystem(bool[][] roadRegister) {
    int x = 0;
    int columns = roadRegister.GetLength(0);
    for(int n = 0; n<columns; n++){
        for(int i = 0; i<columns; i++){
            if(roadRegister[n][i]) x++;
            if(roadRegister[i][n]) x--;
        }
        if(x!=0) return false;
    }

    return true;
}

