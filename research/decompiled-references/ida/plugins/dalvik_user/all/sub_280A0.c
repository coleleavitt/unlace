__int64 __fastcall sub_280A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  __m128i v9[2]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v8 = 0;
  v9[0].m128i_i64[0] = 0;
  if ( (unsigned __int8)sub_27DB0(a1, &v8, v9, a2, a3, a6) )
    return sub_52780(a1 + 864, v8, v9[0].m128i_i64[0], a4);
  else
    return 0;
}

