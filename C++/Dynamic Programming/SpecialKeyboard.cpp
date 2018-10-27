#include <iostream>
using namespace std;
/*int max_number_of_As(int n){
    if(n<=3)
        return n;
    if(max_number_of_As(n-2)*2 > max_number_of_As(n-1) + 1)
        return max_number_of_As(n-2)*2;
    else
        return max_number_of_As(n-1) + 1;
}*/
#define lli long long int
lli find_max_and_update_buffer(lli *a,int i){
    
    return max(2*a[i-3],max(3*a[i-4],4*a[i-5]));
   /* lli max=0,maxj=0;  //this also works
   for(int j=i-3;j>=i-5;j--)
        if(2*a[j] + (i-j-3)*a[j] > max){
            max=2*a[j] + (i-j-3)*a[j];
            maxj=j;
        }
    
    return max;*/
}

int main() {
	//code
	int t;
	cin>>t;
	int n;
	lli *a;
	

	while(t-->0){
	    cin>>n;
	    if(n<=6)
	        cout<<n<<endl;
	    else{
    	    a=new lli[n+1];
    	
    	    for(int i=0;i<=6;i++)
    	    {
    	        a[i]=i;
    	       
    	    }
   
    	    
    	    for(int i=7;i<n+1;i++)
    	        a[i]= find_max_and_update_buffer(a,i);
    	    cout<<a[n]<<'\n';
            delete a;
	    }
	}

	return 0;
}
