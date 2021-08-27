#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    //Taking Input
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    //Taking Output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // Searching an element in an Array
    int x; cin>>x;
    bool check = false;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            if(arr[i][j] == x)
            {
                cout<<i<<" "<<j<<endl;
                check = true;
            }
        }
    }
    if(check){
        cout<<" Element is found "<<endl;
    }
    else{
        cout<<"Element is not found "<<endl;
    }
    return 0;
} 
//Qs-->Spiral Order matrix Traversal.
#include<bits./stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    // Key step.
    int row_start = 0, row_end = n-1, col_start = 0, col_end = m-1;

    while(row_start <= row_end && col_start <= col_end)
    {
        //row start
        for(int col = col_start; col<col_end;col++){
            cout<<arr[row_start][col]<<" ";
        }
        row_start ++;

        //column end
        for(int row = row_start; row< row_end;row++){
            cout<<arr[row][col_end]<<" ";
        }
        col_end --;
        //for row end
        for(int col = col_end;col>=col_start;col--){
            cout<<arr[row_end][col]<<" ";
        }
        row_end --;

        //for column start
        for(int row = row_end;row>=row_start;row--){
            cout<<arr[row][col_start]<<" ";
        }
        col_start ++;
    }
    
    return 0;
}