__int64 __fastcall sub_2D0D0(__int64 a1, __int64 *a2)
{
  int v2; // edx
  __int64 result; // rax
  __int64 v4; // r13
  __int64 v5; // rdi
  __int64 v6; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  const __m128i *v9; // rbx
  __int64 v10; // rax
  __m128i v11; // [rsp+0h] [rbp-58h] BYREF
  __m128i i; // [rsp+10h] [rbp-48h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v2 = sub_27110(a1 + 1208);
  result = 0;
  if ( !v2 )
  {
    *(_BYTE *)(a1 + 2768) = 0;
    if ( !a2 )
      return 1;
    v4 = *(_QWORD *)(a1 + 1304);
    if ( !v4 )
    {
      v5 = *a2;
      if ( *a2 )
      {
        v6 = a2[1];
        if ( v6 )
        {
          do
          {
            v7 = (_QWORD *)(v5 + 80 * v4);
            if ( v7[5] )
            {
              v7[6] = 0;
              qfree();
            }
            if ( v7[2] )
            {
              v7[3] = 0;
              qfree();
            }
            ++v4;
            v5 = *a2;
          }
          while ( v6 != v4 );
        }
        a2[1] = 0;
        qfree();
        *a2 = 0;
        a2[2] = 0;
      }
      return 1;
    }
    v8 = *(_QWORD *)(a1 + 1288);
    v9 = *(const __m128i **)v8;
    v10 = *(_QWORD *)(v8 + 24);
    v11 = _mm_loadu_si128((const __m128i *)(v8 + 16));
    for ( i = _mm_loadu_si128((const __m128i *)(v8 + 32));
          (const __m128i *)(a1 + 1288) != v9;
          v9 = (const __m128i *)v9->m128i_i64[0] )
    {
      if ( v10 + 1 != v9[1].m128i_i64[0] )
      {
        v11.m128i_i64[1] = v10;
        sub_2CDD0(a1, (unsigned __int64 *)&v11, a2);
        v11 = _mm_loadu_si128(v9 + 1);
        i = _mm_loadu_si128(v9 + 2);
      }
      v10 = v9[1].m128i_i64[1];
    }
    v11.m128i_i64[1] = v10;
    sub_2CDD0(a1, (unsigned __int64 *)&v11, a2);
    return 1;
  }
  return result;
}

