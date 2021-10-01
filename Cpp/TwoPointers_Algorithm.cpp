#include <bits/stdc++.h>

using namespace std;

bool isPairSum(int A[], int N, int X)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
	
			if (i == j)
				continue;
		
			if (A[i] + A[j] == X)
				return true;


			if (A[i] + A[j] > X)
				break;
		}
	}
	return false;
}


int main()
{
  int arrsize,arr[100000];
  cout<<"Enter array size";
  cin>>arrSize;
  
  for(int i=0;i<arrSize;i++)
  {
  cin>>arr[i];
  }
  
	int val;
  cout<<"Enter the value of sum";
  cin>>val;

	sort(arr, arr + arrSize); 

	cout << isPairSum(arr, arrSize, val);
 

	return 0;
}
