#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
char *cp;
int len;
public:
void input()
{
cout<<"Enter string";
cin.getline(cp,20);
}
void display()
{
cout<<"string"<<cp;
}
void get(char *s)
{
len=strlen(s);
cp=new char[len+1];
}
string operator+(string s)
{
string obj;
strcat(cp,s.cp);
strcpy(obj.cp,cp);
return obj;
}
};
void main()
{
string s1,s2,s3;
s1.input();
s2.input();
s3=s1+s2;
s3.display();
getch();
}