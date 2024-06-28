#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t = 1,n;
	cin>>n;
	while(n--){
        int l,w,h;
		cin>>l>>w>>h;

		cout<<"Case "<<t++<<": ";
		if(l<=20 && w<=20 && h<=20)
           cout<<"good"<<endl;
		else
		   cout<<"bad"<<endl;
	}

	return 0;
}
