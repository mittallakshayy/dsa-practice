#include<bits/stdc++.h>
using namespace std;
// K-Rotate
// Given an integer vector and a value k, your task is to rotate the array k times clockwise.

// Input Format

// In the function an integer vector and number k is passed.

// Output Format

// Return an integer vector.



// Sample Input

// {1, 3, 5, 7, 9}, x = 2


// Sample Output

// {7, 9, 1, 3, 5}


// Explanation

// After 1st rotation - {9, 1, 3, 5, 7}
// After 2nd rotation - {7, 9, 1, 3, 5}
// This solution is assuming that k is less than n. If that is not the case then new k will be k%n
// This was the brute force approach thought by me. There possible 
// could be a better solution. 

vector<int> kRotate(vector<int> a, int k){
	vector<int>result;
   for(int i=a.size()-k;i<a.size() ;i++){
       
        result.push_back(a[i]);
       
    }
 
   
     for(int i=0;i<a.size()-k;i++){
        result.push_back(a[i]);
    }
     
    return result;

}
int32_t main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    clock_t z = clock();
    vector<int>arr;
    int n,k;
    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    }
	int t = 1;
	// cin >> t;
	while (t--) kRotate(arr,k);

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
	
}
