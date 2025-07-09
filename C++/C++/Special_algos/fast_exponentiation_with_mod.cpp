#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	int result = 1;

	if(m==1) {return 0;}

	while(n!=0) {
		if(n&1) {
			result = (1LL* result * x)%m;
		}

		x = (1LL* x * x)%m;
		n = n>>1;
	}

	return result;
}

// mod agr baar baar bhi lge tbh bhi same hi answer hoga

// https://chatgpt.com/share/684fff4d-e768-8005-afc7-06b203cf3a7c chatgpt for understanding why we using mods

// pigeonhole and inclusion exclusion principle pdh lena ek baar
// Inclusion-Exclusion Principle (IEP)
// 👉 What is it?
// Used to count total elements in the union of sets while avoiding overcounting.

// Formula (2 sets):

// |A ∪ B| = |A| + |B| − |A ∩ B|
// For 3 sets:

// |A ∪ B ∪ C| = |A| + |B| + |C|
//             − |A ∩ B| − |A ∩ C| − |B ∩ C|
//             + |A ∩ B ∩ C|




// FAST EXPONENTIATION WITH MOD BUT WITH RECURSION

int pow(int a, int b, int m, int result = 1) {
    if(b==0) {
        return 1;
    }

    // base case
    if(b==1) {
        return (1LL*result*a)%m;
    }


    if(b&1) {
        result = (1LL*result*a)%m;
    }

    // recursive call
	a = (1LL*a*a)%m;
    return pow(a,b>>1,m,result);
}