#include <iostream>
using namespace std;
int maxsubarraysum(int a[],int n){
    int max_so_far=a[0],max_ending_here=0;
    for(int i=0;i<n;i++){
        max_ending_here=max_ending_here+a[i];
        if(max_ending_here<0){
            max_ending_here=0;
        }
        else if(max_so_far<max_ending_here){
            max_so_far=max_ending_here;
        }
            
    }
    return (max_so_far);
}

int main() {
    int a[1000],n;
	int test;
	cin>>test;
	for(int i=0;i<test;i++){
	    cin>>n;
	    for(int j=0;j<n;j++){
	     cin>>a[j];
	    }
	    int max_sum=maxsubarraysum(a,n);
	    cout<<max_sum<<endl;
	}
	return 0;
}

