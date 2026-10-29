__int64 __fastcall sub_EB50(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  __int64 v5; // rcx
  __int16 v6; // r8
  int v7; // esi
  int v8; // ecx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v12; // rdx

  v3 = *(int *)(a1 + 264);
  *(_DWORD *)(a1 + 264) = v3 + 1;
  v5 = a1 + 80 * v3 + 272;
  *(_QWORD *)(a1 + 248) = v5;
  *(_BYTE *)(v5 + 4) = 8;
  v6 = *((unsigned __int8 *)qword_17860 + ((a3 >> 25) & 7));
  *(_BYTE *)(v5 + 44) = 8;
  v7 = a3 & 0x80;
  **(_BYTE **)(a1 + 248) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 40LL) = 1;
  v8 = (unsigned __int8)a3;
  v9 = *(_QWORD *)(a1 + 248);
  if ( (a3 & 0x1000000) != 0 )
  {
    *(_BYTE *)(v9 + 33) |= 0x10u;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 4;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = 2;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = 0;
    if ( (a3 & 0x80) != 0 )
    {
      LOBYTE(v8) = ~(_BYTE)a3;
      ++v8;
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = 1;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) = v8;
    v10 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 248) = v10 + 40;
    *(_BYTE *)(v10 + 41) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v6;
    return 1;
  }
  else
  {
    *(_BYTE *)(v9 + 1) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v6;
    v12 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 248) = v12 + 40;
    *(_BYTE *)(v12 + 73) |= 0x10u;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 4;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = 2;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = 0;
    if ( v7 )
    {
      LOBYTE(v8) = ~(_BYTE)v8;
      ++v8;
      *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = 1;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) = v8;
    return 1;
  }
}

