#include<bits/stdc++.h>
using namespace std;

// Sorted Pair Sum
// Given a sorted array and a number x, find a pair in array whose sum is closest to x.

// Input Format

// In the function an integer vector and number x is passed.

// Output Format

// Return a pair of integers.



// Sample Input

// {10, 22, 28, 29, 30, 40}, x = 54


// Sample Output

// 22 and 30

pair<int,int> closestSum(vector<int> arr, int x){
	pair<int,int> result; 
	int* low= &arr[0];
	int* high = &arr[arr.size()-1];
	int minDifference = INT_MAX;
	int currentDifference;


	while(low<high){
     currentDifference= abs(x - *(low)- *(high));
     if(currentDifference== 0){

     	result.first= *(low);
     	result.second= *(high);
     	cout<<result.first<<" and "<<result.second;
     	return result;
     }
     if(currentDifference>minDifference){
     	high--;
     }else{
     	result.first= *(low);
     	result.second= *(high);
     	low++;
     	minDifference=currentDifference;
     	
     }
     

	}
	cout<<result.first<<" and "<<result.second;
return result;
	
}
int32_t main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    clock_t z = clock();

    int n,temp, val;
    
    cin>>val;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n;i++){
    cin>>temp;
    arr.push_back(temp);
    }
    
	int t = 1;
	// cin >> t;
	while (t--) closestSum(arr,val);

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
	
}