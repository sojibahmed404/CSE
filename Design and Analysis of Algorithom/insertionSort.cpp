#include <iostream>
using namespace std;
void insertArray(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
    {
        arr[j+1]=arr[j];
        j--;
    }
        arr[j+1]=key;
    }
    
    
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int sortedArr[]={10,20,30,40,50};
    int reverseArr[]={50,40,30,20,10};
    int randomArr[]={25,10,30,20,40};
    
    int n=5;
    cout<<"Already Sorted : "<<endl;
    cout <<"Before Sorting: ";
    printArray(sortedArr,n);
    
    insertArray(sortedArr,n);
    cout <<"After Sorting: ";
    printArray(sortedArr,n);
    cout<<endl;
    
    cout<<"Reverse Sorted : "<<endl;
    cout <<"Before Sorting: ";
    printArray(reverseArr,n);
    
    insertArray(reverseArr,n);
    cout <<"After Sorting: ";
    printArray(reverseArr,n);
    cout<<endl;
    
    cout<<"Random Sorted : "<<endl;
    cout <<"Before Sorting: ";
    printArray(randomArr,n);
    
    insertArray(randomArr,n);
    cout <<"After Sorting: ";
    printArray(randomArr,n);
    cout<<endl;
    
    cout << "Time Complexity Analysis" << endl;
    cout << "Best Case  : O(n)" << endl;
    cout << "Worst Case : O(n^2)" << endl;

    return 0;
}