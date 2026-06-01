__int64 __fastcall sub_17BB0(__int64 a1)
{
  __int64 v1; // r9
  unsigned int v2; // ebp
  __int64 v3; // r9
  int v4; // r10d
  __int16 v5; // ax
  char v7; // dl
  __int16 v8; // dx
  __int64 v9; // rax

  v1 = *(_QWORD *)(a1 + 864);
  if ( *(_BYTE *)(v1 + 1) != 1 )
    return 0;
  v2 = sub_17AE0(*(_QWORD *)(a1 + 888), a1 + 16, *(unsigned __int16 *)(v1 + 6));
  if ( !(_BYTE)v2 )
    return 0;
  v5 = *(_WORD *)(a1 + 40);
  if ( (unsigned __int16)(v5 - 25) <= 1u || v5 == 123 )
    return 0;
  if ( *(_BYTE *)(v3 + 32) != 2 )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v9 = *(_QWORD *)(a1 + 376);
  v7 = *(_BYTE *)(v3 + 5);
  *(_DWORD *)(v9 + 64) = v4;
  *(_BYTE *)(v9 + 68) = v7;
  v8 = *(_WORD *)(a1 + 40);
  LOWORD(v9) = 255;
  if ( v8 != 14 )
  {
    LOWORD(v9) = -1;
    if ( v8 == 24 )
    {
      LODWORD(v9) = 1 << log2ceil(*(_QWORD *)(a1 + 144));
      if ( (unsigned int)v9 > 0xFFFF )
        LOWORD(v9) = -1;
    }
  }
  *(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL) = v9;
  return v2;
}

