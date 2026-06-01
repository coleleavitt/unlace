__int64 __fastcall sub_E0E0(_DWORD *a1, _QWORD *a2, __int64 a3)
{
  char tinfo_property; // al
  __int64 v6; // rdx
  const char *v7; // rsi

  tinfo_property = get_tinfo_property(*a2, 2);
  v6 = *(_QWORD *)(a3 + 8);
  v7 = s1;
  if ( (tinfo_property & 0x3F) == 0x1D )
  {
    if ( v6 )
      v7 = *(const char **)a3;
    sub_CB10((__int64)"ignoring an existing structure with the name %s(it is the union)\n", v7);
    a1[17] = 8;
    return 0;
  }
  else
  {
    if ( v6 )
      v7 = *(const char **)a3;
    sub_CB10((__int64)"do not create existing structure with the name %s\n", v7);
    *a1 = get_tinfo_size(0, *a2, 0);
    a1[1] = sub_BA70(a2);
    return 1;
  }
}

