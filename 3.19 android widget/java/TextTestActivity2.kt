package com.example.basicview

import android.content.Context
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.renderscript.ScriptGroup
import android.text.Editable
import android.text.TextWatcher
import android.view.KeyEvent
import android.view.inputmethod.EditorInfo
import android.view.inputmethod.InputMethodManager
import android.widget.TextView
import android.widget.Toast
import kotlinx.android.synthetic.main.text_test2.*

class TextTestActivity2 : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.text_test2)

        // EditText의 이벤트 처리2
        var listener = object : TextWatcher
        {
            override fun beforeTextChanged(s: CharSequence?, start: Int, count: Int, after: Int) {
                info1.text = "before:$s"
            }

            override fun onTextChanged(s: CharSequence?, start: Int, before: Int, count: Int) {
                info2.text = "change:$s"
            }

            override fun afterTextChanged(s: Editable?) {
                info3.text = "after:$s"
            }

        }
        mytext2.addTextChangedListener(listener)

        // 입력이 끝난 후에 포커스가 사라지도록 키보드가 없어지도록
        // --------------------------------------------------
        //                                   안드로이드 os 내부에서 제공되는 시스템을 제어하는 기능(시스템서비스)을 사용 xxxxxxxManager

        btn_getdata.setOnClickListener{
            info1.text = mytext2.text
            mytext2.setText("")
            // getSystemService는 안드로이드 OS 내부에서 제공되는 기능을 직접 구현하기 위해 제공되는 메소드로
            // 제공되는 시스템의 상수명을 입력하면 받아와서 직접 제어할 수 있다.
            // 제공되는 시스템기능이 다양하므로 최상위 클래스인 Object로 리턴 --> 따라서 사용하려고 하는 클래스로 캐스팅해야 한다.
            var myservice = getSystemService(Context.INPUT_METHOD_SERVICE) as InputMethodManager
            myservice.hideSoftInputFromWindow(mytext2.windowToken,0) // 키보드판을 화면에서 없애기
            mytext2.clearFocus() // 포커스를 없애기

        }

        // EditText에서 문자열을 입력하고 키보드의 엔터키가 눌러졌을 때 실행하고 싶은 기능이 있는 경우 사용
        /*
            { 매개변수 ->
                    // 처리할 기능
                    // 처리할 기능
                    // ....
                    // 리턴값
                }
         */

        // 엔터키를 제어했다. 엔터를 누르면 아래 기능들이 수행된다.
        // mytext2.setOnEditorActionListener의 오버라이딩된 메소드의 리턴값의 의미 false -> 키보드 없애기
        // true -> 키보드 유지
        // 단, EditText의 imeOptions의 지정한 값에 따라서 다르게 반응
        // 속성값을 actionGo로 정의한 경우는 입력 작업을 끝내고 다른 작업으로 이동을 해야 하므로
        // 속성값을 actionNext로 정의하는 경우에는 입력한 다음 EditText로 엔터키를 누르면 이동하는 의미로 쓰이기 때문에 키보다가 내려가지 않는다.
        // 속성값을 actionDone은 완료의 의미 false를 설정했을 때 키보드가 내려간다.
        // 엔터키의 상태를 파악하고 원하는 작업이 실행될 수 있도록 구현
        
//        mytext2.setOnEditorActionListener{ v, actionId, event -> // 오버라이딩하는 메소드의 매개변수
//            info1.text = "엔터키가 눌려짐"                         // 메소드 내부에서 처리할 기능 
//            info2.text = mytext2.text                            // 메소드 내부에서 처리할 기능
//
//            when(actionId){
//                EditorInfo.IME_ACTION_GO -> {
//                    Toast.makeText(applicationContext, "EditText의 ACTioN_GO상태", Toast.LENGTH_LONG).show()
//                    false
//                }
//                EditorInfo.IME_ACTION_DONE -> {
//                    Toast.makeText(applicationContext, "EditText의 ACTioN_DONE상태", Toast.LENGTH_LONG).show()
//                    false
//                }
//                EditorInfo.IME_ACTION_NEXT -> {
//                    Toast.makeText(applicationContext, "EditText의 ACTioN_NEXT상태", Toast.LENGTH_LONG).show()
//                    false
//                }
//                else -> false
//
//            }
//
//                                                    // false 메소드의 리턴값
//        }
        
        var listener2 = object:TextView.OnEditorActionListener
        {
            override fun onEditorAction(v: TextView?, actionId: Int, event: KeyEvent?): Boolean {
                when(actionId) {
                    EditorInfo.IME_ACTION_GO -> {
                        Toast.makeText(applicationContext, "EditText의 ACTioN_GO상태", Toast.LENGTH_LONG).show()
                        return false
                    }
                    EditorInfo.IME_ACTION_DONE -> {
                        Toast.makeText(applicationContext, "EditText의 ACTioN_DONE상태", Toast.LENGTH_LONG).show()
                        return false
                    }
                    EditorInfo.IME_ACTION_NEXT -> {
                        Toast.makeText(applicationContext, "EditText의 ACTioN_NEXT상태", Toast.LENGTH_LONG).show()
                        return false
                    }
                    else -> return false
                }
            }
                
        }
        // EditText 마다 Enter를 누르고 작업하는게 다양하다면
        mytext2.setOnEditorActionListener(listener2) // 입력작업이 완료되면 입력을 완료
        mytext3.setOnEditorActionListener(listener2) // 입력작업이 완료되면 다른 액티비티콜
        mytext4.setOnEditorActionListener(listener2)


    }
}