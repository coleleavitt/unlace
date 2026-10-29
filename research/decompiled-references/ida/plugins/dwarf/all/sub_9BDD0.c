__int64 __fastcall sub_9BDD0(__int64 a1, int a2)
{
  __int64 *v2; // r13
  unsigned int v3; // eax
  __int64 v4; // r14
  unsigned int v5; // ebx
  unsigned int v6; // eax
  const __m128i *v8; // rdx
  __int64 v9; // rax
  __int64 i; // rax
  char v11; // al
  __m128i v12; // kr00_16
  bool v13; // al
  unsigned int v14; // eax
  __int64 v15; // [rsp+0h] [rbp-1A8h]
  __m128i v16; // [rsp+10h] [rbp-198h] BYREF
  __m128i v17; // [rsp+20h] [rbp-188h] BYREF
  _UNKNOWN **v18; // [rsp+30h] [rbp-178h]
  __int64 v19; // [rsp+38h] [rbp-170h] BYREF
  __int128 v20; // [rsp+40h] [rbp-168h]
  int v21; // [rsp+50h] [rbp-158h]
  __m128i v22; // [rsp+60h] [rbp-148h] BYREF
  __int64 v23; // [rsp+78h] [rbp-130h]
  __int128 v24; // [rsp+80h] [rbp-128h]
  __int128 v25; // [rsp+90h] [rbp-118h]
  __int64 v26; // [rsp+A0h] [rbp-108h]
  __int128 v27; // [rsp+A8h] [rbp-100h]
  __int64 v28; // [rsp+B8h] [rbp-F0h]
  __int128 v29; // [rsp+C0h] [rbp-E8h]
  __int64 v30; // [rsp+F8h] [rbp-B0h]
  __int128 v31; // [rsp+100h] [rbp-A8h]
  __int64 v32; // [rsp+110h] [rbp-98h]
  __int128 v33; // [rsp+118h] [rbp-90h]
  __int64 v34; // [rsp+134h] [rbp-74h]
  _BYTE v35[24]; // [rsp+13Ch] [rbp-6Ch]
  __int64 v36; // [rsp+158h] [rbp-50h]
  unsigned __int64 v37; // [rsp+168h] [rbp-40h]

  v2 = *(__int64 **)a1;
  v37 = __readfsqword(0x28u);
  v18 = &off_C96D0;
  v20 = 0;
  v19 = 0;
  v22 = 0;
  v21 = a2;
  LOBYTE(v3) = sub_945B0(v2, &v22, a2);
  v4 = v22.m128i_i64[0];
  v5 = v3;
  if ( (_BYTE)v3 )
  {
    LOBYTE(v6) = sub_97360(v2, v22.m128i_i64);
    v5 = v6;
  }
  sub_84A10(&v22);
  if ( v4 )
    goto LABEL_4;
  v8 = *(const __m128i **)a1;
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 224LL);
  if ( (v9 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v9 == -1 )
  {
    if ( under_debugger )
      goto LABEL_23;
    interr(30478);
  }
  v16 = _mm_loadu_si128(v8 + 14);
  for ( i = operator new(0x20u); ; i = operator new(0x20u) )
  {
    v22.m128i_i64[0] = i;
    *(_OWORD *)(i + 16) = 0;
    *(_QWORD *)i = off_C9528;
    *(_DWORD *)(i + 8) = 1;
    *(_QWORD *)&v35[8] = 0x80000000LL;
    v23 = 0;
    v26 = 0;
    v28 = 0;
    v30 = 0;
    v32 = 0;
    v36 = 0;
    v34 = 0;
    *(_QWORD *)v35 = 0;
    *(_QWORD *)&v35[16] = 0xFFFFFFFF00000000LL;
    v24 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v31 = 0;
    v33 = 0;
    v11 = sub_9B440(a1, v22.m128i_i64, v16.m128i_i64, (__int64)&v19);
    v12 = *(__m128i *)&v35[4];
    if ( !v11 )
      goto LABEL_21;
    v17 = 0;
    v13 = sub_945B0(v22.m128i_i64, &v17, v21);
    v15 = v17.m128i_i64[0];
    if ( v13 )
    {
      LOBYTE(v14) = sub_97360(&v22, v17.m128i_i64);
      v5 = v14;
      v12 = *(__m128i *)&v35[4];
    }
    sub_84A10(&v17);
    if ( v15 )
    {
      *(__m128i *)&v35[4] = v12;
      sub_1B750((__int64)&v22);
      goto LABEL_4;
    }
    if ( (v12.m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) == 0 || v12.m128i_i64[0] == -1 )
      break;
    v16 = v12;
    *(__m128i *)&v35[4] = v12;
    sub_1B750((__int64)&v22);
  }
  if ( under_debugger )
LABEL_23:
    BUG();
  interr(30478);
LABEL_21:
  sub_1B750((__int64)&v22);
LABEL_4:
  v18 = (_UNKNOWN **)&unk_C9C60;
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19);
  }
  return v5;
}

