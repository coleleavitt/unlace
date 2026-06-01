__int64 __fastcall sub_17A10(__int64 a1, const char *a2, const char *a3, __m128i *a4)
{
  __int64 v4; // r13
  int i; // eax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r14
  const __m128i *v9; // r15
  char *s1; // [rsp+8h] [rbp-60h]
  __int64 v13; // [rsp+20h] [rbp-48h]

  if ( !*(_BYTE *)(a1 + 440) )
    sub_177B0(a1);
  v13 = *(_QWORD *)(a1 + 232);
  if ( !v13 )
    return 0;
  v4 = 0;
  s1 = (char *)(*(_QWORD *)(a1 + 224) + 8LL);
  for ( i = strncmp(s1, a2, 0x10u); ; i = strncmp(s1, a2, 0x10u) )
  {
    if ( !i )
    {
      v6 = *(int *)(*(_QWORD *)(a1 + 272) + 4 * v4);
      v7 = (unsigned int)(*((_DWORD *)s1 + 14) + *(_DWORD *)(*(_QWORD *)(a1 + 272) + 4 * v4));
      if ( v6 < v7 )
        break;
    }
LABEL_5:
    ++v4;
    s1 += 72;
    if ( v4 == v13 )
      return 0;
  }
  v8 = *(_QWORD *)(a1 + 256);
  while ( 1 )
  {
    if ( v6 < v8 )
    {
      v9 = (const __m128i *)(*(_QWORD *)(a1 + 248) + 80 * v6);
      if ( !strncmp(v9->m128i_i8, a3, 0x10u) )
        break;
    }
    if ( ++v6 >= v7 )
      goto LABEL_5;
  }
  if ( a4 )
  {
    *a4 = _mm_loadu_si128(v9);
    a4[1] = _mm_loadu_si128(v9 + 1);
    a4[2] = _mm_loadu_si128(v9 + 2);
    a4[3] = _mm_loadu_si128(v9 + 3);
    a4[4] = _mm_loadu_si128(v9 + 4);
  }
  return 1;
}

