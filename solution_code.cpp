#include <iostream>
#include <vector>

using namespace std;

void circle_winner(int n, int k) {
    vector<int> people(n);
    vector<int> extraLives(n, 0);
    vector<int> prime(n+1,1);

    for (int i = 2;i<=n;i++){
        if (prime[i] == 1){
            for (int j = 2*i;j<=n;j+=i){
                prime[j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        people[i] = i + 1;
        if (prime[i+1]) {
            extraLives[i] = 1; // Prime-numbered positions get an extra life
        }
    }

    int index = 0;
    while (people.size() > 0) {
        index = (index + k - 1) % people.size();
        int currentPerson = people[index];
        int currentIndex = currentPerson - 1;
        if (extraLives[currentIndex] > 0) {
            extraLives[currentIndex] -= 1;
            index = (index + 1) % people.size();
        }
        else {
            cout << currentPerson << endl;
            if (prime[currentPerson]) {
                extraLives[people[(index - 1 + people.size()) % people.size()] - 1] += 1;//adding to previous index
                extraLives[people[(index + 1) % people.size()] - 1] += 1;//adding to next index
            }
            people.erase(people.begin() + index);
        }

    }

    return;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        circle_winner(n,k);
    }
    return 0;
}

