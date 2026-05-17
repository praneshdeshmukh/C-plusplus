#include <iostream>
#include <vector>


// typedef std::vector<std::pair<std::string, int>> pailist_t;
typedef std::string text_t;
typedef int number_t;

int main() {
    // using namespace std; 
    text_t firstName = "Pranesh";
    std::cout<<firstName<<'\n';
    
    // pailist_t pairwise;
    
    number_t age = 22;
    std::cout<< "age " <<age<<'\n';
    
    int x=3.14;
    std::cout<<x<<'\n';
    double y = 3.14;
    std::cout<<y<<'\n';
    double explicitConversion = (int) 3.14; 
    std::cout<<explicitConversion<<'\n';

    std::cout<<(char) 100<<'\n';
    std::cout<<(char) 65<<'\n';
    std::cout<<(char) 55<<'\n';

    int correct = 8;
    int question = 10;
    double percentage =  correct/(double)question * 100;
    std::cout<<percentage<<'%'<<'\n';
    std::string name = "Pranesh";

    std::cout<< "hello "<< name <<'\n';
}