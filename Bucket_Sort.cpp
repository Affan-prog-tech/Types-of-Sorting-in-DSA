#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	float arr[]={0.32,0.56,0.11,0.67,0.56};
	int n=5;
	
	vector<float>bucket[5];
	
	for(int i=0;i<n;i++)
	{
		int index=arr[i]*5;
		bucket[index].push_back(arr[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		sort(bucket[i].begin(),bucket[i].end());
	}
	
	cout<<"Sorted Array:\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0; j<bucket[i].size(); j++)
		{
			cout<<bucket[i][j]<<" ";
		}
	}
}
