#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iostream>
#include<cstdio>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{	
	int m,n,a,i=0,j=0,flag=1;
	cin>>n>>m;
	int in[1005];
	int out[1005];
	stack<int> con;
	for(int k=0;k<n;k++){
		cin>>in[k];//输入入栈序列 
	}
	
	for(int k=1;k<=m;k++){
		for(int s=0;s<n;s++){
		cin>>out[s];//输入出栈序列 
	}
		stack<int> stk;
		i=0,j=0,flag=1;
		while(j<n){
			if(in[i]==out[j]){
				i++;
				j++;
			}
			else if(!stk.empty() && stk.top()==out[j]){
				j++;
				stk.pop();
			}
			else if(i<n){
				stk.push(in[i++]);
				
			}
			else {
				flag=0;
				break;
				
			}
			}
			if(flag==1){
				cout<<"Yes"<<endl;
			}
			else cout<<"No"<<endl;
			
			
		}
		return 0;
	}
    

