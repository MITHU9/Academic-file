#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int count=0;
    while(getline(cin, s)){
        for(int i=0; s[i]!='\0'; ++i){
            if(s[i]=='"'){
                if(count%2){cout<<"''"; count++;}
                else {cout<<"``"; count++;}
            }
            else cout<<s[i];
        }
        cout<<endl;
    }

    return 0;
}
