#include "Automated_Grader.h"

//const int total_width{40};
//const int field1_width{30};  //student name
//const int field2_width{10};  //score

void print_header() {
    std::cout <<std::setw(field1_width)<<std::left<<"Student Name " 
                        <<std::setw(field2_width)<<std::right<< "Score" << std::endl;
    std::cout<<std::setw(total_width)<<std::setfill('-')<<""<<std::endl;
    std::cout<<std::setfill(' ');
}

void print_footer(double average_score) {
    std::cout<<std::setw(total_width)<<std::setfill('-') <<"" <<std::endl;
    std::cout<<std::setfill(' ');
    std::cout <<std::setw(field1_width)<<std::left<<"Average score "
                        <<std::setw(field2_width)<<std::right<<average_score<<std::endl;
}

int process_responce(std::string & response, std::string & solution) {
        int score =0;
        for(size_t i=0; i<response.size(); i++) {
            if(solution.at(i)==response.at(i))
                ++score;
        }
        return score;
}

void print_student(std::string & student_name, int score) {
    std::cout<<std::setprecision(1)<<std::fixed;
    std::cout<<std::setw(field1_width)<<std::left<<student_name
                      <<std::setw(field2_width)<<std::right<<score<<std::endl;
}

