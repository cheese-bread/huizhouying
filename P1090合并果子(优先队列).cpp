#include <iostream>
#include<cstdio>
#include<queue>
#include<vector>
#include<cstring>
using namespace std;
int main()
{    
    priority_queue< int,vector<int>,greater<int> > q;
    int n,a,tmp;
    long long sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a;
		q.push(a);
	}
	for(int i=0;i<n-1;i++){
		tmp=q.top();
		q.pop();
		int charu=tmp+q.top();
		q.pop();
		q.push(charu);
		sum+=charu;
	}
	cout<<sum;
    return 0;
}
