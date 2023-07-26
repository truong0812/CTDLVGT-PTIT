#include<functional>
#include<map>
#include<utility>
#include<stack>
#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include<string>
#include<limits.h>
using namespace std;
long long int recursion(vector<vector<int>>& arr, int index, pair<int, int>chosen, map<pair<int, pair<int, int>>, long long int>& dpt)
{
	if (index == -1)return INT_MIN;
	if (dpt.find({ index,chosen }) != dpt.end()) return dpt[{index, chosen}];
	long long int take1 = INT_MIN;
	for (int i = 1; i <= 4; i++)
	{
		if (i != chosen.first && i != chosen.second)
		{
			long long int temp1 = recursion(arr, index - 1, { 0,i },dpt);
			long long int temp = max((long long int)arr[i][index], temp1 + arr[i][index]);
			temp = max(temp, temp1);
			take1 = max(temp, take1);
		}
	}
	long long int take2 = INT_MIN;
	for (int i = 1; i <= 2; i++)
	{
		for (int j = i + 2; j <= 4; j++)
		{
			if (i != chosen.first && i != chosen.second && j != chosen.first && j != chosen.second)
			{
				long long int temp1 = recursion(arr, index - 1, { i,j },dpt);
				long long int temp = max((long long int)arr[i][index] + arr[j][index],(long long int) temp1+ arr[i][index] + arr[j][index]);
				temp = max(temp, temp1);
				take2 = max(temp, take2);
			}

		}
	}
	long long int notTake = recursion(arr, index - 1, { 0,0 }, dpt);
	notTake = max(notTake, take1);
	return dpt[{index, chosen}] = max(notTake, take2);



}
int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		int n;
		cin >> n;
		vector<vector<int>>arr(5, vector<int>(n));
		for (int i = 1; i <= 4; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> arr[i][j];
			}
		}
		map<pair<int,pair<int,int>>,long long int> dpt;
		
		cout << recursion(arr, n - 1, { 0,0 },dpt)<<endl;






	}
}