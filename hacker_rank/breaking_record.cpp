#include <iostream>
#include <vector>
using namespace std;

pair<int, int> breakingRecords(const vector<int>& scores) {
    int minCount = 0, maxCount = 0;
    int minScore = scores[0], maxScore = scores[0];

    for (int i = 1; i < scores.size(); i++) {
        if (scores[i] < minScore) {
            minScore = scores[i];
            minCount++;
        }
        if (scores[i] > maxScore) {
            maxScore = scores[i];
            maxCount++;
        }
    }
    return {minCount, maxCount};
}

int main() {
    int n;
    cout << "Enter the number of games: ";
    cin >> n;

    vector<int> scores(n);
    cout << "Enter the scores: ";
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    pair<int, int> result = breakingRecords(scores);
    cout << "Min breaks: " << result.first << ", Max breaks: " << result.second << endl;
    return 0;
}
