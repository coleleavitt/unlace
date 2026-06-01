__int64 __fastcall sub_ECC0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int16 v8; // cx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx

  v3 = *(int *)(a1 + 264);
  *(_DWORD *)(a1 + 264) = v3 + 1;
  v5 = a1 + 80 * v3 + 272;
  *(_QWORD *)(a1 + 248) = v5;
  *(_BYTE *)(v5 + 4) = 8;
  *(_BYTE *)(v5 + 44) = 8;
  **(_BYTE **)(a1 + 248) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 40LL) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 33LL) |= 0x10u;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 3;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = (a3 >> 5) & 3;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = ((a3 >> 10) & 4) == 0 ? 3 : 1;
  v6 = *(_QWORD *)(a1 + 248);
  v7 = (a3 >> 8) & 7;
  *(_QWORD *)(a1 + 248) = v6 + 40;
  v8 = *((char *)&qword_172A0 + v7);
  if ( (_BYTE)v8 == 0xFF )
    v8 = ((a3 >> 3) & 1) != 0 ? 6 : 10;
  *(_BYTE *)(v6 + 41) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v8;
  v9 = *(int *)(a1 + 264);
  *(_DWORD *)(a1 + 264) = v9 + 1;
  v10 = a1 + 80 * v9 + 272;
  *(_QWORD *)(a1 + 248) = v10;
  *(_BYTE *)(v10 + 4) = 8;
  *(_BYTE *)(v10 + 44) = 8;
  **(_BYTE **)(a1 + 248) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 40LL) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 33LL) |= 0x10u;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 3;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = 3;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = (a3 & 0x800) == 0 ? 3 : 1;
  v11 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 248) = v11 + 40;
  *(_BYTE *)(v11 + 41) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = *((char *)&qword_17298 + v7);
  return 1;
}

