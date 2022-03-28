#include <iostream>
#include <vector>

int main() {
    std::vector<float> prices = {2.5, 4.25, 3.0, 10.0};
    std::vector<int> index = {1, 1, 0, 3};

    float sum = 0;
    for (int i = 0; i < index.size(); i++) {
        sum += prices[index[i]];
    }

    std::cout << "Total price: " << sum;

    return 0;
}
