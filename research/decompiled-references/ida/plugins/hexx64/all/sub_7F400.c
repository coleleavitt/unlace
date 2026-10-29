unsigned __int64 __fastcall sub_7F400(__int64 a1, __int64 a2, __int64 a3, __m128 a4)
{
  int v5; // eax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r15
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 i; // r12
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r12
  const __m128i *v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  bool v22; // cf
  __int64 v23; // rax
  __int64 v24; // r12
  const __m128i *v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __m128i v28; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+18h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = sub_7CEC0((_QWORD *)a2, *(double *)a4.m128_u64);
  *(_QWORD *)(a1 + 16) = sub_7CEC0((_QWORD *)a2, *(double *)a4.m128_u64);
  *(_QWORD *)(a1 + 24) = sub_7CEC0((_QWORD *)a2, *(double *)a4.m128_u64);
  sub_7D2C0((unsigned __int8 **)a2, (_BYTE *)(a1 + 32), *(double *)a4.m128_u64);
  v5 = sub_7D4F0((_QWORD *)a2, *(double *)a4.m128_u64);
  if ( v5 >= 0 )
  {
    v6 = *(_QWORD *)(a1 + 48);
    v7 = v5;
    v8 = *(_QWORD *)(a1 + 40);
    if ( v5 != v6 )
    {
      v28 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
      if ( v5 >= v6 )
      {
        v9 = *(_QWORD *)(a1 + 56);
        v10 = a1 + 40;
        if ( (unsigned __int64)&v28 < v8 || (unsigned __int64)&v28 >= v8 + 16 * v9 )
        {
          if ( v9 < v5 )
          {
            v17 = qvector_reserve(v10, 0, v5, 16);
            v18 = *(_QWORD *)(a1 + 56);
            v19 = *(const __m128i **)(a1 + 40);
            *(_QWORD *)(a1 + 56) = v9;
            v8 = v17;
            v20 = *(_QWORD *)(a1 + 48) - 1LL;
            if ( v20 >= 0 )
            {
              v21 = v8;
              do
              {
                a4 = (__m128)_mm_loadu_si128(v19);
                v21 += 16LL;
                ++v19;
                *(__m128 *)(v21 - 16) = a4;
                v22 = v20-- == 0;
              }
              while ( !v22 );
              v19 = *(const __m128i **)(a1 + 40);
            }
            qfree((__int64)v19);
            *(_QWORD *)(a1 + 56) = v18;
            v6 = *(_QWORD *)(a1 + 48);
            *(_QWORD *)(a1 + 40) = v8;
          }
          if ( v6 < v7 )
          {
            a4 = (__m128)_mm_load_si128(&v28);
            do
            {
              v11 = v6++;
              *(__m128 *)(v8 + 16 * v11) = a4;
              v8 = *(_QWORD *)(a1 + 40);
            }
            while ( v7 != v6 );
          }
        }
        else
        {
          if ( v9 < v5 )
          {
            v23 = qvector_reserve(v10, 0, v5, 16);
            v24 = *(_QWORD *)(a1 + 56);
            v25 = *(const __m128i **)(a1 + 40);
            *(_QWORD *)(a1 + 56) = v9;
            v8 = v23;
            v26 = *(_QWORD *)(a1 + 48) - 1LL;
            if ( v26 >= 0 )
            {
              v27 = v8;
              do
              {
                a4 = (__m128)_mm_loadu_si128(v25);
                v27 += 16LL;
                ++v25;
                *(__m128 *)(v27 - 16) = a4;
                v22 = v26-- == 0;
              }
              while ( !v22 );
              v25 = *(const __m128i **)(a1 + 40);
            }
            qfree((__int64)v25);
            *(_QWORD *)(a1 + 56) = v24;
            v6 = *(_QWORD *)(a1 + 48);
            *(_QWORD *)(a1 + 40) = v8;
          }
          if ( v6 < v7 )
          {
            do
            {
              v15 = v6++;
              v16 = v8 + 16 * v15;
              *(_QWORD *)v16 = -1;
              *(_BYTE *)(v16 + 8) = 0;
              *(_DWORD *)(v16 + 12) = 0;
              v8 = *(_QWORD *)(a1 + 40);
            }
            while ( v7 != v6 );
          }
        }
      }
      *(_QWORD *)(a1 + 48) = v7;
      v6 = v7;
    }
    for ( i = v8 + 16 * v6; i != v8; *(_DWORD *)(v8 - 4) = unpack_dd() )
    {
      if ( *(_DWORD *)(a2 + 48) <= 3u )
        v14 = sub_7CEC0((_QWORD *)a2, *(double *)a4.m128_u64);
      else
        v14 = sub_7CF00((_QWORD *)a2, *(double *)a4.m128_u64);
      *(_QWORD *)v8 = v14;
      if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8)
        || (*(_BYTE *)(v8 + 8) = unpack_dd(), *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8)) )
      {
        if ( !under_debugger )
          sub_383060(0xC597u, *(double *)a4.m128_u64);
        BUG();
      }
      v8 += 16LL;
    }
  }
  *(_DWORD *)(a1 + 64) = sub_7CD20((_QWORD *)a2, *(double *)a4.m128_u64);
  return v29 - __readfsqword(0x28u);
}

