#include<bits/stdc++.h>
using namespace std;
int sum;
char num[15][5]={"��","һ","��","��","��","��","��","��","��","��","ʮ"};
//�ı���ҵһ��ͨ�������Ƚ��ַ������������Ƚ����ְ�˳���ų��б� 
int transform(char z[]){
    int i;
    for(i=0;i<11;i++){
        if(strcmp(z,num[i])==0) return i;//�Ƚ��ַ��������غ��ֵ�������ʽ��transform�������ڸ��������change���� 
    }
} 
int main(){
	char z[10];
	scanf("%s",z);
	printf("%d",transform(z));
} 
