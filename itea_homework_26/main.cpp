#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>  // ������ ������� ��������
#include <iterator>

using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        int res = -1;

        unordered_map<int, int> frequency;  // ����������� unordered_map ��� ��������� ������� �����

        // ���������� ������� ������� ����� �������
        for (int num : arr) {
            frequency[num]++;
        }       

        // ������ ��������� ����� � ������
        for (auto& pair : frequency) {
            int num = pair.first;
            int freq = pair.second;

            // ��������, �� ����� "�������"
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
