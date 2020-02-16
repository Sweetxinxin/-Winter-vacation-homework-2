#include<bits/stdc++.h>
using namespace std;
int sum;
char num[15][5]={"零","一","二","三","四","五","六","七","八","九","十"};
int transform(char z[]){
    int i;
    for(i=0;i<11;i++){
        if(strcmp(z,num[i])==0) return i;//比较字符串，返回汉字的数字形式，transform函数用于辅助下面的change函数 
    }
} 
char str1[20],str2[20];
int change(char d[]){//d数组为读入用于计算的量，一个汉字的字符串长度为2
    if(strlen(d)==2) return transform(d);//不超过十的数直接用transform函数进行转换  
    if(strlen(d)==4){//长度为4，对应两个汉字 
	        str1[0]=d[2];str1[1]=d[3];str1[2]='\0';      //一种情况对应十开头的数 ,将第二个汉字赋给str1数组 
            if(transform(str1)!=10) return transform(str1)+10;  
            else{
			    str1[0]=d[0];str1[1]=d[1];str1[2]='\0';//另一种情况为十结尾的数字,将第一个汉字赋给str1数组 
                return 10*transform(str1);
            }}
    if(strlen(d)==6){
	    str1[0]=d[0];str1[1]=d[1];str1[2]='\0';str2[0]=d[4];str2[1]=d[5];str2[2]='\0';//几十几的类型，分别将第一个汉字和末尾汉字赋个str1和str2 
        return transform(str1)*10+transform(str2);
    }} 
int main(){
	char d[20];
	scanf("%s",d);
	printf("%d",change(d));
	return 0;
} 
