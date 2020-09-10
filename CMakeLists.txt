cmake_minimum_required(VERSION 3.10)
project(Cpp)

add_definitions(-Wall)
set(CMAKE_CXX_STANDARD 11)

set(googleTestDir lib/googletest)

#Add the google test subdirectory
add_subdirectory(${googleTestDir})
#include googletest/include dir
include_directories(${googleTestDir}/googletest/include)
#include the googlemock/include dir
include_directories(${googleTestDir}/googlemock/include)


#add_executable(Cpp main.cpp)
#add_executable(1.4 SelfLearning/1.4.cpp)
#add_executable(1.5.1 SelfLearning/1.5.1.cpp)
#add_executable(1.6.1 SelfLearning/1.6.1.cpp)
#add_executable(1.16.1 SelfLearning/1.16.1.cpp)
#add_executable(1.18 SelfLearning/1.18.h)

#add_executable(1.18_head SelfLearning/1.18_head.h)
#add_executable(1.18_cpp SelfLearning/1.18_cpp.cpp)
#add_executable(1.18_c SelfLearning/1.18_c.c)
#add_executable(3.4.1.1 "SelfLearning/chapter 3/4.1.1.1.cpp")
#add_executable(3.4.1.2 "SelfLearning/chapter 3/4.1.1.2.cpp")
#add_executable(3.4.1.1.3 "SelfLearning/chapter 3/4.1.1.3.cpp")
#add_executable(3.4.1.3.1 "SelfLearning/chapter 3/4.1.3.1.cpp")
#add_executable(4.2.1.1 "SelfLearning/chapter 3/4.2.1.1.cpp")
#add_executable(4.2.2.1 "SelfLearning/chapter 3/4.2.2.1.cpp")
#add_executable(4.2.3.1 "SelfLearning/chapter 3/4.2.3.1.cpp")

#practical 01
#add_executable(main-1-1 Practical/week1/main-1-1.cpp Practical/week1/function-1-1.cpp)
#add_executable(main-1-2 Practical/week1/main-1-2.cpp Practical/week1/function-1-2.cpp)
#add_executable(main-1-3 Practical/week1/main-1-3.cpp Practical/week1/function-1-3.cpp)
#add_executable(main-1-4 Practical/week1/main-1-4.cpp Practical/week1/function-1-4.cpp)
#add_executable(main-1-5 Practical/week1/main-1-5.cpp Practical/week1/function-1-5.cpp)
#add_executable(main-2-1 Practical/week1/main-2-1.cpp Practical/week1/function-2-1.cpp)
#add_executable(main-2-2 Practical/week1/main-2-2.cpp Practical/week1/function-2-2.cpp)
#add_executable(main-2-3 Practical/week1/main-2-3.cpp Practical/week1/function-2-3.cpp)
#add_executable(main-2-4 Practical/week1/main-2-4.cpp Practical/week1/function-2-4.cpp)
#add_executable(main-2-5 Practical/week1/main-2-5.cpp Practical/week1/function-2-5.cpp)
#add_executable(main-3-1 Practical/week1/main-3-1.cpp Practical/week1/function-3-1.cpp)
#add_executable(main-3-2 Practical/week1/main-3-2.cpp Practical/week1/function-3-2.cpp)
#add_executable(main-3-3 Practical/week1/main-3-3.cpp Practical/week1/function-3-3.cpp)
#add_executable(main-3-4 Practical/week1/main-3-4.cpp Practical/week1/function-3-4.cpp)
#add_executable(main-3-5 Practical/week1/main-3-5.cpp Practical/week1/function-3-5.cpp)

#practical 02

#add_executable(main-1-1 Practical/week2/main-1-1.cpp Practical/week2/function-1-1.cpp)
#add_executable(main-1-2 Practical/week2/main-1-2.cpp Practical/week2/function-1-2.cpp)
#add_executable(main-1-3 Practical/week2/main-1-3.cpp Practical/week2/function-1-3.cpp)
#add_executable(main-1-4 Practical/week2/main-1-4.cpp Practical/week2/function-1-4.cpp)
#add_executable(main-1-5 Practical/week2/main-1-5.cpp Practical/week2/function-1-5.cpp)
#add_executable(main-2-1 Practical/week2/main-2-1.cpp Practical/week2/function-2-1.cpp)
#add_executable(main-2-2 Practical/week2/main-2-2.cpp Practical/week2/function-2-2.cpp)
#add_executable(main-2-3 Practical/week2/main-2-3.cpp Practical/week2/function-2-3.cpp)
#add_executable(main-2-4 Practical/week2/main-2-4.cpp Practical/week2/function-2-4.cpp)

#TMP_TEST
#add_executable(T001 tmp/T001.cpp Practical/week1/main-3-1.cpp)
#add_executable(T002 tmp/T002.cpp Practical/week1/main-2-4.cpp)
#add_executable(T003 tmp/T003.cpp Practical/week1/main-2-4.cpp)
#add_executable(T003-t tmp/T003.cpp tmp/T004-main.cpp)
#add_executable(T003-t1 Practical/week1/function-2-4.cpp tmp/T004-main.cpp)

#GTest setup
#https://my.oschina.net/miclewang/blog/1806435
#https://www.jetbrains.com/help/clion/creating-google-test-run-debug-configuration-for-test.html#code-gen-menu

#set(practical02_test
#        Practical/Test/practical02_test.cpp
#        Practical/week2/function-1-1.cpp
#        Practical/week2/function-1-2.cpp
#        Practical/week2/function-1-3.cpp
#        Practical/week2/function-1-4.cpp
#        Practical/week2/function-1-5.cpp
#        Practical/week2/function-2-1.cpp
#        Practical/week2/function-2-2.cpp
#        Practical/week2/function-2-3.cpp
#        Practical/week2/function-2-4.cpp
#        )

#add_executable(GTest ${practical02_test})


#add_executable(transform workshop/week2/transform.cpp)
#add_executable(arithmetic workshop/week2/arithmetic.cpp)
#add_executable(T005 tmp/T005.cpp)
#add_executable(function-1-1 workshop/week3/function-1-1.cpp)
#set(workshop_3_test
#        Test/workshop-3-test.cpp
#        workshop/week3/function-1-1.cpp
#        workshop/week3/function-1-2.cpp)
#add_executable(GTest ${workshop_3_test})

#set(practical04_test
#        Practical/Test/practical04_test.cpp
#        Practical/week4/function-1-1.cpp
#        Practical/week4/function-1-3.cpp
#        Practical/week4/function-1-4.cpp
#        Practical/week4/function-2-1.cpp
#        Practical/week4/function-2-2.cpp
#        )
#add_executable(GTest ${practical04_test})

#set(workshop4
#        Test/workshop-4-test.cpp
#        workshop/week4/function-1-1.cpp
##        workshop/week4/function-1-4.cpp
#        workshop/week4/function-1-5.cpp
#        workshop/week4/function-1-12.cpp
#        workshop/week4/function-2-1.cpp
#        workshop/week4/function-2-3.cpp
#        workshop/week4/function-2-4.cpp
#        )
#add_executable(GTest ${workshop4})
#set(workshop5
#        Test/workshop-5-test.cpp
#        workshop/week5/function-1-1.cpp
#        workshop/week5/function-2-1.cpp
#        workshop/week5/function-3-1.cpp
#        workshop/week5/function-3-2.cpp
#        workshop/week5/function-4-1.cpp
#)
#add_executable(GTest ${workshop5})
#set(practical6_test
#        Practical/Test/practical06_test.cpp
#        Practical/week6/meerkat.h
#        Practical/week6/meerkat.cpp
#        Practical/week6/person.h
#        Practical/week6/person.cpp
#        Practical/week6/cart.h
#        Practical/week6/cart.cpp
#        Practical/week6/aircraft.h
#        Practical/week6/aircraft.cpp
#        )
#add_executable(GTest ${practical6_test})
#set(workshop6_test
#        workshop/week6/Book.h
#        workshop/week6/Book.cpp
#        workshop/week6/Library.h
#        workshop/week6/Library.cpp
#        workshop/week6/main.cpp
#        )
#add_executable(GTest ${workshop6_test})
#set(prac_exam_03_pr3
#        practical/Test/practical_exam_03_PR3_test.cpp
#        Practical/practical_exam/exam3-PR3/Stock_item.cpp
#        Practical/practical_exam/exam3-PR3/Stock_item.h
#        practical/practical_exam/exam3-PR3/Store.h
#        practical/practical_exam/exam3-PR3/Store.cpp
#        )
#add_executable(GTest ${prac_exam_03_pr3})

set(prac_exam_03_pr12
        practical/practical_exam/exam3-PR12/Unit.h
        practical/practical_exam/exam3-PR12/Unit.cpp
        practical/practical_exam/exam3-PR12/Condo.h
        practical/practical_exam/exam3-PR12/Condo.cpp
        )
add_executable(GTest ${prac_exam_03_pr12})
add_compile_definitions(GTest_ignore)
target_link_libraries(GTest gtest gtest_main)
target_link_libraries(GTest gmock gmock_main)

#add_executable(function-1-2 Practical/week4/function-1-2.cpp)
#add_executable(T006 tmp/T006.cpp)


#add_executable(7.2.1 "SelfLearning/chapter 7/7.2.1.cpp")
#add_executable(7.4.1 "SelfLearning/chapter 7/7.4.1.cpp")
#add_executable(7.5.1 "SelfLearning/chapter 7/7.5.1.cpp")
#add_executable(7.6 "SelfLearning/chapter 7/7.6.cpp")
#add_executable(7.7 "SelfLearning/chapter 7/7.7.cpp")
#add_executable(7.8 "SelfLearning/chapter 7/7.8.cpp")
#add_executable(8.2 SelfLearning/chapter8/8.2.cpp)
#add_executable(8.4 SelfLearning/chapter8/8.4.cpp)
#add_executable(8.8.1 SelfLearning/chapter8/8.8.1.cpp)
#add_executable(8.8.2 SelfLearning/chapter8/8.8.2.cpp)
#add_executable(function-1-1 tmp/prac-exam-02/function-2-1.cpp)
#add_executable(function-3-1 tmp/prac-exam-02/function-3-1.cpp)
#add_executable(function-3-2 tmp/prac-exam-02/function-3-2.cpp)
#add_executable(function-4-1 tmp/prac-exam-02/function-4-1.cpp)
#add_executable(4.2.5.1 "SelfLearning/chapter 3/4.2.5.1.cpp")
#add_executable(4.2.6.1 "SelfLearning/chapter 3/4.2.6.1.cpp")
#add_executable(4.6.2 "SelfLearning/chapter 3/4.6.2.cpp")
#add_executable(4.6.8 "SelfLearning/chapter 3/4.6.8.cpp")
#add_executable(5a2b703dc5e2845c0900005a SelfLearning/codewars/5a2b703dc5e2845c0900005a.cpp)
#add_executable(55a70521798b14d4750000a4 SelfLearning/codewars/55a70521798b14d4750000a4.cpp)
#add_executable(563e320cee5dddcf77000158 SelfLearning/codewars/563e320cee5dddcf77000158.cpp)
#add_executable(563089b9b7be03472d00002b SelfLearning/codewars/563089b9b7be03472d00002b.cpp)