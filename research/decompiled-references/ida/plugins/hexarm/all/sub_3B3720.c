unsigned __int64 __fastcall sub_3B3720(__int64 *a1, unsigned __int8 (__fastcall *a2)(__int64 *, __int64))
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  _QWORD *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 i; // rbp
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 j; // rbp
  _QWORD *v15; // rax
  __int64 v16; // rax
  __m128i v17; // xmm0
  char v18; // al
  __m128i v19; // xmm0
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v23; // [rsp+0h] [rbp-78h] BYREF
  __m128i v24; // [rsp+8h] [rbp-70h] BYREF
  __m128i v25; // [rsp+18h] [rbp-60h] BYREF
  __int64 v26; // [rsp+28h] [rbp-50h]
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v2 = *a1;
  v27 = __readfsqword(0x28u);
  v23 = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 104);
  v3 = a1[5];
  v4 = (__int64)(a1 - 6);
  v24 = _mm_loadu_si128((const __m128i *)(a1 + 1));
  v26 = v3;
  v25 = _mm_loadu_si128((const __m128i *)(a1 + 3));
  while ( a2(&v23, v4) )
  {
    v5 = *(_QWORD *)(v4 + 48);
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 104))-- == 1 )
      {
        v7 = *(_QWORD **)(v4 + 48);
        if ( v7 )
        {
          sub_258D30(*(__int64 **)(v4 + 48));
          v8 = v7[23];
          if ( v8 )
          {
            v9 = v7[24];
            if ( v9 )
            {
              for ( i = 0; i != v9; ++i )
              {
                v11 = (_QWORD *)(v8 + 24 * i);
                if ( *v11 )
                {
                  v11[1] = 0;
                  qfree();
                  v8 = v7[23];
                }
              }
            }
            v7[24] = 0;
            qfree();
          }
          if ( v7[20] )
          {
            v7[21] = 0;
            qfree();
          }
          v12 = v7[16];
          if ( v12 )
          {
            v13 = v7[17];
            if ( v13 )
            {
              for ( j = 0; j != v13; ++j )
              {
                v15 = (_QWORD *)(v12 + 32 * j);
                if ( *v15 )
                {
                  v15[1] = 0;
                  qfree();
                  v12 = v7[16];
                }
              }
            }
            v7[17] = 0;
            qfree();
          }
          sub_255410((__int64)(v7 + 2));
          j__qfree();
        }
      }
    }
    v16 = *(_QWORD *)v4;
    *(_QWORD *)(v4 + 48) = *(_QWORD *)v4;
    if ( v16 )
      ++*(_DWORD *)(v16 + 104);
    v17 = _mm_loadu_si128((const __m128i *)(v4 + 8));
    v18 = *(_BYTE *)(v4 + 40);
    v4 -= 48;
    *(__m128i *)(v4 + 104) = v17;
    v19 = _mm_loadu_si128((const __m128i *)(v4 + 72));
    *(_BYTE *)(v4 + 136) = v18;
    *(__m128i *)(v4 + 120) = v19;
  }
  sub_13FB80((_QWORD *)(v4 + 48), v4);
  v20 = v23;
  *(_QWORD *)(v4 + 48) = v23;
  if ( v20 )
    ++*(_DWORD *)(v20 + 104);
  v21 = _mm_loadu_si128(&v24);
  *(_BYTE *)(v4 + 88) = v26;
  *(__m128i *)(v4 + 56) = v21;
  *(__m128i *)(v4 + 72) = _mm_loadu_si128(&v25);
  sub_13FB80(&v23, v4);
  return v27 - __readfsqword(0x28u);
}

