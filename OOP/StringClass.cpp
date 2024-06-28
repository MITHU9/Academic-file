#include<iostream>
#include<string>
using namespace std;
 int main()
 {
   string str1 = "Shahariar";
   string str2 = " Mithu";
   string str3;

   str3 = str2;
   cout<<str3<<endl;

   str3 = str1 + str2;
   cout<<str3<<endl;

   int len = str1.size();
   cout<<"Length is : "<<len<<endl;

     return 0;
 }
