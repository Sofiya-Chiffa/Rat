using System;
 
public class Rat{
  public int numerator;
  public int denominator;

  public Rat(int num, int denom){
    numerator = num;
    denominator = denom;
    if (denom == 0){
      denominator = 1;
    }
    Simple_Something();
  }

  public Rat(int num): this (num, 1) {}

  public Rat(): this (1, 1) {}

  public override string ToString(){
    Simple_Something();
    if (denominator == 1){
      return $"{numerator}";
    }
    return $"{numerator}\n----\n{denominator}";
  }

  public double ToDouble(){
    return (double)numerator / denominator;
  }
  
  public static int Evklid(int x, int y)
        {
            x = Math.Abs(x);
            y = Math.Abs(y);
            while (x * y != 0)
            {
                if (x > y) { x = x % y; }
                else { y = y % x; }
            }
            return x + y;
        }
             
  public void Simple_Something(){
    int NOD = Evklid(numerator, denominator);
    numerator /= NOD;
    denominator /= NOD;
    if (denominator < 0 && numerator < 0){
      numerator *= -1;
      denominator *= -1;
    }
    else if (denominator < 0){
      numerator *= -1;
      denominator *= -1;      
    }
  }
  
  public static Rat operator *(Rat X, int y){
    Rat Y = new Rat(y);
    int N, D;
    N = X.numerator * Y.numerator;
    D = X.denominator * Y.denominator;
    Rat NewR;
    NewR = new Rat(N, D);
    return NewR;}

  public static Rat operator *(int x, Rat Y){
    Rat X = new Rat(x);
    int N, D;
    N = X.numerator * Y.numerator;
    D = X.denominator * Y.denominator;
    Rat NewR;
    NewR = new Rat(N, D);
    return NewR;}
  
  public static Rat operator *(Rat X, Rat Y){
    int N, D;
    N = X.numerator * Y.numerator;
    D = X.denominator * Y.denominator;
    Rat NewR;
    NewR = new Rat(N, D);
    return NewR;}
    
  public static Rat operator /(Rat X, Rat Y){
    int N, D;
    N = X.numerator * Y.denominator;
    D = X.denominator * Y.numerator;
    Rat NewR;
    NewR = new Rat(N, D);
    return NewR;
  }
     
  public static Rat operator /(Rat X, int y){
    Rat Y = new Rat(y);
    int N, D;
    N = X.numerator * Y.denominator;
    D = X.denominator * Y.numerator;
    Rat NewR;
    NewR = new Rat(N, D);
    return NewR;
  }
     
  public static Rat operator /(int x, Rat Y){
    Rat X = new Rat(x);
    int N, D;
    N = X.numerator * Y.denominator;
    D = X.denominator * Y.numerator;
    Rat NewR;
    NewR = new Rat(N, D);
    return NewR;
  }

  public static Rat operator +(Rat X, Rat Y){
    int N, D;
     N = X.numerator * Y.denominator + Y.numerator * X.denominator;
    D = X.denominator * Y.denominator;
    Rat NewR;
    NewR = new Rat(N, D);
    return NewR;}

    public static Rat operator +(Rat X, int y){
    Rat Y = new Rat(y);
    int N, D;
     N = X.numerator * Y.denominator + Y.numerator * X.denominator;
    D = X.denominator * Y.denominator;
    Rat NewR;
    NewR = new Rat(N, D);
    return NewR;}

    public static Rat operator +(int x, Rat Y){
    Rat X = new Rat(x);
    int N, D;
     N = X.numerator * Y.denominator + Y.numerator * X.denominator;
    D = X.denominator * Y.denominator;
    Rat NewR;
    NewR = new Rat(N, D);
    return NewR;}
    
  public static Rat operator -(Rat X, Rat Y){
    int N, D;
    N = X.numerator * Y.denominator - Y.numerator * X.denominator;
    D = X.denominator * Y.denominator;
    Rat NewR;
    NewR = new Rat(N, D);
    return NewR;
  }
    
  public static Rat operator -(int x, Rat Y){
    Rat X = new Rat(x);
    int N, D;
    N = X.numerator * Y.denominator - Y.numerator * X.denominator;
    D = X.denominator * Y.denominator;
    Rat NewR;
    NewR = new Rat(N, D);
    return NewR;
  }
    
  public static Rat operator -(Rat X, int y){
    Rat Y = new Rat(y);
    int N, D;
    N = X.numerator * Y.denominator - Y.numerator * X.denominator;
    D = X.denominator * Y.denominator;
    Rat NewR;
    NewR = new Rat(N, D);
    return NewR;
  }

  public static Rat operator --(Rat X){
    return X - 1;
  }
  
  public static Rat operator ++(Rat X){
    return X + 1;
  }

  public static bool operator ==(Rat X, Rat Y)
    {
        return X.numerator == Y.numerator &&             X.denominator == Y.denominator;
    }

  public static bool operator ==(int X, Rat Y)
    {
        return X == Y.ToDouble();
    }

  public static bool operator ==(Rat X, int Y)
    {
        return X.ToDouble() == Y;
    }
  
  public static bool operator !=(Rat X, Rat Y)
        {
          return X.numerator != Y.numerator ||             X.denominator != Y.denominator;
          }
  public static bool operator !=(int X, Rat Y)
    {
        return X != Y.ToDouble();
    }

  public static bool operator !=(Rat X, int Y)
    {
        return X.ToDouble() != Y;
    }
  
  public static bool operator >(Rat X, Rat Y)
      {
        return X.ToDouble() > Y.ToDouble();
      }
  
  public static bool operator >(int X, Rat Y)
    {
      return X > Y.ToDouble();
    }

  public static bool operator >(Rat X, int Y)
    {
      return X.ToDouble() > Y;
    }
  
  public static bool operator <(Rat X, Rat Y)
      {
        return X.ToDouble() < Y.ToDouble();
      }
  
  public static bool operator <(int X, Rat Y)
    {
      return X < Y.ToDouble();
    }

  public static bool operator <(Rat X, int Y)
    {
      return X.ToDouble() < Y;
    }

  public static bool operator >=(Rat X, Rat Y)
      {
        return X.ToDouble() >= Y.ToDouble();
      }
  
  public static bool operator >=(int X, Rat Y)
    {
      return X >= Y.ToDouble();
    }

  public static bool operator >=(Rat X, int Y)
    {
      return X.ToDouble() >= Y;
    }

  public static bool operator <=(Rat X, Rat Y)
      {
        return X.ToDouble() <= Y.ToDouble();
      }
  
  public static bool operator <=(int X, Rat Y)
    {
      return X <= Y.ToDouble();
    }

  public static bool operator <=(Rat X, int Y)
    {
      return X.ToDouble() <= Y;
    }
  
  
}



class Program {
    static void Main(string[] args) {
        var r1 = new Rat(20, 6);
        var r2 = new Rat(10, 3);
        var r3 = new Rat(9, 3);
        Console.WriteLine(r1 == r2);
        Console.WriteLine(++r2);
        Console.WriteLine(r1 >= r3);
        Console.WriteLine(4 < r1);
        
    }
}
