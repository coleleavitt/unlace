__int64 __fastcall sub_4EFC0(__int64 a1, __int64 a2, double a3, double a4)
{
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __m128i *v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // rbp
  char *v12; // r15
  unsigned __int64 v13; // rdx
  char *v14; // rdi
  __int64 *m128i_i64; // r13
  __int64 v16; // rbp
  __int64 *i; // r14
  __int64 *v18; // r12
  __m128i *v20; // rdx
  __int64 v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // rcx
  const char *v25; // rsi
  unsigned int v26; // ebx
  __m128i *v30; // [rsp+18h] [rbp-58h]
  __int64 v31; // [rsp+20h] [rbp-50h]

  v4 = a1 + 96;
  v5 = *(_QWORD *)(a1 + 112);
  v6 = *(_QWORD *)(a1 + 64);
  v31 = 0;
  v30 = nullptr;
  v7 = (*(_QWORD *)(v6 + 24) + 4095LL) & 0xFFFFFFFFFFFFF000LL;
  if ( v5 == a1 + 96 )
  {
    v21 = *(unsigned int *)(a2 + 816);
    goto LABEL_20;
  }
  v8 = nullptr;
  v9 = 0;
  do
  {
    v10 = *(_QWORD *)(v5 + 56);
    if ( v9 != -1 )
    {
      v30 = (__m128i *)qvector_reserve();
      v9 = v31;
      v8 = v30;
    }
    v8->m128i_i64[v9] = v10;
    v9 = ++v31;
    v8 = v30;
    v5 = std::_Rb_tree_increment();
  }
  while ( v5 != v4 );
  v11 = 8 * v9;
  v12 = &v30->m128i_i8[v11];
  if ( &v30->m128i_i8[v11] == (__int8 *)v30 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL) >= v7 + *(unsigned int *)(a2 + 816) )
      goto LABEL_21;
LABEL_32:
    v26 = 31;
    goto LABEL_26;
  }
  if ( v11 >> 3 )
  {
    _BitScanReverse64(&v13, v11 >> 3);
    sub_4ED90(
      v30,
      &v30->m128i_i64[(unsigned __int64)v11 / 8],
      2LL * (int)v13,
      (unsigned __int8 (__fastcall *)(__int64, __int64))sub_36790);
    v14 = (char *)v30;
    if ( v11 > 128 )
    {
      m128i_i64 = v30[8].m128i_i64;
      sub_4EB20(v30->m128i_i8, v30[8].m128i_i8, (__int64 (__fastcall *)(__int64, __int64))sub_36790);
      do
      {
        v16 = *m128i_i64;
        for ( i = m128i_i64; ; i[1] = *i )
        {
          v18 = i;
          if ( !sub_36790(v16, *--i) )
            break;
        }
        ++m128i_i64;
        *v18 = v16;
      }
      while ( v12 != (char *)m128i_i64 );
      goto LABEL_14;
    }
  }
  else
  {
    sub_4ED90(
      v30,
      &v30->m128i_i64[(unsigned __int64)v11 / 8],
      -2,
      (unsigned __int8 (__fastcall *)(__int64, __int64))sub_36790);
    v14 = (char *)v30;
  }
  sub_4EB20(v14, v12, (__int64 (__fastcall *)(__int64, __int64))sub_36790);
LABEL_14:
  v20 = v30;
  v21 = *(unsigned int *)(a2 + 816);
  if ( 8 * v31 )
  {
    do
    {
      v22 = v7 + v21;
      v23 = v20->m128i_i64[0];
      v24 = *(_QWORD *)(v20->m128i_i64[0] + 820);
      if ( v7 + v21 < v7 )
        v22 = v7;
      if ( v22 < v24 )
        goto LABEL_21;
      v20 = (__m128i *)((char *)v20 + 8);
      v7 = (v24 + *(unsigned int *)(v23 + 816) + 4095) & 0xFFFFFFFFFFFFF000LL;
    }
    while ( v20 != (__m128i *)((char *)v30 + 8 * v31) );
  }
  v6 = *(_QWORD *)(a1 + 64);
LABEL_20:
  if ( *(_QWORD *)(v6 + 32) < v7 + v21 )
    goto LABEL_32;
LABEL_21:
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
  {
    v25 = s1;
    if ( *(_QWORD *)(a2 + 836) )
      v25 = *(const char **)(a2 + 828);
    sub_E960((__int64)"rebasing %s from %08a to %08a\n", v25, 0.0, a4);
  }
  v26 = (unsigned __int8)sub_37DA0(a2, v7) == 0 ? 0x25 : 0;
LABEL_26:
  if ( v30 )
    qfree();
  return v26;
}

