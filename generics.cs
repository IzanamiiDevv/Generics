using System;
using System.Text;

class Program : Lambda
{
    public static void Main(string[] args)
    {
        Print("Hello World");
        CheckType(02);
        CheckType("Hi");
        Magic("Hello");
    }
}

class Lambda
{
    protected static void Print<T>(T text)
    {
        Console.WriteLine(text);
    }
    
    protected static void CheckType<T>(T data)
    {
        if(typeof(T) == typeof (int))
            Console.WriteLine("It is an Inter");
        if(typeof(T) == typeof (string))
            Console.WriteLine("It is an String");
    }
    
    protected static void Magic(string text)
    {
        text += 'w';
        StringBuilder str = new StringBuilder(text);
        str[0] = 'Y';
        Console.WriteLine(str);
    }
}