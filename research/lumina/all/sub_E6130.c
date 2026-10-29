__int64 __fastcall sub_E6130(_BYTE *a1, const char **a2, int a3)
{
  char v3; // al
  int v4; // ecx
  __int64 v5; // r9
  const char *i; // rax

  v3 = *((_BYTE *)a2 + 63);
  if ( v3 == 1 )
  {
    for ( i = a2[10]; i; i = *((const char **)i + 5) )
    {
      if ( *(_QWORD *)a1 == *(_QWORD *)i )
        break;
    }
    if ( *(_QWORD *)(**((_QWORD **)i + 1) + 104LL) )
      return 0;
    goto LABEL_14;
  }
  v4 = *((_DWORD *)a2 + 12);
  if ( (v4 & 0x1001) != 0 )
  {
    v5 = *(_QWORD *)a1;
    if ( (v4 & 1) != 0 )
    {
      if ( (*(_QWORD *)(*(_QWORD *)a1 + 48LL) & 0x10000001LL) == 1 || a1[30] )
        goto LABEL_6;
    }
    else if ( (*(_QWORD *)(*(_QWORD *)a1 + 48LL) & 0x10000000) == 0
           || *(_QWORD *)(v5 + 560)
           || *(_DWORD *)(v5 + 220)
           || *(int *)(v5 + 532) > 0 && !*(_QWORD *)(v5 + 568) )
    {
      goto LABEL_6;
    }
LABEL_14:
    sub_DBD10((__int64)a1, "table %s may not be modified", *a2);
    return 1;
  }
LABEL_6:
  if ( v3 != 2 || a3 )
    return 0;
  sub_DBD10((__int64)a1, "cannot modify %s because it is a view", *a2);
  return 1;
}
