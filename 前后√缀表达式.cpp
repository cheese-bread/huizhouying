/*P1449 后缀表达式*/
//very important!!!!!
#include<bits/stdc++.h>
#include<cstring>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<stack>
#include<algorithm>
using namespace std;
stack<int> stk;
char a[1005];

int main()
{
    //后缀表达式 ：a+b→ab+
	//前缀表达式：a+b→+ab（略）
	/*4+72-8*6/(2-3) → (4+72)-((8*6)/(2-3)) → -(4+72) ((8*6)/(2-3)) → - + 4 72 / * 8 6 - 2 3 */
	scanf("%s",a);
	for(int i=0;a[i]!='@';i++){
		if(a[i]=='.'){
			int sum=0,k=1;
			for(int j=i-1;j>=0 && a[j]>='0' && a[j]<='9';j--){
				sum=sum+(a[j]-48)*k,k*=10;
			}
			stk.push(sum);
			continue;
		}
		if(a[i]>='0' && a[i]<='9') continue;
		int sum=stk.top();
		stk.pop();
		if(a[i]=='+'){
			sum=stk.top()+sum;
		}
		if(a[i]=='-'){
			sum=stk.top()-sum;
		}
		if(a[i]=='*'){
			sum=stk.top()*sum;
		}
		if(a[i]=='/'){
			sum=stk.top()/sum;
		}
		stk.pop();
		stk.push(sum);
	}
	printf("%d",stk.top());
    return 0;
} 
