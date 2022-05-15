#include <iostream>
#include <algorithm>
using namespace std;

void Merge_2_Sorted_Array(int arr1[], int arr2[], int n1, int n2, int arr3[]) {
    int i = 0, j = 0, k = 0;
	while (i<n1 && j <n2)
	{
		if (arr1[i] < arr2[j])
			arr3[k++] = arr1[i++];
		else
			arr3[k++] = arr2[j++];
	}
	while (i < n1)
		arr3[k++] = arr1[i++];
	while (j < n2)
		arr3[k++] = arr2[j++];

}

void merge_2_sort_array(int a[], int b[], int n, int m) {
    int c[m+n];
    for(int i = 0; i < m; i++) {
        c[i] = a[i];
    }
    for(int i = 0; i < n; i++) {
        c[m+i] = b[i];
    }
    sort(c, c+m+n);
    
}




int main() {
    int a[] = {10, 3, 5, 11, 2};
    int n = sizeof(a)/sizeof(a[0]);
    int b[] = {12, 11, 11, 7, 19};
    int m = sizeof(b)/sizeof(b[0]);
    int c[n+m];
    cout<<"Merged 2 sorted Array : "<< endl;
    Merge_2_Sorted_Array(a, b, n, m, c);
    //merge_2_sort_array(a, b, n, m);
    for(int i = 0; i < m+n; i++) {
        cout<<c[i]<<" ";
    }
    return 0;
}