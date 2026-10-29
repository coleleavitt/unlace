unsigned __int64 __fastcall sub_6E8A0(__int64 a1, __int64 *a2)
{
  const char *v3; // rsi
  const char *v4; // rsi
  const char *v5; // rsi
  const char *v6; // rsi

  v3 = s1;
  if ( *(_QWORD *)(a1 + 8) )
    v3 = *(const char **)a1;
  sub_6AA10(a2, v3);
  v4 = s1;
  if ( *(_QWORD *)(a1 + 32) )
    v4 = *(const char **)(a1 + 24);
  sub_6AA10(a2, v4);
  v5 = s1;
  if ( *(_QWORD *)(a1 + 56) )
    v5 = *(const char **)(a1 + 48);
  sub_6AA10(a2, v5);
  v6 = s1;
  if ( *(_QWORD *)(a1 + 80) )
    v6 = *(const char **)(a1 + 72);
  sub_6AA10(a2, v6);
  sub_69D50(a2);
  sub_6A9B0(a2, *(_QWORD *)(a1 + 104));
  return sub_69D50(a2);
}
