#ifndef UTILITY_H
#define UTILITY_H

class Utility {
public:
    // Constructor
    Utility();

    // Destructor
    ~Utility();

    // A sample member function that returns a greeting message
    std::string getGreeting() const;

    // A sample member function that adds two integers
    int add(int a, int b) const;
};

#endif // UTILITY_H
