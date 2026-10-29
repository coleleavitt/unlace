__int64 __fastcall sub_C4960(char *a1, int a2, unsigned __int8 a3)
{
  __int64 result; // rax
  int v4; // esi
  int v5; // eax

  if ( *a1 == a2 )
  {
    v4 = *((_DWORD *)a1 + 1);
    v5 = 4;
    if ( a3 == (v4 & 3) )
      return (unsigned int)(v5 + 2);
    return v5 - ((unsigned int)(((unsigned __int8)v4 & a3 & 2) == 0) - 1);
  }
  if ( a2 == -2 )
    return *((_QWORD *)a1 + 3) != 0 ? 6 : 0;
  result = 0;
  if ( *a1 < 0 )
  {
    v4 = *((_DWORD *)a1 + 1);
    v5 = 1;
    if ( a3 == (v4 & 3) )
      return (unsigned int)(v5 + 2);
    return v5 - ((unsigned int)(((unsigned __int8)v4 & a3 & 2) == 0) - 1);
  }
  return result;
}
