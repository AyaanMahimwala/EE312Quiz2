#include <stdio.h>

int sumsTo(int arr[], int n, int k, int v);
int subsetSum(int arr[], int k, int v);

int main() {
    int array[] = {1, 8, 6, 4, 3};
    printf("%d\n", subsetSum(array, 2, 9));
    return 0;
}



int subsetSum(int arr[], int k, int v){
    return sumsTo(arr, 5, k, v);
}

int sumsTo(int arr[], int n, int k, int v){
    if(v == 0 && k == 0) return 1;
    if(v != 0 && k == 0) return 0;
    if(n == 0) return 0;

    int res1 = 0;
    if(v >= arr[0]){
        res1 = sumsTo(arr+1, n - 1, k - 1, v - arr[0]);
    }

    int res2 = sumsTo(arr+1, n - 1, k, v);

    if(res1 + res2 > 0){
        return 1;
    }

    return 0;




}