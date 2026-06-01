__int64 __fastcall sub_5A60(double a1, double a2, double a3, double a4, __int64 a5, __m128i *a6, const char **a7)
{
  __m128i v9; // xmm0
  unsigned int v10; // r12d
  const char *v11; // rsi
  __m128i v13[2]; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v14; // [rsp+20h] [rbp-C8h]
  __int64 v15; // [rsp+28h] [rbp-C0h]
  __int64 v16; // [rsp+30h] [rbp-B8h]
  __int128 v17; // [rsp+38h] [rbp-B0h]
  __int128 v18; // [rsp+48h] [rbp-A0h]
  __int128 v19; // [rsp+58h] [rbp-90h]
  __int128 v20; // [rsp+68h] [rbp-80h]
  __int128 v21; // [rsp+78h] [rbp-70h]
  __int128 v22; // [rsp+88h] [rbp-60h]
  __int128 v23; // [rsp+98h] [rbp-50h]
  __int128 v24; // [rsp+A8h] [rbp-40h]
  unsigned __int64 v25; // [rsp+B8h] [rbp-30h]
  unsigned __int64 v26; // [rsp+C8h] [rbp-20h]

  v26 = __readfsqword(0x28u);
  v13[1] = 0;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v9 = _mm_loadu_si128(a6);
  v15 = 16777217;
  v25 = 0xFFFFFFFF00000003LL;
  v14 = 0;
  v16 = 0;
  v13[0] = v9;
  v10 = add_segm_ex();
  if ( (_BYTE)v10 )
  {
    if ( v13[0].m128i_i64[1] == a6->m128i_i64[1] )
    {
      if ( a6->m128i_i64[0] == v13[0].m128i_i64[0] )
        return v10;
      v11 = s1;
      if ( !a7[1] )
        goto LABEL_4;
    }
    else
    {
      v11 = s1;
      if ( !a7[1] )
      {
LABEL_4:
        sub_5990((__int64)"RESIZE SEGMENT %s (%a->%a) (%a->%a)\n", v11, *(double *)v9.m128i_i64, a2, a3, a4);
        *a6 = _mm_load_si128(v13);
        return v10;
      }
    }
    v11 = *a7;
    goto LABEL_4;
  }
  if ( a7[1] )
    sub_5990((__int64)"ADD SEGMENT %s(%a->%a) FAILED\n", *a7, *(double *)v9.m128i_i64, a2);
  else
    sub_5990((__int64)"ADD SEGMENT %s(%a->%a) FAILED\n", s1, *(double *)v9.m128i_i64, a2);
  return v10;
}

