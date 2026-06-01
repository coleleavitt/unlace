__int64 __fastcall sub_9BA70(const __m128i **a1, __int64 *a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  char v4; // r13
  unsigned int v5; // r14d
  __int64 v7; // rax
  __m128i v8; // kr00_16
  char v9; // [rsp+Fh] [rbp-189h]
  __m128i v10; // [rsp+10h] [rbp-188h] BYREF
  __m128i v11; // [rsp+20h] [rbp-178h] BYREF
  _UNKNOWN **v12; // [rsp+30h] [rbp-168h]
  __int64 v13; // [rsp+38h] [rbp-160h] BYREF
  __int128 v14; // [rsp+40h] [rbp-158h]
  __m128i v15; // [rsp+50h] [rbp-148h] BYREF
  __int64 v16; // [rsp+68h] [rbp-130h]
  __int128 v17; // [rsp+70h] [rbp-128h]
  __int128 v18; // [rsp+80h] [rbp-118h]
  __int64 v19; // [rsp+90h] [rbp-108h]
  __int128 v20; // [rsp+98h] [rbp-100h]
  __int64 v21; // [rsp+A8h] [rbp-F0h]
  __int128 v22; // [rsp+B0h] [rbp-E8h]
  __int64 v23; // [rsp+E8h] [rbp-B0h]
  __int128 v24; // [rsp+F0h] [rbp-A8h]
  __int64 v25; // [rsp+100h] [rbp-98h]
  __int128 v26; // [rsp+108h] [rbp-90h]
  __int64 v27; // [rsp+124h] [rbp-74h]
  _BYTE v28[24]; // [rsp+12Ch] [rbp-6Ch]
  __int64 v29; // [rsp+148h] [rbp-50h]
  unsigned __int64 v30; // [rsp+158h] [rbp-40h]

  v2 = (__int64)*a1;
  v30 = __readfsqword(0x28u);
  v12 = &off_C9738;
  v14 = 0;
  v13 = 0;
  v15 = 0;
  if ( sub_945B0((__int64 *)v2, &v15, 71) )
    goto LABEL_7;
  sub_84A10(&v15);
  while ( 1 )
  {
    v2 = 0x7FFFFFFFFFFFFFFFLL;
    v3 = (*a1)[14].m128i_i64[0];
    if ( (v3 & 0x7FFFFFFFFFFFFFFFLL) != 0 && v3 != -1 )
      break;
    if ( under_debugger )
LABEL_24:
      BUG();
    interr(30478);
LABEL_7:
    v4 = sub_9AB20((__int64 *)v2, a2);
    sub_84A10(&v15);
    if ( v4 )
      goto LABEL_8;
  }
  v10 = _mm_loadu_si128(*a1 + 14);
  v7 = operator new(0x20u);
LABEL_13:
  v15.m128i_i64[0] = v7;
  *(_OWORD *)(v7 + 16) = 0;
  *(_QWORD *)v7 = off_C9528;
  *(_DWORD *)(v7 + 8) = 1;
  *(_QWORD *)&v28[8] = 0x80000000LL;
  v16 = 0;
  v19 = 0;
  v21 = 0;
  v23 = 0;
  v25 = 0;
  v29 = 0;
  v27 = 0;
  *(_QWORD *)v28 = 0;
  *(_QWORD *)&v28[16] = 0xFFFFFFFF00000000LL;
  v17 = 0;
  v18 = 0;
  v20 = 0;
  v22 = 0;
  v24 = 0;
  v26 = 0;
  v5 = sub_9B440((__int64)a1, v15.m128i_i64, v10.m128i_i64, (__int64)&v13);
  v8 = *(__m128i *)&v28[4];
  if ( (_BYTE)v5 )
  {
    v11 = 0;
    if ( !sub_945B0(v15.m128i_i64, &v11, 71) )
    {
      sub_84A10(&v11);
      goto LABEL_16;
    }
    while ( 1 )
    {
      v9 = sub_9AB20(v15.m128i_i64, a2);
      sub_84A10(&v11);
      if ( v9 )
        break;
LABEL_16:
      if ( (v8.m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) != 0 && v8.m128i_i64[0] != -1 )
      {
        v10 = v8;
        sub_1B750((__int64)&v15);
        v7 = operator new(0x20u);
        goto LABEL_13;
      }
      if ( under_debugger )
        goto LABEL_24;
      interr(30478);
    }
    sub_1B750((__int64)&v15);
LABEL_8:
    v5 = 1;
    goto LABEL_9;
  }
  sub_1B750((__int64)&v15);
LABEL_9:
  v12 = (_UNKNOWN **)&unk_C9D28;
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  return v5;
}
