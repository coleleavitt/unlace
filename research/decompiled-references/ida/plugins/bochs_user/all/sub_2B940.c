__int64 __fastcall sub_2B940(const char **a1, unsigned __int8 *a2, _QWORD *a3, char **a4)
{
  _QWORD *v6; // rbx
  _QWORD *v8; // rdi
  unsigned __int8 *v9; // r13
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 *v13; // rdx
  unsigned __int8 *v14; // rax
  char *haystack[2]; // [rsp+0h] [rbp-78h] BYREF
  __m128i v16; // [rsp+10h] [rbp-68h] BYREF
  __m128i v17; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 i; // [rsp+38h] [rbp-40h]

  v6 = (_QWORD *)*a3;
  for ( i = __readfsqword(0x28u); a3 != v6; --a3[2] )
  {
    v8 = v6;
    v6 = (_QWORD *)*v6;
    *(_QWORD *)v8[1] = v6;
    v6[1] = v8[1];
    qfree();
  }
  v9 = sub_2A250(a2, a1, (const char **)haystack);
  if ( strstr(haystack[0], "paging off") )
    return 0;
  if ( (unsigned int)qsscanf() == 1 )
  {
    if ( a4 )
      *a4 = haystack[1];
    while ( 1 )
    {
      v14 = sub_2A250(v9, a1, (const char **)haystack);
      v9 = v14;
      if ( !v14 || !*v14 )
        break;
      if ( (unsigned int)qsscanf() != 4 )
        return 2;
      v11 = qalloc_or_throw();
      *(__m128i *)(v11 + 16) = _mm_load_si128(&v16);
      v12 = _mm_load_si128(&v17);
      *(_QWORD *)v11 = a3;
      *(__m128i *)(v11 + 32) = v12;
      v13 = (__int64 *)a3[1];
      *(_QWORD *)(v11 + 8) = v13;
      *v13 = v11;
      ++a3[2];
      a3[1] = v11;
    }
    return 0;
  }
  return 2;
}

