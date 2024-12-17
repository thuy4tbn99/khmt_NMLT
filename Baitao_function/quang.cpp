#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int k=0;k<n;k++){
    	cin>>a[k];
    }

    int phu[n];
    for(int k=0;k<n;k++){
    	phu[k]=0;
	}

    for(int k=0;k<n;k++){

    	if(phu[k]==1){
    		continue;
		}
		phu[k]=1;
		int dem=1;
    	for(int i=k+1;i<n;i++){
    		if(a[k]==a[i]){
    			dem++;
    			phu[i]=1;
    		}
    	}
    	cout<<a[k]<<" "<<dem<<endl;
    }
}
