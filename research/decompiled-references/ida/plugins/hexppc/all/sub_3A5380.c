__int64 __fastcall sub_3A5380(_QWORD *a1, __int64 a2)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // r12
  _QWORD *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r14
  const __m128i *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __m128i v21; // xmm0
  __int64 v22; // rsi
  __m128i v23; // xmm0
  __int64 v25[9]; // [rsp+0h] [rbp-48h] BYREF

  v25[3] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) == 57 )
  {
    v5 = sub_251340(*(_QWORD *)(a2 + 24));
    if ( *(_DWORD *)(v5 + 8) == 64 && *(_QWORD *)(v5 + 24) == a1[9] )
    {
      v6 = a1[11];
      v7 = a1[12];
      if ( v7 < v6 + 1 )
      {
        v15 = qvector_reserve();
        v16 = a1[11];
        v17 = a1[12];
        a1[12] = v7;
        v18 = (const __m128i *)a1[10];
        v8 = v15;
        v19 = v16 - 1;
        if ( v19 >= 0 )
        {
          v20 = v15;
          do
          {
            v21 = _mm_loadu_si128(v18);
            v20 += 40;
            v18 = (const __m128i *)((char *)v18 + 40);
            *(__m128i *)(v20 - 40) = v21;
            v22 = v18[-2].m128i_i64[1];
            v23 = _mm_loadu_si128(v18 - 1);
            v18[-2].m128i_i64[1] = 0;
            *(_QWORD *)(v20 - 24) = v22;
            *(__m128i *)(v20 - 16) = v23;
            v18[-1].m128i_i64[1] = 0;
          }
          while ( v19-- != 0 );
        }
        qfree();
        a1[10] = v8;
        v6 = a1[11];
        a1[12] = v17;
      }
      else
      {
        v8 = a1[10];
      }
      v9 = v8 + 40 * v6;
      *(_QWORD *)(v9 + 16) = 0;
      *(_OWORD *)(v9 + 24) = 0;
      v10 = (_QWORD *)a1[8];
      ++a1[11];
      *(_QWORD *)v9 = *v10;
      v11 = *(_QWORD *)a2;
      if ( *(_QWORD *)a2 == -1 )
      {
        v12 = a1[3];
        while ( v12 )
        {
          --v12;
          v13 = *(__int64 **)(a1[2] + 8 * v12);
          if ( v13 )
          {
            v14 = *v13;
            if ( v14 != -1 )
            {
              v11 = v14;
              break;
            }
          }
        }
      }
      *(_QWORD *)(v9 + 8) = v11;
      sub_3A5320((__int64)v25, a2, a1[8]);
      sub_3A52D0((_QWORD *)(v9 + 16), v25);
      if ( v25[0] )
      {
        v25[1] = 0;
        qfree();
      }
    }
  }
  return 0;
}

