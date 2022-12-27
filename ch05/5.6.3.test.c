struct person
{
    char name[20];
    int age;
    int score;
};

int parameter(struct person p, int b, long *c)
{
    return p.age;
}
