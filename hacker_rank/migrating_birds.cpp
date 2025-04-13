#include <iostream>
using namespace std;

int migratoryBirds(int arr[], int n) {
    // Create an array to count frequency of each bird type (1-5)
    int frequency[6] = {0};  // Using size 6 because bird types are 1-5
    
    // Count frequency of each bird type
    for(int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }
    
    // Find the bird type with maximum frequency
    int maxFreq = frequency[1];
    int mostCommonBird = 1;
    
    for(int i = 2; i <= 5; i++) {
        if(frequency[i] > maxFreq) {
            maxFreq = frequency[i];
            mostCommonBird = i;
        }
    }
    
    return mostCommonBird;
}

int main() {
    int n;
    cout << "Enter the number of birds sighted: ";
    cin >> n;
    
    int arr[1000];  // Assuming maximum 1000 birds
    cout << "Enter the bird types (1-5): ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int result = migratoryBirds(arr, n);
    cout << "The most frequently sighted bird type is: " << result << endl;
    
    return 0;
} 