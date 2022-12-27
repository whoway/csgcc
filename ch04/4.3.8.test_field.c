int field()
{
    struct student
    {
        char gender;
        short age;
        char name[20];
    }tom;

    tom.gender='F';
    tom.age=18;
    strcpy(tom.name,"TOM");
    
    return 0;
}