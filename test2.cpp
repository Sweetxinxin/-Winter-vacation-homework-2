#include<bits/stdc++.h>
using namespace std;
int sum;
char num[15][5]={"��","һ","��","��","��","��","��","��","��","��","ʮ"};
int transform(char z[]){
    int i;
    for(i=0;i<11;i++){
        if(strcmp(z,num[i])==0) return i;//�Ƚ��ַ��������غ��ֵ�������ʽ��transform�������ڸ��������change���� 
    }
} 
char str1[20],str2[20];
int change(char d[]){//d����Ϊ�������ڼ��������һ�����ֵ��ַ�������Ϊ2
    if(strlen(d)==2) return transform(d);//������ʮ����ֱ����transform��������ת��  
    if(strlen(d)==4){//����Ϊ4����Ӧ�������� 
	        str1[0]=d[2];str1[1]=d[3];str1[2]='\0';      //һ�������Ӧʮ��ͷ���� ,���ڶ������ָ���str1���� 
            if(transform(str1)!=10) return transform(str1)+10;  
            else{
			    str1[0]=d[0];str1[1]=d[1];str1[2]='\0';//��һ�����Ϊʮ��β������,����һ�����ָ���str1���� 
                return 10*transform(str1);
            }}
    if(strlen(d)==6){
	    str1[0]=d[0];str1[1]=d[1];str1[2]='\0';str2[0]=d[4];str2[1]=d[5];str2[2]='\0';//��ʮ�������ͣ��ֱ𽫵�һ�����ֺ�ĩβ���ָ���str1��str2 
        return transform(str1)*10+transform(str2);
    }} 
int main(){
	char d[20];
	scanf("%s",d);
	printf("%d",change(d));
	return 0;
} 
