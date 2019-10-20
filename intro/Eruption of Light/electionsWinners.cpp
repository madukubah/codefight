int electionsWinners(std::vector<int> votes, int k) {
    int win =-1;
    int index =-1;
    int c =0;
    for(int i=0; i< votes.size(); i++){
        if( votes[i] > win ){
            win = votes[i];
            c=1;
        }else
        if( votes[i] == win ){
            c++;
        }
    }
    cout<<win<<endl;
    cout<<c<<endl;

    if( c > 1 && k==0) return 0;
    c = ( k==0)? 1: 0;
    for(int i=0; i< votes.size(); i++){
        if( votes[i]+k > win ){
            c++;
        }
    }
    return c;
}
