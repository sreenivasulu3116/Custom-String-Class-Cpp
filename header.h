#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class STRING
{
char *s;
public:
//////////////////////////////// default constructor
STRING()
{
s=0;
}
//////////////////////////////// parmetrized constructor
STRING(const char*x)
{
s=new char[strlen(x)+1];
strcpy(s,x);
}
//////////////// copy constructor
STRING(STRING &t)
{
s=new char[strlen(t.s)+1];
Strcpy(*this,t);
}
//////////////////////////////// Assignment operator overloaded
STRING& operator =(const STRING &t)
{
if(this!=&t)
{
delete []s;
s=new char[strlen(t.s)+1];
Strcpy(*this,t);
}
return *this;
}
//////////////////////////////// + operator overloaded
STRING operator +(const STRING &t)
{
STRING res;
res.s=new char [strlen(s)+strlen(t.s)+1];
Strcpy(res,*this);
Strcat(res,t);
return res;
}
//////////////////////////////// [] operator overloaded
char & operator [](int i)
{
return s[i];
}
//////////////////////////////// == operator overloaded
bool operator ==(STRING &t)
{
if(Strcmp(*this,t)==0)
return true;
else
return false;
}
//////////////////////////////// != operator overloaded
bool operator !=(STRING &t)
{
if(Strcmp(*this,t)==0)
return false;
else
return true;
}
//////////////////////////////// <= operator overloaded
bool operator <=(STRING &t)
{

if(Strcmp(*this,t)<=0)
return true;
else
return false;
}
//////////////////////////////// >= operator overloaded
bool operator >=(STRING &t)
{
if(Strcmp(*this,t)>=0)
return true;
else
return false;
}
//////////////////////////////// < operator overloaded
bool operator <(STRING &t)
{
if(Strcmp(*this,t)<0)
return true;
else
return false;
}
//////////////////////////////// > operator overloaded
bool operator >(STRING &t)
{
if(Strcmp(*this,t)>0)
return true;
else
return false;
}


~STRING()
{
delete []s;
}
friend ostream& operator <<(ostream&,const STRING &);
friend istream& operator >>(istream&,STRING &);
friend void Strcpy(STRING &y,const STRING &z);
friend void Strncpy(STRING &y,const STRING &z,int n);
friend int Strcmp(const STRING &y,const STRING &z);
friend int Strncmp(const STRING &y,const STRING &z,int n);
friend void Strcat(STRING &y,const STRING &z);
friend void Strncat(STRING &y,const STRING &z,int n);
friend void Strrev(STRING &y);
friend void Strupper(STRING &y);
friend void Strlower(STRING &y);
friend char* Strchr(STRING &y,char ch);
friend char* Strrchr(STRING &y,char ch);
friend char * Strstr(STRING &y,STRING &z);
friend int Strlen(STRING &y);
};

