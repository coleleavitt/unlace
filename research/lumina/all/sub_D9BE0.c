__int64 __fastcall sub_D9BE0(__int64 a1, unsigned __int8 a2, double a3, __int64 a4, int a5, int a6, int a7)
{
  __int16 v7; // ax
  int v8; // ebp

  v7 = *(_WORD *)(a1 + 20);
  if ( (v7 & 0x12) == 0 )
  {
    v8 = a2 & 0xF7;
    sub_D9920(a1, a2, 0, a5, a6, a7, a3);
    goto LABEL_7;
  }
  if ( (v7 & 0x400) != 0 )
  {
    if ( (unsigned int)sub_E01A0() )
      return 0;
    v7 = *(_WORD *)(a1 + 20);
  }
  *(_WORD *)(a1 + 20) = v7 | 2;
  v8 = a2 & 0xF7;
  if ( *(unsigned __int8 *)(a1 + 22) == v8 )
  {
    if ( (a2 & 8) == 0 )
      goto LABEL_5;
LABEL_9:
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && (unsigned int)sub_E0350(a1) )
      return 0;
    goto LABEL_5;
  }
  sub_E0AA0(a1, a2 & 0xF7, a3);
  if ( (a2 & 8) != 0 )
    goto LABEL_9;
LABEL_5:
  if ( (*(_WORD *)(a1 + 20) & 0x202) == 2 )
    sub_E02F0(a1);
LABEL_7:
  if ( *(unsigned __int8 *)(a1 + 22) == v8 )
    return *(_QWORD *)(a1 + 8);
  return 0;
}
