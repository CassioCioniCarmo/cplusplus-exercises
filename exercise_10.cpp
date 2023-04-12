/**
    Exercise - 10: Class


    Sample Input
    15
    john
    carmack
    10

    Sample Output
    15
    carmack, john
    10

    15,john,carmack,10

    Cassio Cioni Carmo - 04/12/2023
**/
#include <iostream>
#include <sstream>

class Student {
    private:
        int m_age;
        int m_standart;
        std::string m_first_name;
        std::string m_last_name;
        std::string m_concatenate;
        
    public:
        void set_age(int t_age) {
            m_age = t_age;
        }
        void set_standard(int t_standart) {
            m_standart = t_standart;
        }
        void set_first_name(std::string t_first_name) {
            m_first_name = t_first_name;
        }
        void set_last_name(std::string t_last_name) {
            m_last_name = t_last_name;
        }
        
        
        int get_age() {
            return m_age;
        }
        int get_standard() {
            return m_standart;
        }
        std::string get_first_name() {
            return m_first_name;
        }
        std::string get_last_name() {
            return m_last_name;
        }
        
        std::string to_string(){
            m_concatenate = std::to_string(m_age) + "," + m_first_name + "," + m_last_name + "," + std::to_string(m_standart);
            
            return m_concatenate;
        }

};

int main() {
    int age, standard;
    std::string first_name, last_name;
    
    std::cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    std::cout << st.get_age() << "\n";
    std::cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    std::cout << st.get_standard() << "\n";
    std::cout << "\n";
    std::cout << st.to_string();
    
    return 0;
}