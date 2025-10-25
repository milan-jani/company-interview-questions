//write the code
#include <iostream>
#include <algorithm>
using namespace std;
struct Item {
    int value, weight;
    double ratio() const { return (double)value / weight; }
};

bool cmp(Item a, Item b) {
    return a.ratio() > b.ratio();
}

double knapsackGreedy(Item items[], int n, int W) {
    sort(items, items + n, cmp);

    double totalValue = 0.0;
    int currWeight = 0;

    for (int i = 0; i < n; i++) {
        if (currWeight + items[i].weight <= W) {
            currWeight += items[i].weight;
            totalValue += items[i].value;
        } else {
            int remain = W - currWeight;
            totalValue += items[i].ratio() * remain;
            break;
        }
    }
    return totalValue;
}

int main() {
    int n, W;
    cout << "Enter number of items and knapsack capacity: ";
    cin >> n >> W;
    Item* items = new Item[n];
    cout << "Enter value and weight for each item:\n";
    for (int i = 0; i < n; i++) {
        cin >> items[i].value >> items[i].weight;
    }
    double maxValue = knapsackGreedy(items, n, W);
    cout << "Maximum value in knapsack = " << maxValue << endl;
    delete[] items;
    return 0;
}