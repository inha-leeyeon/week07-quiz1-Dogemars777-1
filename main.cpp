#include <iostream>
#include <iomanip>
#include <string>
#include <stdexcept>

using namespace std;


//quiz 1
//class CommissionEmployee
//{
//public:
//    CommissionEmployee(const std::string&, const std::string&,
//        const std::string&, double = 0.0, double = 0.0);
//
//    void setFirstName(const std::string&);
//    std::string getFirstName() const;
//
//    void setLastName(const std::string&);
//    std::string getLastName() const;
//
//    void setSocialSecurityNumber(const std::string&);
//    std::string getSocialSecurityNumber() const;
//
//    void setGrossSales(double);
//    double getGrossSales() const;
//
//    void setCommissionRate(double);
//    double getCommissionRate() const;
//
//    double earnings() const;
//    void print() const;
//private:
//    std::string firstName;
//    std::string lastName;
//    std::string socialSecurityNumber;
//    double grossSales;
//    double commissionRate;
//};
//
//class BasePlusCommissionEmployee : public CommissionEmployee
//{
//public:
//    BasePlusCommissionEmployee(const std::string&, const std::string&,
//        const std::string&, double = 0.0, double = 0.0, double = 0.0);
//
//    void setBaseSalary(double);
//    double getBaseSalary() const;
//
//    double earnings() const;
//    void print() const;
//private:
//    double baseSalary;
//};
//
//CommissionEmployee::CommissionEmployee(
//    const string& first, const string& last, const string& ssn,
//    double sales, double rate)
//{
//    firstName = first;
//    lastName = last;
//    socialSecurityNumber = ssn;
//    setGrossSales(sales);
//    setCommissionRate(rate);
//}
//
//void CommissionEmployee::setFirstName(const string& first)
//{
//    firstName = first;
//}
//
//string CommissionEmployee::getFirstName() const
//{
//    return firstName;
//}
//
//void CommissionEmployee::setLastName(const string& last)
//{
//    lastName = last;
//}
//
//string CommissionEmployee::getLastName() const
//{
//    return lastName;
//}
//
//void CommissionEmployee::setSocialSecurityNumber(const string& ssn)
//{
//    socialSecurityNumber = ssn;
//}
//
//string CommissionEmployee::getSocialSecurityNumber() const
//{
//    return socialSecurityNumber;
//}
//
//void CommissionEmployee::setGrossSales(double sales)
//{
//    if (sales >= 0.0)
//    {
//        grossSales = sales;
//    }
//    else
//    {
//        throw invalid_argument("Gross sales must be >= 0.0");
//    }
//}
//
//double CommissionEmployee::getGrossSales() const
//{
//    return grossSales;
//}
//
//void CommissionEmployee::setCommissionRate(double rate)
//{
//    if (rate > 0.0 && rate < 1.0)
//    {
//        commissionRate = rate;
//    }
//    else
//    {
//        throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
//    }
//}
//
//double CommissionEmployee::getCommissionRate() const
//{
//    return commissionRate;
//}
//
//double CommissionEmployee::earnings() const
//{
//    return commissionRate * grossSales;
//}
//
//void CommissionEmployee::print() const
//{
//    cout << "commission employee: " << firstName << ' ' << lastName
//        << "\nsocial security number: " << socialSecurityNumber
//        << "\ngross sales: " << grossSales
//        << "\ncommission rate: " << commissionRate;
//}
//
//BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string& first, const string& last,
//    const string& ssn, double sales, double rate, double salary)
//    : CommissionEmployee(first, last, ssn, sales, rate)
//{
//    setBaseSalary(salary);
//}
//
//void BasePlusCommissionEmployee::setBaseSalary(double salary)
//{
//    baseSalary = (salary < 0.0) ? 0.0 : salary;
//}
//
//double BasePlusCommissionEmployee::getBaseSalary() const
//{
//    return baseSalary;
//}
//
//double BasePlusCommissionEmployee::earnings() const
//{
//    return baseSalary + CommissionEmployee::earnings();
//}
//
//void BasePlusCommissionEmployee::print() const
//{
//    cout << "base-salaried ";
//    CommissionEmployee::print();
//    cout << "\nbase salary: " << baseSalary;
//}
//
//int main()
//{
//    BasePlusCommissionEmployee employee("Bob", "Lewis", "333-33-3333", 5000, .04, 300);
//
//    cout << fixed << setprecision(2);
//
//    cout << "Employee information obtained by get functions: \n"
//        << "\nFirst name is " << employee.getFirstName()
//        << "\nLast name is " << employee.getLastName()
//        << "\nSocial security number is "
//        << employee.getSocialSecurityNumber()
//        << "\nGross sales is " << employee.getGrossSales()
//        << "\nCommission rate is " << employee.getCommissionRate()
//        << "\nBase salary is " << employee.getBaseSalary() << endl;
//
//    employee.setBaseSalary(1000);
//
//    cout << "\nUpdated employee information output by print function: \n"
//        << endl;
//    employee.print();
//
//    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
//}


//quiz 2


//class Point
//{
//    int x, y;
//public:
//    Point(int x, int y)
//    {
//        this->x = x;
//        this->y = y;
//    }
//    int getX()
//    {
//        return x;
//    }
//    int getY()
//    {
//        return y;
//    }
//    void setPoint(int x, int y)
//    {
//        this->x = x;
//        this->y = y;
//    }
//    void show()
//    {
//        cout << "(" << x << "," << y << ")";
//    }
//};
//
//class ColorPoint : public Point
//{
//    string color;
//public:
//    ColorPoint() : Point(0, 0)
//    {
//        this->color = "BLACK";
//    }
//
//    ColorPoint(int x, int y) : Point(x, y)
//    {
//        this->color = "BLACK";
//    }
//
//    ColorPoint(int x, int y, string color) : Point(x, y)
//    {
//        this->color = color;
//    }
//
//    void setColor(string color)
//    {
//        this->color = color;
//    }
//
//    void show()
//    {
//        cout << color << "색으로";
//        Point::show();
//        cout << "에 위치한 점 입니다." << endl;
//    }
//};
//
//int main()
//{
//    ColorPoint zeroPoint;
//    zeroPoint.show();
//
//    ColorPoint cp(5, 5);
//    cp.show();
//    cp.setPoint(10, 20);
//    cp.setColor("BLUE");
//    cp.show();
//
//    ColorPoint cp2(10, 10, "RED");
//    cp2.show();
//
//    return 0;
//}



//quiz 3




//class Product
//{
//protected:
//    int id;
//    string description;
//    string maker;
//    int price;
//
//public:
//    Product() : id(0), price(0) {}
//    virtual ~Product() {}
//
//    virtual void show() = 0;
//    virtual void getInput(int id) = 0;
//};
//
//class CompactDisc : public Product
//{
//private:
//    string albumTitle;
//    string artist;
//
//public:
//    CompactDisc() {}
//
//    void getInput(int id) override
//    {
//        this->id = id;
//        cout << "상품설명>>";
//        getline(cin, description);
//        cout << "생산자>>";
//        getline(cin, maker);
//        cout << "가격>>";
//        cin >> price;
//        cin.ignore();
//        cout << "앨범제목>>";
//        getline(cin, albumTitle);
//        cout << "가수>>";
//        getline(cin, artist);
//    }
//
//    void show() override
//    {
//        cout << "--- 상품ID : " << id << endl;
//        cout << "상품설명: " << description << endl;
//        cout << "생산자: " << maker << endl;
//        cout << "가격: " << price << endl;
//        cout << "앨범제목: " << albumTitle << endl;
//        cout << "가수: " << artist << endl;
//    }
//};
//
//class Book : public Product
//{
//protected:
//    string isbn;
//    string author;
//    string title;
//
//public:
//    Book() {}
//
//    void getInput(int id) override
//    {
//        this->id = id;
//        cout << "상품설명>>";
//        getline(cin, description);
//        cout << "생산자>>";
//        getline(cin, maker);
//        cout << "가격>>";
//        cin >> price;
//        cin.ignore();
//        cout << "책제목>>";
//        getline(cin, title);
//        cout << "저자>>";
//        getline(cin, author);
//        cout << "ISBN>>";
//        getline(cin, isbn);
//    }
//
//    void show() override
//    {
//        cout << "--- 상품ID : " << id << endl;
//        cout << "상품설명: " << description << endl;
//        cout << "생산자: " << maker << endl;
//        cout << "가격: " << price << endl;
//        cout << "ISBN: " << isbn << endl;
//        cout << "책제목: " << title << endl;
//        cout << "저자: " << author << endl;
//    }
//};
//
//class ConversationBook : public Book
//{
//private:
//    string language;
//
//public:
//    ConversationBook() {}
//
//    void getInput(int id) override
//    {
//        this->id = id;
//        cout << "상품설명>>";
//        getline(cin, description);
//        cout << "생산자>>";
//        getline(cin, maker);
//        cout << "가격>>";
//        cin >> price;
//        cin.ignore();
//        cout << "책제목>>";
//        getline(cin, title);
//        cout << "저자>>";
//        getline(cin, author);
//        cout << "언어>>";
//        getline(cin, language);
//        cout << "ISBN>>";
//        getline(cin, isbn);
//    }
//
//    void show() override
//    {
//        cout << "--- 상품ID : " << id << endl;
//        cout << "상품설명: " << description << endl;
//        cout << "생산자: " << maker << endl;
//        cout << "가격: " << price << endl;
//        cout << "ISBN: " << isbn << endl;
//        cout << "책제목: " << title << endl;
//        cout << "저자: " << author << endl;
//        cout << "언어: " << language << endl;
//    }
//};
//
//int main()
//{
//    Product* products[100];
//    int productCount = 0;
//
//    cout << "***** 상품 관리 프로그램을 작동합니다 *****" << endl;
//
//    while (true)
//    {
//        cout << "상품 추가(1), 모든 상품 조회(2), 끝내기(3) ? ";
//        int menu;
//        cin >> menu;
//
//        if (menu == 1)
//        {
//            cout << "상품 종류 책(1), 음악CD(2), 회화책(3) ? ";
//            int type;
//            cin >> type;
//            cin.ignore();
//
//            if (type == 1)
//            {
//                products[productCount] = new Book();
//            }
//            else if (type == 2)
//            {
//                products[productCount] = new CompactDisc();
//            }
//            else if (type == 3)
//            {
//                products[productCount] = new ConversationBook();
//            }
//            else
//            {
//                cout << "잘못된 입력입니다." << endl;
//                continue;
//            }
//
//            products[productCount]->getInput(productCount);
//            productCount++;
//
//        }
//        else if (menu == 2)
//        {
//            for (int i = 0; i < productCount; ++i)
//            {
//                products[i]->show();
//            }
//        }
//        else if (menu == 3)
//        {
//            break;
//        }
//        else
//        {
//            cout << "잘못된 메뉴 선택입니다." << endl;
//        }
//    }
//
//    for (int i = 0; i < productCount; ++i)
//    {
//        delete products[i];
//    }
//
//    return 0;
//}


