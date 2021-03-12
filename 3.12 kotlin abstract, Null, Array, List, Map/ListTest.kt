package kr.multicampus.kotlin.basic




// listOf 메소드를 이용해서 list 객체를 생성하면 불변 (원본 수정 불가능)
// mutableListOf를 이용해서 list 객체를 생성하면 가변 (원본 수정 가능)

fun main()
{
    val list1 = listOf(10,20,30,40,50)
    val list2 = listOf("python", "C", "kotlin", "android")

    // list1, list2 가 list 클래스를 참조하는 참조변수, 참조변수만 출력하면 참조변수의 toString메소드를 호출하는 것과 동일
    // list1은 list1.toString()이 생략

    println("list1:$list1");
    println("list1:${list1.toString()}");
    println("list2:$list2");
    println("list2:${list2.toString()}");

    for(item in list1)
    {
        println("ltems:$item");
    }
    println("size:${list1.size}");
    println("list1의 0번 요소:${list1.get(0)}");
    println("list1의 0번 요소:${list1[0]}");

    //list1.add(30);
    
    println("****************************************************************")
    val list3 = mutableListOf<Int>();
    val list4 = mutableListOf("python", "C", "kotlin", "android");

    println("list3:$list3");
    println("list4:$list4");

    list3.add(10);
    list3.add(20);
    list3.add(30);

    list4.add("raspberryPI");

    println("list3:$list3");
    println("list4:$list4");

    list3.addAll(listOf(500,300,600));
    list4.add(2, "jQuery");

    println("list3:$list3");
    println("list4:$list4");

    list4.set(2, "javascript"); // 변경
    list3.removeAt(1);

    println("list3:$list3");
    println("list4:$list4");

    list3.removeAll(listOf(500,600));

    println("****************************************************************")
    println("list3:$list3");



}