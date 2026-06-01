__int64 __fastcall sub_21D00(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  unsigned int v3; // edx

  v1 = (unsigned int)sub_218A0(*(_WORD *)(a1 + 24)) - 2;
  if ( (unsigned __int8)v2 > 0x11u )
  {
    v3 = 0;
    if ( (unsigned int)v1 > 6 )
      return (unsigned int)-1;
  }
  else
  {
    v3 = dword_940E0[v2];
    if ( (unsigned int)v1 > 6 )
      goto LABEL_3;
  }
  v3 -= dword_940C0[v1];
LABEL_3:
  if ( v3 - 1 > 4 )
    return (unsigned int)-1;
  return v3;
}

