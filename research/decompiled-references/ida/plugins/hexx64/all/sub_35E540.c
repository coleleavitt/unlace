__int64 __fastcall sub_35E540(__int64 a1, const __m128i *a2, double a3)
{
  __int64 *v4; // rdx
  __int64 v6; // rax
  __int64 v7; // r12
  __m128i si128; // xmm0
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 i; // r12
  __int64 *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 j; // r12
  __int64 *v21; // rax
  __int64 v22; // rdi
  __m128i v23[3]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( (*((_DWORD *)v4 + 26))-- == 1 )
    {
      v11 = *(__int64 **)a1;
      if ( *(_QWORD *)a1 )
      {
        sub_258970(*(__int64 **)a1);
        v12 = v11[23];
        if ( v12 )
        {
          v13 = v11[24];
          if ( v13 )
          {
            for ( i = 0; i != v13; ++i )
            {
              v15 = (__int64 *)(v12 + 24 * i);
              v16 = *v15;
              if ( *v15 )
              {
                v15[1] = 0;
                qfree(v16);
                v12 = v11[23];
              }
            }
          }
          v11[24] = 0;
          qfree(v12);
        }
        v17 = v11[20];
        if ( v17 )
        {
          v11[21] = 0;
          qfree(v17);
        }
        v18 = v11[16];
        if ( v18 )
        {
          v19 = v11[17];
          if ( v19 )
          {
            for ( j = 0; j != v19; ++j )
            {
              v21 = (__int64 *)(v18 + 32 * j);
              v22 = *v21;
              if ( *v21 )
              {
                v21[1] = 0;
                qfree(v22);
                v18 = v11[16];
              }
            }
          }
          v11[17] = 0;
          qfree(v18);
        }
        sub_255050((__int64)(v11 + 2), a3);
        j__qfree((__int64)v11);
      }
    }
  }
  v6 = a2->m128i_i64[0];
  *(_QWORD *)a1 = a2->m128i_i64[0];
  if ( v6 )
    ++*(_DWORD *)(v6 + 104);
  v7 = a2->m128i_i64[1];
  si128 = _mm_loadu_si128(a2 + 1);
  a2->m128i_i64[1] = 0;
  a2[1] = 0;
  v9 = *(_QWORD *)(a1 + 8);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    v23[0] = si128;
    qfree(v9);
    si128 = _mm_load_si128(v23);
  }
  *(_QWORD *)(a1 + 8) = v7;
  *(__m128i *)(a1 + 16) = si128;
  *(__m128i *)(a1 + 32) = a2[2];
  *(__m128i *)(a1 + 48) = _mm_loadu_si128(a2 + 3);
  *(__m128i *)(a1 + 64) = _mm_loadu_si128(a2 + 4);
  *(__m128i *)(a1 + 80) = _mm_loadu_si128(a2 + 5);
  *(__m128i *)(a1 + 96) = a2[6];
  result = a2[7].m128i_u32[0];
  *(_DWORD *)(a1 + 112) = result;
  return result;
}

