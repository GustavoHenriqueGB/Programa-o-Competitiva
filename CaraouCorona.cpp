#include <bits/stdc++.h>

using namespace std;

int main() {

  ios_base::sync_with_stdio(false); cin.tie(0);

  long long int L, G , l , g;
  cin >> L >> G;

  l = L * 100 / (L+G);
  g = G * 100 / (L+G);

  cout << l << " " << g << "\n";
  
  return 0;
}