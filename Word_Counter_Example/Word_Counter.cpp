#include "Word_Counter.h"


//return true if the string word_to_find is in the target string
bool find_substring(std::string & word_to_find, std::string & target_string) {
    //check if a word is contained in another word
    //so if it is not equal to npos(noposition)
    return target_string.find(word_to_find) != std::string::npos;
    /*
     std::size_t found = text_word.find(word_to_find)
     if(found==std::string::npos)
        return false
    else
        return true
     */
}

std::fstream get_infile() {
    std::string filename{};
    std::fstream in_file{};
    
    std::cout <<"Enter file name: > " ;
    std::cin>>filename;
    
    in_file.open(filename);
    if(!in_file) {
        //std::cout<<"Problem opening file"<<std::endl;
        //return 1;
        throw std::string{"Problem opening file"}; 
    }
    return in_file;
}
