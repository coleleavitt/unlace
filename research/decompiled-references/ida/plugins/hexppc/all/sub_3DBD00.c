__int64 __fastcall sub_3DBD00(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        int a4,
        double a5,
        double a6,
        double a7,
        __m128 a8)
{
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // r15
  bool v13; // zf
  _QWORD *v14; // r15
  __m128i v15; // xmm0
  char v16; // al
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ebx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int16 v23; // ax
  __int64 v24; // rcx
  __int16 v25; // ax
  __int64 v26; // [rsp+0h] [rbp-D8h]
  __int64 v27; // [rsp+8h] [rbp-D0h]
  __int64 v28; // [rsp+10h] [rbp-C8h]
  __int64 v29; // [rsp+18h] [rbp-C0h] BYREF
  __m128i v30; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+30h] [rbp-A8h]
  __int64 v32; // [rsp+38h] [rbp-A0h]
  __int64 v33; // [rsp+40h] [rbp-98h]
  __int64 v34; // [rsp+48h] [rbp-90h]
  _QWORD v35[2]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v36; // [rsp+60h] [rbp-78h]
  __int128 v37; // [rsp+68h] [rbp-70h]
  __m128i v38; // [rsp+78h] [rbp-60h] BYREF
  __int64 v39; // [rsp+88h] [rbp-50h]
  __int64 v40; // [rsp+90h] [rbp-48h]
  unsigned __int64 v41; // [rsp+98h] [rbp-40h]

  v10 = a3;
  v11 = *(_QWORD *)a1;
  v41 = __readfsqword(0x28u);
  v29 = 0;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
    56,
    v11,
    0,
    &v29,
    (char *)&v29 + 4,
    &callui);
  v12 = *(_QWORD *)(a1 + 88);
  v37 = 0;
  v35[0] = 0;
  v35[1] = -1;
  v36 = 0;
  v39 = 0;
  v40 = 3;
  v38 = 0;
  if ( !(unsigned __int8)sub_3DB560(a1, (__int64)v35, a2, a4, 0.0, a6, a7, a8) )
  {
LABEL_9:
    v19 = 0;
    goto LABEL_10;
  }
  if ( (_DWORD)v10 == 1 )
  {
    BYTE6(v27) = 0;
    v14 = sub_3D2400(*(_QWORD **)(a1 + 48), v40, -1, 0);
  }
  else
  {
    v13 = v12 == 0;
    v14 = (_QWORD *)a1;
    BYTE6(v27) = !v13;
  }
  v15 = _mm_loadu_si128(&v38);
  v38 = 0;
  v30 = v15;
  v16 = sub_3D1910((__int64)v14, &v30);
  if ( v30.m128i_i64[1] )
  {
    HIBYTE(v27) = v16;
    sub_3D1560((volatile signed __int32 *)v30.m128i_i64[1]);
    v16 = HIBYTE(v27);
  }
  if ( !v16 )
  {
    if ( v14 != (_QWORD *)a1 )
      sub_3D2160(*(_QWORD *)(a1 + 48));
    goto LABEL_9;
  }
  *((_DWORD *)v14 + 14) = a4;
  *((_DWORD *)v14 + 10) = HIDWORD(v40);
  v21 = v14[10];
  v22 = v39;
  v39 = 0;
  v14[10] = v22;
  if ( v21 )
  {
    qfree();
    v22 = v14[10];
  }
  if ( BYTE6(v27) )
    v14[11] = v22;
  v31 = 0;
  v32 = -1;
  v33 = 0;
  v34 = 0;
  v30 = 0;
  if ( v22 )
    v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v23 = v29;
  v24 = 0;
  LODWORD(v33) = 1;
  LODWORD(v32) = -1;
  if ( (int)v29 < 0 )
    v23 = 0;
  WORD2(v32) = v23;
  v25 = WORD2(v29);
  if ( v29 < 0 )
    v25 = 0;
  HIWORD(v32) = v25;
  if ( (unsigned int)v10 <= 5 )
    v24 = dword_41E880[v10];
  v19 = callui(149, *v14, &v30, v24, v17, v18, v26, v27, v28, v29);
  if ( v34 )
    qfree();
LABEL_10:
  if ( v39 )
    qfree();
  if ( v38.m128i_i64[1] )
    sub_3D1560((volatile signed __int32 *)v38.m128i_i64[1]);
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  return v19;
}

