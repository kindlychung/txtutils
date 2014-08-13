#include "fileExists.h"

// [[Rcpp::export]]
void fileExists (const std::string& name) {
    if ( access( name.c_str(), F_OK ) == -1 ) {
        throw std::string("File does not exist!");
    }
}

