package kr.multicampus.kotlin.basic

fun main()
{
    var list1 = mutableListOf<Int>();
    var list2 = mutableListOf<String>();

    var range1 = 1..10;
    for(i in range1)
    {
        list1.add(i);
    }

    for(i in list1)
    {
        if(i % 2 == 1)
            list2.add("True")
        else
            list2.add("False")
    }

    println("list1:$list1");
    println("list2:$list2");
}