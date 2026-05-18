unsigned __int64 __fastcall sub_E4550(__int64 a1, char a2, const char *a3, _BYTE *a4, __int64 a5)
{
  const char *v6; // rcx
  unsigned __int64 result; // rax

  v6 = "index expressions";
  if ( (a2 & 0x20) == 0 )
  {
    v6 = "CHECK constraints";
    if ( (a2 & 4) == 0 )
    {
      v6 = "partial index WHERE clauses";
      if ( (a2 & 8) != 0 )
        v6 = "generated columns";
    }
  }
  result = sub_DBD10(a1, "%s prohibited in %s", a3, v6);
  if ( a4 )
    *a4 = 121;
  while ( a5 )
  {
    if ( (*(_BYTE *)(a5 + 4) & 1) == 0 )
    {
      result = *(unsigned int *)(a5 + 52);
      if ( (int)result > 0 )
      {
        *(_DWORD *)(*(_QWORD *)a1 + 84LL) = result;
        return result;
      }
    }
    a5 = *(_QWORD *)(a5 + 16);
  }
  return result;
}
