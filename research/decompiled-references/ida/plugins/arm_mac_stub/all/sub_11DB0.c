bool __fastcall sub_11DB0(__int64 a1)
{
  unsigned __int16 v1; // dx
  int v2; // eax
  unsigned __int8 v3; // r12
  int v4; // edx
  int v6; // r15d
  unsigned __int8 v7; // [rsp+5h] [rbp-43h]
  unsigned __int16 v8; // [rsp+6h] [rbp-42h]

  if ( qlread() != 2 )
    return 0;
  v1 = HIBYTE(v8);
  *(_BYTE *)a1 = v8 & 0x1F;
  if ( (v8 & 0x1F) == 0x1F )
    return 0;
  *(_BYTE *)(a1 + 2) = (unsigned __int8)v8 >> 6;
  *(_BYTE *)(a1 + 1) = (v8 & 0x20) != 0;
  if ( (v8 & 0x8000u) != 0 )
  {
    v3 = HIBYTE(v8) & 0x7F;
    if ( (unsigned __int8)((HIBYTE(v8) & 0x7F) - 1) <= 3u )
    {
      v2 = 0;
      v6 = 0;
      while ( 1 )
      {
        *(_DWORD *)(a1 + 4) = v2 << 8;
        if ( qlread() != 1 )
          break;
        ++v6;
        v2 = *(_DWORD *)(a1 + 4) | v7;
        *(_DWORD *)(a1 + 4) = v2;
        if ( v6 == v3 )
        {
          if ( __CFADD__(v2, (unsigned __int8)(v3 + 2)) )
            return 0;
          v4 = v2 + v6 + 2;
          goto LABEL_5;
        }
      }
    }
    return 0;
  }
  v2 = v1;
  v3 = 1;
  *(_DWORD *)(a1 + 4) = v1;
  v4 = (unsigned __int16)(v1 + 2);
LABEL_5:
  *(_DWORD *)(a1 + 8) = v4;
  *(_BYTE *)(a1 + 12) = v3;
  return v2 != 0;
}

