__int64 __fastcall sub_C910(const char **a1)
{
  __int64 v1; // rax
  __m128i si128; // xmm0
  __m128i v3; // xmm0
  __int64 v4; // r12
  const char *v5; // rcx
  __int64 tinfo_size; // rbp
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v8 = 0;
  v9 = 0;
  v1 = qvector_reserve(&v8, 0, 50, 1);
  v8 = v1;
  *(_QWORD *)&v9 = 50;
  *(__m128i *)v1 = _mm_load_si128((const __m128i *)&xmmword_21700);
  si128 = _mm_load_si128((const __m128i *)&xmmword_21710);
  *(_BYTE *)(v1 + 49) = 0;
  *(__m128i *)(v1 + 16) = si128;
  v3 = _mm_load_si128((const __m128i *)&xmmword_21720);
  *(_BYTE *)(v1 + 48) = 10;
  *(__m128i *)(v1 + 32) = v3;
  sub_C310(&v8, (__int64)"struct %s { %s };", *a1, a1[1]);
  v4 = v8;
  v5 = s1;
  v8 = 0;
  if ( (_QWORD)v9 )
    v5 = (const char *)v4;
  parse_decl(&v8, 0, 0, v5, 5);
  tinfo_size = get_tinfo_size(0, v8, 0);
  clear_tinfo_t(&v8);
  if ( v4 )
    qfree(v4);
  return tinfo_size;
}
