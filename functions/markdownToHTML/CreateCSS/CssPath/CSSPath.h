//
// Created by 刘鹏 on 08/03/2021.
//

#ifndef DATAPIPELINE_CSSPATH_H
#define DATAPIPELINE_CSSPATH_H


#include <string>

class CSSPath {

private:
    std::string CssPath;

public:

    CSSPath();

    const std::string &getCssPath();

    void setCssPath(std::string &cssPath);

};


#endif //DATAPIPELINE_CSSPATH_H
