__int64 __fastcall sub_EE60(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int16 v8; // dx
  __int64 v9; // rdx

  v3 = *(int *)(a1 + 264);
  *(_DWORD *)(a1 + 264) = v3 + 1;
  v4 = a1 + 80 * v3 + 272;
  *(_QWORD *)(a1 + 248) = v4;
  *(_BYTE *)(v4 + 4) = 8;
  *(_BYTE *)(v4 + 44) = 8;
  **(_BYTE **)(a1 + 248) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 40LL) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
  LODWORD(v4) = (a3 & 0x100) == 0 ? 10 : 6;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = (a3 & 0x100) == 0 ? 10 : 6;
  v5 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 248) = v5 + 40;
  *(_BYTE *)(v5 + 73) |= 0x10u;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 3;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = (a3 >> 6) & 3;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = 1;
  v6 = *(int *)(a1 + 264);
  *(_DWORD *)(a1 + 264) = v6 + 1;
  v7 = a1 + 80 * v6 + 272;
  *(_QWORD *)(a1 + 248) = v7;
  *(_BYTE *)(v7 + 4) = 8;
  *(_BYTE *)(v7 + 44) = 8;
  **(_BYTE **)(a1 + 248) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 40LL) = 1;
  v8 = *((unsigned __int8 *)word_1791A + ((a3 >> 4) & 3));
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v8;
  v9 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 248) = v9 + 40;
  *(_BYTE *)(v9 + 41) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v4;
  return 1;
}

