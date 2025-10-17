

#include <iostream>
using namespace std;


//time complexity O(n*log(log n))
// this is the best running code
//Also known as SIEVE of ERATOSTHENES
int countPrimes(int n)
{
    if (n <= 2)
        return 0;
    int count = 0;
    vector<bool> isprime(n, true);
    isprime[0] = isprime[1] = false;
    for (int i = 2; i * i < n; i++)
    {
        if (isprime[i])
        {
            for (int j = i * i; j < n; j = j + i)
            {
                isprime[j] = false;
            }
        }
    }
    for (int i = 2; i < n; i++)
    {
        if (isprime[i])
        {
            count++;
        }
    }
    return count;
}



// this is written by me
bool prime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int counting(int c)

{
    int count = 0;
    for (int i = 2; i <= c; i++) // equal to is necessary because it will check for that very number for example if 31 is prime then it will also check for 31

    {
        if (prime(i) == 1)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int a = 17;
    // cout << prime(a);
    cout << counting(a);
    return 0;
}




















