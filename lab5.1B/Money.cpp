#include "Money.h"

#include <iostream>
#include <string>
#include <sstream>

int Money::setFiveHundred(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 500 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    fiveHundred = n;
    return 0;
}

int Money::setTwoHundred(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 200 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    twoHundred = n;
    return 0;
}

int Money::setOneHundred(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 100 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    oneHundred = n;
    return 0;
}

int Money::setFifty(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 50 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    fifty = n;
    return 0;
}

int Money::setTwenty(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 20 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    twenty = n;
    return 0;
}

int Money::setTen(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 10 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    ten = n;
    return 0;
}

int Money::setFive(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 5 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    five = n;
    return 0;
}

int Money::setTwo(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 2 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    two = n;
    return 0;
}

int Money::setOne(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 1 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    one = n;
    return 0;
}

int Money::setFiftyCoins(int c) {
    if (c < 0) {
        std::cerr << "Error: Number of 50 kopiyka coins cannot be negative.\n";
        exit(1);
    }
    fiftyCoins = c;
    return 0;
}

int Money::setTwentyFiveCoins(int c) {
    if (c < 0) {
        std::cerr << "Error: Number of 25 kopiyka coins cannot be negative.\n";
        exit(1);
    }
    twentyFiveCoins = c;
    return 0;
}

int Money::setTenCoins(int c) {
    if (c < 0) {
        std::cerr << "Error: Number of 10 kopiyka coins cannot be negative.\n";
        exit(1);
    }
    tenCoins = c;
    return 0;
}

int Money::setFiveCoins(int c) {
    if (c < 0) {
        std::cerr << "Error: Number of 5 kopiyka coins cannot be negative.\n";
        exit(1);
    }
    fiveCoins = c;
    return 0;
}

int Money::setTwoCoins(int c) {
    if (c < 0) {
        std::cerr << "Error: Number of 2 kopiyka coins cannot be negative.\n";
        exit(1);
    }
    twoCoins = c;
    return 0;
}

int Money::setOneCoin(int c) {
    if (c < 0) {
        std::cerr << "Error: Number of 1 kopiyka coins cannot be negative.\n";
        exit(1);
    }
    oneCoin = c;
    return 0;
}

std::string Money::toString() const {
    std::stringstream sout;
    sout << "500 uah: " << fiveHundred << ", ";
    sout << "200 uah: " << twoHundred << ", ";
    sout << "100 uah: " << oneHundred << ", ";
    sout << "50 uah: " << fifty << ", ";
    sout << "20 uah: " << twenty << ", ";
    sout << "10 uah: " << ten << ", ";
    sout << "5 uah: " << five << ", ";
    sout << "2 uah: " << two << ", ";
    sout << "1 uah: " << one << ", ";
    sout << "50 kopiyka: " << fiftyCoins << ", ";
    sout << "25 kopiyka: " << twentyFiveCoins << ", ";
    sout << "10 kopiyka: " << tenCoins << ", ";
    sout << "5 kopiyka: " << fiveCoins << ", ";
    sout << "2 kopiyka: " << twoCoins << ", ";
    sout << "1 kopiyka: " << oneCoin;

    return sout.str();
}

Money::~Money() { }

Money::Money(const Money& m) {
    fiveHundred = m.fiveHundred;
    twoHundred = m.twoHundred;
    oneHundred = m.oneHundred;
    fifty = m.fifty;
    twenty = m.twenty;
    ten = m.ten;
    five = m.five;
    two = m.two;
    one = m.one;
    fiftyCoins = m.fiftyCoins;
    twentyFiveCoins = m.twentyFiveCoins;
    tenCoins = m.tenCoins;
    fiveCoins = m.fiveCoins;
    twoCoins = m.twoCoins;
    oneCoin = m.oneCoin;
}

Money::Money(int fiveHundredO, int twoHundredO, int oneHundredO, int fiftyO, int twentyO, int tenO, int fiveO, int twoO, int oneO,
    int fiftyCoinsO, int twentyFiveCoinsO, int tenCoinsO, int fiveCoinsO, int twoCoinsO, int oneCoinO) {
    setFiveHundred(fiveHundredO);
    setTwoHundred(twoHundredO);
    setOneHundred(oneHundredO);
    setFifty(fiftyO);
    setTwenty(twentyO);
    setTen(tenO);
    setFive(fiveO);
    setTwo(twoO);
    setOne(oneO);

    setFiftyCoins(fiftyCoinsO);
    setTwentyFiveCoins(twentyFiveCoinsO);
    setTenCoins(tenCoinsO);
    setFiveCoins(fiveCoinsO);
    setTwoCoins(twoCoinsO);
    setOneCoin(oneCoinO);
}

Money::Money() {
    setFiveHundred(0);
    setTwoHundred(0);
    setOneHundred(0);
    setFifty(0);
    setTwenty(0);
    setTen(0);
    setFive(0);
    setTwo(0);
    setOne(0);

    setFiftyCoins(0);
    setTwentyFiveCoins(0);
    setTenCoins(0);
    setFiveCoins(0);
    setTwoCoins(0);
    setOneCoin(0);
}

istream& operator >> (istream& in, Money& r) {
    std::cout << "Enter the number of banknotes for each denomination:\n";
    std::cout << "500: "; in >> r.fiveHundred;
    std::cout << "200: "; in >> r.twoHundred;
    std::cout << "100: "; in >> r.oneHundred;
    std::cout << "50: "; in >> r.fifty;
    std::cout << "20: "; in >> r.twenty;
    std::cout << "10: "; in >> r.ten;
    std::cout << "5: "; in >> r.five;
    std::cout << "2: "; in >> r.two;
    std::cout << "1: "; in >> r.one;

    std::cout << "Enter the number of coins for each denomination:\n";
    std::cout << "50 kopiyka: "; in >> r.fiftyCoins;
    std::cout << "25 kopiyka: "; in >> r.twentyFiveCoins;
    std::cout << "10 kopiyka: "; in >> r.tenCoins;
    std::cout << "5 kopiyka: "; in >> r.fiveCoins;
    std::cout << "2 kopiyka: "; in >> r.twoCoins;
    std::cout << "1 kopiyka: "; in >> r.oneCoin;
    cout << endl;
    return in;
}


Money::operator string () const
{
    stringstream ss;
    ss << "Banknotes:\n";
    ss << "500: " << getFiveHundred() << std::endl;
    ss << "200: " << getTwoHundred() << std::endl;
    ss << "100: " << getOneHundred() << std::endl;
    ss << "50: " << getFifty() << std::endl;
    ss << "20: " << getTwenty() << std::endl;
    ss << "10: " << getTen() << std::endl;
    ss << "5: " << getFive() << std::endl;
    ss << "2: " << getTwo() << std::endl;
    ss << "1: " << getOne() << std::endl;

    ss << "Coins:\n";
    ss << "50 kopiyka: " << getFiftyCoins() << std::endl;
    ss << "25 kopiyka: " << getTwentyFiveCoins() << std::endl;
    ss << "10 kopiyka: " << getTenCoins() << std::endl;
    ss << "5 kopiyka: " << getFiveCoins() << std::endl;
    ss << "2 kopiyka: " << getTwoCoins() << std::endl;
    ss << "1 kopiyka: " << getOneCoin() << std::endl;

    return ss.str();
}

double operator/(const Money& m, const Money& m1) {
    double res;
    res = m.total / m1.total;
    return res;
}

Money operator/(Money& m, double divisor) {
    if (divisor == 0.0) {
        throw MyException("Division by zero");
    }
    m.total /= divisor;
    return m;
}

double Money::operator+() { 
    total = 0.0;

    total += fiveHundred * 500;
    total += twoHundred * 200;
    total += oneHundred * 100;
    total += fifty * 50;
    total += twenty * 20;
    total += ten * 10;
    total += five * 5;
    total += two * 2;
    total += one;

    total += fiftyCoins * 0.5;
    total += twentyFiveCoins * 0.25;
    total += tenCoins * 0.1;
    total += fiveCoins * 0.05;
    total += twoCoins * 0.02;
    total += oneCoin * 0.01;

    return total;
}

bool operator==(const Money& m, const Money& m1) {
    return (m.total == m1.total);
}

bool operator>=(const Money& m, const Money& m1) {
    return (m.total >= m1.total);
}

bool operator<=(const Money& m, const Money& m1) {
    return (m.total <= m1.total);
}

bool operator>(const Money& m, const Money& m1) {
    return (m.total > m1.total);
}

bool operator<(const Money& m, const Money& m1) {
    return (m.total < m1.total);
}

bool operator!=(const Money& m, const Money& m1) {
    return (m.total != m1.total);
}

std::string Money::displayTotal() const {
    std::stringstream sout;

    std::string totalStr = std::to_string(total);
    size_t decimalPos = totalStr.find('.');
    if (decimalPos != std::string::npos) {
        totalStr[decimalPos] = ',';
    }

    sout << "Total amount: " << totalStr;
    return sout.str();
}

ostream& operator << (ostream& out, const Money& r)
{
    out << string(r);
    return out;
}

Money& Money::operator ++() {
    total++;
    return *this;
}

Money& Money::operator --() {
    total--;
    return *this;
}

Money Money::operator ++(int) {
    Money n(*this);
    fiveHundred++;
    return n;
}

Money Money::operator --(int) {
    Money n(*this);
    fiveHundred--;
    return n;
}

Money& Money::operator = (const Money& m) {
    fiveHundred = m.fiveHundred;
    twoHundred = m.twoHundred;
    oneHundred = m.oneHundred;
    fifty = m.fifty;
    twenty = m.twenty;
    ten = m.ten;
    five = m.five;
    two = m.two;
    one = m.one;
    fiftyCoins = m.fiftyCoins;
    twentyFiveCoins = m.twentyFiveCoins;
    tenCoins = m.tenCoins;
    fiveCoins = m.fiveCoins;
    twoCoins = m.twoCoins;
    oneCoin = m.oneCoin;

    return *this;
}