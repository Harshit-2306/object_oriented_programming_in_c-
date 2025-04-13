#include <iostream>
using namespace std;

int pageCount(int n, int p) {
    // Calculate turns from front
    int frontTurns = p / 2;
    
    // Calculate turns from back
    int backTurns = (n - p) / 2;
    
    // If n is odd and p is n-1, we need one less turn from back
    if (n % 2 == 1 && p == n - 1) {
        backTurns = 0;
    }
    
    // Return minimum of front and back turns
    return min(frontTurns, backTurns);
}

int main() {
    int n, p;
    
    cout << "Enter the number of pages in the book: ";
    cin >> n;
    
    cout << "Enter the page number to turn to: ";
    cin >> p;
    
    int result = pageCount(n, p);
    cout << "Minimum number of pages to turn: " << result << endl;
    
    return 0;
} 