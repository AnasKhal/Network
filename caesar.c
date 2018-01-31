#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc,string argv[])
{
                int c;
            if(argc!=2){
printf("error\n");
return 1;
}

else{
int k=atoi(argv[1]);
string s=GetString();
for(int i=0,n=strlen(s);i<n;i++){
if(isalpha(s[i]))
{
if(isupper(s[i])){
k=k%26;
 c=s[i]+k;
 if(c>90){
 c=(c-90)+64;
 printf("%c",(char)c);
 }
 else{
printf("%c",(char)c);
}
}
else{
k=k%26;
 c=s[i]+k;
if(c>122){
c=(c-122)+96;
printf("%c",(char)c);
}
else{
printf("%c",(char)c);
}
}
}
else{
printf("%c",s[i]);
}
}
printf("\n");

}

}