cmake_minimum_required(VERSION 3.17.0)
project(dataPipeline)

set(CMAKE_CXX_STANDARD 20)

add_executable(dataPipeline 
main.cpp models/LiupengLogModel.cpp 
models/LiupengLogModel.h 
models/GetNowTime.cpp 
models/GetNowTime.h 
models/LiupengFile.cpp 
models/LiupengFile.h
functions/dairy/LiupengDairy.cpp
functions/dairy/LiupengDairy.h 
models/dairy/LiupengDairyModel.cpp 
models/dairy/LiupengDairyModel.h
functions/markdownToHTML/getMarkDownPath/GetMarkDownPath.cpp
functions/markdownToHTML/getMarkDownPath/GetMarkDownPath.h
functions/markdownToHTML/getMarkDownFile/GetMarkDownFile.cpp
functions/markdownToHTML/getMarkDownFile/GetMarkDownFile.h
functions/markdownToHTML/MdToH5Index.cpp
functions/markdownToHTML/MdToH5Index.h
functions/markdownToHTML/createHTML/CreateHtmlHead/CreateHtmlHead.cpp
functions/markdownToHTML/createHTML/CreateHtmlHead/CreateHtmlHead.h
functions/markdownToHTML/createHTML/CreateHtmlTail/CreateHtmlTail.cpp
functions/markdownToHTML/createHTML/CreateHtmlTail/CreateHtmlTail.h
functions/markdownToHTML/CreateCSS/CreateCSS.cpp
functions/markdownToHTML/CreateCSS/CreateCSS.h
functions/markdownToHTML/CreateCSS/CssPath/CSSPath.cpp
functions/markdownToHTML/CreateCSS/CssPath/CSSPath.h
functions/markdownToHTML/CreateCSS/GetCssFileInformation/GetCssFileInformation.cpp
functions/markdownToHTML/CreateCSS/GetCssFileInformation/GetCssFileInformation.h
functions/markdownToHTML/createHTML/CreateHtmlHeadWithCSS/CreateHtmlHeadWithCSS.cpp
functions/markdownToHTML/createHTML/CreateHtmlHeadWithCSS/CreateHtmlHeadWithCSS.h
functions/markdownToHTML/HtmlTranslation/ToHtmlH/ToHtmlH.cpp
functions/markdownToHTML/HtmlTranslation/ToHtmlH/ToHtmlH.h
functions/markdownToHTML/HtmlTranslation/ToHtmlP/ToHtmlP.cpp
functions/markdownToHTML/HtmlTranslation/ToHtmlP/ToHtmlP.h
functions/sayHello/SayHello/SayHello.cpp
functions/sayHello/SayHello/SayHello.h
functions/sayHello/SayHelloIndex.cpp
functions/sayHello/SayHelloIndex.h)

