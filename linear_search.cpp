#include<iostream>
using namespace std;

int linear_search(int n, int A[], int x)
{

    for(int i=0; i<n;i++)
    {
        if(A[i]==x)
        {
            cout<<"Found at position ";
            return i;
        }

    }
    
    cout<<"Not found";
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
    
    cout<<linear_search(n,A,x);

    
}