package com.example.basicview

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.View
import android.widget.CheckBox
import android.widget.CompoundButton
import kotlinx.android.synthetic.main.activity_check_test.*

// ChekcBox 사용
// CheckBox의 주요 속성
// text, checked
// isChecked -> 현재 체크박스의 상태값을 true(체크박스가 선택되어 있는 상태) / false(체크박스의 선택이 해제된 상태)로 리턴


class checkBoxTest2 : AppCompatActivity() {

    var checkboxArray = arrayOfNulls<CheckBox>(5)






    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_check_test)
        var listener1 = CheckBoxTestListener();
        check_button1.setOnClickListener(listener1)
        check_button2.setOnClickListener(listener1)
        check_button3.setOnClickListener(listener1)
        check_button4.setOnClickListener(listener1)

        checkboxArray[0] = checkBox1
        checkboxArray[1] = checkBox2
        checkboxArray[2] = checkBox3
        checkboxArray[3] = checkBox4
        checkboxArray[4] = checkBox5

        for(i in 0..4)
        {
            checkboxArray[i]?.setOnCheckedChangeListener(listener1)
        }


//        checkBox1.setOnCheckedChangeListener(listener1)
//        checkBox2.setOnCheckedChangeListener(listener1)
//        checkBox3.setOnCheckedChangeListener(listener1)
    }

    // CheckBoxTest 액티비티를 구성하는 위젯에서 발생하는 모든 이벤트를 처리하는 리스너
    // --> inner클래스로 작성하나 별도의 파일로 클래스를 구성해서 작성하기도 한다.
    internal inner class CheckBoxTestListener:CompoundButton.OnCheckedChangeListener, View.OnClickListener{
        // 체크박스의 상태를 TextView에 출력
        fun getCheckStatus()
        {
            checkInfo.setText("")
            for(i in 0..4)
            {
                if(checkboxArray[i]?.isChecked!!)
                {
                    checkInfo.append("checkbox${i+1}번 체크박스가 설정\n")
                }
            }
        }

        fun setCheck()
        {
            for(i in 0..4)
            {
                checkboxArray[i]?.isChecked = true
            }

        }

        fun clearCheck()
        {
            for(i in 0..4)
            {
                checkboxArray[i]?.isChecked = false
            }
        }

        // 설정이면 해제, 해제면 설정 / 상태를 바꾼다 Toggle은
        fun checkToggle()
        {
            for(i in 0..4)
            {
                checkboxArray[i]?.toggle()
            }
        }

        override fun onCheckedChanged(buttonView: CompoundButton?, isChecked: Boolean) {
            Log.d("checkbox_test", "태그:" + buttonView?.getTag().toString() + "객체의 값 : " +
                    buttonView.toString()+"선택유무 : " + isChecked)

        }

        override fun onClick(v: View?)
        {
            when(v?.id)
            {
                R.id.check_button1 -> setCheck()
                R.id.check_button2 -> getCheckStatus()
                R.id.check_button3 -> clearCheck()
                R.id.check_button4 -> checkToggle()
            }
        }



    }
}