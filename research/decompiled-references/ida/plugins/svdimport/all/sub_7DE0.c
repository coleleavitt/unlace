__int64 __fastcall sub_7DE0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 *a7)
{
  __int64 v7; // rsi
  __m128i *v9; // rsi
  __m128i si128; // xmm0
  __int64 v11; // rax
  unsigned __int8 v12; // [rsp+Fh] [rbp-1119h]
  __int64 v13; // [rsp+80h] [rbp-10A8h]
  __int64 v14; // [rsp+88h] [rbp-10A0h]
  unsigned __int64 v15; // [rsp+10E8h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( (unsigned __int64)a2[1] <= 1 )
  {
    return 1;
  }
  else
  {
    v7 = *a2;
    v13 = 0;
    v14 = 0;
    if ( (unsigned __int8)sub_75D0(a1 + 4344, v7, 1, a7, (__int64)"application/json") )
    {
      parse_json_file();
      if ( a7 )
      {
        v9 = (__m128i *)*a7;
        if ( (unsigned __int64)a7[2] <= 0x18 )
        {
          v11 = qvector_reserve();
          *a7 = v11;
          v9 = (__m128i *)v11;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_175C0);
        a7[1] = 25;
        v9[1].m128i_i64[0] = 0x61746164204E4F53LL;
        *v9 = si128;
        *(_BYTE *)(*a7 + 24) = 0;
      }
    }
    v12 = 0;
    jvalue_t_clear();
  }
  return v12;
}

