//
// Created by 刘鹏 on 08/03/2021.
//

#include "MdToH5Index.h"
#include "getMarkDownPath/GetMarkDownPath.h"
#include "getMarkDownFile/GetMarkDownFile.h"
#include "CreateCSS/CssPath/CSSPath.h"
#include "CreateCSS/GetCssFileInformation/GetCssFileInformation.h"
#include "CreateCSS/CreateCSS.h"
#include "HtmlTranslation/ToHtmlH/ToHtmlH.h"

void MdToH5Index::index() {

    std::string cssPath = "/Users/liupeng/CLionProjects/dataPipeline/files/liupeng.txt";
    std::string path = "/Users/liupeng/CLionProjects/dataPipeline/files/liupeng.txt";
    GetMarkDownPath *getMarkDownPath = new GetMarkDownPath();
    getMarkDownPath->setMarkDownPath(path);
    std::cout << getMarkDownPath->getMarkDownPath() << std::endl;

    GetMarkDownFile *getMarkDownFile = new GetMarkDownFile();
    getMarkDownFile->setGetMarkDownPath(*getMarkDownPath);
    getMarkDownFile->getMarkdownFile();

    for (auto s : getMarkDownFile->getMarkdownInformation()) {
        std::cout << ": " << s << std::endl;
    }



    CreateCSS *createCss = new CreateCSS();
    createCss->setCssPathString(cssPath);
    createCss->init();
    for (auto s : createCss->getCode()) {
        std::cout << s <<std::endl;
    }

    ToHtmlH *toHtmlH = new ToHtmlH();
    toHtmlH->setMarkdownCode("## asd  ");
    toHtmlH->translation();
    std::cout << toHtmlH->getHtmlCode() << std::endl;









}