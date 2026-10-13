#include <iostream>
#include <stack>

int main() {
   std::stack<int> cancelledOrders;

    cancelledOrders.push(101);
    cancelledOrders.push(102);
    cancelledOrders.push(103);
    cancelledOrders.push(104);
    cancelledOrders.push(105);

    std::cout << "Cancelled Orders (Most recent):\n";

    while(!cancelledOrders.empty()) {

        std::cout << "Order ID:" << cancelledOrders.top() << "\n";
        cancelledOrders.pop();
            
    }
    return 0;
}
