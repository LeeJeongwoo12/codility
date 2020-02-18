#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first)
		return a.second < b.second;
	else
		return a.first < b.first;
}

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
	vector<int> ans;

	vector<pair<int, int>> v;

	for (int i = 0; i < S.size(); i++) {
		int ch;
		if (S[i] == 'A')
			ch = 1;
		else if (S[i] == 'C')
			ch = 2;
		else if (S[i] == 'G')
			ch = 3;
		else
			ch = 4;
		v.push_back(make_pair(ch, i));
	}

	sort(v.begin(), v.end(), compare);
	
	for (int i = 0; i < P.size(); i++) {
		for (int j = 0; j < v.size(); j++) {
			if (P[i] <= v[j].second && v[j].second <= Q[i]) {
				ans.push_back(v[j].first);
				break;
			}
		}
	}

	return ans;
}