mkdir -p build
cd build
cmake -S .. -B .
make && ./Warehouse
