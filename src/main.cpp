#include <iostream>

#include "backend/StockManager.hpp"
#include "frontend/frontend.hpp"

int main() {
    Warehouse::StockManager& stock_manager = Warehouse::StockManager::getInstance();
    Warehouse::Frontend frontend{};
    return 0;
}
