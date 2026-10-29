__int64 *__fastcall sub_316F0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  char v7; // bp
  __int64 v8; // r12
  __int64 v9; // rsi
  unsigned __int64 v10; // r13
  __int64 v11; // r14
  char v12; // bp
  __int64 (__fastcall **v13)(); // rax
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // r13
  unsigned __int64 v18; // r12
  __int64 v19; // rsi
  __m128i si128; // xmm0
  __int64 v21; // rbp
  __int64 (__fastcall *v22)(); // r13
  size_t v23; // rax
  __int64 v24; // r12
  size_t v25; // r14
  size_t v26; // r15
  __int64 v27; // rsi
  size_t v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax

  v4 = node2ea(a4);
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v5 = v4;
  get_nice_colored_name(a1, v4, 2);
  v6 = sub_31370();
  v7 = netnode_charval(v6, v5, 323);
  if ( !v7 )
    return a1;
  v8 = a1[1];
  if ( v8 )
  {
    v10 = v8 + 1;
    v11 = a1[1];
    v9 = *a1;
    --v8;
    if ( a1[2] >= v10 )
      goto LABEL_4;
  }
  else
  {
    v9 = *a1;
    v10 = 2;
    v11 = 1;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_4;
  }
  v15 = qvector_reserve(a1, v9, v10, 1);
  *a1 = v15;
  v9 = v15;
LABEL_4:
  a1[1] = v10;
  v12 = v7 - 1;
  v13 = (__int64 (__fastcall **)())&unk_8C1E0;
  *(_BYTE *)(v9 + v11) = 0;
  *(_BYTE *)(*a1 + v8) = 44;
  while ( *v13 != (__int64 (__fastcall *)())(v12 & 3) )
  {
    v13 += 2;
    if ( v13 == off_8C210 )
      goto LABEL_7;
  }
  v22 = v13[1];
  if ( v22 )
  {
    v23 = strlen((const char *)v13[1]);
    v24 = a1[1];
    v25 = v23;
    v26 = v23;
    if ( v24 )
    {
      --v24;
      v26 = v23 + v24;
    }
    v27 = *a1;
    v28 = v26 + 1;
    if ( a1[2] < v26 + 1 )
    {
      v30 = qvector_reserve(a1, v27, v28, 1);
      *a1 = v30;
      v28 = v26 + 1;
      v27 = v30;
    }
    a1[1] = v28;
    *(_BYTE *)(v27 + v26) = 0;
    memmove((void *)(v24 + *a1), v22, v25);
  }
LABEL_7:
  if ( (v12 & 4) != 0 )
  {
    v16 = a1[1];
    if ( v16 )
    {
      v17 = v16 + 18;
      v18 = v16 + 19;
      --v16;
    }
    else
    {
      v18 = 20;
      v17 = 19;
    }
    v19 = *a1;
    if ( a1[2] < v18 )
    {
      v29 = qvector_reserve(a1, v19, v18, 1);
      *a1 = v29;
      v19 = v29;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_786D0);
    a1[1] = v18;
    *(_BYTE *)(v19 + v17) = 0;
    v21 = *a1 + v16;
    *(__m128i *)v21 = si128;
    *(_DWORD *)(v21 + 15) = 1397052481;
  }
  return a1;
}

