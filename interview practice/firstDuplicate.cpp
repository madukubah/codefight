int firstDuplicate(std::vector<int> a) {
    for(int i=0; i< a.size(); i++){
        cout<<abs( a[i] )<<endl;
        if( a[ abs( a[i] ) % a.size() ] <=0 ){
            return abs(a[i]);
        }else{
            a[ abs( a[i] ) % a.size() ] *= -1;
        }

        for(int j=0; j< a.size(); j++){
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
    return -1;
}
