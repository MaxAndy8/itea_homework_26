#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>  // Додано потрібну бібліотеку
#include <iterator>

using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        int res = -1;

        unordered_map<int, int> frequency;  // Використано unordered_map для зберігання частоти чисел

        // Обчислення частоти кожного числа вектору
        for (int num : arr) {
            frequency[num]++;
        }       

        // Перебір унікальних чисел у векторі
        for (auto& pair : frequency) {
            int num = pair.first;
            int freq = pair.second;

            // Перевірка, чи число "щасливе"
            if (num == freq) {
                res = max(res, num);
            }
        }

        return res;
    }
};

int main() {
    vector<int> items;
    int item;
    string line;

    getline(cin, line);
    istringstream is(line);

    while (is >> item) {
        items.push_back(item);
    }

    Solution solution;
    cout << solution.findLucky(items) << endl;  
}
