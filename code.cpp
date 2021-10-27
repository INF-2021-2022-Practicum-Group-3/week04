//Въвежда от клавиатурата естествено число n и реално a. Програмата да изчислява и извежда а^n;

#include <iostream>
// #include <cstdlib>
// unsigned int
int main()
{
  unsigned int a, n, result=1;
  std::cin >> a >> n;
  for(unsigned int i=0;i<n;i++)
  {
    result *=a;
  }
  std::cout << result << std::endl;
  return 0;
}

//По въведено естествено число n изведете n-тото число от редицата на Фибоначи
#include <iostream>

int main()
{
    int num1;
    int num2;
    int digit;
    int revNum = 0;

    std::cout << "Enter a number: ";
    std::cin >> num2;

    num1 = num2;

    do
    {
        digit = num2 % 10;
        revNum = (revNum * 10) + digit;
        num2 = num2 / 10;
    } while (num2 != 0);

    if (num1 == revNum)
        std::cout << " The number is a palindrome.";
    else
        std::cout << " The number is not a palindrome.";

    return 0;
}

int main()
{
  int firstNum = 1;
  int current = firstNum;
  int previous;
  int next;
  int n;
  std::cin >> n;
  while (current < n)
  {
    next=current+previous; ?
    current += previous;
    previous = current;
    
  

#include <iostream>

int main()
{
    int prev = 0, curr = 1, next, n, count = 2;
    std::cin >> n;
    
    std::cout << prev << " " << curr << " ";
    while (count < n)
    {
        next = prev + curr;
        std::cout << next << " ";
        prev = curr;
        curr = next;        
        ++count;
    }
    return 0;
}

#include <iostream>  
using namespace std;  
int main() {  
  int n1=0,n2=1,n3,number;    
 cin>>number;    
 cout<<n1<<" "<<n2<<" ";
 for(int i=2;i<number;++i)
 {    
  n3=n1+n2;    
  cout<<n3<<" ";    
  n1=n2;    
  n2=n3;    
 }    
   return 0;  
}  

//По въведени от стандартния вход две цели числа да се изведе произведението в интервала между тях Вход: 5 10 Изход: 151200
    
    
    5 10
      
      5*6*7*8*9*10 = 151200
    
    
    
    int leftSide, rightSide;
    cin>>leftSide>>rightSide;
    int sum = 1;
    
    if(leftSide > rightSide){
    
    for(int i = leftSide; i <= rightSide; i++)
    {
      
    sum *= i;
    
    }
    
    }  
    else
    {
      for(int i = rightSide; i <= leftSide; i++)
      
      sum *= i;
      
    } 
    cout << sum;
    
  
    /*int a, b, res = 1;
	std::cin >> a >> b;

	for (int i = a; i <= b; ++i)
	{
		res *= i;
	}

	std::cout << res;*/
    
    //Nikolay Task 5
    
    int initialValue, finalValue;
	int temp, result = 1;

	std::cin >> initialValue >> finalValue;
	if (initialValue > finalValue)
	{
		temp = initialValue;
		initialValue = finalValue;
		finalValue = temp;
	}

	for (size_t i = initialValue; i <= finalValue; i++)
	{
		result *= i;
	}
	std::cout << result;
    
    // Ot sushtiq avtor
    int a,b;
    a = a + b;
    b = a - b;
    a = a - b;
    // 
    
    
    //По въведено цяло число проверете дали то е просто(prime).
    
    
    int num;
    std::cin >> num;
    if(num == 0 || num == 1)
    {
      std::cout << "Is not prime number";
      return 0;
    }

    for (int i = 2; i < num; i++)
    {
      if (num % i == 0)
      {
        std::cout << "Is not prime number";
        return 0;
      }
    }
    std::cout << "Is prime number";
  	return 0;
    
    
    
    int main()
{
    int n;
    std::cin >> n;
    bool is_prime = true;
  
    for (int i = 2; i < n/2; i++)
    {
        if (n % i == 0)
        {
            is_prime = false;   
            break;
        }
    }
    std::cout << (is_prime ? "prime" : "not prime") << std::endl;
    return 0;
}

    //Nikolay
    // Task 6
    
    int num;
	bool isPrime = true;

	std::cout << "Enter a positive number: ";
	std::cin >> num;

	if (num == 0 || num == 1)
	{
		isPrime = false;
	}
	else
	{
		for (size_t i = 2; i <= num / 2; i++)
		{
			if (num % i == 0)
			{
				isPrime = false;
				break;
			}
		}
	}
    
    if (isPrime)
		std::cout << num << " is a prime number.";
	else
		std::cout << num << " is not a prime number.";
    
    //Task 7
    
    int p, q;
	bool isPrime = true;
	std::cin >> p >> q;

	for (size_t i = p; i <= q; i++)
	{
        isPrime = true;
		if (i == 0 || i == 1)
		{
			isPrime = false;
			continue;
		}

		for (size_t j = 2; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
			std::cout << i << " ";
	}
    
    // Task 8
    int rows;
    std::cin >> rows;

	for (size_t i = 1; i <= rows; i++)
	{
		for (size_t j = 0; j < i; j++)
		{
			std::cout << "x ";
		}
		std::cout << std::endl;

    
    //Да се състави програма, която въвежда от клавиатурата целите числа p и q (p<q). Програмата да извежда простите числа в интервала [p,q].
    //Вход: 12 25
    //Изход: 13 17 19 23
    
    int number1,number2;
    std::cin >> number1 >> number2;
    bool is_prime = true;
    
    for (int i = number1; i <=number2; i++)
    {  
      for(int j=2;j<+)
      {
        if (number1 % i == 0) { is_prime = false; break;}
      }
    }
    std::cout << (is_prime ? "prime" : "not prime");
    
    
    
 
    
    
//With function
    
          #include <iostream>
			// bool, int, size_t, long, ...
          bool is_prime(int num)
          {
              if(num == 0 || num == 1)
              {
                return false;
              }

              for (int i = 2; i < num; i++)
              {
                if (num % i == 0)
                {
                  return false;
                }
              }
              return true;
          }

          int main()
          {
              int a, b;
              std::cin >> a >> b;
              for (int i = a; i <= b; ++i)
              {
                  if (is_prime(i))
                  {
                      std::cout << i << " ";
                  }
              }
              return 0;
          }
    
    
    
    
    
