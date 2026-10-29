__int64 __fastcall sub_AAD0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v4; // rax
  unsigned int v5; // edx
  char v6; // di
  int v7; // edx
  __int16 v8; // cx
  __int64 v9; // rcx
  int v10; // edx
  char v11; // r9
  __int16 v12; // dx
  unsigned __int8 v13; // r9
  char v14; // cl
  unsigned __int8 v15; // al
  __int64 v16; // r8
  unsigned __int8 v17; // cl
  unsigned int v18; // ecx
  char v20; // r8
  int v21; // ecx
  int v22; // r9d
  int v23; // ecx
  __int16 v24; // cx

  while ( *(_DWORD *)(a2 + 28) )
  {
    v13 = a4;
    v14 = a4 >> 4;
    if ( v13 > 0xBFu )
    {
      sub_8440(a1, a2, a3, v14, (v13 & 8) != 0, v13 & 7);
      return 1;
    }
    v15 = v13 & 0xF;
    if ( (unsigned __int8)v14 > 7u )
    {
      v20 = 19;
      v21 = v14 & 3;
      if ( v21 )
      {
        v20 = 17;
        if ( (_BYTE)v21 != 1 )
          v20 = 2 * ((_BYTE)v21 == 2) + 16;
      }
      v18 = 0;
      v22 = v13 & 8;
      if ( v22 )
        return v18;
      *(_BYTE *)(a3 + 1) = 3;
      v23 = *(_DWORD *)(a2 + 28);
      if ( v23 )
        LOBYTE(v22) = v23 - 1;
      *(_BYTE *)(a3 + 5) = v22;
      v24 = *(_WORD *)(a1 + 224) > 0xFFFu;
      *(_BYTE *)(a3 + 32) = v20;
      *(_WORD *)(a3 + 6) = 32 * v24 + v15;
      return 1;
    }
    if ( (unsigned __int8)v14 > 3u )
    {
      if ( v14 == 4 )
      {
        if ( !v15 )
          return sub_84D0(a1, a2, a3, 24);
        v18 = 0;
        if ( v15 == 8 )
          return sub_84D0(a1, a2, a3, 26);
      }
      else
      {
        return 0;
      }
      return v18;
    }
    LOWORD(v16) = v14 & 0xF;
    v17 = v13 & 0xF;
    if ( *(_DWORD *)(a2 + 28) )
    {
      v4 = a3;
      v5 = 0;
      if ( (v13 & 8) == 0 )
      {
        if ( (_BYTE)v16 )
        {
          *(_BYTE *)(v4 + 1) = 4;
          v6 = *(_BYTE *)(a2 + 28);
          *(_WORD *)(v4 + 6) = v17 + 32;
          *(_BYTE *)(v4 + 5) = v6 - 1;
          v7 = *(_DWORD *)(a2 + 28);
          if ( v7 == 3 )
          {
            v16 = (4 * (_WORD)v16) & 0x3FC;
          }
          else
          {
            v8 = 2 * v16;
            v16 = (unsigned __int8)v16;
            v9 = v8 & 0x1FE;
            if ( v7 == 2 )
              v16 = v9;
          }
          *(_BYTE *)(v4 + 33) |= 0x80u;
          *(_QWORD *)(v4 + 16) = v16;
        }
        else
        {
          *(_BYTE *)(v4 + 1) = 3;
          v10 = *(_DWORD *)(a2 + 28);
          v11 = 0;
          if ( v10 )
            v11 = v10 - 1;
          *(_BYTE *)(v4 + 5) = v11;
          v12 = *(_WORD *)(a1 + 224) > 0xFFFu;
          *(_BYTE *)(v4 + 32) = 0;
          *(_WORD *)(v4 + 6) = v17 + 32 * v12;
        }
        return 1;
      }
      return v5;
    }
    if ( under_debugger )
      BUG();
    a1 = 10298;
    interr();
  }
  if ( under_debugger )
    BUG();
  interr();
  return sub_AC10(10308);
}

