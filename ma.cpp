#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long int n;
	cin>>n;
	vector<long long int> v;
	long long int a;
	for(long long int i=0;i<n;i++)
	{  cin>>a;
		v.push_back(a);
		
	}
	
	long long i=0;
	long long j=0;
	long long best=0;
	long long l=0;
	map<long long , long long> m;
	for(long long m1=0;m1<n;m1++)
	{
		m[v[m1]] = -1;
	}
	for( j=0;j<n;j++)
	{
		//best = 1;
		if(m[v[j]]!=-1)
		{	i=max(i,m[v[j]]+1);
			//cout<<"aaya";
		}
		//cout<<i<<" "<<j;
	 	m[v[j]] = j;
	 	best=max(best,j-i+1);
	 	//cout<<" "<<best<<"\n";
	 	
	}
	cout<<best;
	return(0);
}
