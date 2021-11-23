#include "class.h"
Student::Student(char* name_1, unsigned int course_1, unsigned int number_of_group_1, unsigned int number_of_credit_card_1):
        name(name_1), course(course_1), number_of_group(number_of_group_1), number_of_credit_card(number_of_credit_card_1) {
    this->id = count;
    count++;
}
unsigned int Student::count = 1;
Student::Student(const Student &copy)
{
    this->id = copy.id;
    this->name = copy.name;
    this->course = copy.course;
    this->number_of_group = copy.number_of_group;
    this->number_of_credit_card = copy.number_of_credit_card;
}
unsigned int Student::GetID()
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
double Student::fill_in_the_array()
{
    array_of_pointers[0] = &id;
    array_of_pointers[1] = &course;
    array_of_pointers[2] = &number_of_group;
    array_of_pointers[3] = &number_of_credit_card;
    double average_point = 0;
    for (int i = 0; i < 4; i++)
    {
        average_point += *array_of_pointers[i];
    }
    return average_point;
}
StudentAfterFirstSession::StudentAfterFirstSession(char* name_1, unsigned int course_1, unsigned int number_of_group_1,
                                                   unsigned int number_of_credit_card_1, unsigned int first_mark, unsigned int second_mark,
                                                   unsigned int third_mark, unsigned int forth_mark):
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
unsigned int StudentAfterFirstSession::GetFirstMark()
{
    return *marks[0];
}
unsigned int StudentAfterFirstSession::GetSecondMark()
{
    return *marks[1];
}
unsigned int StudentAfterFirstSession::GetThirdMark()
{
    return *marks[2];
}
unsigned int StudentAfterFirstSession::GetForthMark()
{
    return *marks[3];
}
double StudentAfterFirstSession::GetAveragePoint()
{
    double average_point = static_cast<double>(*marks[0] + *marks[1] + *marks[2] + *marks[3])/4;
    return average_point;
}
double StudentAfterFirstSession::fill_in_the_array()
{
    array_of_pointers[4] = marks[0];
    array_of_pointers[5] = marks[1];
    array_of_pointers[6] = marks[2];
    array_of_pointers[7] = marks[3];
    double average_point = 0;
    for (int i = 4; i < 8; i++)
    {
        average_point += *array_of_pointers[i];
    }
    return average_point;
}
StudentAfterSecondSession::StudentAfterSecondSession(char *name_1, unsigned int course_1,
                                                     unsigned int number_of_group_1,
                                                     unsigned int number_of_credit_card_1, unsigned int first_mark,
                                                     unsigned int second_mark, unsigned int third_mark, unsigned int forth_mark,
                                                     unsigned int first_mark_2, unsigned int second_mark_2, unsigned int third_mark_2,
                                                     unsigned int forth_mark_2, unsigned int fifth_mark_2):
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
unsigned int StudentAfterSecondSession::GetFirstMark_2()
{
    return *marks_2[0];
}
unsigned int StudentAfterSecondSession::GetSecondMark_2()
{
    return *marks_2[1];
}
unsigned int StudentAfterSecondSession::GetThirdMark_2()
{
    return *marks_2[2];
}
unsigned int StudentAfterSecondSession::GetForthMark_2()
{
    return *marks_2[3];
}
unsigned int StudentAfterSecondSession::GetFifthMark_2()
{
    return *marks_2[4];
}
double StudentAfterSecondSession::GetAveragePoint()
{
    double average_point = static_cast<double>(*marks_2[0] + *marks_2[1] + *marks_2[2] + *marks_2[3] + *marks_2[4])/5;
    return average_point;
}
double StudentAfterSecondSession::fill_in_the_array()
{
    array_of_pointers[8] = marks_2[0];
    array_of_pointers[9] = marks_2[1];
    array_of_pointers[10] = marks_2[2];
    array_of_pointers[11] = marks_2[3];
    array_of_pointers[12] = marks_2[4];
    double average_point = 0;
    for (int i = 8; i < 13; i++)
    {
        average_point += *array_of_pointers[i];
    }
    return average_point;
}
double StudentAfterSecondSession::GetYearAveragePoint(StudentAfterFirstSession* &s, StudentAfterSecondSession* & s1)
{
    return (s->GetAveragePoint() + s1->GetAveragePoint())/2;
}
double StudentAfterSecondSession::GetAveragePointOfTheArray(Student* &s, StudentAfterFirstSession* &s1, StudentAfterSecondSession* &s2)
{
    return (s->fill_in_the_array() + s1->fill_in_the_array() + s2->fill_in_the_array());
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
    StudentAfterFirstSession yuriy_after_first_session("Yuriy", 1, 4, 6743647, 10, 10, 10, 10);
    cout << endl;
    cout << yuriy_after_first_session;
    StudentAfterSecondSession yuriy_after_second_session("Yuriy", 1, 4, 6743647, 10, 10, 10, 10, 10, 10, 10, 10, 10);
    cout << endl;
    cout << yuriy_after_second_session;
    Student neYuriy("neYuriy", 1, 4, 6567343);
    cout << endl;
    cout << neYuriy;
    StudentAfterFirstSession neYuriy_after_first_session("neYuriy", 1, 4, 6567343, 5, 7, 8, 9);
    cout << endl;
    cout << neYuriy_after_first_session;
    StudentAfterSecondSession neYuriy_after_second_session("neYuriy", 1, 4, 6567343, 5, 7, 8, 9, 9, 8, 7, 10, 10);
    cout << endl;
    cout << neYuriy_after_second_session;
    cout << endl;
}
