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
int calculate(int sum,char c[],char d[]){//��ԭ���ļӼ�����ϲ�Ϊһ��calculate���� 
    if(strcmp(c,"����")==0) return sum+change(d);
    if(strcmp(c,"����")==0) return sum-change(d);
}
int main(){
    char a[100],b[100],c[100],d[100];
    scanf("%s %s %s %s",a,b,c,d);
    char m[100],n[100],s[100],t[100];
    sum=change(d);getchar();
    for(;;){
        scanf("%s",m);
        if(strcmp("����",m)==0) break;
        scanf("%s",n);
        scanf("%s",s);
        if(strcmp("����",n)==0) sum+=change(s);
        if(strcmp("����",n)==0) sum-=change(s);
    } 
    scanf("%s",t);
    if(sum<=10) printf("%s",num[sum]);
    if(sum>10){
        int a;
		a=sum/10;
        if(a==1) printf("ʮ");
        else{
            printf("%s",num[a]);
            printf("ʮ");
        }
        int b; 
        b=sum%10;   
        if(b!=0) printf("%s",num[b]); 
    }
    printf("�����ļ���\n"); 
    char w[10];
    scanf("%s",w);
    freopen(w,"r",stdin);
    return 0;
}
