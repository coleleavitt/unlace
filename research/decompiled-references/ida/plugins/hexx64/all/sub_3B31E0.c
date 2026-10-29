unsigned __int64 __fastcall sub_3B31E0(__int64 *a1, unsigned __int8 (__fastcall *a2)(__int64 *, __int64))
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 *v4; // rbx
  __m128i v5; // xmm0
  __int64 v6; // rdx
  _QWORD *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 i; // rbp
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 j; // rbp
  __int64 *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __m128i v21; // xmm0
  char v22; // al
  __int64 *v23; // rax
  __m128i v24; // xmm0
  __int64 *v26; // [rsp+0h] [rbp-78h] BYREF
  __m128i v27; // [rsp+8h] [rbp-70h] BYREF
  __m128i v28; // [rsp+18h] [rbp-60h] BYREF
  __int64 v29; // [rsp+28h] [rbp-50h]
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v2 = *a1;
  v30 = __readfsqword(0x28u);
  v26 = (__int64 *)v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 104);
  v3 = a1[5];
  v4 = a1 - 6;
  v27 = _mm_loadu_si128((const __m128i *)(a1 + 1));
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 3));
  v29 = v3;
  v28 = v5;
  while ( a2((__int64 *)&v26, (__int64)v4) )
  {
    v6 = v4[6];
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 104))-- == 1 )
      {
        v8 = (_QWORD *)v4[6];
        if ( v8 )
        {
          sub_258970((__int64 *)v4[6]);
          v9 = v8[23];
          if ( v9 )
          {
            v10 = v8[24];
            if ( v10 )
            {
              for ( i = 0; i != v10; ++i )
              {
                v12 = (__int64 *)(v9 + 24 * i);
                v13 = *v12;
                if ( *v12 )
                {
                  v12[1] = 0;
                  qfree(v13);
                  v9 = v8[23];
                }
              }
            }
            v8[24] = 0;
            qfree(v9);
          }
          v14 = v8[20];
          if ( v14 )
          {
            v8[21] = 0;
            qfree(v14);
          }
          v15 = v8[16];
          if ( v15 )
          {
            v16 = v8[17];
            if ( v16 )
            {
              for ( j = 0; j != v16; ++j )
              {
                v18 = (__int64 *)(v15 + 32 * j);
                v19 = *v18;
                if ( *v18 )
                {
                  v18[1] = 0;
                  qfree(v19);
                  v15 = v8[16];
                }
              }
            }
            v8[17] = 0;
            qfree(v15);
          }
          sub_255050((__int64)(v8 + 2), *(double *)v5.m128i_i64);
          j__qfree((__int64)v8);
        }
      }
    }
    v20 = *v4;
    v4[6] = *v4;
    if ( v20 )
      ++*(_DWORD *)(v20 + 104);
    v21 = _mm_loadu_si128((const __m128i *)(v4 + 1));
    v22 = *((_BYTE *)v4 + 40);
    v4 -= 6;
    *(__m128i *)(v4 + 13) = v21;
    v5 = _mm_loadu_si128((const __m128i *)(v4 + 9));
    *((_BYTE *)v4 + 136) = v22;
    *(__m128i *)(v4 + 15) = v5;
  }
  sub_140140((__int64 **)v4 + 6);
  v23 = v26;
  v4[6] = (__int64)v26;
  if ( v23 )
    ++*((_DWORD *)v23 + 26);
  v24 = _mm_loadu_si128(&v27);
  *((_BYTE *)v4 + 88) = v29;
  *(__m128i *)(v4 + 7) = v24;
  *(__m128i *)(v4 + 9) = _mm_loadu_si128(&v28);
  sub_140140(&v26);
  return v30 - __readfsqword(0x28u);
}

