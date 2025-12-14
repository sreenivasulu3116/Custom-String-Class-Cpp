#include"header.h"
////////////////////////////////  Strlen
int Strlen(STRING &y)
{
int len;
for(len =0;y.s[len];len++);
return len;
}
////////////////////////////////  Strstr
char * Strstr(STRING &y,STRING &z)
{
char *m=y.s,*sub=z.s,*a,*b;
while(*m!='\0')
{
a=m;
b=sub;
while(*a==*b && *b!='\0')
{
a++;
b++;
}
if(*b=='\0')
return m;
m++;
}
}
////////////////////////////////  Strrchr
char * Strrchr(STRING &y,char ch)
{
int i=0;
for(;y.s[i];i++);
for(i=i-1;i>=0;i--)
{
if(y.s[i]==ch)
return (y.s+i);
}
return 0;
}
//////////////////////////////// Strchr
char* Strchr(STRING &y,char ch)
{
int i=0;
for(i=0;y.s[i];i++)
{
if(y.s[i]==ch)
return (y.s+i);
}
return 0;
}

//////////////////////////////// Strlower
void Strlower(STRING &y)
{
int i=0;
for(;y.s[i];i++)
{
if(y.s[i]>='A' && y.s[i]<='Z')
y.s[i]=y.s[i]+32;
}
}
//////////////////////////////// Strupper
void Strupper(STRING &y)
{
int i=0;
for(;y.s[i];i++)
{
if(y.s[i]>='a' && y.s[i]<='z')
y.s[i]=y.s[i]-32;
}
}
//////////////////////////////// Strrev
void Strrev(STRING &y)
{
int i=0,j=0;
char t;
for(i=0;y.s[i];i++);
for(i=i-1,j=0;j<i;i--,j++)
{
t=y.s[j];
y.s[j]=y.s[i];
y.s[i]=t;
}
}

//////////////////////////////// strncat
void Strncat(STRING &y,const STRING &z,int n)
{
int len1,len2,i;
for(len1=0;y.s[len1];len1++);
for(len2=0;z.s[len2];len2++);
STRING p;
p.s=new char[len1+n+1];
Strcpy(p,y);
delete []y.s;
y.s=new char[len1+len2+1];
for(i=0;z.s[i] && i<n ;i++)
{
p.s[len1++]=z.s[i];
}
p.s[len1]='\0';
y=p;
}
//////////////////////////////// Strcat
void Strcat(STRING &y,const STRING &z)
{
int len1,len2,i;
for(len1=0;y.s[len1];len1++);
for(len2=0;z.s[len2];len2++);
STRING p;
p.s=new char[len1+len2+1];
Strcpy(p,y);
delete []y.s;
y.s=new char[len1+len2+1];
for(i=0;z.s[i];i++)
{
p.s[len1++]=z.s[i];
}
p.s[len1]='\0';
y=p;
}
//////////////////////////////// strncmp
int Strncmp(const STRING &y,const STRING &z,int n)
{
int i=0;
for(i=0;i<n && y.s[i] && z.s[i];i++)
{
if(y.s[i]!=z.s[i])
break;
}
return y.s[i]-z.s[i];
}

//////////////////////////////// strcmp
int Strcmp(const STRING &y,const STRING &z)
{
int i=0;
for(i=0;y.s[i] && z.s[i] ;i++)
{
if(y.s[i]!=z.s[i])
break;
}
return y.s[i]-z.s[i];
}

//////////////////////////////// strncpy
void Strncpy(STRING &y,const STRING &z,int n)
{
char *p,*q;
p=y.s;
q=z.s;
while(n--)
*p++=*q++;
}
//////////////////////////////// strcpy
void Strcpy(STRING &y,const STRING &z)
{
char *p,*q;
p=y.s;
q=z.s;
while(*p++=*q++);
}
//////////////////////////////// << operator overloaded
ostream & operator <<(ostream &out,const STRING &t)
{
out<<t.s;
return out;
}
//////////////////////////////// >> operator overloaded
istream & operator >>(istream &in,STRING &t)
{
fstream fout;
fout.open("storage",ios::in|ios::out|ios::trunc);
int i=0,c=0;
char ch;
ch=getchar();
while(ch!='\n')
{
fout<<ch;
ch=getchar();
c++;
}
fout.seekg(0);
//delete []t.s;
t.s=new char[c+1];
i=0;
while((ch=fout.get())!=EOF){
t.s[i++]=ch;
}
fout.close();
return in;
/*
in>>t.s;
return in;


int i=0;
char ch='0';
char *p;
while(1)
{
cin>>ch;
p=new char;
p[i]=ch;
i++;
if(p[i-1]==13)
{
p[i-1]='\0';
break;
}
}
in>>p;
delete []t.s;
t.s=new char[i+1];
strcpy(t.s,p);

char temp[1000];
in>>temp;
delete []t.s;
t.s=new char[strlen(temp)+1];
strcpy(t.s,temp);
return in;*/


}
