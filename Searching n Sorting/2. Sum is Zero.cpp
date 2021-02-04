#include<iostream>
using namespace std;
void findTriplets(int arr[], int n)
{
    bool found = false;
    for (int i=0; i<n-2; i++)
    {
        for (int j=i+1; j<n-1; j++)
        {
            for (int k=j+1; k<n; k++)
            {
                if (arr[i]+arr[j]+arr[k] == 0)
                {
                    cout <<arr[i]<<" "
                         <<arr[j]<<" "
                         <<arr[k]<<endl;
                    found = true;
                }
            }
        }
    }


    if (found == false)
        cout<<" Does not exist."<<endl;

}


int main()
{
    int arr[1000];
    int i,n;
    cout<<"Enter the size of the Array"<<endl;
    cin>>n;
    cout<<"Enter the Elements of the Array..."<<endl;
  for(i=0;i<n;i++)
    cin>>arr[i];

    findTriplets(arr, n);
    return 0;
}
