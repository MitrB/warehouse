namespace DataTypes{
    struct Stock
    {
        int x;
        int y;
        int z;
        int width;
        int length;
        int height;
        bool occupied;
    };
    struct Pallet
    {
        int width;
        int length;
        int height;
        Stock currentlyIn;
    };
}
