__int64 __fastcall sub_69740(__int64 a1)
{
  int v1; // eax
  int v4; // esi
  int v5; // r9d
  int v6; // r8d
  int v7; // r10d
  int v8; // r11d
  int v9; // ebx
  int v10; // edi
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  v1 = *(_DWORD *)(a1 + 16);
  if ( (v1 & 0x10011151) != 0x10000040 )
    return 0;
  v4 = v1 >> 22;
  v5 = v1 >> 7;
  v6 = v1 >> 5;
  v7 = (v1 >> 13) & 7;
  v8 = (v1 >> 17) & 7;
  v9 = (v1 >> 1) & 7;
  v10 = (v1 >> 20) & 1;
  if ( (v1 & 0x200000) != 0 )
  {
    v11 = ((unsigned __int8)v6 | (unsigned __int8)(v5 | v4)) & 1;
    if ( (((unsigned __int8)v6 | (unsigned __int8)(v5 | v4)) & 1) == 0 )
    {
      if ( !v10 || v7 != v9 && v7 != v8 )
      {
        v12 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(v12 + 46) = v7 + 45;
        *(_BYTE *)(v12 + 41) = 1;
        *(_BYTE *)(v12 + 45) = 8;
        v13 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(v13 + 86) = v8 + 45;
        *(_BYTE *)(v13 + 81) = 1;
        *(_BYTE *)(v13 + 85) = 8;
        v14 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(v14 + 121) = 1;
        *(_WORD *)(v14 + 126) = v9 + 45;
        *(_BYTE *)(v14 + 125) = 8;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 161LL) = 5;
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL) = 90LL * ((*(int *)(a1 + 16) >> 23) & 3);
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 165LL) = 2;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = (v10 + 19) | 0x80;
        *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 1062;
        return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
      }
      return v11;
    }
    return 0;
  }
  v11 = v1 & 0x800000;
  if ( (v1 & 0x800000) != 0 )
  {
    v11 = ((unsigned __int8)v6 | (unsigned __int8)(v5 | v4)) & 1;
    if ( (((unsigned __int8)v6 | (unsigned __int8)(v5 | v4)) & 1) == 0 )
    {
      if ( v7 != v9 || !(_BYTE)v10 )
      {
        v15 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(v15 + 46) = v7 + 45;
        *(_BYTE *)(v15 + 41) = 1;
        *(_BYTE *)(v15 + 45) = 8;
        v16 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(v16 + 86) = v8 + 45;
        *(_BYTE *)(v16 + 81) = 1;
        *(_BYTE *)(v16 + 85) = 8;
        v17 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(v17 + 121) = 1;
        *(_WORD *)(v17 + 126) = v9 + 45;
        *(_BYTE *)(v17 + 125) = 8;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 161LL) = 5;
        v18 = -(__int64)((*(_DWORD *)(a1 + 16) & 0x1000000) == 0);
        LOBYTE(v18) = v18 & 0x4C;
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL) = v18 + 270;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 165LL) = 2;
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = (v10 + 19) | 0x80;
        *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 1018;
        return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
      }
      return v11;
    }
    return 0;
  }
  return v11;
}
