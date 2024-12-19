#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;
using vs = vector<string>;

ll N;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> N;
  cin.ignore();
  while (0 < (N--)) {
    string s;
    getline(cin, s);

    auto iss = istringstream{s};
    auto split = vs{};
    string t;
    while (iss >> t) {
      split.push_back(t);
    }

    for (auto i = 0; i < split.size(); ++i) {
      cout << split[(i + 2) % split.size()] << ' ';
    }
    cout << '\n';
  }

  return 0;
}