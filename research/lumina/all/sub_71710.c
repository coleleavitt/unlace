unsigned __int64 __fastcall sub_71710(__int64 a1, __int64 *a2)
{
  const char *v3; // rsi
  const char *v4; // rsi

  v3 = s1;
  if ( *(_QWORD *)(a1 + 8) )
    v3 = *(const char **)a1;
  sub_6AA10(a2, v3);
  v4 = s1;
  if ( *(_QWORD *)(a1 + 32) )
    v4 = *(const char **)(a1 + 24);
  sub_6AA10(a2, v4);
  sub_6A9B0(a2, *(_QWORD *)(a1 + 48));
  return sub_6A9B0(a2, *(_QWORD *)(a1 + 56));
}
