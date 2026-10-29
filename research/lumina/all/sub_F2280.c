__int64 __fastcall sub_F2280(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned __int8 *a4, double a5)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  unsigned int v9; // r15d
  __int64 *v10; // rax
  __int64 *v11; // rbx
  __int64 v12; // rdx
  int v13; // ecx
  __int64 *v14; // rbx
  int v15; // r8d
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int8 *v23; // r15
  __int64 v24; // r14
  unsigned __int8 v25; // si
  const __m128i *i; // rax
  __m128i v27; // xmm0

  v6 = a3;
  v7 = *(_QWORD *)a1;
  if ( a3 )
  {
    if ( *(_QWORD *)(a3 + 24) )
      return v6;
    goto LABEL_8;
  }
  v9 = a2;
  if ( a4 )
    v6 = sub_E31C0(*(_QWORD *)a1, a2, a4);
  else
    v6 = *(_QWORD *)(v7 + 16);
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 24) )
      return v6;
LABEL_8:
    v9 = a2;
  }
  if ( *(_QWORD *)(v7 + 368) )
  {
    v10 = sub_DC720(v7, (const char *)a4);
    v11 = v10;
    if ( !v10 )
      goto LABEL_18;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(v7 + 368))(*(_QWORD *)(v7 + 384), v7, v9, v10);
    sub_C9250(v7, v11);
  }
  if ( *(_QWORD *)(v7 + 376) )
  {
    v14 = sub_DC1C0(v7, 0x38u);
    if ( v14 )
    {
      v14[3] = v7;
      *((_WORD *)v14 + 10) = 1;
      sub_F11D0((__int64)v14, a4, -1, 1, nullptr, v16);
    }
    v17 = 2;
    v18 = sub_D9DB0((__int64)v14, 2u, a5, v12, v13, v15, v16);
    if ( v18 )
    {
      v17 = v7;
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(v7 + 376))(
        *(_QWORD *)(v7 + 384),
        v7,
        *(unsigned __int8 *)(v7 + 100),
        v18);
    }
    sub_C9940((__int64)v14, v17, v19, v20, v21, v22);
  }
LABEL_18:
  if ( a4 )
  {
    v6 = sub_E31C0(v7, v9, a4);
    if ( !v6 )
    {
LABEL_20:
      v6 = 0;
      sub_DBD10(a1, "no such collation sequence: %s", (const char *)a4);
      *(_DWORD *)(a1 + 24) = 257;
      return v6;
    }
  }
  else
  {
    v6 = *(_QWORD *)(v7 + 16);
    if ( !v6 )
      goto LABEL_20;
  }
  if ( !*(_QWORD *)(v6 + 24) )
  {
    v23 = *(unsigned __int8 **)v6;
    v24 = 0;
    v25 = 3;
    if ( !*(_QWORD *)v6 )
      goto LABEL_29;
LABEL_25:
    for ( i = (const __m128i *)sub_E31C0(v7, v25, v23); !i[1].m128i_i64[1]; i = *(const __m128i **)(v7 + 16) )
    {
      if ( ++v24 == 3 )
        goto LABEL_20;
      v25 = byte_1BACF8[v24];
      if ( v23 )
        goto LABEL_25;
LABEL_29:
      ;
    }
    *(__m128i *)v6 = _mm_loadu_si128(i);
    v27 = _mm_loadu_si128(i + 1);
    *(_QWORD *)(v6 + 32) = 0;
    *(__m128i *)(v6 + 16) = v27;
  }
  return v6;
}
