using System;

public class Rat{
  public int numerator;
  public int denominator;

  public Rat(int num, int denom){
    numerator = num;
    denominator = denom;
    
  }

  public Rat(int num): this (num, 1) {}

  public Rat(): this (1, 1) {}

  public override string ToString(){
    return $"{numerator}\n--\n{denominator}";
  }

  public double ToDouble(){
    return (double)numerator / denominator;
  }

  public static Rat Simple_Something(){
    int i = 2;
    int den = denominator;
    int num = numerator;
    while (true){
      if (i > denominator){
        break;
      }
      if (den % i == 0 && num % i == 0){
        den /= i;
        num /= i;
      }
      else{
        i += 1;
      }
    }
  }
  
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

  public static Rat operator +(Rat X, Rat Y){
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
}

class Program {
    static void Main(string[] args) {
        var r1 = new Rat(3, 4);
        var r2 = new Rat(4);
        Console.WriteLine(r1 - r2);
    }
}
