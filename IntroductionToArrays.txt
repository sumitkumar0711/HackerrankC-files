#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int c,d,n,a[10000],b[10000];
    cin>>n;
    for(c=0;c<n;c++)
    {
        cin>>a[c];
    }
    for(c=n-1,d=0;c>=0;c--,d++)
    {
        b[d]=a[c];
    }
    for(c=0;c<n;c++)
        a[c]=b[c];
    for(c=0;c<n;c++)
        printf("%d ",a[c]);
    return 0;
}
