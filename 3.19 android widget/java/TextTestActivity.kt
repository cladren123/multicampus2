package com.example.basicview

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.text.Editable
import android.text.TextWatcher
import android.util.Log
import android.view.View
import kotlinx.android.synthetic.main.text_test.*


// 기본뷰에 대한 테스트 : 텍스트와 관련된 뷰의 기능들, 이벤트 처리 -> TextView, EditText, Button
class TextTestActivity : AppCompatActivity(), View.OnClickListener {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.text_test)

        // EditText에서 데이터를 입력할 때 이벤트가 발생 - 처리
        // TextChanged 이벤트 발생 : TextWatcher 라는 리스너를 구현

        // EditText에 TextWatcher 리스너를 연결해야 이벤트에 대한 처리를 할 수 있다.

        // EditText에 TextWatcher 리스너를 연결해야 이벤트에 대한 처리를 할수 있다.
        var mylistener = MyWatcherListener()
        mytext.addTextChangedListener(mylistener)
        send.setOnClickListener(this)
    }

    // send 버튼을 누르면 EditText(input)에 입력한 값이 area1, area2로 정의한 EditText 출력
    override fun onClick(v: View?) {
        //area1.setText(input.getText())

        //area1.text = input.text
        //area2.text = input.text

        area1.append(input.text.toString() + "\n")
        area2.append(input.text.toString() + "\n")



    }

    // 인터페이스는 모든 것을 오버라이딩을 해야 에러가 없어진다.


    // 클래스 안에 정의된 클래스 - 내부클래스
    // TextChanged 이벤트를 처리하는 리스너를 작성

    internal inner class MyWatcherListener : TextWatcher {
        // 문자값이 변경된 후에 호출
        override fun afterTextChanged(s: Editable?) {
        }
        // 문자가 변경되기 전에 호출
        override fun beforeTextChanged(s: CharSequence?, start: Int, count: Int, after: Int) {
        }
        // 문자의 값이 변경되고 있을 때 호출
        // 문자의 값이 변경되면 TextView에 출력
        override fun onTextChanged(s: CharSequence?, start: Int, before: Int, count: Int) {
            Log.d("event", "s: $s, start : $start, count : $count")
            myinfo?.text = "문자열이 변경되고 있음...$"
        }

    }

}

