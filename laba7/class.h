#pragma once
#include <iostream>
using namespace std;
class Student
{
protected:
    unsigned int id;
    char* name;
    unsigned  int course;
    unsigned  int number_of_group;
    unsigned  int number_of_credit_card;
    static unsigned int count;
public:
    Student(char* name_1, unsigned int course_1, unsigned int number_of_group_1, unsigned int number_of_credit_card_1);
    Student(const Student &copy);
    friend ostream& operator<<(ostream& out, const Student &student);
    unsigned int GetID();
    unsigned int GetCourse();
    unsigned int GetNumberOfGroup();
    unsigned int GetNumberOfCreditCard();
    unsigned int **array_of_pointers;
    virtual double fill_in_the_array();
};
class StudentAfterFirstSession: public Student
{
protected:
    unsigned int *marks[4];
public:
    StudentAfterFirstSession(char* name_1, unsigned int course_1, unsigned int number_of_group_1, unsigned int number_of_credit_card_1,
                             unsigned int first_mark, unsigned int second_mark, unsigned int third_mark, unsigned int forth_mark);
    StudentAfterFirstSession(const StudentAfterFirstSession &copy, const StudentAfterFirstSession &copy1);
    friend ostream& operator<<(ostream& out, const StudentAfterFirstSession &studentAfterFirstSession);
    unsigned int GetFirstMark();
    unsigned int GetSecondMark();
    unsigned int GetThirdMark();
    unsigned int GetForthMark();
    virtual double GetAveragePoint();
    double fill_in_the_array() override;
};
class StudentAfterSecondSession: public StudentAfterFirstSession
{
protected:
    unsigned int* marks_2[5];
public:
    StudentAfterSecondSession(char* name_1, unsigned int course_1, unsigned int number_of_group_1, unsigned int number_of_credit_card_1,
                              unsigned int first_mark, unsigned int second_mark, unsigned int third_mark, unsigned int forth_mark,
                              unsigned int first_mark_2, unsigned int second_mark_2, unsigned int third_mark_2, unsigned int forth_mark_2, unsigned int fifth_mark_2);
    StudentAfterSecondSession(const StudentAfterFirstSession &copy, const StudentAfterFirstSession &copy1,
                              const StudentAfterSecondSession &copy2);
    friend ostream& operator<<(ostream& out, const StudentAfterSecondSession &studentAfterSecondSession);
    unsigned int GetFirstMark_2();
    unsigned int GetSecondMark_2();
    unsigned int GetThirdMark_2();
    unsigned int GetForthMark_2();
    unsigned int GetFifthMark_2();
    double GetAveragePoint() override;
    double GetYearAveragePoint(StudentAfterFirstSession* &s, StudentAfterSecondSession* &s1);
    double fill_in_the_array() override;
    double GetAveragePointOfTheArray(Student* &s, StudentAfterFirstSession* &s1, StudentAfterSecondSession* &s2);
};
void solution();
