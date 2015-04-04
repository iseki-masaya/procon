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
#include <time.h>

using namespace std;

int
main()
{
    stack<int> st;
    int Q,L;
    scanf("%d %d",&Q,&L);
    for (int i=0; i<Q; ++i) {
        string q;
        cin >> q;
        if (q == "Push") {
            int n,m;
            scanf("%d %d",&n,&m);
            for (int i=0; i<n; ++i) {
                st.push(m);
            }
            if (st.size() > L) {
                printf("FULL\n");
                return 0;
            }
        }
        else if (q == "Pop") {
            int n;
            scanf("%d",&n);
            if (st.size() < n) {
                printf("EMPTY\n");
                return 0;
            }
            for (int i=0; i<n; ++i) {
                st.pop();
            }
        }
        else if (q == "Size") {
            int s = (int)st.size();
            printf("%d\n",s);
        }
        else if (q == "Top") {
            if (st.size() == 0) {
                printf("EMPTY\n");
                return 0;
            }
            int t = st.top();
            printf("%d\n",t);
        }
    }
    printf("SAFE\n");
}