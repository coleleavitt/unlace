unsigned __int64 __fastcall sub_76050(__int64 a1, const __m128i **a2)
{
  char *v2; // r13
  const __m128i *v5; // rdi
  __int64 v6; // rax
  __m128i si128; // [rsp+0h] [rbp-198h] BYREF
  __int64 (__fastcall **v8)(); // [rsp+10h] [rbp-188h] BYREF
  int v9; // [rsp+18h] [rbp-180h]
  __int64 v10; // [rsp+20h] [rbp-178h]
  __int64 v11; // [rsp+28h] [rbp-170h]
  _UNKNOWN **v12; // [rsp+30h] [rbp-168h]
  __int64 v13; // [rsp+38h] [rbp-160h] BYREF
  __int128 v14; // [rsp+40h] [rbp-158h]
  __int64 (__fastcall ***v15)(); // [rsp+50h] [rbp-148h]
  char v16; // [rsp+60h] [rbp-138h] BYREF
  __m128i v17[2]; // [rsp+140h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+168h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 148) )
    return v18 - __readfsqword(0x28u);
  v11 = a1;
  v5 = *a2;
  v8 = off_C8CD0;
  v9 = 0;
  v10 = 0;
  v13 = 0;
  v12 = &off_C8D08;
  v15 = &v8;
  v14 = 0;
  sub_A1190(v5, &v8, 0);
  if ( !*(_BYTE *)(a1 + 148) )
  {
    v6 = (*a2)[14].m128i_i64[0];
    if ( (v6 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v6 == -1 )
    {
      if ( !under_debugger )
      {
        interr(30478);
        goto LABEL_18;
      }
    }
    else
    {
      v2 = &v16;
      si128 = _mm_loadu_si128(*a2 + 14);
      while ( 1 )
      {
        sub_84A60(v2);
        if ( !(unsigned __int8)sub_9B440(a2, v2, &si128, &v13) )
          goto LABEL_13;
        sub_A1190(v2, v15, 0);
        if ( *(_BYTE *)(a1 + 148) )
          goto LABEL_13;
        if ( (v17[0].m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) == 0 || v17[0].m128i_i64[0] == -1 )
          break;
LABEL_18:
        si128 = _mm_load_si128(v17);
        sub_1B750((__int64)v2);
      }
      if ( !under_debugger )
      {
        interr(30478);
LABEL_13:
        sub_1B750((__int64)v2);
        goto LABEL_14;
      }
    }
    BUG();
  }
LABEL_14:
  v12 = (_UNKNOWN **)&unk_C9C60;
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  return v18 - __readfsqword(0x28u);
}

