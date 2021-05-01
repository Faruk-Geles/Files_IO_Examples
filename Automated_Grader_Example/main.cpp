//Section 19
//Challenge 2
//Automated Grader
#include <stdio.h>
#include <iostream>
#include <fstream>
#include "Automated_Grader.h"

int main()
{
	std::fstream in_file;
    std::string solution{};
    std::string student_name{};
    std::string response{};
    int student_num;
    int total_score{};
    double average_score{};
    
    
    in_file.open("../Responses.txt");
    if(!in_file) {
        std::cerr<<"Problem opening file" <<std::endl;
    }
    
    std::getline(in_file, solution);
    print_header();

    
    //while(!in_file.eof()) {
    while(in_file>>student_name>>response) {
        //in_file>>student_name>>response;
        ++student_num;
        int score = process_responce(response, solution);
        total_score +=score;
        print_student(student_name,  score);
    }
    
    if(student_num!=0)
        average_score = static_cast<double>(total_score)/student_num;
    print_footer(average_score);
    
    in_file.close();
    std::cout<<std::endl;
	return 0;
}
