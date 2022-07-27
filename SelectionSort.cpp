//sorting of given array elements using selection sort

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the size of the array : ";
    cin>>m;
    int arr[m];
    cout<<"enter the elements : ";
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    int min_index;
    for(int i=0;i<m-1;i++){
        min_index=i;
        for(int j=i+1;j<m;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        int temp=arr[i];
            arr[i]=arr[min_index];
            arr[min_index]=temp;
    }
    cout<<"the sorted array is : "<<endl;
    for(int i=0;i<m;i++){
        cout<<arr[i]<<"\t";
    }

    return 0;
}
/*output:
enter the size of the array : 5
enter the elements : 7 6 3 9 2
the sorted array is :
2       3       6       7       9  */