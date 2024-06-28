#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;

    cin>>t;
	while (t--) {
          char str[10];
		 cin>>str;
		if (strlen(str) > 3)
			cout<<3<<endl;
		else {
			if(str[0] == 'o' && str[1] == 'n' && str[2] == 'e')
            cout<<1<<endl;
			else if(str[0] == 'o' && str[1] == 'n')
			cout<<1<<endl;
			else if(str[0] == 'o' && str[2] == 'e')
			cout<<1<<endl;
			else if(str[1] == 'n' && str[2] == 'e')
			cout<<1<<endl;
			else if(str[0] == 't' && str[1] == 'w' && str[2] == 'o')
			cout<<2<<endl;
			else if(str[0] == 't' && str[1] == 'w')
			cout<<2<<endl;
			else if(str[0] == 't' && str[2] == 'o')
			cout<<2<<endl;
			else if(str[1] == 'w' && str[2] == 'o')
			cout<<2<<endl;
		}
	}

	return 0;
}
