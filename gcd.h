//
// Created by yezhu on 2/2/2024.
//

#ifndef RSA_GCD_H
#define RSA_GCD_H


class GCD{
private:

    long a;
    long b;
    int step;
    long r;

    void compute_step();


public:
    //The default constructor
    GCD();
    //Initialize GCD with two long integer a and b.
    GCD(const long& a,const long& b);

    long run();

    void print_detail(const bool & detail);

    void print_complexity();

    void set_a(const long & a);

    void set_b(const long & b);

    void get_r(const long & b);

};



class ExtendedGCD{
private:

    long a;
    long b;
    int step;
    long r;

    void compute_step();


public:
    //The default constructor
    GCD(){};
    //Initialize GCD with two long integer a and b.
    GCD(const long& a,const long& b);

    long run();

    void print_detail(const bool & detail);

    void print_complexity();

    void set_a(const long & a);

    void set_b(const long & b);

    void get_r(const long & b);



};


#endif //RSA_GCD_H
