__int64 __fastcall sub_C7D0(const char **a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __m128i si128; // xmm0
  __m128i v4; // xmm0
  __int64 v5; // rbp
  const char *v6; // rsi
  unsigned int type_ordinal; // eax
  __int64 v8; // [rsp+8h] [rbp-40h]
  const char *v9; // [rsp+10h] [rbp-38h] BYREF
  __int128 v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  result = get_named_type_tid(*a1);
  if ( result == -1 )
  {
    v10 = 0;
    v9 = nullptr;
    v2 = qvector_reserve(&v9, 0, 50, 1);
    v9 = (const char *)v2;
    *(_QWORD *)&v10 = 50;
    *(__m128i *)v2 = _mm_load_si128((const __m128i *)&xmmword_21700);
    si128 = _mm_load_si128((const __m128i *)&xmmword_21710);
    *(_BYTE *)(v2 + 49) = 0;
    *(__m128i *)(v2 + 16) = si128;
    v4 = _mm_load_si128((const __m128i *)&xmmword_21720);
    *(_BYTE *)(v2 + 48) = 10;
    *(__m128i *)(v2 + 32) = v4;
    sub_C310((__int64 *)&v9, (__int64)"struct %s { %s };", *a1, a1[1]);
    v5 = (__int64)v9;
    v6 = s1;
    if ( (_QWORD)v10 )
      v6 = v9;
    parse_decls(0, v6, sub_7200, 4195328);
    type_ordinal = get_type_ordinal(0, *a1);
    set_type_choosable(0, type_ordinal, 0);
    result = get_named_type_tid(*a1);
    if ( v5 )
    {
      v8 = result;
      qfree(v5);
      return v8;
    }
  }
  return result;
}

