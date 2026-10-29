__int64 __fastcall sub_E6B60(__int64 a1, unsigned __int8 *a2, _DWORD *a3)
{
  const char *v3; // r11
  __int64 result; // rax
  __int64 v6; // rdx

  v3 = (const char *)a2;
  if ( a2 && !(unsigned int)sub_CA590(a2, "sqlite_", 7) || (BYTE1(*a3) & 0x80u) != 0 )
    goto LABEL_3;
  result = 0;
  if ( (*a3 & 0x1000) != 0 )
  {
    v6 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 51LL) & 0x10) != 0 && !*(_QWORD *)(v6 + 560) )
    {
      result = *(unsigned int *)(v6 + 220);
      if ( (_DWORD)result )
        return 0;
      if ( *(int *)(v6 + 532) <= 0 || *(_QWORD *)(v6 + 568) )
      {
LABEL_3:
        sub_DBD10(a1, "table %s may not be altered", v3);
        return 1;
      }
    }
  }
  return result;
}
