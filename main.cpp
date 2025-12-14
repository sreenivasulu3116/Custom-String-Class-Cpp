#include"header.h"

int main()
{
STRING s1,s3,s2("hello world");
cout<<"Enter the string"<<endl;
cin>>s1;
//cin.ignore();
//cout<<"The result"<<endl;
cout<<s1<<" " <<s2<<endl;
s3=s1+s2;
cout<<s3<<endl;
cout<<s1+s2<<endl;
////////////////////////////////SUBSCRIPTING overload
for(int i=0;s1[i];i++)
cout<<s1[i]<<" ";
cout<<endl;
//////////////////////////////// == overload
bool r;
r=s1==s2;
if(r==true)
cout<<"== overload "<<boolalpha<<r<<endl;
else
cout<<"== overload "<<boolalpha<<r<<endl;
///////////////////////////////  != overloaded 
r=s1!=s2;
if(r==false)
cout<<"!= overloaded "<<boolalpha<<r<<endl;
else
cout<<"!= overloaded "<<boolalpha<<r<<endl;
///////////////////////////////  >= overloaded
r=s1>=s2;
if(r==true)
cout<<">= overloaded "<<boolalpha<<r<<endl;
else
cout<<">= overloaded "<<boolalpha<<r<<endl;
///////////////////////////////  <= overloaded
r=s1<=s2;
if(r==true)
cout<<"<= overloaded "<<boolalpha<<r<<endl;
else
cout<<"<= overloaded "<<boolalpha<<r<<endl;
///////////////////////////////  > overloaded
r=s1>s2;

if(r==true)
cout<<"> overloaded "<<boolalpha<<r<<endl;
else
cout<<"> overloaded "<<boolalpha<<r<<endl;
///////////////////////////////  < overloaded
r=s1<s2;
if(r==true)
cout<<"< overloaded "<<boolalpha<<r<<endl;
else
cout<<"< overloaded "<<boolalpha<<r<<endl;
//////////////////////////////// Strncpy
Strncpy(s1,s2,3);
cout<<"strncpy executed :";
cout<<s1<<endl;
//////////////////////////////// Strncmp
int x=Strncmp(s1,s2,4);
cout<<"Comparing the string    ";
cout<<s1<<" , "<< s2<<endl;
cout<<"strncmp executed :";
cout<<x<<" : ";
if(x)
cout<<"not same "<<endl;
else
cout<<"SAME "<<endl;
//////////////////////////////// Strncat
Strncat(s1,s2,4);
cout<<"STRNCAT  "<<s1<<endl;
//////////////////////////////// Strrev
Strrev(s2);
cout<<"STRREV "<<s2<<endl;
//////////////////////////////// Strupper
Strupper(s2);
cout<<"STRUPPER "<<s2<<endl;
///////////////////////////////// Strlower
Strlower(s2);
cout<<"STRLOWER "<<s2<<endl;
///////////////////////////////// Strchr
char ch;
cout<<"Enter the char to search : "<<endl;
cin >>ch;
char *q=Strchr(s2,ch);
cout<<"STRCHR "<<endl;
if(*q==0)
cout<<"Char not present "<<endl;
else
cout<<"Char is presnt "<<q<<endl;
/////////////////////////////////  Strrchr
cout<<"Enter the char to search : "<<endl;
cin >>ch;
q=Strrchr(s2,ch);
cout<<"STRRCHR "<<endl;
if(*q==0)
cout<<"Char not present "<<endl;
else
cout<<"Char is presnt :"<<q<<endl;
////////////////////////////////////// Strstr
STRING s4("rohit hit "),s5("hit");
char *w;

//cin.ignore();
//cin.ignore();
//cout<<"Enter the main string"<<endl;
//cin>>s4;
//cin.ignore();
//cout<<"Enter the substring "<<endl;
//cin>>s5;
cout<<"main string :"<<s4<<endl;
cout<<"sub string :"<<s5<<endl;
w=Strstr(s4,s5);
cout<<"Substring "<<endl;
cout<<w<<endl;
////////////////////////////////////// Strlen
//STRING s6;
cin.ignore();
//cout<<"Enter the string to find length "<<endl;
//cin>>s6;
cout<<"THe size of "<<s1<<endl;
x=Strlen(s1);
cout<<"Strlen  : "<<x<<endl;
}
