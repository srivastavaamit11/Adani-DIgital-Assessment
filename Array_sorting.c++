#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> make_array(int rows,int cols)
{
    vector<vector<int>> array(rows,vector<int> (cols,0));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = rand()%100;
        }
    }
    return array;
}

void print_array(vector<vector<int>> &array, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout <<"\n";
    }
}

void sort_array(vector<vector<int>> &array, int col_index) {
    sort(array.begin(), array.end(), [col_index](const vector<int>& a, const vector<int>& b) {
        return a[col_index] < b[col_index];
    });
}
int main()
{
    int rows,cols;
    cin>>rows>>cols;
    vector<vector<int>> arr;
    // making a 2d array
    arr=make_array(rows,cols);
    print_array(arr,rows,cols);
    cout<<"\n";
    int col_index;
    cout<<"enter the column Index";
    cin>>col_index;

    // sorting the array based on the column index keeping the rows intact
    if(col_index>=arr[0].size())
    {
        cout<<"index out of bound";
        return 0;
    }
    sort_array(arr,col_index);
    cout<<"\nsorted array :\n";
    print_array(arr,rows,cols);
    return 0;
}