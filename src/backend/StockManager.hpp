#include <string>
#include <system_error>
#include <unordered_map>
#include <vector>

#include "data.hpp"

namespace Warehouse {

class StockManager {
public:
    StockManager(const StockManager&) = delete;
    StockManager& operator=(const StockManager&) = delete;

    static StockManager& getInstance() {
        static StockManager instance;
        return instance;
    }

    std::unordered_map<std::string, Stock> stocks;
    std::unordered_map<std::string, Pallet> pallets;

    Pallet getPallet(std::string pallet_id);
    Stock getStock(std::string stock_id);

    bool palletFitsInStock(Pallet pallet, Stock stock);
    std::vector<std::string> getFreeStock();
    std::string placeInStock(Pallet pallet, Stock stock);
    std::string removeFromStock(Pallet pallet);

private:
    StockManager(){};
};

}  // namespace Warehouse
