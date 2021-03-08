
//
// Created by 刘鹏 on 08/03/2021.
//

#ifndef DATAPIPELINE_GETCSSFILEINFORMATION_H
#define DATAPIPELINE_GETCSSFILEINFORMATION_H


#include <vector>
#include <string>
#include "../CssPath/CSSPath.h"

class GetCssFileInformation {

private:

    CSSPath cssPath;

    std::vector<std::string> cssCode;

public:

    GetCssFileInformation();

    const CSSPath &getCssPath() const;

    void setCssPath(const CSSPath &cssPath);

    const std::vector<std::string> &getCssCode() const;

    void addCode();
};


#endif //DATAPIPELINE_GETCSSFILEINFORMATION_H
