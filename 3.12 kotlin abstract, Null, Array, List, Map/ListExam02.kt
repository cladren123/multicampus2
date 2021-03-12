package kr.multicampus.kotlin.basic

fun main()
{
    val myarr = arrayOf(10,20,30,40,50);

    var result1 = changeList(myarr);
    var result2 = changeMap(myarr);

    println("List:$result1");
    println("Map:$result2");
}

fun changeList(myarr:Array<Int>): List<Int>
{
    var result = mutableListOf<Int>();
    for(i in myarr)
    {
        result.add(i);
    }
    return result;
}

fun changeMap(myarr:Array<Int>):Map<Int,Int>
{
    var result = mutableMapOf<Int,Int>()
    for(i in myarr)
    {
        result.put(i+10, i);
    }
    return result;
}