void __fastcall sub_132E0(__int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 *v9; // rdi
  unsigned __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rax
  __m128i *v14; // [rsp+0h] [rbp-40h]

  v2 = a1[1];
  if ( v2 )
  {
    v5 = 0;
    do
    {
      while ( 1 )
      {
        v7 = *a2;
        v8 = 16 * v5;
        v9 = (unsigned __int64 *)(16 * v5 + *a1);
        v10 = v9[1];
        if ( *a2 < v10 )
          break;
        v2 = a1[1];
        ++v5;
LABEL_10:
        if ( v5 >= v2 )
          return;
      }
      v6 = a2[1];
      if ( *v9 >= v6 )
        return;
      if ( *v9 >= v7 )
      {
        if ( v6 < v10 )
        {
          *v9 = v6;
          ++v5;
          v2 = a1[1];
          goto LABEL_10;
        }
        memmove(v9, v9 + 2, 16 * (v2 - v5) - 16);
        v2 = a1[1] - 1;
        a1[1] = v2;
      }
      else
      {
        v9[1] = v7;
        ++v5;
        v2 = a1[1];
        if ( v10 >= v6 && v6 < v10 )
        {
          v11 = *a1;
          v12 = v8 + 16;
          if ( a1[2] < v2 + 1 )
          {
            v13 = qvector_reserve();
            v2 = a1[1];
            *a1 = v13;
            v11 = v13;
          }
          v14 = (__m128i *)(v12 + v11);
          memmove(&v14[1], v14, 16 * v2 - v12);
          *v14 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v10);
          v2 = a1[1] + 1;
          a1[1] = v2;
        }
      }
    }
    while ( v5 < v2 );
  }
}

