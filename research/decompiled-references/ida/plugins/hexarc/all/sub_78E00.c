unsigned __int64 __fastcall sub_78E00(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r15
  __m128i v9; // xmm0
  unsigned __int64 v10; // rax
  unsigned __int64 i; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r12
  const __m128i *v18; // rdi
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __m128i v21; // xmm0
  bool v22; // cf
  __int64 v23; // rax
  __int64 v24; // r12
  const __m128i *v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __m128i v28; // xmm0
  __m128i v29; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+18h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = sub_76940((_QWORD *)a2);
  *(_QWORD *)(a1 + 16) = sub_76940((_QWORD *)a2);
  *(_QWORD *)(a1 + 24) = sub_76940((_QWORD *)a2);
  sub_76D40((unsigned __int8 **)a2, a1 + 32, -1);
  v4 = sub_76F70((_QWORD *)a2);
  if ( v4 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    v6 = v4;
    v7 = *(_QWORD *)(a1 + 40);
    if ( v4 != v5 )
    {
      v29 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
      if ( v4 >= v5 )
      {
        v8 = *(_QWORD *)(a1 + 56);
        if ( (unsigned __int64)&v29 < v7 || (unsigned __int64)&v29 >= v7 + 16 * v8 )
        {
          if ( v8 < v4 )
          {
            v16 = qvector_reserve();
            v17 = *(_QWORD *)(a1 + 56);
            v18 = *(const __m128i **)(a1 + 40);
            *(_QWORD *)(a1 + 56) = v8;
            v7 = v16;
            v19 = *(_QWORD *)(a1 + 48) - 1LL;
            if ( v19 >= 0 )
            {
              v20 = v7;
              do
              {
                v21 = _mm_loadu_si128(v18);
                v20 += 16LL;
                ++v18;
                *(__m128i *)(v20 - 16) = v21;
                v22 = v19-- == 0;
              }
              while ( !v22 );
            }
            qfree();
            *(_QWORD *)(a1 + 56) = v17;
            v5 = *(_QWORD *)(a1 + 48);
            *(_QWORD *)(a1 + 40) = v7;
          }
          if ( v5 < v6 )
          {
            v9 = _mm_load_si128(&v29);
            do
            {
              v10 = v5++;
              *(__m128i *)(v7 + 16 * v10) = v9;
              v7 = *(_QWORD *)(a1 + 40);
            }
            while ( v6 != v5 );
          }
        }
        else
        {
          if ( v8 < v4 )
          {
            v23 = qvector_reserve();
            v24 = *(_QWORD *)(a1 + 56);
            v25 = *(const __m128i **)(a1 + 40);
            *(_QWORD *)(a1 + 56) = v8;
            v7 = v23;
            v26 = *(_QWORD *)(a1 + 48) - 1LL;
            if ( v26 >= 0 )
            {
              v27 = v7;
              do
              {
                v28 = _mm_loadu_si128(v25);
                v27 += 16LL;
                ++v25;
                *(__m128i *)(v27 - 16) = v28;
                v22 = v26-- == 0;
              }
              while ( !v22 );
            }
            qfree();
            *(_QWORD *)(a1 + 56) = v24;
            v5 = *(_QWORD *)(a1 + 48);
            *(_QWORD *)(a1 + 40) = v7;
          }
          if ( v5 < v6 )
          {
            do
            {
              v14 = v5++;
              v15 = v7 + 16 * v14;
              *(_QWORD *)v15 = -1;
              *(_BYTE *)(v15 + 8) = 0;
              *(_DWORD *)(v15 + 12) = 0;
              v7 = *(_QWORD *)(a1 + 40);
            }
            while ( v6 != v5 );
          }
        }
      }
      *(_QWORD *)(a1 + 48) = v6;
      v5 = v6;
    }
    for ( i = v7 + 16 * v5; i != v7; *(_DWORD *)(v7 - 4) = unpack_dd() )
    {
      if ( *(_DWORD *)(a2 + 48) <= 3u )
        v13 = sub_76940((_QWORD *)a2);
      else
        v13 = sub_76980((_QWORD *)a2);
      *(_QWORD *)v7 = v13;
      if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8)
        || (*(_BYTE *)(v7 + 8) = unpack_dd(), *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8)) )
      {
        if ( !under_debugger )
          sub_37B760(50583);
        BUG();
      }
      v7 += 16LL;
    }
  }
  *(_DWORD *)(a1 + 64) = sub_767A0((_QWORD *)a2);
  return v30 - __readfsqword(0x28u);
}

