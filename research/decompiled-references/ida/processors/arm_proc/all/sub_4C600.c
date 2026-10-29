__int64 __fastcall sub_4C600(__int64 a1, __int64 **a2)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  __int64 *v5; // r14
  __int64 *v6; // rbx
  __int64 v7; // rbp
  signed __int64 v8; // r12
  __int64 v9; // rsi
  char *v10; // rcx
  char *v11; // r8
  char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // [rsp+0h] [rbp-40h]

  v3 = (char *)a2[1] - (char *)*a2;
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( v3 )
  {
    if ( v3 > 0x7FFFFFFFFFFFFFE0LL )
      sub_1A9B7();
    v15 = operator new(v3);
  }
  else
  {
    v15 = 0;
  }
  result = v15;
  *(_QWORD *)(a1 + 16) = v15 + v3;
  *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v15);
  v5 = a2[1];
  v6 = *a2;
  if ( *a2 == v5 )
  {
    v7 = v15;
  }
  else
  {
    v7 = v15;
    do
    {
      result = *v6;
      *(_QWORD *)v7 = *v6;
      v8 = v6[2] - v6[1];
      *(_QWORD *)(v7 + 24) = 0;
      *(_OWORD *)(v7 + 8) = 0;
      if ( v8 )
      {
        if ( (unsigned __int64)v8 > 0x7FFFFFFFFFFFFFF8LL )
        {
          if ( v8 < 0 )
            sub_1A9B7();
          std::__throw_bad_alloc();
        }
        result = operator new(v8);
        v9 = result;
      }
      else
      {
        v9 = 0;
      }
      *(_QWORD *)(v7 + 24) = v9 + v8;
      *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)(unsigned __int64)v9);
      v10 = (char *)v6[2];
      v11 = (char *)v6[1];
      if ( v10 != v11 )
      {
        v12 = (char *)v6[1];
        v13 = v9;
        do
        {
          v14 = *(_QWORD *)v12;
          v12 += 12;
          v13 += 12;
          *(_QWORD *)(v13 - 12) = v14;
          *(_DWORD *)(v13 - 4) = *((_DWORD *)v12 - 1);
        }
        while ( v10 != v12 );
        result = 3 * ((0x2AAAAAAAAAAAAAABLL * ((unsigned __int64)(v10 - 12 - v11) >> 2)) & 0x3FFFFFFFFFFFFFFFLL) + 3;
        v9 += 4 * result;
      }
      v6 += 4;
      *(_QWORD *)(v7 + 16) = v9;
      v7 += 32;
    }
    while ( v5 != v6 );
  }
  *(_QWORD *)(a1 + 8) = v7;
  return result;
}

