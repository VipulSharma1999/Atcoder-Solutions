#include <iostream>
#include <bits/stdc++.h>


//DEFINE
#define rep(i, a, b) for (i = a; i < b; i++)
#define rev(i, n, b) for (i = n; i >= b; i--)
#define itrep(at) for (auto it = at.begin(); it != at.end(); it++)
#define ll long long int
#define ld long double
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define vll vector<long long int>
#define vs vector<string>
#define vb vector<bool>
#define vc vector<char>
#define vvll vector<vector<long long int>>
#define sll set<long long int>
#define mll map<long long int, long long int>
#define sllit set<long long int>::iterator
#define pll pair<long long int, long long int>
#define vpll vector<pair<long long int, long long int>>
#define db double
#define M 1000000007
#define pi 3.1415926535897932384626433832795028841971
#define w(t) while (t--)
#define booster ios_base::sync_with_stdio(false); cin.tie(NULL);
#define mod 1000000007
#define endl "\n"
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int a[n+1]={0};
	while(k--)
	{
		int d;
		cin>>d;
		for(int i=0;i<d;i++)
		{
			int x;
			cin>>x;
			a[x]++;
		}
	}
	int cnt=0;
	for(int i=1;i<n+1;i++)
	{
		if(a[i]==0)
		{
			cnt+=1;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
