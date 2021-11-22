#pragma once
#include <iostream>
using namespace std;
class Student
{
protected:
    int id;
    char* name;
    int course;
    int number_of_group;
    int number_of_credit_card;
    static int count;
public:
    Student(char* name_1, unsigned int course_1, unsigned int number_of_group_1, unsigned int number_of_credit_card_1);
    Student(const Student &copy);
    friend ostream& operator<<(ostream& out, const Student &student);
    int GetID();
    int GetCourse();
    int GetNumberOfGroup();
    int GetNumberOfCreditCard();
    int **array_of_pointers;
    virtual double fill_in_the_array();
};
class StudentAfterFirstSession: public Student
{
protected:
    int *marks[4];
public:
    StudentAfterFirstSession(char* name_1, unsigned int course_1, unsigned int number_of_group_1, unsigned int number_of_credit_card_1,
                             int first_mark, int second_mark, int third_mark, int forth_mark);
    StudentAfterFirstSession(const StudentAfterFirstSession &copy, const StudentAfterFirstSession &copy1);
    friend ostream& operator<<(ostream& out, const StudentAfterFirstSession &studentAfterFirstSession);
    int GetFirstMark();
    int GetSecondMark();
    int GetThirdMark();
    int GetForthMark();
    virtual double GetAveragePoint();
    double fill_in_the_array() override;
};
class StudentAfterSecondSession: public StudentAfterFirstSession
{
protected:
    int* marks_2[5];
public:
    StudentAfterSecondSession(char* name_1, unsigned int course_1, unsigned int number_of_group_1, unsigned int number_of_credit_card_1,
                              int first_mark, int second_mark, int third_mark, int forth_mark,
                              int first_mark_2, int second_mark_2, int third_mark_2, int forth_mark_2, int fifth_mark_2);
    StudentAfterSecondSession(const StudentAfterFirstSession &copy, const StudentAfterFirstSession &copy1,
                              const StudentAfterSecondSession &copy2);
    friend ostream& operator<<(ostream& out, const StudentAfterSecondSession &studentAfterSecondSession);
    int GetFirstMark_2();
    int GetSecondMark_2();
    int GetThirdMark_2();
    int GetForthMark_2();
    int GetFifthMark_2();
    double GetAveragePoint() override;
    double GetYearAveragePoint(StudentAfterFirstSession* &s, StudentAfterSecondSession* &s1);
    double fill_in_the_array() override;
    double GetAveragePointOfTheArray(Student* &s, StudentAfterFirstSession* &s1, StudentAfterSecondSession* &s2);
};
void solution();
