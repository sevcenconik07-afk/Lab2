

#include <iostream>

struct Prices 
{
    int drinkPrice = 10;

    int firstPrices = 20;

    int secondPrices = 30;
};

struct  ClientChoice
{
  public:
      ClientChoice(int drink, int first, int second) : drink{ drink }, first{ first }, second{second}
      {}
   int drink ;
   int first;
   int second;

   int orderTotalPrice;

   
};

int ToCheckNumber(int CheckNumber) 
{
    if (CheckNumber > 100000) 
    {
        return 100000;
    }
    else if(CheckNumber < 0)
    {
        return 0;
    }

    return CheckNumber;
}

int ToGetOrder(Prices prices,ClientChoice clientChoise) 
{
   return (clientChoise.drink * prices.drinkPrice)
    + (clientChoise.first * prices.firstPrices) + (clientChoise.second * prices.secondPrices);

}
void ToGiveOrder() 
{
    for (int i = 0; i < 2; i++)
    {

        std::cout << "Drink" << std::endl;

        std::cin >> drink;

        std::cout << "First" << std::endl;

        std::cin >> first;

        std::cout << "Second" << std::endl;

        std::cin >> second;

        ClientChoice clientChoise{ ToCheckNumber(drink),ToCheckNumber(first),ToCheckNumber(second) };

        clientChoise.orderTotalPrice = ToGetOrder(prices, clientChoise);

        std::cout << clientChoise.orderTotalPrice << std::endl;
    }
}

int main()
{
    std::cout << "Hello World!\n";
    int drink, first, second;

    Prices prices;

    ToGiveOrder();
}


