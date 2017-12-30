cmake_minimum_required(VERSION 2.8.9)
project(test)

include_directories(include)
file(GLOB SOURCE "src/*.cpp")

add_library(module1 SHARED ${SOURCE})

#add_executable(test ${SOURCE})

#set the location for library installation --i.e /usr/lib in this case
#not really neccessaty in this example. Use "sudo make install" to apply
install(TARGETS module1 DESTINATION ~/output)

