#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    unordered_set<int> uniqueElements;
    for (int i = 0; i < n; ++i)
        uniqueElements.insert(a[i]);

    int cant = uniqueElements.size();
    cout << cant << endl;
    return 0;
}