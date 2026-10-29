__int64 __fastcall sub_132840(
        const __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        __m128i a7,
        __m128 a8)
{
  int v8; // r15d
  __int64 v11; // r12
  __int64 v14; // [rsp+8h] [rbp-48h]

  v8 = a6;
  v11 = a3 + 32;
  v14 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
  if ( (unsigned __int8)sub_12EA80(v14, a1, a2, a3 + 32, a4, a5, a7, a8, a6) )
    return a3 + 48;
  if ( !(unsigned __int8)sub_12EA80(v14, a1, a2, a3 + 48, a4, a5, a7, a8, v8) )
    return 0;
  return v11;
}

