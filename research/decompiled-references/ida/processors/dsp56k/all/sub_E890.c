__int64 __fastcall sub_E890(__int64 a1, __int64 a2, signed int a3)
{
  int v4; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // edx
  int v10; // r8d
  __int16 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int16 v18; // ax
  __int64 v19; // rdx
  __int64 v20; // rax

  if ( (a3 & 0xFF00) == 0x4A00 )
    return sub_E490(a1, a2, 0, a3);
  v4 = a3 & 0xF000;
  if ( v4 == 0x4000 )
    return sub_E490(a1, a2, 1, a3);
  if ( (a3 & 0xF800) == 0x3000 )
    return sub_E490(a1, a2, 2, a3);
  if ( (a3 & 0x8000) != 0 )
  {
    v6 = *(int *)(a1 + 264);
    *(_DWORD *)(a1 + 264) = v6 + 1;
    v7 = a1 + 80 * v6 + 272;
    *(_QWORD *)(a1 + 248) = v7;
    *(_BYTE *)(v7 + 4) = 8;
    *(_BYTE *)(v7 + 44) = 8;
    **(_BYTE **)(a1 + 248) = 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 40LL) = 1;
    v8 = *(_QWORD *)(a1 + 248);
    v9 = (a3 >> 12) & 4;
    v10 = (a3 >> 12) & 3;
    v11 = *((unsigned __int8 *)qword_17860 + ((a3 >> 9) & 7));
    if ( (a3 & 0x100) != 0 )
    {
      *(_BYTE *)(v8 + 33) |= 0x10u;
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 3;
      *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v10;
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = v9 == 0 ? 3 : 1;
      v12 = *(_QWORD *)(a1 + 248);
      *(_QWORD *)(a1 + 248) = v12 + 40;
      *(_BYTE *)(v12 + 41) = 1;
      *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v11;
    }
    else
    {
      *(_BYTE *)(v8 + 1) = 1;
      *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v11;
      v13 = *(_QWORD *)(a1 + 248);
      *(_QWORD *)(a1 + 248) = v13 + 40;
      *(_BYTE *)(v13 + 73) |= 0x10u;
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 3;
      *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v10;
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = v9 == 0 ? 3 : 1;
    }
  }
  else
  {
    if ( v4 != 20480 )
      return 0;
    v14 = *(int *)(a1 + 264);
    v15 = a3 & 8;
    *(_DWORD *)(a1 + 264) = v14 + 1;
    v16 = a1 + 80 * v14 + 272;
    *(_QWORD *)(a1 + 248) = v16;
    *(_BYTE *)(v16 + 4) = 8;
    *(_BYTE *)(v16 + 44) = 8;
    **(_BYTE **)(a1 + 248) = 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 40LL) = 1;
    v17 = *(_QWORD *)(a1 + 248);
    v18 = *((unsigned __int8 *)qword_17860 + ((a3 >> 9) & 7));
    if ( (a3 & 0x100) != 0 )
    {
      *(_BYTE *)(v17 + 33) |= 0x10u;
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 3;
      *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = 0;
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = (v15 == 0) + 9;
      v19 = *(_QWORD *)(a1 + 248);
      *(_QWORD *)(a1 + 248) = v19 + 40;
      *(_BYTE *)(v19 + 41) = 1;
      *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v18;
    }
    else
    {
      *(_BYTE *)(v17 + 1) = 1;
      *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v18;
      v20 = *(_QWORD *)(a1 + 248);
      *(_QWORD *)(a1 + 248) = v20 + 40;
      *(_BYTE *)(v20 + 73) |= 0x10u;
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 3;
      *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = 0;
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = (v15 == 0) + 9;
    }
  }
  return 1;
}

