int solution(vector<int> &A) {
	int size = A.size();

	int *front = new int[size];
	int *end = new int[size];

	front[1] = A[0]; // 0 ~ i-1까지의 합
	for (int i = 2; i < size; i++) {
		front[i] = front[i - 1] + A[i - 1];
	}

	end[size - 1] = A[size - 1]; // i ~ N-1까지의 합
	for (int i = size - 2; i > 0; i--) {
		end[i] = end[i + 1] + A[i];
	}

	int min = 999999;

	for (int i = 1; i < size; i++) {
		int diff = abs(front[i] - end[i]); // 차이가 가장 작은 경우를 찾음
		if (diff < min)
			min = diff;
	}
	return min;
}