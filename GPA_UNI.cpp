#include <iostream>

using namespace std;

int sum_credits(int* credits, int size, int index) {
    if (index == size)
        return 0;
    return credits[index] + sum_credits(credits, size, ++index); // Use ++index
}

double GPA(double* mark, int* credits, int size, int index) {
    if (index == size) {
        return 0;
    }
    return credits[index] * mark[index] + GPA(mark, credits, size, ++index); // Use ++index
}

int main() {
    double mark[] = {7, 8, 5.9, 8, 5.1, 5.7, 7, 5.5, 8, 7, 6.5, 6.3, 7.5, 7.8, 5.8, 7.8,8.7,8};
    int credits[] = {4, 4, 4, 4, 4, 4, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4,4,4};
    int size = 18;
    
    int sum_cre = sum_credits(credits, size, 0);
    cout << "Total Credits: " << sum_cre << endl;
    
    double res = GPA(mark, credits, size, 0);
    cout << "Total Weighted GPA Score: " << res << endl;
    
    double final_gpa = res / sum_cre;
    cout << "Final GPA: " << final_gpa << endl;
    
    return 0;   
}

// Hello dang tao conflict, alllllllaalalalalal
// Hello dang tao conflict nonononononononon
