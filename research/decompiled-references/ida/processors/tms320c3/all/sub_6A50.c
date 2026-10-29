__int64 __fastcall sub_6A50(_QWORD *a1, int a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ecx
  __int64 v4; // rcx
  unsigned __int16 v5; // dx

  v2 = *(_QWORD *)(*a1 + 16LL);
  if ( (a2 & 0x200000) != 0 )
    v3 = ((__int16)a2 + (_DWORD)v2 + 3) & 0xFFFFFF;
  else
    v3 = ((__int16)a2 + (_DWORD)v2 + 1) & 0xFFFFFF;
  *(_QWORD *)(a1[1] + 16LL) = v3;
  v4 = a1[1];
  v5 = *(_WORD *)(*a1 + 24LL);
  if ( v5 > 0x50u )
  {
    if ( (unsigned __int16)(v5 - 82) <= 2u )
      goto LABEL_5;
  }
  else if ( v5 > 0x4Cu )
  {
LABEL_5:
    *(_BYTE *)(v4 + 1) = 7;
    *(_BYTE *)(a1[1] + 5LL) = 9;
    return 1;
  }
  *(_BYTE *)(v4 + 1) = 2;
  *(_BYTE *)(a1[1] + 5LL) = 0;
  return 1;
}

