#include<iostream>
using namespace std;

int binary_search(int n, int A[], int x)
{
    int low=0;
    int high=n;
    
    
    while(low<=high)
    {
        int mid=(low+high)/2;
        
        if(A[mid]==x)
        {
            return mid;
        }
        else if(A[mid]>=x)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;

        }
    }
    return -1;
}

int main()
{
    int n,x;
    cin>>n;

    int A[n];
    for(int i=0; i<n;i++)
    {
        cin>>A[i];
    }
    
    cout<<"Enter value to found :";
    cin>>x;
    
    cout<<binary_search(n,A,x);

    
}