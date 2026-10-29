__int64 __fastcall sub_3DFE80(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        int a4,
        double a5,
        double a6,
        __m128i a7,
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
  unsigned int v26; // eax
  __int64 v27; // [rsp+0h] [rbp-D8h]
  __int64 v28; // [rsp+8h] [rbp-D0h]
  __int64 v29; // [rsp+10h] [rbp-C8h]
  __int64 v30; // [rsp+18h] [rbp-C0h] BYREF
  __m128i v31; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+30h] [rbp-A8h]
  __int64 v33; // [rsp+38h] [rbp-A0h]
  __int64 v34; // [rsp+40h] [rbp-98h]
  __int64 v35; // [rsp+48h] [rbp-90h]
  _QWORD v36[2]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v37; // [rsp+60h] [rbp-78h]
  __int128 v38; // [rsp+68h] [rbp-70h]
  __m128i v39; // [rsp+78h] [rbp-60h] BYREF
  __int64 v40; // [rsp+88h] [rbp-50h]
  __int64 v41; // [rsp+90h] [rbp-48h]
  unsigned __int64 v42; // [rsp+98h] [rbp-40h]

  v10 = a3;
  v11 = *(_QWORD *)a1;
  v42 = __readfsqword(0x28u);
  v30 = 0;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
    56,
    v11,
    0,
    &v30,
    (char *)&v30 + 4,
    &callui);
  v12 = *(_QWORD *)(a1 + 88);
  v38 = 0;
  v36[0] = 0;
  v36[1] = -1;
  v37 = 0;
  v40 = 0;
  v41 = 3;
  v39 = 0;
  if ( !(unsigned __int8)sub_3DF6E0(a1, (__int64)v36, a2, a4, 0.0, a6, a7, a8) )
  {
LABEL_9:
    v19 = 0;
    goto LABEL_10;
  }
  if ( (_DWORD)v10 == 1 )
  {
    BYTE6(v28) = 0;
    v14 = sub_3D6580(*(_QWORD **)(a1 + 48), v41, -1, 0);
  }
  else
  {
    v13 = v12 == 0;
    v14 = (_QWORD *)a1;
    BYTE6(v28) = !v13;
  }
  v15 = _mm_loadu_si128(&v39);
  v39 = 0;
  v31 = v15;
  v16 = sub_3D5A90((__int64)v14, &v31);
  if ( v31.m128i_i64[1] )
  {
    HIBYTE(v28) = v16;
    sub_3D56E0((volatile signed __int32 *)v31.m128i_i64[1]);
    v16 = HIBYTE(v28);
  }
  if ( !v16 )
  {
    if ( v14 != (_QWORD *)a1 )
      sub_3D62E0(*(_QWORD *)(a1 + 48));
    goto LABEL_9;
  }
  *((_DWORD *)v14 + 14) = a4;
  *((_DWORD *)v14 + 10) = HIDWORD(v41);
  v21 = v14[10];
  v22 = v40;
  v40 = 0;
  v14[10] = v22;
  if ( v21 )
  {
    qfree(v21);
    v22 = v14[10];
  }
  if ( BYTE6(v28) )
    v14[11] = v22;
  v32 = 0;
  v33 = -1;
  v34 = 0;
  v35 = 0;
  v31 = 0;
  if ( v22 )
    v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v23 = v30;
  v24 = 0;
  LODWORD(v34) = 1;
  LODWORD(v33) = -1;
  if ( (int)v30 < 0 )
    v23 = 0;
  WORD2(v33) = v23;
  v25 = WORD2(v30);
  if ( v30 < 0 )
    v25 = 0;
  HIWORD(v33) = v25;
  if ( (unsigned int)v10 <= 5 )
    v24 = dword_4314E0[v10];
  callui(149, *v14, &v31, v24, v17, v18, v27, v28, v29, v30);
  v19 = v26;
  if ( v35 )
    qfree(v35);
LABEL_10:
  if ( v40 )
    qfree(v40);
  if ( v39.m128i_i64[1] )
    sub_3D56E0((volatile signed __int32 *)v39.m128i_i64[1]);
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  return v19;
}

