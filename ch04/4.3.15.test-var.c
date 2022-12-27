int var()
{
    int local;
    static int a __attribute__((section("DUART_A")));
    static int reg asm("ebx");
    return 0;
}