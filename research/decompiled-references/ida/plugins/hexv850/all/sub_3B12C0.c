unsigned __int64 __fastcall sub_3B12C0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __m128i v5; // xmm0
  char v6; // al
  __m128i v7; // xmm0
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 i; // rbp
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 j; // rbp
  _QWORD *v16; // rax
  char v18; // al
  __m128i v19; // xmm0
  __m128i v20; // [rsp+8h] [rbp-50h] BYREF
  __m128i v21; // [rsp+18h] [rbp-40h] BYREF
  __int64 v22; // [rsp+28h] [rbp-30h]
  unsigned __int64 v23; // [rsp+38h] [rbp-20h]

  v2 = *a1;
  v23 = __readfsqword(0x28u);
  if ( v2 )
    ++*(_DWORD *)(v2 + 104);
  v3 = a1[5];
  v20 = _mm_loadu_si128((const __m128i *)(a1 + 1));
  v22 = v3;
  v21 = _mm_loadu_si128((const __m128i *)(a1 + 3));
  sub_13B580(a1, a2);
  v4 = *(_QWORD *)a2;
  *a1 = *(_QWORD *)a2;
  if ( v4 )
    ++*(_DWORD *)(v4 + 104);
  *(__m128i *)(a1 + 1) = _mm_loadu_si128((const __m128i *)(a2 + 8));
  *(__m128i *)(a1 + 3) = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *((_BYTE *)a1 + 40) = *(_BYTE *)(a2 + 40);
  sub_13B580((_QWORD *)a2, a2);
  *(_QWORD *)a2 = v2;
  if ( v2 )
  {
    v5 = _mm_loadu_si128(&v20);
    ++*(_DWORD *)(v2 + 104);
    v6 = v22;
    *(__m128i *)(a2 + 8) = v5;
    v7 = _mm_loadu_si128(&v21);
    *(_BYTE *)(a2 + 40) = v6;
    *(__m128i *)(a2 + 24) = v7;
    if ( (*(_DWORD *)(v2 + 104))-- == 1 )
    {
      sub_2535B0((__int64 *)v2);
      v9 = *(_QWORD *)(v2 + 184);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v2 + 192);
        if ( v10 )
        {
          for ( i = 0; i != v10; ++i )
          {
            v12 = (_QWORD *)(v9 + 24 * i);
            if ( *v12 )
            {
              v12[1] = 0;
              qfree();
              v9 = *(_QWORD *)(v2 + 184);
            }
          }
        }
        *(_QWORD *)(v2 + 192) = 0;
        qfree();
      }
      if ( *(_QWORD *)(v2 + 160) )
      {
        *(_QWORD *)(v2 + 168) = 0;
        qfree();
      }
      v13 = *(_QWORD *)(v2 + 128);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v2 + 136);
        if ( v14 )
        {
          for ( j = 0; j != v14; ++j )
          {
            v16 = (_QWORD *)(v13 + 32 * j);
            if ( *v16 )
            {
              v16[1] = 0;
              qfree();
              v13 = *(_QWORD *)(v2 + 128);
            }
          }
        }
        *(_QWORD *)(v2 + 136) = 0;
        qfree();
      }
      sub_24FC90(v2 + 16);
      j__qfree();
    }
  }
  else
  {
    v18 = v22;
    *(__m128i *)(a2 + 8) = _mm_loadu_si128(&v20);
    v19 = _mm_loadu_si128(&v21);
    *(_BYTE *)(a2 + 40) = v18;
    *(__m128i *)(a2 + 24) = v19;
  }
  return v23 - __readfsqword(0x28u);
}

