#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define PISANO_LENGTH 2000000016

using namespace std;

long long get_pisano_period_length(long long int m) {
    // nth Pisano period, written as pi(n), is the period with which the sequence of Fibonacci numbers taken modulo n repeats
    long long int F1 = 0, F2 = 1, F = F1 + F2;
    for (long long int i = 0; i < m * m; i++) {
        F = (F1 + F2) % m;
        F1 = F2;
        F2 = F;
        if (F1 == 0 && F2 == 1) return i + 1;
    }
    return 1;
}

long long int get_fibonacci_huge_fast_better(long long int n, long long int m) {
    n=n%get_pisano_period_length(m);

    if(n<=1)
        return n;

    long long int a=0,b=1;
    for(long long int i=2;i<=n;i++)
    {
        b=(a+b)%m;
        a=(b-a+m)%m; // +m to ensure that -ve doesnot occur in b-a
    }
    return b;
}

long long int get_fibonacci_my(long long int n){

    if(n<=1)
        return n;

    long long int a=0,b=1;
    for(long long int i=2;i<=n;i++)
    {
        b=(a+b)%MOD;
        a=(b-a+MOD)%MOD; // +m to ensure that -ve doesnot occur in b-a
    }
    return b;
}

map<ll,ll> F;

ll get_fibonacci_my_better(ll n) {
	if (F.count(n)) return F[n];
	ll k=n/2;
	if (n%2==0) { // n=2*k
		return F[n] = (get_fibonacci_my_better(k)*get_fibonacci_my_better(k) + get_fibonacci_my_better(k-1)*get_fibonacci_my_better(k-1)) % MOD;
	} else { // n=2*k+1
		return F[n] = (get_fibonacci_my_better(k)*get_fibonacci_my_better(k+1) + get_fibonacci_my_better(k-1)*get_fibonacci_my_better(k)) % MOD;
	}
}

int main()
{
    ll n;
    cin>>n;
    n%=PISANO_LENGTH;
    F[0]=F[1]=1;

    cout<<((n==0)?0:get_fibonacci_my_better(n-1))<<endl;

    return 0;
}
