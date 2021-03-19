package com.example.basicview

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.SeekBar
import android.widget.Toast
import kotlinx.android.synthetic.main.activity_seek_bar_test.*

class SeekBarTest : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_seek_bar_test)

        btn_seekup.setOnClickListener{
            seekBar.incrementProgressBy(1)
            seekBar2.incrementProgressBy(1)
        }

        btn_seekdown.setOnClickListener{
            seekBar.incrementProgressBy(-1)
            seekBar2.incrementProgressBy(-1)
        }

        btn_seeksetup.setOnClickListener{
            seekBar.progress = 8
            seekBar2.progress = 5
        }

        btn_seekgetValue.setOnClickListener{
            txtseekinfo1.text = "seek1 info : ${seekBar.progress} "
            txtseekinfo2.text = "seek2 info : ${seekBar2.progress} "
        }

        // seekbar의 이벤트 처리 : seekbar의 값이 변경되었을때 이벤트 발생
        var listener1 = object:SeekBar.OnSeekBarChangeListener{
            // Seekbar의 값이 변경되었을 때 호출
            // Seekbar - 값이 변경된 SeekBar 객체
            // progress - 값
            // fromUser - 사용자에 의해 변경되었는지 코드로 변경된 것인지 구분 - true(사용자), false(시스템)
            override fun onProgressChanged(seekBar: SeekBar?, progress: Int, fromUser: Boolean) {
                when(seekBar?.id){
                    R.id.seekBar -> {
                        txtseekinfo1.text = "seekbar1의 현재값 : ${seekBar.progress} "
                    }
                    R.id.seekBar2 -> {
                        txtseekinfo2.text = "seekbar2의 현재값 : ${seekBar2.progress} "
                    }
                }
                if(fromUser)
                {
                    Toast.makeText(applicationContext, "사용자가 변경했습니다.", Toast.LENGTH_LONG).show()
                }
                else
                {
                    Toast.makeText(applicationContext, "코드로 변경했습니다.", Toast.LENGTH_LONG).show()
                }
            }
            // 사용자가 터치를 시작했을 때
            override fun onStartTrackingTouch(seekBar: SeekBar?) {

            }
            // 사용자가 터치를 끝냈을 때 
            override fun onStopTrackingTouch(seekBar: SeekBar?) {
              
            }
        }

        seekBar.setOnSeekBarChangeListener(listener1)
        seekBar2.setOnSeekBarChangeListener(listener1)



    }
}