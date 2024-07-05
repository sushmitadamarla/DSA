#include<iostream>
using namespace std;

class Merge {
public:
    void merge(int A[], int l, int mid, int h) {
        int i = l, j = mid + 1, k = l;
        int B[100]; // Temporary array for merging

        while (i <= mid && j <= h) {
            if (A[i] <= A[j]) {
                B[k++] = A[i++];
            } else {
                B[k++] = A[j++];
            }
        }
        for (; i <= mid; i++) {
            B[k++] = A[i];
        }
        for (; j <= h; j++) {
            B[k++] = A[j];
        }
        for (int i = l; i <= h; i++) {
            A[i] = B[i];
        }
    }

    void imerge(int A[], int n) {
        int p, l, h, mid, i;

        for (p = 2; p <= n; p = p * 2) {
            for (i = 0; i + p - 1 < n; i = i + p) {
                l = i;
                h = i + p - 1;
                mid = (l + h) / 2;
                merge(A, l, mid, h);
            }
        }
        if (p / 2 < n) {
            merge(A, 0, (p / 2) - 1, n - 1);
        }
    }

    void rmerge(int A[],int l, int h)
    {
        int mid;
        if(l<h)
        {
            mid = (l+h)/2;
            rmerge(A,l,mid);
            rmerge(A,mid+1,h);
            merge(A,l,mid,h);
        }
    }
};

int main() {
    int A[] = {0, 3, 4, 5, 45, 95, 7, 2, 64, 47};
    int n = sizeof(A) / sizeof(A[0]);

    Merge m;
    //m.imerge(A, n);
    m.rmerge(A, 0, n-1);

    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
