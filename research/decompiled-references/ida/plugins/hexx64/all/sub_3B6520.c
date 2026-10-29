void __fastcall sub_3B6520(__int64 a1, __m128 a2, double a3, __m128i a4, double a5)
{
  __int64 v6; // rax
  __int64 v7; // r9
  double v8; // xmm0_8
  __int64 v9; // rsi
  signed int v10; // esi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  const char *v15; // rax
  const char *v16; // rbp
  size_t v17; // rax
  size_t v18; // r14
  size_t v19; // r12
  char *v20; // r12
  char *v21; // rax
  char *v22; // rbp
  unsigned int i; // edi
  char *v24; // [rsp+10h] [rbp-48h] BYREF
  __int128 v25; // [rsp+18h] [rbp-40h]
  unsigned __int64 v26; // [rsp+28h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  sub_38B490(a1, 0);
  v6 = sub_38D760(a1 + 80);
  if ( v6 != -1 )
  {
    v8 = ((double (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(16, 5, &v24, v6, &callui, v7);
    sub_39A630(a1, (unsigned __int64)v24, -1, 0, 0xFFFF, 1, v8, a3, a4, a5);
    return;
  }
  v9 = sub_38D720(a1 + 80);
  if ( v9 )
  {
    sub_3B5A60(a1, v9, a2, a3, *(double *)a4.m128i_i64, a5);
    return;
  }
  v10 = sub_3ACC00(a1);
  if ( v10 != -1 )
  {
    sub_3B5D30(a1, v10, a2, a3, a4, a5);
    return;
  }
  if ( *(_DWORD *)(a1 + 80) != 1 )
    return;
  v13 = *(_QWORD *)(a1 + 88);
  v14 = *(_DWORD *)(v13 + 8);
  if ( (unsigned int)(v14 - 59) <= 1 )
  {
    sub_3B6000(a1, a2, *(_QWORD *)(v13 + 24) + 48LL, *(unsigned int *)(v13 + 32), a3, a4, a5);
    return;
  }
  if ( (unsigned int)(v14 - 73) > 0xB )
    return;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
    70,
    *(_QWORD *)(a1 + 8),
    0,
    &callui,
    v11,
    v12);
  v16 = v15;
  if ( !v15 )
    return;
  v24 = nullptr;
  v25 = 0;
  v17 = strlen(v15);
  v18 = v17 + 1;
  v19 = v17;
  v24 = (char *)qvector_reserve((__int64)&v24, 0, v17 + 1, 1);
  *(_QWORD *)&v25 = v18;
  memmove(v24, v16, v19);
  v24[v19] = 0;
  if ( (unsigned __int64)v25 > 1 && tag_remove() > 0 )
  {
    v20 = &v24[*(int *)(a1 + 48)];
    v21 = (char *)skip_spaces();
    v22 = v21;
    if ( v20 < v21 )
      goto LABEL_18;
    for ( i = *v21; i <= 0x7F; i = *++v22 )
    {
      if ( !isalpha(i) )
        break;
    }
    if ( v22 < v20 )
    {
LABEL_18:
      if ( v24 )
        goto LABEL_24;
      return;
    }
    sub_3B6250(a1, *(_DWORD *)(*(_QWORD *)(a1 + 88) + 8LL), (__m128)0LL, a3, *(double *)a4.m128i_i64, a5);
  }
  if ( v24 )
  {
LABEL_24:
    *(_QWORD *)&v25 = 0;
    qfree((__int64)v24);
  }
}

