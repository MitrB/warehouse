#include <shared_mutex>
#include <vector>
#include <string>

namespace Warehouse {

struct Position {
    float x;
    float y;
    float z;
};

struct Dimension {
    float width;
    float length;
    float height;
};

struct Stock;

struct Pallet {
    Dimension dimension;
    std::string parent_id;
};

struct Stock {
    Position position{};
    Dimension dimension{};
    std::vector<std::string> pallet_ids{};
    
};
}  // namespace Warehouse
