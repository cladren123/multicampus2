package com.example.intent

import android.app.Activity
import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.View
import android.widget.Toast
import kotlinx.android.synthetic.main.first2.*


// 코틀린은 클래스 위에다가 상수를 선언한다, 보통
const val FIRST_BUTTON = 10
const val SECOND_BUTTON = 20
const val THIRD_BUTTON = 30

class ReturnDataFirstActivity : AppCompatActivity(), View.OnClickListener {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.first2)

        call1.setOnClickListener(this)
        call2.setOnClickListener(this)
        call3.setOnClickListener(this)
        call4.setOnClickListener(this)
        btnExit.setOnClickListener(this)
    }

    override fun onClick(v: View?) {
        when (v?.id) {
            R.id.btnExit -> finish()
            R.id.call1 -> {


                // 에러확인하기 위해 추가한 코드
                val returndata_intent = Intent(this, ReturnDataSecondActivity::class.java).apply {
                    putExtra("info", "첫 번째 버튼에서 액티비티로 넘기는 데이터")
                }
                startActivity(returndata_intent)
            }

            R.id.call2 -> {
                val returndata_intent =
                        Intent(this, ReturnDataSecondActivity::class.java).apply {
                            putExtra("code", "call2")
                            putExtra("info", "두 번째 버튼에서 액티비티로 넘기는 데이터")

                        }

                // 새로운 액티비티를 실행하고 되돌아와서 다른 작업을 실행할 필요가 있다면 사용하는 메소드
                // startActivityForResult 메소드는 startActivity와 다르게 실행을 끝내고 현재 액티비티로 되돌아오면
                // 액티비티가 가지고 있는 onActivityResult 라는 메소드를 자동으로 호출한다.
                // 처리할 작업이 존재하면 이 메소드를 오버라이딩해야한다.
                // requestCode 요청을 끝내고 되돌아왔을 때 어떤 요청에 대한 처리인지 구분하기 위해 지정하는 코드
                startActivityForResult(returndata_intent, FIRST_BUTTON)
            }

            R.id.call3 -> {
                val returndata_intent = Intent(this, ReturnDataSecondActivity::class.java).apply {
                    putExtra("code", "call3")
                    putExtra("info", "세 번째 버튼에서 액티비티로 넘기는 데이터")
                }
                startActivityForResult(returndata_intent, SECOND_BUTTON)

            }

            R.id.call4 -> {
                val returndata_intent = Intent(this, ReturnDataThirdActivity::class.java)
                startActivityForResult(returndata_intent, THIRD_BUTTON)
            }

        }
    }


    /*
        startActivity로 액티비티를 실행하는 경우 호출이 안되고, startActivityForResult 메소드로 액티비티를 실행하는 경우에만 호출된다.
        requestCode : 요청을 했던 뷰를 구분하기 위한 코드값, startActivityForResult 를 호출할 때 같이 넘긴 코드
        resultCode : 결과코드, setResult를 호출하며 셋팅한 값
        data(Intent) : setResult에서 전달한 인텐트
     */

    override fun onActivityResult(requestCode: Int, resultCode: Int, data: Intent?)
    {
        super.onActivityResult(requestCode, resultCode, data)
        // intentinfo.text = "액티비티 실행하고 되돌아옴"

        when(requestCode){
            FIRST_BUTTON -> intentinfo.text = data?.getStringExtra("returndata")
            SECOND_BUTTON -> {
                intentinfo.text = data?.getStringExtra("returndata")
                Toast.makeText(this, data?.getStringExtra("returndata"), Toast.LENGTH_LONG).show()
            }
            THIRD_BUTTON -> {
                intentinfo.text = "THIRD_BUTTON눌러 실행하고 돌아옴"
                when(resultCode)
                {
                    Activity.RESULT_OK -> intentinfo.append("Activity.RESULT_OK")
                    Activity.RESULT_CANCELED -> intentinfo.append("Activity.RESULT-CANCELED")
                    Activity.RESULT_FIRST_USER -> intentinfo.append("Activity.RESULT_FIRST_USER")
                    Activity.RESULT_OK+10 -> intentinfo.append("Activity.RESULT_OK+10")



                }
            }
        }

    }
}