__int64 __fastcall sub_31740(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rbp
  int dword; // eax
  int v9; // edx

  v4 = *a1;
  v5 = a1[1];
  if ( *a1 != -1 )
  {
    if ( v5 >= v4 + a3 )
      goto LABEL_3;
    return 0;
  }
  if ( v5 < a3 || v5 == -1 )
    return 0;
  v4 = v5 - a3;
LABEL_3:
  v6 = v4;
  v7 = v4 + (a3 & 0xFFFFFFFFFFFFFFFCLL);
  do
  {
    dword = get_dword(v6);
    v9 = *(_DWORD *)(a2 - v4 + v6);
    if ( (~v9 & 0x3FFFFFC) != 0 )
    {
      if ( (unsigned __int16)v9 == 0xFFFF )
        dword |= 0xFFFFu;
      if ( v9 != dword )
        return 0;
    }
    else if ( v9 != (dword | 0x3FFFFFC) )
    {
      return 0;
    }
    v6 += 4LL;
  }
  while ( v6 != v7 );
  *a1 = v4;
  a1[1] = a3 + v4;
  return 1;
}
