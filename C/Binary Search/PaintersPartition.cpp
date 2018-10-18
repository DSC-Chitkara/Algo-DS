 int countP(int *A,int n,int mid) {
 long i,sum=0,c=1;
     for(i=0;i<n;i++) {
         //sum = sum+A[i];
         if(sum+A[i]>mid) {
             sum = A[i];
             c++;
         }
         else sum = sum+A[i];
     }
     return c;
 }
 
 
int paint(int A, int B, int* C, int n3) {
    long i,max = INT_MIN,sum = 0,mid;
    for(i=0;i<n3;i++) {
        sum = sum+C[i];
        if(C[i]>max) {
            max = C[i];
        }
    }
    int l = max;
    int r = sum;
    while(l<r) {
        mid = l+(r-l)/2;
        if(countP(C,n3,mid)<=A) {
            r = mid;
        }
        else l = mid+1;
    }
    return (r*B)%10000003;
}

int main() {
	// n - no of painters
	// t - time to paint 1 unit of board
	// a - length of each board
	int n = 2,t =5;
	int *a = malloc(sizeof(int)*3);
	a[0] = 1;
	a[1] = 5;
	paint(n,t,a,2);
}
