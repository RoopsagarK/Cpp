//sorting the given elements using bubble sort

#include<iostream>
using namespace std;
void main(){
	int m;
    cout<<"enter the array size : ";
    cin>>m;
    int arr[m];
    cout<<"enter unsorted array elements : ";    
    for(int i=0;i<m;i++){
    	cin>>arr[i];
    }
    for(int i=0;i<m-1;i++){
    	for(int j=i+1;j<m;j++){
    		if(arr[j]<arr[i]){
    			int temp=arr[i];
    			arr[i]=arr[j];
    			arr[j]=temp;
    		}
    	}
    }
    cout<<"the sorted array is : "<<endl;
    for(int k=0;k<m;k++){
    cout<<arr[k]<<"\t";
}
}
/*output:
enter the array size : 5
enter unsorted array elements : 5 4 3 4 1
the sorted array is :
1       3       4       4       5
[Program finished]*/
    
