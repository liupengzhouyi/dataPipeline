//
// Created by 刘鹏 on 08/03/2021.
//

#ifndef DATAPIPELINE_CREATEHTMLTAIL_H
#define DATAPIPELINE_CREATEHTMLTAIL_H

#include <string>
#include <vector>


class CreateHtmlTail {

private:
    std::vector<std::string> code;

public:
    CreateHtmlTail();

    void addHtmlCode(std::string code);

};


#endif //DATAPIPELINE_CREATEHTMLTAIL_H
