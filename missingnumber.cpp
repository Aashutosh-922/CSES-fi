//You are given all numbers between 1,2,\ldots,n except one. Your task is to find the missing number.
//Input:
// 5
// 2 3 1 5
// Output:
// 4

#include<iostream>
#include<vector>
using namespace std;

int findmn(vector <int> nums){
    int n = nums.size() + 1;
    int expecteds = n * (n +1)/2;
    int actuals = 0;
    for (int num : nums) {
        actuals += num;
    }
    return expecteds - actuals;
}

int main(){
     int n;
     cin>>n;   //n=except the missing number
     vector<int> givenNumbers(n);
     for (int i = 0; i < n; ++i) {
        cin >> givenNumbers[i];
    }
    
    
    // vector<int> givenNumbers = {1, 2, 4, 5, 6};
        int missingNumber = findmn(givenNumbers);
        cout<< missingNumber << endl;
        return 0;
}

// #include <iostream>
// #include <vector>

// using namespace std;

// int findMissingNumber(const vector<int>& nums) {
//     int n = nums.size() + 1;
//     int expectedSum = n * (n + 1) / 2;
//     int actualSum = 0;
//     for (int num : nums) {
//         actualSum += num;
//     }
//     return expectedSum - actualSum;
// }

// int main() {
//     int n;
//     cout << "Enter the total number of elements (excluding one missing number): ";
//     cin >> n;

//     int* givenNumbers = new int[n]; // Dynamic array allocation

//     cout << "Enter the " << n << " numbers (excluding one missing number): ";
//     for (int i = 0; i < n; ++i) {
//         cin >> givenNumbers[i];
//     }

//     int missingNumber = findMissingNumber(vector<int>(givenNumbers, givenNumbers + n));
//     cout << "The missing number is: " << missingNumber << endl;

//     delete[] givenNumbers; // Release memory
//     return 0;
// }
