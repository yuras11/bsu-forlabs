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
char* Student::GetName()
{
    return name;
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
void Student::SetName(char* name_1)
{
    name = name_1;
}
void Student::SetNumberOfGroup(unsigned int number_of_group_1)
{
    number_of_group = number_of_group_1;
}
void Student::SetNumberOfCreditCard(unsigned int number_of_credit_card_1)
{
    number_of_credit_card = number_of_credit_card_1;
}

StudentAfterFirstSession::StudentAfterFirstSession(char* name_1, unsigned int course_1, unsigned int number_of_group_1,
                                                   unsigned int number_of_credit_card_1, unsigned int first_mark, unsigned int second_mark,
                                                   unsigned int third_mark, unsigned int forth_mark):
        Student(name_1, course_1, number_of_group_1, number_of_credit_card_1)
        {
    marks[0] = first_mark;
    marks[1] = second_mark;
    marks[2] = third_mark;
    marks[3] = forth_mark;
}
StudentAfterFirstSession::StudentAfterFirstSession(const Student &copy, const StudentAfterFirstSession &copy1): Student(copy)
{
    this->marks[0] = copy1.marks[0];
    this->marks[1] = copy1.marks[1];
    this->marks[2] = copy1.marks[2];
    this->marks[3] = copy1.marks[3];
}
double StudentAfterFirstSession::GetAveragePoint()
{
    double average_point = static_cast<double>(marks[0] + marks[1] + marks[2] + marks[3])/4;
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
    marks_2[0] = first_mark_2;
    marks_2[1] = second_mark_2;
    marks_2[2] = third_mark_2;
    marks_2[3] = forth_mark_2;
    marks_2[4] = fifth_mark_2;
}

StudentAfterSecondSession::StudentAfterSecondSession(const Student &copy, const StudentAfterFirstSession &copy1,
                                                     const StudentAfterSecondSession &copy2): StudentAfterFirstSession(copy1)
{
    this->marks_2[0] = copy2.marks_2[0];
    this->marks_2[1] = copy2.marks_2[1];
    this->marks_2[2] = copy2.marks_2[2];
    this->marks_2[3] = copy2.marks_2[3];
    this->marks_2[4] = copy2.marks_2[4];
}
double StudentAfterSecondSession::GetAveragePoint()
{
    double average_point = static_cast<double>(marks[0] + marks[1] + marks[2] + marks[3] +
            marks_2[0] + marks_2[1] + marks_2[2] + marks_2[3] + marks_2[4])/9;
    return average_point;
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
    out << studentAfterFirstSession.name << "\'s marks after the first session:" << endl;
    out << "Programming:" << "  " << studentAfterFirstSession.marks[0] << endl;
    out << "Geometry:" << "  " << studentAfterFirstSession.marks[1] << endl;
    out << "Algebra:" << "  " << studentAfterFirstSession.marks[2] << endl;
    out << "Maths analysis:" << "  " << studentAfterFirstSession.marks[3] << endl;
}
ostream& operator<<(ostream& out, const StudentAfterSecondSession &studentAfterSecondSession)
{
    out << studentAfterSecondSession.name << "\'s marks after the second session:" << endl;
    out << "Programming:" << "  " << studentAfterSecondSession.marks_2[0] << endl;
    out << "Geometry:" << "  " << studentAfterSecondSession.marks_2[1] << endl;
    out << "Algebra:" << "  " << studentAfterSecondSession.marks_2[2] << endl;
    out << "Maths analysis:" << "  " << studentAfterSecondSession.marks_2[3] << endl;
    out << "Maths logic:" << "  " << studentAfterSecondSession.marks_2[4] << endl;
}
void solution()
{
    Student yuriy("Yuriy", 1, 4, 5638438);
    cout << endl;
    cout << yuriy;
    StudentAfterFirstSession yuriy_after_first_session("Yuriy", 1, 4, 5638438, 10, 10, 10, 10);
    cout << endl;
    cout << yuriy_after_first_session;
    StudentAfterSecondSession yuriy_after_second_session("Yuriy", 1, 8, 5638438, 10, 10, 10, 10, 10, 10, 10, 10, 10);
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
    Student zhora("Zhora", 1, 4, 2587295);
    cout << endl;
    cout << zhora;
    StudentAfterFirstSession zhora_after_first_session("Zhora", 1, 4, 2587295, 9, 10, 9, 10);
    cout << endl;
    cout << zhora_after_first_session;
    StudentAfterSecondSession zhora_after_second_session("Zhora", 1, 4, 2587295, 9, 10, 9, 10, 9, 10, 10, 10, 10);
    cout << endl;
    cout << zhora_after_second_session;
    cout << endl;
    cout << "The average point in a group after the first session is:" << endl;
    cout << fixed << setprecision(1) << (yuriy_after_first_session.GetAveragePoint() + neYuriy_after_first_session.GetAveragePoint() + zhora_after_first_session.GetAveragePoint())/3 << endl;
    cout << "The average point in a group after the second session is :" << endl;
    cout << fixed << setprecision(1) << (yuriy_after_second_session.GetAveragePoint() + neYuriy_after_second_session.GetAveragePoint() + zhora_after_second_session.GetAveragePoint())/3 << endl;
    Student* array[9];
    array[0] = &yuriy;
    array[1] = &yuriy_after_first_session;
    array[2] = &yuriy_after_second_session;
    array[3] = &neYuriy;
    array[4] = &neYuriy_after_first_session;
    array[5] = &neYuriy_after_second_session;
    array[6] = &zhora;
    array[7] = &zhora_after_first_session;
    array[8] = &zhora_after_second_session;
}
