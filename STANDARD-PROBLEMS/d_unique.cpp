#include <iostream>
using namespace std;

void checkUniqueFrequencies(int arr[], int n) {
    int freq[n];   
    bool visited[n]; 

    for (int i = 0; i < n; i++) {
        visited[i] = false;
    }

    // count frequencies
    for (int i = 0; i < n; i++) {
        if (visited[i]) continue; 
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = true; 
            }
        }
        freq[i] = count; 
    }

    bool isUnique = true;
    for (int i = 0; i < n; i++) {
        if (visited[i]) continue; // skip duplicates
        for (int j = i + 1; j < n; j++) {
            if (visited[j]) continue;
            if (freq[i] == freq[j]) {
                isUnique = false;
                break;
            }
        }
        if (!isUnique) break;
    }

    if (isUnique)
        cout << "true ";
    else
        cout << "false ";
}

int main() {
    int arr[] = {1,1, 2, 2, 3, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    checkUniqueFrequencies(arr, n);

    return 0;
}
