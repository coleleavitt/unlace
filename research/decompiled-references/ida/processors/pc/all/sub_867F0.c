__int64 __fastcall sub_867F0(__int64 a1, __int64 a2, char a3, double a4, double a5)
{
  unsigned __int16 v5; // ax
  __int64 v6; // rdx
  unsigned int v7; // ecx
  unsigned int v9; // ecx
  __int64 first_fcref_to; // rax
  int v11; // edx

  v5 = *(_WORD *)(a2 + 24);
  if ( v5 == 589 )
    goto LABEL_13;
  if ( v5 > 0x24Du )
  {
    if ( (unsigned __int16)(v5 - 736) <= 5u )
      goto LABEL_13;
    if ( (a3 & 1) != 0 )
      return 0;
    goto LABEL_17;
  }
  if ( v5 > 0x34u )
  {
    if ( (unsigned __int16)(v5 - 159) <= 1u )
      goto LABEL_13;
    v11 = a3 & 1;
    v7 = v11 ^ 1;
    if ( v5 == 94 )
      return v7;
    if ( v11 )
      return 0;
    if ( v5 == 86 )
      goto LABEL_23;
LABEL_17:
    first_fcref_to = get_first_fcref_to();
    if ( first_fcref_to != -1 )
    {
      LOBYTE(v7) = (unsigned int)sub_78DA0(a1, 0, first_fcref_to, 0, 0, a4, a5) == 3;
      return v7;
    }
    return 0;
  }
  if ( v5 <= 0x30u )
  {
    if ( (a3 & 1) == 0 )
    {
      if ( v5 == 16 && (get_flags_ex() & 0x10000) != 0 )
      {
        if ( *(_WORD *)(a2 + 24) == 16 )
        {
          v6 = *(_QWORD *)(a2 + 16);
LABEL_10:
          LOBYTE(v7) = (unsigned int)sub_78DA0(a1, 0, v6, 0, 0, a4, a5) == 3;
          return v7;
        }
LABEL_23:
        v6 = sub_7F350(a1, a2, a2 + 40);
        goto LABEL_10;
      }
      goto LABEL_17;
    }
    return 0;
  }
LABEL_13:
  v7 = 1;
  if ( (a3 & 2) == 0 )
    return v7;
  LOBYTE(v9) = netnode_supval() != 8;
  return v9;
}
