#include<bits/stdc++.h>
using namespace std;
int sum;
char num[15][5]={"零","一","二","三","四","五","六","七","八","九","十"};
//改变作业一中通过个个比较字符串的做法，先将汉字按顺序排成列表 
int transform(char z[]){
    int i;
    for(i=0;i<11;i++){
        if(strcmp(z,num[i])==0) return i;//比较字符串，返回汉字的数字形式，transform函数用于辅助下面的change函数 
    }
} 
int main(){
	char z[10];
	scanf("%s",z);
	printf("%d",transform(z));
} 
