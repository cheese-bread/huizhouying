#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iostream>
#include<cstdio>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{	
	
	int n,a,e,m;
	cin>>n;
	for(int i=1;i<=n;i++){
		queue<int> q;
		cin>>a;
		for(int j=1;j<=a;j++){
			q.push(j);
		}
		int m=3,e=1,c=a;
		while(q.size()>3){
			m=5-m;
			int y=c;
			for(int k=1;k<=y;k++){
				if(k%m==0){
					q.pop();
					c--;
				}
				else{
					q.push(q.front());
					q.pop();
				}
			}
		}
		while(!q.empty()){
			cout<<q.front()<<" ";
			q.pop();
		}
		cout<<endl;
		
	}
	return 0;
}
    

