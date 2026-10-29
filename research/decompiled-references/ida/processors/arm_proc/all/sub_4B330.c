__int64 __fastcall sub_4B330(__int64 a1, unsigned int a2)
{
  unsigned int v3; // r8d
  __int64 v4; // rcx
  unsigned int v5; // edx
  int v6; // edi
  unsigned int v7; // edx
  __int64 v9; // rdi
  __int16 v10; // si
  __int16 v11; // dx
  __int16 v12; // dx

  v3 = a2 >> 5;
  v4 = a2 & 0x1F;
  v5 = (unsigned __int16)a2 >> 10;
  v6 = (a2 >> 5) & 0x1F;
  if ( v5 == 4 )
  {
    *(_BYTE *)(a1 + 33) = v6;
    *(_WORD *)(a1 + 24) = 959;
    if ( v6 != 17 )
    {
      *(_BYTE *)(a1 + 41) = 1;
      *(_WORD *)(a1 + 46) = v4 + 129;
      *(_BYTE *)(a1 + 45) = 7;
      return *(unsigned __int16 *)(a1 + 26);
    }
    *(_BYTE *)(a1 + 41) = 5;
    *(_BYTE *)(a1 + 45) = 7;
    *(_QWORD *)(a1 + 48) = v4;
    *(_BYTE *)(a1 + 73) = 0;
    *(_QWORD *)(a1 + 64) = 0;
    if ( (a2 & 0x1E) != 0 )
      return *(unsigned __int16 *)(a1 + 26);
LABEL_23:
    *(_BYTE *)(a1 + 44) &= ~8u;
    return *(unsigned __int16 *)(a1 + 26);
  }
  if ( v5 <= 4 )
  {
    if ( (a2 & 0xF800) != 0 )
    {
      v10 = v6 + 129;
      *(_BYTE *)(a1 + 41) = 1;
      *(_BYTE *)(a1 + 45) = 7;
      *(_BYTE *)(a1 + 81) = 1;
      *(_BYTE *)(a1 + 85) = 7;
      *(_WORD *)(a1 + 24) = (v5 != 2) + 956;
      v11 = 161;
      if ( v6 == 31 )
        v10 = 161;
      *(_WORD *)(a1 + 46) = v10;
      if ( (_DWORD)v4 != 31 )
        v11 = v4 + 129;
      *(_WORD *)(a1 + 86) = v11;
    }
    else
    {
      *(_BYTE *)(a1 + 41) = 1;
      *(_BYTE *)(a1 + 45) = 8;
      *(_WORD *)(a1 + 24) = 960 - ((v5 == 0) - 1);
      *(_WORD *)(a1 + 46) = v4 + 163;
      *(_WORD *)(a1 + 86) = v6 + 163;
      *(_BYTE *)(a1 + 81) = 1;
      *(_BYTE *)(a1 + 85) = 8;
    }
    return *(unsigned __int16 *)(a1 + 26);
  }
  if ( v5 == 5 )
  {
    if ( (v3 & 0x1E) != 0 )
    {
      if ( v6 == 2 )
      {
        v12 = 161;
        *(_BYTE *)(a1 + 41) = 1;
        *(_WORD *)(a1 + 24) = 539;
        if ( (_DWORD)v4 != 31 )
          v12 = v4 + 129;
        *(_BYTE *)(a1 + 45) = 7;
        *(_WORD *)(a1 + 46) = v12;
      }
      else
      {
        v7 = 0;
        if ( v6 != 3 )
          return v7;
        v9 = a2 & 0x1F;
        *(_BYTE *)(a1 + 41) = 5;
        *(_WORD *)(a1 + 24) = 958;
        if ( (a2 & 0x1C) == 0 )
          v9 = (unsigned int)(4 * v4 + 3);
        *(_BYTE *)(a1 + 45) = 7;
        *(_BYTE *)(a1 + 73) = 0;
        *(_QWORD *)(a1 + 48) = v9;
        *(_QWORD *)(a1 + 64) = 0;
      }
      return *(unsigned __int16 *)(a1 + 26);
    }
    *(_BYTE *)(a1 + 41) = 5;
    *(_BYTE *)(a1 + 45) = 7;
    *(_WORD *)(a1 + 24) = (v6 == 0) + 954;
    *(_QWORD *)(a1 + 48) = v4;
    *(_BYTE *)(a1 + 73) = 0;
    *(_QWORD *)(a1 + 64) = 0;
    if ( (((unsigned __int8)v3 | (unsigned __int8)a2) & 0x1F) != 0 )
      return *(unsigned __int16 *)(a1 + 26);
    goto LABEL_23;
  }
  return 0;
}

