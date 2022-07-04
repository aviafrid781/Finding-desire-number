

#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int num, int value)
{
    if (value == 0) return 0;
    int result =INT_MAX;
    for (int i=0; i<num; i++)
    {
        if (arr[i] <= value)
        {
            int count = solve(arr, num, value-arr[i]);

            if (count!= INT_MAX && count + 1 < result)
                result = count + 1;
        }
    }
    if(result==INT_MAX)
    {

        return -1;
    }
    else
    {
        return result;
    }
}


int main()
{
    int testCase;
    cin>>testCase;

    while(testCase--)
    {
        int num,value;
        cin>>num>>value;
        int arr[num+1];
        for(int i=0; i<num; i++)
        {
            cin>>arr[i];
        }

        int ans=0;
        ans= solve(arr, num, value);
        if(ans<1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }

    }
    return 0;
}

