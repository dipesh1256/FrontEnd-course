class Base1
{
    protected:
    char str[100];
    public:
    void SetA()
    {
        cout <<"Enter String:";
        cin.getline (str,100);
    }
};

class Base2 : public Base1
{
    protected:
    char str2[100];
    public:
    void SetB()
    {
        cout <<"Enter String2 : ";
        cin.getline (str2,100);
    }
};
