#pragma once
#include <iostream>
#include <iomanip>
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
    char* GetName();
    unsigned int GetCourse();
    unsigned int GetNumberOfGroup();
    unsigned int GetNumberOfCreditCard();
    void SetName(char* name_1);
    void SetNumberOfGroup(unsigned int number_of_group_1);
    void SetNumberOfCreditCard(unsigned int number_of_credit_card_1);
};
class StudentAfterFirstSession: public Student
{
protected:
    unsigned int marks[4];
public:
    StudentAfterFirstSession(char* name_1, unsigned int course_1, unsigned int number_of_group_1, unsigned int number_of_credit_card_1,
                             unsigned int first_mark, unsigned int second_mark, unsigned int third_mark, unsigned int forth_mark);
    StudentAfterFirstSession(const Student &copy, const StudentAfterFirstSession &copy1);
    friend ostream& operator<<(ostream& out, const StudentAfterFirstSession &studentAfterFirstSession);
    virtual double GetAveragePoint();
};
class StudentAfterSecondSession: public StudentAfterFirstSession
{
protected:
    unsigned int marks_2[5];
public:
    StudentAfterSecondSession(char* name_1, unsigned int course_1, unsigned int number_of_group_1, unsigned int number_of_credit_card_1,
                              unsigned int first_mark, unsigned int second_mark, unsigned int third_mark, unsigned int forth_mark,
                              unsigned int first_mark_2, unsigned int second_mark_2, unsigned int third_mark_2, unsigned int forth_mark_2, unsigned int fifth_mark_2);
    StudentAfterSecondSession(const Student &copy, const StudentAfterFirstSession &copy1,
                              const StudentAfterSecondSession &copy2);
    friend ostream& operator<<(ostream& out, const StudentAfterSecondSession &studentAfterSecondSession);
    double GetAveragePoint() override;
};
void solution();
