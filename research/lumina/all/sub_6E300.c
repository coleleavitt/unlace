unsigned __int64 __fastcall sub_6E300(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  size_t v4; // r12
  const void *v5; // r13
  const char *v6; // rsi
  const char *v7; // rsi

  sub_6E050(a1, a2);
  v3 = *(unsigned int *)(a1 + 56);
  sub_69D50(a2);
  v4 = *(_QWORD *)(a1 + 72);
  v5 = *(const void **)(a1 + 64);
  if ( HIDWORD(v4) )
    sub_662B0(a2, v3);
  sub_69D50(a2);
  if ( v4 )
    sub_67AC0(a2, v5, v4);
  sub_69D50(a2);
  v6 = s1;
  if ( *(_QWORD *)(a1 + 104) )
    v6 = *(const char **)(a1 + 96);
  sub_6AA10(a2, v6);
  v7 = s1;
  if ( *(_QWORD *)(a1 + 128) )
    v7 = *(const char **)(a1 + 120);
  sub_6AA10(a2, v7);
  sub_67AC0(a2, (const void *)(a1 + 144), 0x10u);
  return sub_6A9B0(a2, *(_QWORD *)(a1 + 160) + 1LL);
}
