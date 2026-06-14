cmake_minimum_required(VERSION 3.19.1)
# Looking back this project was as horrible mistake
# when creating this I was demonizing std::string during my school years
project("HBuffer")
add_library(${PROJECT_NAME} INTERFACE ${SOURCES}})
target_include_directories(${PROJECT_NAME} INTERFACE include/)
