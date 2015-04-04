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
    set<string> S;
    string s;
    while (cin >> s) {
        S.insert(s);
//      if(s == "GB")
//          break;
    }
//  for (string ss : S)
//      cout << ss << endl;
    set<string>::iterator it = S.begin();
    if (S.size()<7) {
        cout << endl;
        return 0;
    }
    advance(it, 6);
    cout << *it << endl;
    return 0;
}