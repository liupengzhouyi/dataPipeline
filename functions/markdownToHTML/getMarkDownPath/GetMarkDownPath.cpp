//
// Created by 刘鹏 on 08/03/2021.
//

#include "GetMarkDownPath.h"

const std::string &GetMarkDownPath::getMarkDownPath() const {
    return markDownPath;
}

void GetMarkDownPath::setMarkDownPath(const std::string &markDownPath) {
    GetMarkDownPath::markDownPath = markDownPath;
}

bool GetMarkDownPath::isNoPath() {
    return 0 == this->getMarkDownPath().length();
}
