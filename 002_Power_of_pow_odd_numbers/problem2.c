#include <stdio.h>

typedef long long int ll;

ll sum_of_squares_of_odd_numbers(int n){
    ll i = 1;
	ll sum = 0;
	while(n){
		sum += i*i;
		i += 2;
        n--;
	    }
	return sum;
}

int main(){
    ll n;
    printf("Enter N = ");
    scanf("%lld",&n);
    ll res = sum_of_squares_of_odd_numbers(n);
    printf("sum : %lld\n",res);  
    return 0;
}