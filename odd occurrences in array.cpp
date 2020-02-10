#include <algorithm>

using namespace std;

int solution(vector<int> &A) {
	if (A.size() == 1) // size가 1인 경우, 그 원소를 그대로 반환
		return A.front();

	sort(A.begin(), A.end()); // 오름차순으로 정렬

	for (int i = 0; i < A.size() - 1; i += 2) { // index를 2씩 증가시키며 비교
		if (A.at(i) != A.at(i + 1)) // 만약 비교하는 두 수가 다르다면 앞의 수를 반환
			return A.at(i);
	}

	return A.back(); // 마지막에 있는 수가 정답일 경우
}