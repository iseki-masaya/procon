#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <list>
#include <algorithm>
#include <sstream>
#include <set>
#include <cmath>
#include <map>
#include <stack>
#include <queue>
#include <stdio.h>
#include <string.h>

#define MAX 50000 // 5133
#define SIZE 10000
#define INF (1<<30)

using namespace std;

vector<int> prime(MAX,0);

int
sieve(int n) {
	int p=0;
	vector<bool> is_prime(MAX,true);
	prime[p++] = 1;
	for (int i=2; i <= n; ++i) {
		if (is_prime[i]) {
			prime[p++] = i;
			for (int j=2*i; j <= n; j+=i) {
				is_prime[j] = false;
			}
		}
	}
	return p;
}

void
solve(int n)
{
	sieve(MAX);
	for (int k=4; k<=n; ++k) {
		if (find(prime.begin(), prime.end(), k-1) != prime.end() &&
				find(prime.begin(), prime.end(), k+1) != prime.end() ){
			printf("%d\n",k);
		}
	}
}

int
main(void) {
	int n;
	scanf("%d",&n);
	solve(n);
}