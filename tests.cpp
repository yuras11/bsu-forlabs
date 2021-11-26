#include "class.h"
#include "gtest/gtest.h"
TEST(test_GetID, test1)
{
    Student yuriy("Yuriy", 1, 4, 3037295);
    ASSERT_EQ(yuriy.GetID(), 1);
}
TEST(test_GetName, test2)
{
    Student yuriy("Yuriy", 1, 4, 3037295);
    ASSERT_EQ(yuriy.GetName(), "Yuriy");
}
TEST(test_GetCourse, test3)
{
    Student yuriy("Yuriy", 1, 4, 3037295);
    ASSERT_EQ(yuriy.GetCourse(), 1);
}
TEST(test_GetNumberOfGroup, test4)
{
    Student yuriy("Yuriy", 1, 4, 3037295);
    ASSERT_EQ(yuriy.GetNumberOfGroup(), 4);
}
TEST(test_GetNumberOfCreditCard, test5)
{
    Student yuriy("Yuriy", 1, 4, 3037295);
    ASSERT_EQ(yuriy.GetNumberOfCreditCard(), 3037295);
}
TEST(test_GetAveragePoint, test6)
{
    Student yuriy("Yuriy", 1, 4, 3037295);
    ASSERT_EQ(yuriy.GetAveragePoint(), 0);
}
TEST(test_GetID_1, test7)
{
    Student alesha("Alexey", 3, 12, 737373);
    ASSERT_EQ(alesha.GetID(), 7);
}
TEST(test_GetName_1, test8)
{
    Student alesha("Alexey", 3, 12, 737373);
    ASSERT_EQ(alesha.GetName(), "Alexey");
}
TEST(test_GetCourse_1, test9)
{
    Student alesha("Alexey", 3, 12, 737373);
    ASSERT_EQ(alesha.GetCourse(), 3);
}
TEST(test_GetNumberOfGroup_1, test10)
{
    Student alesha("Alexey", 3, 12, 737373);
    ASSERT_EQ(alesha.GetNumberOfGroup(), 12);
}
TEST(test_GetNmberOfCreditCard_1, test11)
{
    Student alesha("Alexey", 3, 12, 737373);
    ASSERT_EQ(alesha.GetNumberOfCreditCard(), 737373);
}
TEST(test_GetAveragePoint_1, test12)
{
    Student alesha("Alexey", 3, 12, 737373);
    ASSERT_EQ(alesha.GetAveragePoint(), 0);
}
TEST(test_GetFirstMark_1, test13)
{
    StudentAfterFirstSession yuriy_after_first_session("Yuriy", 1, 4, 454545, 10, 8, 9, 9);
    ASSERT_EQ(yuriy_after_first_session.GetMarks(1), 10);
}
TEST(test_GetSecondMark_1, test14)
{
    StudentAfterFirstSession yuriy_after_first_session("Yuriy", 1, 4, 454545, 10, 8, 9, 9);
    ASSERT_EQ(yuriy_after_first_session.GetMarks(2), 8);
}
TEST(test_GetThirdMark_1, test15)
{
    StudentAfterFirstSession yuriy_after_first_session("Yuriy", 1, 4, 454545, 10, 8, 9, 9);
    ASSERT_EQ(yuriy_after_first_session.GetMarks(3), 9);
}
TEST(test_GetforthMark_1, test16)
{
    StudentAfterFirstSession yuriy_after_first_session("Yuriy", 1, 4, 454545, 10, 8, 9, 9);
    ASSERT_EQ(yuriy_after_first_session.GetMarks(4), 9);
}
TEST(test_GetStudentsAveragepoint_1, test17)
{
    StudentAfterFirstSession yuriy_after_first_session("Yuriy", 1, 4, 454545, 10, 8, 9, 9);
    ASSERT_EQ(yuriy_after_first_session.GetAveragePoint(), 9);
}
TEST(test_GetFirstMark_2, test18)
{
    StudentAfterFirstSession student_after_first_session("Student", 3, 6, 646463, 5, 8, 9, 4);
    ASSERT_EQ(student_after_first_session.GetMarks(1), 5);
}
TEST(test_GetSecondMark_2, test19)
{
    StudentAfterFirstSession student_after_first_session("Student", 3, 6, 646463, 5, 8, 9, 4);
    ASSERT_EQ(student_after_first_session.GetMarks(2), 8);
}
TEST(test_GetThirdMark_2, test20)
{
    StudentAfterFirstSession student_after_first_session("Student", 3, 6, 646463, 5, 8, 9, 4);
    ASSERT_EQ(student_after_first_session.GetMarks(3), 9);
}
TEST(test_GetForthMark_2, test21)
{
    StudentAfterFirstSession student_after_first_session("Student", 3, 6, 646463, 5, 8, 9, 4);
    ASSERT_EQ(student_after_first_session.GetMarks(4), 4);
}
TEST(test_GetStudentsAveragePoint_2, test22)
{
    StudentAfterFirstSession student_after_first_session("Student", 3, 6, 646463, 5, 8, 9, 4);
    ASSERT_EQ(student_after_first_session.GetAveragePoint(), 6.5);
}
TEST(test_GetFirstMark_2_1, test23)
{
    StudentAfterSecondSession yuriy_after_second_session("Yuriy", 1, 4, 454545, 8, 9, 10, 10, 7, 8, 9, 7, 4);
    ASSERT_EQ(yuriy_after_second_session.GetMarks(1), 7);
}
TEST(test_GetSecondMark_2_1, test24)
{
    StudentAfterSecondSession yuriy_after_second_session("Yuriy", 1, 4, 454545, 8, 9, 10, 10, 7, 8, 9, 7, 4);
    ASSERT_EQ(yuriy_after_second_session.GetMarks(3), 9);
}
TEST(test_GetThirdMark_2_1, test25)
{
    StudentAfterSecondSession yuriy_after_second_session("Yuriy", 1, 4, 454545, 8, 9, 10, 10, 7, 8, 9, 7, 4);
    ASSERT_EQ(yuriy_after_second_session.GetMarks(3), 9);
}
TEST(test_GetForthMark_2_1, test26)
{
    StudentAfterSecondSession yuriy_after_second_session("Yuriy", 1, 4, 454545, 8, 9, 10, 10, 7, 8, 9, 7, 4);
    ASSERT_EQ(yuriy_after_second_session.GetMarks(4), 7);
}
TEST(test_GetFifthMark_2_1, test28)
{
    StudentAfterSecondSession yuriy_after_second_session("Yuriy", 1, 4, 454545, 8, 9, 10, 10, 7, 8, 9, 7, 4);
    ASSERT_EQ(yuriy_after_second_session.GetMarks(5), 4);
}
TEST(test_GetStudentsAveragePoint_2_1, test27)
{
    StudentAfterSecondSession yuriy_after_second_session("Yuriy", 1, 4, 454545, 8, 9, 10, 10, 7, 8, 9, 7, 4);
    ASSERT_EQ(yuriy_after_second_session.GetAveragePoint(), 8);
}
TEST(test_GetFirstMark_2_2, test29)
{
    StudentAfterSecondSession student_after_second_session("Yuriy", 3, 11, 646392, 5, 6, 7, 8, 9, 6, 8, 9, 10);
    ASSERT_EQ(student_after_second_session.GetMarks(1), 9);
}
TEST(test_GetSecondMark_2_2, test30)
{
    StudentAfterSecondSession student_after_second_session("Yuriy", 3, 11, 646392, 5, 6, 7, 8, 9, 6, 8, 9, 10);
    ASSERT_EQ(student_after_second_session.GetMarks(2), 6);
}
TEST(test_GetThirdMark_2_2, test31)
{
    StudentAfterSecondSession student_after_second_session("Yuriy", 3, 11, 646392, 5, 6, 7, 8, 9, 6, 8, 9, 10);
    ASSERT_EQ(student_after_second_session.GetMarks(3), 8);
}
TEST(test_GetForthMark_2_2, test32)
{
    StudentAfterSecondSession student_after_second_session("Yuriy", 3, 11, 646392, 5, 6, 7, 8, 9, 6, 8, 9, 10);
    ASSERT_EQ(student_after_second_session.GetMarks(4), 9);
}
TEST(test_GetFifthMark_2_2, test33)
{
    StudentAfterSecondSession student_after_second_session("Yuriy", 3, 11, 646392, 5, 6, 7, 8, 9, 6, 8, 9, 10);
    ASSERT_EQ(student_after_second_session.GetMarks(5), 10);
}
TEST(test_GetStudentsAveragePoint_2_2, test34)
{
    StudentAfterSecondSession student_after_second_session("Yuriy", 3, 11, 646392, 5, 6, 7, 8, 9, 6, 8, 9, 10);
    ASSERT_EQ(student_after_second_session.GetAveragePoint(), 7.6);
}
TEST(test_GroupsAverageMarkAfterFirstSession_1, tes35)
{
    vector<StudentAfterFirstSession*> array_1_session;
    StudentAfterFirstSession boris_after_first_session("Boris", 1, 4, 637232, 9, 8, 7, 10);
    StudentAfterFirstSession roma_after_first_session("Roman", 1, 4, 34567, 8, 8, 7, 9);
    StudentAfterFirstSession matvey_after_first_session("Matvey", 1, 3, 100038, 5, 6, 7, 8);
    array_1_session.push_back(&boris_after_first_session);
    array_1_session.push_back(&roma_after_first_session);
    array_1_session.push_back(&matvey_after_first_session);
    ASSERT_EQ(GroupsAveragePointAfterFirstSession(4, array_1_session), 8.3);
}
TEST(test_GroupsAverageMarkAfterFirstSession_2, test36)
{
    vector<StudentAfterFirstSession*> array_1_session;
    StudentAfterFirstSession boris_after_first_session("Boris", 1, 4, 637232, 9, 8, 7, 10);
    StudentAfterFirstSession roma_after_first_session("Roman", 1, 4, 34567, 8, 8, 7, 9);
    StudentAfterFirstSession matvey_after_first_session("Matvey", 1, 3, 100038, 5, 6, 7, 8);
    array_1_session.push_back(&boris_after_first_session);
    array_1_session.push_back(&roma_after_first_session);
    array_1_session.push_back(&matvey_after_first_session);
    ASSERT_EQ(GroupsAveragePointAfterFirstSession(3, array_1_session), 6.5);
}
TEST(test_GroupsAverageMarkAfterSecondSession_1, test37)
{
    vector<StudentAfterSecondSession*> array_2_session;
    StudentAfterSecondSession boris_after_second_session("Boris", 1, 4, 637232, 9, 8, 7, 10, 6, 7, 8, 9, 10);
    StudentAfterSecondSession roma_after_second_session("Roman", 1, 4, 34567, 8, 8, 7, 9, 5, 7, 8, 9, 7);
    StudentAfterSecondSession matvey_after_second_session("Matvey", 1, 3, 100038, 5, 6, 7, 8, 7, 6, 9, 10, 5);
    array_2_session.push_back(&boris_after_second_session);
    array_2_session.push_back(&roma_after_second_session);
    array_2_session.push_back(&matvey_after_second_session);
    ASSERT_EQ(GroupsAveragePointAfterSecondSession(3, array_2_session), 7);
}
TEST(test_GroupsAverageMarkAfterSecondSession_2, test38)
{
    vector<StudentAfterSecondSession*> array_2_session;
    StudentAfterSecondSession boris_after_second_session("Boris", 1, 4, 637232, 9, 8, 7, 10, 6, 7, 8, 9, 10);
    StudentAfterSecondSession roma_after_second_session("Roman", 1, 4, 34567, 8, 8, 7, 9, 5, 7, 8, 9, 7);
    StudentAfterSecondSession matvey_after_second_session("Matvey", 1, 3, 100038, 5, 6, 7, 8, 7, 6, 9, 10, 5);
    array_2_session.push_back(&boris_after_second_session);
    array_2_session.push_back(&roma_after_second_session);
    array_2_session.push_back(&matvey_after_second_session);
    ASSERT_EQ(GroupsAveragePointAfterSecondSession(4, array_2_session), 7.9);
}
TEST(test_TotalArrayAveragePoint_1, test39)
{
    Student yuriy("Yuriy", 1, 4, 5638438);
    StudentAfterFirstSession yuriy_after_first_session("Yuriy", 1, 4, 5638438, 9, 10, 9, 10);
    StudentAfterSecondSession yuriy_after_second_session("Yuriy", 1, 4, 5638438, 9, 10, 9, 10, 6, 7, 8, 9, 10);
    vector<Student*> array;
    array.push_back(&yuriy);
    array.push_back(&yuriy_after_first_session);
    array.push_back(&yuriy_after_second_session);
    ASSERT_EQ(TotalAveragePoint(array), 6.1);
}
TEST(test_TotalArrayAveragePoint_2, test40)
{
    Student yuriy("Yuriy", 1, 4, 5638438);
    Student neYuriy("neYuriy", 1, 5, 6567343);
    Student zhora("Zhora", 1, 8, 2587295);
    StudentAfterFirstSession yuriy_after_first_session("Yuriy", 1, 4, 5638438, 10, 10, 10, 10);
    StudentAfterFirstSession neYuriy_after_first_session("neYuriy", 1, 5, 6567343, 5, 7, 8, 9);
    StudentAfterFirstSession zhora_after_first_session("Zhora", 1, 8, 2587295, 9, 10, 9, 10);
    StudentAfterSecondSession yuriy_after_second_session("Yuriy", 1, 4, 5638438, 10, 10, 10, 10, 10, 10, 10, 10, 10);
    StudentAfterSecondSession neYuriy_after_second_session("neYuriy", 1, 5, 6567343, 5, 7, 8, 9, 9, 8, 7, 10, 10);
    StudentAfterSecondSession zhora_after_second_session("Zhora", 1, 8, 2587295, 9, 10, 9, 10, 9, 10, 10, 10, 10);
    vector<Student*> array;
    array.push_back(&yuriy);
    array.push_back(&neYuriy);
    array.push_back(&zhora);
    array.push_back(&yuriy_after_first_session);
    array.push_back(&neYuriy_after_first_session);
    array.push_back(&zhora_after_first_session);
    array.push_back(&yuriy_after_second_session);
    array.push_back(&neYuriy_after_second_session);
    array.push_back(&zhora_after_second_session);
    ASSERT_EQ(TotalAveragePoint(array), 6.1);
}
TEST(test_TotalArrayAveragePoint_3, test41)
{
    Student zhora("Zhora", 1, 8, 2587295);
    StudentAfterFirstSession zhora_after_first_session("Zhora", 1, 8, 2587295, 9, 10, 9, 10);
    vector<Student*> array;
    array.push_back(&zhora);
    array.push_back(&zhora_after_first_session);
    ASSERT_EQ(TotalAveragePoint(array), 4.8);
}
