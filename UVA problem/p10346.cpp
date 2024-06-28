#include<iostream>
using namespace std;

int main() {
	int n, k;
	 while(cin>>n>>k){
        int sum = n;

        while(n >= k){
            int get = n/k;
              sum = sum + get;
              n = get + (n%k);
        }
        cout<<sum<<endl;
	 }

	return 0;
}
