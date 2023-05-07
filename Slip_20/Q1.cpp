// Q1.Write a C++ program to sort integer and float array elements in ascending order by using
// function overloading


#include <iostream>
using namespace std;

class SortArray {
public:
    void sort(int arr[], int n)
    {
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    
    void sort(float arr[], int n)
    {
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[i] > arr[j])
                {
                    float temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
};

int main()
{
    int int_arr[] = {3, 1, 4, 2, 5};
    float float_arr[] = {3.5, 1.2, 4.8, 2.1, 5.0};
    int int_n = sizeof(int_arr)/sizeof(int_arr[0]);
    int float_n = sizeof(float_arr)/sizeof(float_arr[0]);
    
    SortArray sorter;
    sorter.sort(int_arr, int_n);
    sorter.sort(float_arr, float_n);
    
    cout << "Sorted integer array: ";
    for(int i=0; i<int_n; i++)
    {
        cout << int_arr[i] << " ";
    }
    cout << endl;
    
    cout << "Sorted float array: ";
    for(int i=0; i<float_n; i++)
    {
        cout << float_arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
