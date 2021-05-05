#ifndef _WORD_COUNTER_H_
#define  _WORD_COUNTER_H_

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

//return true if the string word_to_find is in the target string
bool find_substring(std::string & word_to_find, std::string & target_string);

//return in_file object if exists else an exception
std::fstream get_infile();

#endif  //_WORD_COUNTER_H_