#include <iostream>
#include <unordered_set>
#include <vector>

std::vector<int> findMissingNumbers(const std::vector<int>& A, const std::vector<int>& B) {
    std::unordered_set<int> numbersInB(B.begin(), B.end());
    std::vector<int> missingNumbers;

    for (int num : A) {
        if (numbersInB.find(num) == numbersInB.end()) {
            missingNumbers.push_back(num);
        }
    }

    return missingNumbers;
}

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> A(N);
    std::vector<int> B(M);

    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    for (int i = 0; i < M; ++i) {
        std::cin >> B[i];
    }

    std::vector<int> missingNumbers = findMissingNumbers(A, B);

    for (int num : missingNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
