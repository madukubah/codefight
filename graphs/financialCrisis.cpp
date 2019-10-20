/*
Once upon a time, in a kingdom far, far away, there lived a king Byteasar IV. As Interkingdomial financial crisis was roaring through the neighborhood, Byteasar was struggling with keeping the economy out of recession. Unfortunately there was not much he could do. After long and deep thinking, the king came to the only solution: one of his cities should be demolished, since keeping communication between all the cities is way too expensive.

It is not yet known if Byteasar chose the city to destroy after a careful planning or picked one at random. As a person with PhD in history and Nobel prize in Computer Science, you can solve this mystery. Archaeologists have recently found a manuscript with the information about the roads between the cities, that is now stored in the roadRegister matrix. You want to try and remove each city one by one and compare the road registers obtained this way. Thus you'll be able to compare the obtained roads and determine whether the one picked by Byteasar was the best by some criteria.

Given the roadRegister, return an array of all the road registers obtained after removing each of the city one by one.
*/
std::vector<std::vector<std::vector<bool>>> financialCrisis(std::vector<std::vector<bool>> roadRegister) {
    std::vector<std::vector<std::vector<bool>>> financial;
    for(int i=0; i< roadRegister.size(); i++){
        std::vector<std::vector<bool>> a = roadRegister;
        a.erase( a.begin()+i );
        for(int j=0; j< a.size(); j++ ){
            a[j].erase( a[j].begin()+i );
        }
        financial.push_back( a );
    }
    return financial;
}
