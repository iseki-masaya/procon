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

#define MAX 16
#define INF (1<<30)

using namespace std;

void
solve(int n,int L,vector<int> &team,vector<int> &dist)
{
	vector<int> score(3);
	score[1] = 0; score[2] = 0;
	for (int i=0; i<team.size(); ++i) {
		if (dist[i] > L) {
			score[team[i]] += 3;
		}
		else if (dist[i] >= 0) {
			score[team[i]] += 2;
		}
		else {
			++score[team[i]];
		}
	}
	printf("%d:%d\n",score[1],score[2]);
}

int
main(void) {
	int n,L;
	scanf("%d %d",&n,&L);
	vector<int> team(n),dist(n);
	for (int i=0; i<n; ++i) {
		scanf("%d %d",&team[i],&dist[i]);
	}
	solve(n,L,team,dist);
}