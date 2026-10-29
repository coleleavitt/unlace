__int64 __fastcall sub_3C0660(__int64 a1, __int64 a2, char a3, double a4)
{
  const char *v4; // r13
  int tinfo_size; // eax

  v4 = s1;
  if ( *(_QWORD *)(a2 + 24) )
    v4 = *(const char **)(a2 + 16);
  if ( (int)sub_3C0270(v4) < 0 )
    return 1;
  tinfo_size = get_tinfo_size();
  return sub_3C0590(a1, v4, tinfo_size, a3, a4);
}

