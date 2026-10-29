unsigned __int64 __fastcall sub_3B800(_QWORD *a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rbx
  bool v6; // r15
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __m128i *v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 (__fastcall **v26)(); // rax
  __int64 (__fastcall **v27)(); // rdi
  __m128i v28; // xmm0
  __int64 v29; // [rsp+8h] [rbp-310h]
  __int64 v30; // [rsp+10h] [rbp-308h]
  __m128i *v31; // [rsp+10h] [rbp-308h]
  unsigned __int64 v32; // [rsp+18h] [rbp-300h]
  __int64 v33; // [rsp+20h] [rbp-2F8h]
  __m128i *v34; // [rsp+20h] [rbp-2F8h]
  __m128i *v35; // [rsp+20h] [rbp-2F8h]
  __int64 (__fastcall **v36)(); // [rsp+20h] [rbp-2F8h]
  __int64 v37; // [rsp+28h] [rbp-2F0h]
  __int64 v38; // [rsp+30h] [rbp-2E8h]
  unsigned __int64 v39; // [rsp+38h] [rbp-2E0h]
  __m128i v40; // [rsp+40h] [rbp-2D8h] BYREF
  __int64 (__fastcall **v41)(); // [rsp+50h] [rbp-2C8h] BYREF
  __m128i v42; // [rsp+58h] [rbp-2C0h] BYREF
  _QWORD v43[2]; // [rsp+70h] [rbp-2A8h] BYREF
  __m128i si128; // [rsp+80h] [rbp-298h]
  __int64 v45; // [rsp+90h] [rbp-288h]
  int v46; // [rsp+98h] [rbp-280h]
  char v47; // [rsp+9Ch] [rbp-27Ch]
  __int64 v48; // [rsp+A0h] [rbp-278h]
  char v49; // [rsp+A8h] [rbp-270h]
  __int64 v50; // [rsp+B8h] [rbp-260h]
  __int128 v51; // [rsp+C0h] [rbp-258h]
  __m128i v52; // [rsp+D0h] [rbp-248h]
  char v53; // [rsp+E0h] [rbp-238h]
  __m128i v54; // [rsp+E8h] [rbp-230h]
  __int64 v55; // [rsp+F8h] [rbp-220h]
  __int128 v56; // [rsp+100h] [rbp-218h]
  __int16 v57; // [rsp+110h] [rbp-208h]
  __int64 v58; // [rsp+138h] [rbp-1E0h]
  __int128 v59; // [rsp+140h] [rbp-1D8h]
  _QWORD *v60; // [rsp+150h] [rbp-1C8h]
  __int128 v61; // [rsp+158h] [rbp-1C0h]
  __int64 v62; // [rsp+168h] [rbp-1B0h]
  __int128 v63; // [rsp+170h] [rbp-1A8h]
  __int64 v64; // [rsp+180h] [rbp-198h]
  __int128 v65; // [rsp+188h] [rbp-190h]
  __int64 v66; // [rsp+198h] [rbp-180h]
  __int128 v67; // [rsp+1A0h] [rbp-178h]
  __int64 v68; // [rsp+1B0h] [rbp-168h]
  __int128 v69; // [rsp+1B8h] [rbp-160h]
  __int64 v70; // [rsp+1C8h] [rbp-150h]
  __int128 v71; // [rsp+1D0h] [rbp-148h]
  __int64 v72; // [rsp+1E0h] [rbp-138h]
  __int128 v73; // [rsp+1E8h] [rbp-130h]
  __int64 v74; // [rsp+1F8h] [rbp-120h]
  __int128 v75; // [rsp+200h] [rbp-118h]
  __int64 v76; // [rsp+210h] [rbp-108h]
  __int128 v77; // [rsp+218h] [rbp-100h]
  __int16 v78; // [rsp+228h] [rbp-F0h]
  char v79; // [rsp+22Ah] [rbp-EEh]
  int v80; // [rsp+22Ch] [rbp-ECh]
  __int128 v81; // [rsp+230h] [rbp-E8h]
  __int64 v82; // [rsp+240h] [rbp-D8h]
  __int64 v83; // [rsp+248h] [rbp-D0h]
  int v84; // [rsp+250h] [rbp-C8h]
  __int64 v85; // [rsp+258h] [rbp-C0h]
  __int128 v86; // [rsp+260h] [rbp-B8h]
  __int64 v87; // [rsp+270h] [rbp-A8h]
  __m128i v88[2]; // [rsp+280h] [rbp-98h] BYREF
  __int64 v89; // [rsp+2A0h] [rbp-78h]
  __int64 v90; // [rsp+2A8h] [rbp-70h]
  unsigned int v91; // [rsp+2B0h] [rbp-68h]
  unsigned __int64 v92; // [rsp+2D8h] [rbp-40h]

  v92 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_34390((__int64)a1, "__PRELINK_TEXT", "__text", v88)
    || (unsigned __int8)sub_34390((__int64)a1, "__PRELINK", "__text", v88) )
  {
    if ( v90 )
    {
      v37 = 0;
      v2 = a1[15] + v91;
      v3 = v2 + v90;
      v39 = v2;
      v4 = v2;
      if ( v2 < v2 + v90 )
      {
        while ( 1 )
        {
          v7 = sub_2EB90((__int64)a1, v4, v3);
          v8 = v7;
          if ( v3 == v7 )
            return v92 - __readfsqword(0x28u);
          v29 = v3 - v7;
          v9 = sub_344F0((__int64)a1, v7);
          if ( !v9 )
          {
            if ( !under_debugger )
              interr();
            BUG();
          }
          v10 = a1[1];
          v43[0] = &off_974D8;
          v43[1] = v10;
          v47 = 1;
          v45 = -1;
          v46 = 8;
          v48 = v9;
          v49 = 0;
          v50 = 0;
          v53 = 0;
          v55 = 0;
          v57 = 0;
          v58 = 0;
          v60 = nullptr;
          v62 = 0;
          v64 = 0;
          v66 = 0;
          v68 = 0;
          si128 = _mm_load_si128((const __m128i *)&xmmword_823B0);
          v51 = 0;
          v52 = _mm_load_si128((const __m128i *)&xmmword_82350);
          v54 = _mm_load_si128((const __m128i *)&xmmword_82340);
          v56 = 0;
          v59 = 0;
          v61 = 0;
          v63 = 0;
          v65 = 0;
          v67 = 0;
          v69 = 0;
          v70 = 0;
          v72 = 0;
          v74 = 0;
          v76 = 0;
          v78 = 0;
          v79 = 0;
          v80 = 0;
          v82 = 0;
          v83 = 0;
          v84 = 0;
          v85 = 0;
          v87 = 0;
          v71 = 0;
          v73 = 0;
          v75 = 0;
          v77 = 0;
          v81 = -1;
          v86 = 0;
          if ( sub_31110((__int64)v43) )
          {
            if ( sub_31420((__int64)v43, 0, v29, 1) )
            {
              if ( !(_BYTE)v78 )
                sub_33E50((__int64)v43);
              v11 = v60;
              v12 = &v60[9 * v61];
              if ( v12 != v60 )
              {
                v13 = 0;
                v14 = 0;
                v15 = -1;
                do
                {
                  if ( v15 == -1 && !v11[5] )
                    v15 = v11[3];
                  v13 += v11[6];
                  if ( v14 < v11[4] + v11[3] )
                    v14 = v11[4] + v11[3];
                  v11 += 9;
                }
                while ( v12 != v11 );
                v38 = v13;
                if ( v13 )
                {
                  if ( v14 )
                    break;
                }
              }
            }
          }
          v4 = v8 + 4;
          sub_2BAE0((__int64)v43);
          close_linput();
          v6 = v29 != 4;
LABEL_6:
          ++v37;
          if ( v4 >= v3 || !v6 )
            return v92 - __readfsqword(0x28u);
        }
        v33 = v8 + v89 - v39;
        if ( v15 == -1 )
        {
          v15 = v8 + v89 - v39;
          v32 = sub_2EB90((__int64)a1, v8 + 4, v3) - v8;
        }
        else
        {
          v32 = ((v14 + 4095) & 0xFFFFFFFFFFFFF000LL) - v15;
        }
        v16 = sub_37A30((__int64)v43, "_kmod_info", 0, 0);
        v17 = a1[38];
        v30 = v16;
        v18 = a1[37];
        if ( a1[39] < (unsigned __int64)(v17 + 1) )
        {
          v23 = qvector_reserve();
          a1[37] = v23;
          v17 = a1[38];
          v18 = v23;
        }
        v19 = v18 + 80 * v17;
        *(_OWORD *)v19 = 0;
        *(_OWORD *)(v19 + 16) = 0;
        *(_OWORD *)(v19 + 48) = 0;
        *(_QWORD *)(v19 + 32) = 0;
        *(_QWORD *)(v19 + 40) = 0;
        *(_OWORD *)(v19 + 64) = 0;
        ++a1[38];
        *(_QWORD *)(v19 + 8) = v15;
        *(_QWORD *)v19 = v30;
        *(_QWORD *)(v19 + 16) = v32;
        *(_QWORD *)(v19 + 24) = v33;
        *(_QWORD *)(v19 + 32) = v8;
        v34 = (__m128i *)v19;
        v41 = off_97778;
        v42.m128i_i64[0] = v19 + 64;
        v42.m128i_i8[8] = 0;
        sub_32130((__int64)v43, (__m128i *)&v41, (__int64 (*)())off_97778, (__int64 (*)())v19);
        v20 = v34;
        if ( v30 == -1 )
          goto LABEL_31;
        if ( HIBYTE(v57) )
        {
          v21 = sub_34130((__int64)v43, v30 + 8);
          v20 = v34;
          if ( v21 != 1 )
            goto LABEL_31;
        }
        else
        {
          v24 = sub_34130((__int64)v43, v30 + 4);
          v20 = v34;
          if ( v24 != 1 )
            goto LABEL_31;
        }
        v35 = v20;
        sub_34250((__int64)&v41, (__int64)v43, v30);
        v20 = v35;
        v25 = _mm_loadu_si128(&v42);
        v26 = v41;
        v42 = 0;
        v41 = nullptr;
        v22 = v25.m128i_i64[0];
        if ( !v35[2].m128i_i64[1] )
        {
          v35[2].m128i_i64[1] = (__int64)v26;
          v35[3] = v25;
          goto LABEL_32;
        }
        v35[3].m128i_i64[0] = 0;
        v36 = v26;
        v31 = v20;
        v40 = v25;
        qfree();
        v27 = v41;
        v20 = v31;
        v28 = _mm_load_si128(&v40);
        v31[2].m128i_i64[1] = (__int64)v36;
        v31[3] = v28;
        if ( !v27 )
        {
LABEL_32:
          if ( v22 <= 1 )
            sub_15ED0(&v20[2].m128i_i64[1]);
          v6 = v32 != v29;
          v4 = v8 + v38;
          sub_2BAE0((__int64)v43);
          close_linput();
          goto LABEL_6;
        }
        v42.m128i_i64[0] = 0;
        qfree();
        v20 = v31;
LABEL_31:
        v22 = v20[3].m128i_u64[0];
        goto LABEL_32;
      }
    }
  }
  return v92 - __readfsqword(0x28u);
}

