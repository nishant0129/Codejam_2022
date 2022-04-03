#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int j = 1;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
       // char arr[2 * r + 1][2 * c + 1];
       
         
         for(int i=0; i<n; i++)
         {
             cin>>a[i];
            // b[i]=a[i];
         }
          cout << "Case #" << j << ": ";
         sort(a,a+n);
         int cnt=0;
         int k=1;
         for(int i=0; i<n; i++)
         {
            if(a[i]>=k)
            {
                cnt++;
                k++;
            }
            
         }
         cout<<cnt<<endl;
        j++;
    }
}