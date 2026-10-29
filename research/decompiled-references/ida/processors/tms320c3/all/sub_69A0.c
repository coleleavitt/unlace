__int64 __fastcall sub_69A0(_QWORD *a1, int a2)
{
  __int64 v2; // rdx
  unsigned __int16 v3; // ax

  *(_QWORD *)(a1[1] + 16LL) = a2 & 0xFFFFFF;
  v2 = a1[1];
  v3 = *(_WORD *)(*a1 + 24LL);
  if ( v3 > 0x50u )
  {
    if ( (unsigned __int16)(v3 - 82) <= 2u )
      goto LABEL_3;
  }
  else if ( v3 > 0x4Cu )
  {
LABEL_3:
    *(_BYTE *)(v2 + 1) = 7;
    *(_BYTE *)(a1[1] + 5LL) = 9;
    return 1;
  }
  *(_BYTE *)(v2 + 1) = 2;
  *(_BYTE *)(a1[1] + 5LL) = 0;
  return 1;
}

