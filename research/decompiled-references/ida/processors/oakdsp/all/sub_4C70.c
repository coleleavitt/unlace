__int64 __fastcall sub_4C70(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // r8
  int v8; // esi
  __int16 v9; // di
  int v10; // edx
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v14; // rcx

  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 3;
  v7 = *(_QWORD *)(a1 + 248);
  v8 = (a3 >> 5) & 3;
  v9 = a3 & 3;
  v10 = (a3 >> 3) & 3;
  v11 = ((a3 >> 2) & 1) + 4;
  if ( a4 )
  {
    *(_WORD *)(v7 + 6) = v9;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = v10;
    v12 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 248) = v12 + 40;
    *(_BYTE *)(v12 + 41) = 3;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v11;
  }
  else
  {
    *(_WORD *)(v7 + 6) = v11;
    *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = v8;
    v14 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 248) = v14 + 40;
    LOBYTE(v8) = v10;
    *(_BYTE *)(v14 + 41) = 3;
    *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v9;
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = v8;
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

