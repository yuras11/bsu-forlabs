#include "class.h"
Student::Student(char* name_1, unsigned int course_1, unsigned int number_of_group_1, unsigned int number_of_credit_card_1):
        name(name_1), course(course_1), number_of_group(number_of_group_1), number_of_credit_card(number_of_credit_card_1) {
    this->id = count;
    count++;
}
int Student::count = 1;
Student::Student(const Student &copy)
{
    this->id = copy.id;
    this->name = copy.name;
    this->course = copy.course;
    this->number_of_group = copy.number_of_group;
    this->number_of_credit_card = copy.number_of_credit_card;
}
int Student::GetID()
{
    return id;
}
unsigned int Student::GetCourse()
{
    return course;
}
unsigned int Student::GetNumberOfGroup()
{
    return number_of_group;
}
unsigned int Student::GetNumberOfCreditCard()
{
    return number_of_credit_card;
}
StudentAfterFirstSession::StudentAfterFirstSession(char* name_1, unsigned int course_1, unsigned int number_of_group_1,
                                                   unsigned int number_of_credit_card_1, int first_mark, int second_mark, int third_mark, int forth_mark):
        Student(name_1, course_1, number_of_group_1, number_of_credit_card_1)
        {
    marks[0] = &first_mark;
    marks[1] = &second_mark;
    marks[2] = &third_mark;
    marks[3] = &forth_mark;
}
StudentAfterFirstSession::StudentAfterFirstSession(const StudentAfterFirstSession &copy, const StudentAfterFirstSession &copy1): Student(copy)
{
    this->marks[0] = copy1.marks[0];
    this->marks[1] = copy1.marks[1];
    this->marks[2] = copy1.marks[2];
    this->marks[3] = copy1.marks[3];
}
int StudentAfterFirstSession::GetFirstMark()
{
    return *marks[0];
}
int StudentAfterFirstSession::GetSecondMark()
{
    return *marks[1];
}
int StudentAfterFirstSession::GetThirdMark()
{
    return *marks[2];
}
int StudentAfterFirstSession::GetForthMark()
{
    return *marks[3];
}
double StudentAfterFirstSession::GetAveragePoint()
{
    double average_point = static_cast<double>(*marks[0] + *marks[1] + *marks[2] + *marks[3])/4;
    return average_point;
}
StudentAfterSecondSession::StudentAfterSecondSession(char *name_1, unsigned int course_1,
                                                     unsigned int number_of_group_1,
                                                     unsigned int number_of_credit_card_1, int first_mark,
                                                     int second_mark, int third_mark, int forth_mark,
                                                     int first_mark_2, int second_mark_2, int third_mark_2, int forth_mark_2, int fifth_mark_2):
        StudentAfterFirstSession(name_1, course_1, number_of_group_1, number_of_credit_card_1, first_mark, second_mark,
                                 third_mark, forth_mark){
    marks_2[0] = &first_mark_2;
    marks_2[1] = &second_mark_2;
    marks_2[2] = &third_mark_2;
    marks_2[3] = &forth_mark_2;
    marks_2[4] = &fifth_mark_2;
}

StudentAfterSecondSession::StudentAfterSecondSession(const StudentAfterFirstSession &copy, const StudentAfterFirstSession &copy1,
                                                     const StudentAfterSecondSession &copy2): StudentAfterFirstSession(copy1)
{
    this->marks_2[0] = copy2.marks_2[0];
    this->marks_2[1] = copy2.marks_2[1];
    this->marks_2[2] = copy2.marks_2[2];
    this->marks_2[3] = copy2.marks_2[3];
    this->marks_2[4] = copy2.marks_2[4];
}
int StudentAfterSecondSession::GetFirstMark_2()
{
    return *marks_2[0];
}
int StudentAfterSecondSession::GetSecondMark_2()
{
    return *marks_2[1];
}
int StudentAfterSecondSession::GetThirdMark_2()
{
    return *marks_2[2];
}
int StudentAfterSecondSession::GetForthMark_2()
{
    return *marks_2[3];
}
int StudentAfterSecondSession::GetFifthMark_2()
{
    return *marks_2[4];
}
double StudentAfterSecondSession::GetAveragePoint()
{
    double average_point = static_cast<double>(*marks_2[0] + *marks_2[1] + *marks_2[2] + *marks_2[3] + *marks_2[4])/5;
    return average_point;
}

double StudentAfterSecondSession::GetYearAveragePoint(StudentAfterFirstSession* &s, StudentAfterSecondSession* & s1)
{
    return (s->GetAveragePoint() + s1->GetAveragePoint())/2;
}

ostream& operator<<(ostream& out, const Student &student)
{
    out << "ID:" << "  " << student.id << endl;
    out << "Name:" << "  " << student.name << endl;
    out << "Course:" << "  " << student.course << endl;
    out << "Number of a group:" << "  " << student.number_of_group << endl;
    out << "Number of a credit card:" << "  " << student.number_of_credit_card << endl;
}
ostream& operator<<(ostream& out, const StudentAfterFirstSession &studentAfterFirstSession)
{
    out << "The marks after the first session:" << endl;
    out << "Programming:" << "  " << *studentAfterFirstSession.marks[0] << endl;
    out << "Geometry:" << "  " << *studentAfterFirstSession.marks[1] << endl;
    out << "Algebra:" << "  " << *studentAfterFirstSession.marks[2] << endl;
    out << "Maths analysis:" << "  " << *studentAfterFirstSession.marks[3] << endl;
    double average_point = static_cast<double>(*studentAfterFirstSession.marks[0] + *studentAfterFirstSession.marks[1] +
                                               *studentAfterFirstSession.marks[2] + *studentAfterFirstSession.marks[3])/4;
    out << "Average point is:" << "  " << average_point << endl;
}
ostream& operator<<(ostream& out, const StudentAfterSecondSession &studentAfterSecondSession)
{
    out << "The marks after the second session:" << endl;
    out << "Programming:" << "  " << *studentAfterSecondSession.marks_2[0] << endl;
    out << "Geometry:" << "  " << *studentAfterSecondSession.marks_2[1] << endl;
    out << "Algebra:" << "  " << *studentAfterSecondSession.marks_2[2] << endl;
    out << "Maths analysis:" << "  " << *studentAfterSecondSession.marks_2[3] << endl;
    out << "Maths logic:" << "  " << *studentAfterSecondSession.marks_2[4] << endl;
    double average_point = static_cast<double>(*studentAfterSecondSession.marks_2[0] + *studentAfterSecondSession.marks_2[1] +
                                               *studentAfterSecondSession.marks_2[2] + *studentAfterSecondSession.marks_2[3] +
                                               *studentAfterSecondSession.marks_2[4])/5;
    out << "Average point is:" << "  " << average_point << endl;
}
void solution()
{
    Student yuriy("Yuriy", 1, 4, 6743647);
    cout << endl;
    cout << yuriy;
    StudentAfterFirstSession yuriy_after_first_session("Yuriy", 1, 4, 1000, 10, 10, 10, 10);
    cout << endl;
    cout << yuriy_after_first_session;
    StudentAfterSecondSession yuriy_after_second_session("Yuriy", 1, 8, 76767, 10, 10, 10, 10, 10, 10, 10, 10, 10);
    cout << endl;
    cout << yuriy_after_second_session;
    Student neYuriy("neYuriy", 1, 4, 6567343);
    cout << endl;
    cout << neYuriy;
    StudentAfterFirstSession neYuriy_after_first_session("neYuriy", 1, 4, 6567343, 6, 5, 4, 8);
    cout << endl;
    cout << neYuriy_after_first_session;
    StudentAfterSecondSession neYuriy_after_second_session("neYuriy", 1, 4, 6567343, 6, 5, 4, 8, 7, 8, 5, 9, 10);
    cout << endl;
    cout << neYuriy_after_second_session;
}
