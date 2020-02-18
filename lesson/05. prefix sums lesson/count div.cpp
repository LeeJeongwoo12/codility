#define MAX 2000000001

int solution(int A, int B, int K) {
	int count = 0;
	int i;

	if (K == 1)
		return B - A + 1;

	for (i = A; i <= B; i++) {
		if (i % K == 0) {
			break;
		}
	}

	for (int j = i; j <= B; j += K) {
		count++;
		if ((long long)j + K >= MAX)
			break;
	}

	return count;
}