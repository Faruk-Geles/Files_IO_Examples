//Word counter example
#include <iostream>
#include <stdio.h>
#include <fstream>
#include "Word_Counter.h"

int main()
{
	
    std::fstream in_file;
    std::string word_to_find{};
    std::string text_words;
    int match_count{};
    int word_count{};

    try {
        in_file = get_infile();
        //while(in_file.get(c)) {
        //    std::cout<<c<<std::endl;
        //}
        
        std::cout<<"Enter the substring to search for:> ";
        std::cin>>word_to_find;
        while(in_file>>text_words) {
            ++word_count;
            if(find_substring(word_to_find,  text_words)) {
                ++match_count;
            }
        }
        
        std::cout <<word_count<< " words were searched... "<<std::endl;
        std::cout <<"The substring "<< word_to_find <<" was found "<<match_count <<" times"<<std::endl;
        in_file.close();
    } catch(std::string & ex) {
        std::cerr << ex << std::endl;
    }
    
	return 0;
}
