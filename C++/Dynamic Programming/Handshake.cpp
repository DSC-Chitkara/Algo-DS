#include<iostream>
using namespace std;


int main() {
	//code
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int *O= new int[n+1];
	    O[0]=1;
	    O[2]=1;
	    for(int i=4;i<=n;i+=2){
	        O[i]=0;
	        for(int j=0;j<=(i-2);j++)
	            O[i]+=O[j]*O[i-2-j];
	    }

	    cout<<O[n]<<endl;

	}
	return 0;
}
