//
// Created by 刘鹏 on 08/03/2021.
//

#ifndef DATAPIPELINE_GETMARKDOWNPATH_H
#define DATAPIPELINE_GETMARKDOWNPATH_H
#include <iostream>
#include <string>


class GetMarkDownPath {

private:
    std::string markDownPath;

public:

    const std::string &getMarkDownPath() const;

    void setMarkDownPath(const std::string &markDownPath);

    bool isNoPath();
};


#endif //DATAPIPELINE_GETMARKDOWNPATH_H
