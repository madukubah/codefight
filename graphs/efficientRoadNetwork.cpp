bool shortPathBFS(int a, int b, std::vector<std::vector<bool> > road ){
    int currNode;
    std::vector<int> visitTime(road.size(), -1);
    std::queue<int> qRoad;
    visitTime[a] = 0;
    qRoad.push(a);
    while( !empty( qRoad ) ){
        currNode = qRoad.front();
        qRoad.pop();
        cout<<endl<<"currnode = "<<currNode<<endl;
        for(int i=0; i< road[currNode].size(); i++){
            if( road[currNode][i] ){
                cout<<"a"<<i;
                if( visitTime[ i ] == -1){
                    cout<<-1;
                    qRoad.push( i );
                    visitTime[ i ] = visitTime[ currNode ] +1;
                }
            }else
            cout<<"b";
        }
        cout<<endl<<qRoad.size();

    }
    cout<<endl;
    cout<<a<<" "<<b<<" "<<visitTime[b]<<endl;
    return  -1 < visitTime[b] && visitTime[b] <= 2;

}
bool efficientRoadNetwork(int n, std::vector<std::vector<int>> roads) {
    std::vector<std::vector<bool> > road( n, std::vector<bool> (n, false) );
    for(int i=0; i< roads.size(); i++){
        road[ roads[i][0] ][ roads[i][1] ] = true;
        road[ roads[i][1] ][ roads[i][0] ] = true;
    }

    for(int i=0; i< road.size(); i++){
        for(int j=i+1; j< road[i].size(); j++){
            // cout<<road[i][j]<<" ";
            if( shortPathBFS(i, j, road) ){

            }else{
                return false;
            }
        }
    }
    // cout<<endl;

    return true;

}
