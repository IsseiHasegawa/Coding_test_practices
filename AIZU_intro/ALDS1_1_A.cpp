#include <iostream>

using namespace std;

void showArr(int arr[], int n){
    for (int i = 0; i < n; i++){
        if (i != n-1){
            cout << arr[i] << " ";
        } else {
            cout << arr[i] << endl;;
        }
    }
}

void insertSort(int arr[], int n){
    for (int i = 1; i < n; i++){
        int v = arr[i];
        int j = i - 1;

        while (j >= 0 && v < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = v;
        showArr(arr, n);
    }
}

int main(){
    int n; 
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    showArr(arr, n);
    insertSort(arr, n);
    return 0;
}