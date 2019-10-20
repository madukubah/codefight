/*
Given an integer product, find the smallest positive (i.e. greater than 0) integer the product of whose digits is equal to product. If there is no such integer, return -1 instead.

Example

For product = 12, the output should be
digitsProduct(product) = 26;
For product = 19, the output should be
digitsProduct(product) = -1.
*/

int digitsProduct(int product) {
    vector<int> r;
    if( product == 0 )return 10;
    if( product == 1 )return 1;


    for( int divisor=9; divisor>= 2; divisor-- ){
        while( product % divisor == 0 ){
            r.push_back( divisor );
            product /= divisor;
        }
    }

    if( product > 1 ) return -1;
    int result=0;
    while( !empty( r ) ){
        result= ( result*10 )+ r.back();
        r.pop_back();
    }
    return result;
}

//best
int digitsProduct(int product) {
    if (product < 10)
        return product ?: 10;
    std::string r;
    for (int i = 9; i > 1; i--) {
        while (product % i == 0) {
            product /= i;
            r = char('0' + i) + r;
        }
    }
    return product == 1 ? std::stoi(r) : -1;
}


