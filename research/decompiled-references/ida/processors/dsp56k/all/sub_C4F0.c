__int64 __fastcall sub_C4F0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  __int16 v5; // r8
  int v6; // esi
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v10; // rdx

  v4 = *(_QWORD *)(a1 + 248);
  v5 = *((unsigned __int8 *)qword_17860 + (a3 & 7));
  v6 = (a3 >> 6) & 3;
  v7 = (a3 >> 7) & 4;
  if ( (a3 & 0x100) != 0 )
  {
    *(_BYTE *)(v4 + 33) |= 0x10u;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 3;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v6;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = v7 == 0 ? 3 : 1;
    v8 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 248) = v8 + 40;
    *(_BYTE *)(v8 + 41) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v5;
  }
  else
  {
    *(_BYTE *)(v4 + 1) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v5;
    v10 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 248) = v10 + 40;
    *(_BYTE *)(v10 + 73) |= 0x10u;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 3;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v6;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = v7 == 0 ? 3 : 1;
  }
  return 1;
}

