__int64 __fastcall sub_3A190(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  unsigned int *v3; // rax
  void *v4; // r12
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v10; // rax

  v1 = a1 + 192;
  v2 = a1;
  v3 = (unsigned int *)sub_1692C0(a1 + 192, 10);
  if ( !v3 )
  {
    if ( *(_QWORD *)(a1 + 216) > 1u )
      sub_2F0E0(a1, (__int64)"%s\n", *(const char **)(a1 + 208));
    return 0;
  }
  v4 = v3;
  *(_QWORD *)(a1 + 352) = 0;
  sub_2DB60((__int64 *)(a1 + 344), v3, *v3 + 5LL);
  v5 = sub_167E00(v1, v4);
  if ( (unsigned __int8)sub_167DE0(v1) )
  {
    nullsub_69(v1, v5, v4);
    if ( v5 )
      goto LABEL_4;
    return 0;
  }
  if ( !v5 )
    return 0;
LABEL_4:
  sub_39C10(a1, v5);
  v6 = *(_QWORD *)(a1 + 328);
  v7 = *(_QWORD *)(a1 + 320);
  if ( *(_QWORD *)(a1 + 336) < (unsigned __int64)(v6 + 1) )
  {
    a1 += 320;
    v10 = sub_1987B0(v2 + 320, v7, v6 + 1, 24);
    v6 = *(_QWORD *)(v2 + 328);
    *(_QWORD *)(v2 + 320) = v10;
    v7 = v10;
  }
  v8 = v7 + 24 * v6;
  *(_QWORD *)v8 = 0;
  *(_OWORD *)(v8 + 8) = 0;
  ++*(_QWORD *)(v2 + 328);
  *(_DWORD *)v8 = *(unsigned __int8 *)(v5 + 8);
  *(_QWORD *)(v8 + 8) = sub_199140(a1, v7);
  j__free(v4);
  return v5;
}
