package kr.multicampus.kotlin.basic

// key, value 한쌍으로 데이터를 관리하는 경우 사용

// mutableMapOf 가변으로 만들어진다.

fun main()
{
    val map1 = mapOf<String,Int>("A01" to 10, "A02" to 20, "A03" to 30)
    println("********************************************")
    println("map1:$map1");
    println("********************************************")

    val map2 = mutableMapOf<String, String>();
    println("map2:$map2");
    println("********************************************")

    map2.put("id", "jang" );
    map2.put("pass", "1234" );
    map2.put("name", "장동건" );
    map2.put("addr", "서울" );


    println("map1:$map1");
    println("map2:$map2");

    println("map1:${map1.size}");
    println("map2:${map2.size}");
    println("********************************************")

    println("map1:${map1.get("A01")}");
    println("map2:${map1["name"]}");
    println("********************************************")

    println("map1:${map1.keys}"); // map에 저장된 key들을 배열로 리턴
    println("map1:${map1.values}"); // map에 저장된 value들을 배열로 리턴
    println("********************************************")

    println("map1:${map1.containsKey("A01")}");
    println("map1:${map1.containsKey("A05")}");
    println("********************************************")

    println("map2:${map2.containsValue("장동건")}");
    println("map2:${map2.containsValue("장기용")}");






}