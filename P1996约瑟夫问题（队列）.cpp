#include<bits/stdc++.h>
#include<cstring>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,e=1;
    cin>>n>>m;
	queue<int> d;
	for(int i=1;i<=n;i++){
		d.push(i); 
	} 
    while(!d.empty()){
    	
    		if(e==m){
    			cout<<d.front()<<" ";
				d.pop();
				e=1;
			}
			else{
				d.push(d.front());
				d.pop();
				e++;
			}
			
		
	}
	
    return 0;
}
