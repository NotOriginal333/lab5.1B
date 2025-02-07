#pragma once
#include <string>
#include <sstream>
#include "MyException.h"

using namespace std;

class Money
{
private:
	double total;

	int fiveHundred;
	int twoHundred;
	int oneHundred;
	int fifty;
	int twenty;
	int ten;
	int five;
	int two;
	int one;

	int fiftyCoins;
	int twentyFiveCoins;
	int tenCoins;
	int fiveCoins;
	int twoCoins;
	int oneCoin;

public:
	Money();
	Money(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);
	Money(const Money& m);
	~Money();

	int setFiveHundred(int n);
	int setTwoHundred(int n);
	int setOneHundred(int n);
	int setFifty(int n);
	int setTwenty(int n);
	int setTen(int n);
	int setFive(int n);
	int setTwo(int n);
	int setOne(int n);

	int setFiftyCoins(int c);
	int setTwentyFiveCoins(int c);
	int setTenCoins(int c);
	int setFiveCoins(int c);
	int setTwoCoins(int c);
	int setOneCoin(int c);

	int getFiveHundred() const { return fiveHundred; };
	int getTwoHundred() const { return twoHundred; };
	int getOneHundred() const { return oneHundred; };
	int getFifty() const { return fifty; };
	int getTwenty() const { return twenty; };
	int getTen() const { return ten; };
	int getFive() const { return five; };
	int getTwo() const { return two; };
	int getOne() const { return one; };

	int getFiftyCoins() const { return fiftyCoins; };
	int getTwentyFiveCoins() const { return twentyFiveCoins; };
	int getTenCoins() const { return tenCoins; };
	int getFiveCoins() const { return fiveCoins; };
	int getTwoCoins() const { return twoCoins; };
	int getOneCoin() const { return oneCoin; };

	double getTotal() const { return total; };

	double operator+();

	friend double operator/(const Money&, const Money& m1);
	friend Money operator/(Money& m, double divisor);
	friend bool operator==(const Money&, const Money&);
	friend bool operator>=(const Money&, const Money& m1);
	friend bool operator<=(const Money&, const Money& m1);
	friend bool operator>(const Money&, const Money& m1);
	friend bool operator<(const Money&, const Money& m1);
	friend bool operator!=(const Money&, const Money& m1);

	operator string() const;

	friend ostream& operator << (ostream&, const Money&);
	friend istream& operator >> (istream&, Money&);

	Money& operator ++();
	Money& operator --();
	Money operator ++(int);
	Money operator --(int);

	std::string displayTotal() const;
	std::string toString() const;
	Money& operator = (const Money& m);
};

