//
// Created by 刘鹏 on 2021/1/12.
//

#ifndef DATAPIPELINE_LIUPENGFILE_H
#define DATAPIPELINE_LIUPENGFILE_H

#include <iostream>
#include <string>
#include <fstream>

class LiupengFile {

private:
    std::string filePath;

    std::string fileName;

public:
    const std::string &getFilePath() const;

    void setFilePath(const std::string &filePath);

    const std::string &getFileName() const;

    void setFileName(const std::string &fileName);

    int createFile();
};


#endif //DATAPIPELINE_LIUPENGFILE_H
