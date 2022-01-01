// iterative

int BIGMOD(int a, int b, int N){
    int res = 1; 
    while(b){
        if(b&1) res = (res*a)%N;
        a = (a*a)%N;
        b >>= 1;
    }
    return res;
}

// recursive


int BigMod(int a, int b, int N){
    if(b == 0) return 1%N;

    int res = BigMod(a, b/2LL, N);
    res  = (res * res)%N;
    if(b&1) res = (res*a)%N;

    return res%N;
}
