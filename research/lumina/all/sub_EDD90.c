__int64 __fastcall sub_EDD90(__int64 a1, double a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  __int16 v7; // ax

  v7 = *(_WORD *)(a1 + 20);
  if ( (v7 & 0x12) == 0 )
    return sub_D9DB0(a1, 1u, a2, a4, a5, a6, a7);
  if ( (v7 & 0x400) == 0 )
    goto LABEL_3;
  if ( !(unsigned int)sub_E01A0((int *)a1) )
  {
    v7 = *(_WORD *)(a1 + 20);
LABEL_3:
    *(_WORD *)(a1 + 20) = v7 | 0x10;
    if ( *(_DWORD *)(a1 + 16) )
      return *(_QWORD *)(a1 + 8);
  }
  return 0;
}
