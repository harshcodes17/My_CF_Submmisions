#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    int x=n;int bits=0;
	    while(x!=0){
	        bits++;
	        x=x>>1;
  
	    }
	    
	    else{
	        int a=n-pow(2,bits-1)+1,b=pow(2,bits-1)-pow(2,bits-2);
	    cout<<max(a,b)<<endl;
	    }
	}
	return 0;
}