// test.c
// 2.4 shell

int global_int = 0;
int main(int argc, char *argv)
{
    int i;
    static int static_sum = 0;
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (i = global_int; i < 10; ++i)
    {
        int j = i * 2;
        static_sum = static_sum + j + array[i];
        if (static_sum > 1000)
            goto Label_RET;
    }

Label_RET:
    return static_sum;
}