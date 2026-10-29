bool __fastcall sub_5AB0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  char v3; // cl
  unsigned __int16 v4; // dx
  int v5; // eax
  unsigned __int8 v6; // r12
  int v7; // edx
  int v9; // r15d
  unsigned __int8 v10; // [rsp+5h] [rbp-43h] BYREF
  unsigned __int16 v11; // [rsp+6h] [rbp-42h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  if ( qlread(a2, &v11, 2) != 2 )
    return 0;
  v2 = v11;
  v3 = v11 & 0x1F;
  v4 = HIBYTE(v11);
  *(_BYTE *)a1 = v11 & 0x1F;
  if ( v3 == 31 )
    return 0;
  *(_BYTE *)(a1 + 2) = v2 >> 6;
  *(_BYTE *)(a1 + 1) = (v2 & 0x20) != 0;
  if ( (v4 & 0x80u) != 0 )
  {
    v6 = v4 & 0x7F;
    if ( (unsigned __int8)((v4 & 0x7F) - 1) <= 3u )
    {
      v5 = 0;
      v9 = 0;
      while ( 1 )
      {
        *(_DWORD *)(a1 + 4) = v5 << 8;
        if ( qlread(a2, &v10, 1) != 1 )
          break;
        ++v9;
        v5 = *(_DWORD *)(a1 + 4) | v10;
        *(_DWORD *)(a1 + 4) = v5;
        if ( v9 == v6 )
        {
          if ( __CFADD__(v5, (unsigned __int8)(v6 + 2)) )
            return 0;
          v7 = v5 + v9 + 2;
          goto LABEL_5;
        }
      }
    }
    return 0;
  }
  v5 = v4;
  v6 = 1;
  *(_DWORD *)(a1 + 4) = v4;
  v7 = (unsigned __int16)(v4 + 2);
LABEL_5:
  *(_DWORD *)(a1 + 8) = v7;
  *(_BYTE *)(a1 + 12) = v6;
  return v5 != 0;
}
