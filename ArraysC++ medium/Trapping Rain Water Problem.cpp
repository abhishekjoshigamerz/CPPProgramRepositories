//Trapping Rain Water Problem.Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.
#include <iostream>
#include <cmath>
using namespace std;
int getWater(int arr[], int n)
{
	int res = 0;

	for(int i = 1; i < n - 1; i++)
	{
		int res = 0;

    	int lMax[n];
    	int rMax[n];

    	lMax[0] = arr[0];
    	for(int i = 1; i < n; i++)
    		lMax[i] = max(arr[i], lMax[i - 1]);


    	rMax[n - 1] = arr[n - 1];
    	for(int i = n - 2; i >= 0; i--)
    		rMax[i] = max(arr[i], rMax[i + 1]);

    	for(int i = 1; i < n - 1; i++)
    		res = res + (min(lMax[i], rMax[i]) - arr[i]);
    	
    	return res;
	}

	return res;
}


int main() {
	
     int arr[] = {5, 5, 3, 2, 3}, n = 5;

     cout<<getWater(arr, n);
    
}