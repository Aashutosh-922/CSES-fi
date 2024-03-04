//Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:
//3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1

#include <iostream>
#include <vector>

using namespace std;
vector<int> generate(int n){
    vector<int> series;
    series.push_back(n);
    while(n > 1) {
        if(n %2 == 0){
            n = n/2;
        }
        else{
            n = 3 * n+1;
            
        }
        series.push_back(n);
    }
    return series;
}

int main() {
    int starting = 3;
    vector<int> result = generate(starting);
    
    for(int num : result){
        cout<< num << " ";
    }
    cout << endl;
    
    return 0;
}
