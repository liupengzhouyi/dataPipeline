cmake_minimum_required(VERSION 3.17)
project(dataPipeline)

set(CMAKE_CXX_STANDARD 20)

add_executable(dataPipeline main.cpp models/LiupengLogModel.cpp models/LiupengLogModel.h models/GetNowTime.cpp models/GetNowTime.h models/LiupengFile.cpp models/LiupengFile.h)