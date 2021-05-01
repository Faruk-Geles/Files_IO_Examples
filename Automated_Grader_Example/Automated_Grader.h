#ifndef _AUTOMATED_GRADER_H_
#define  _AUTOMATED_GRADER_H_

#include <iostream>
#include <iomanip>

const int total_width{40};
const int field1_width{30};  //student name
const int field2_width{10};  //score

//print header line with student name and score
void print_header() ;

//print the footer with the average score 
void print_footer(double average_score);

//return the number of correct answers
int process_responce(std::string & response, std::string & solution);

//calculates the obtained score by a student
void print_student(std::string & student_name, int score);

#endif // _AUTOMATED_GRADER_H_