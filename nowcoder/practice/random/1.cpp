#include<bits/stdc++.h>
using namespace std;
#ifdef _LOCAL
    #define test(x) cerr << #x << "=" << x << endl
#else
    #define test(x)
#endif

const int N = 200005;

typedef long long LL;

int a[N];

int main() {
    #ifdef _LOCAL
        freopen("data.in", "r", stdin);
    #endif
    int n;
    a[1] = 6;
    a[2] = 11;
    a[3] = 20;
    while (~scanf("%d", &n))
    {
        if(n & 1) puts("0");
        n /= 2;
        if(n == 1)
        else if
        for(int i = 4)
    }
    #ifdef _LOCAL
        fprintf(stderr, "T: %d ms\n", int(1000.0 * clock() / CLOCKS_PER_SEC));
    #endif
    return 0;
}