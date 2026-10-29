__int64 __fastcall sub_27ECF0(__int64 a1, __int64 a2, double a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r13
  int v10; // r12d

  if ( *(_DWORD *)(a2 + 8) != 81 )
    return 0;
  v5 = *(_QWORD *)(a1 + 64);
  if ( **(_DWORD **)(a2 + 24) != *(_DWORD *)(v5 + 12) )
    return 0;
  if ( *(_DWORD *)(v5 + 8) == 80 )
  {
    v9 = *(_QWORD *)a2;
    v10 = *(_DWORD *)(a2 + 12);
    sub_25AA70(a2, v5, a3);
    *(_QWORD *)a2 = v9;
    *(_DWORD *)(a2 + 12) = v10;
  }
  else
  {
    sub_255050(a2, a3);
    *(_DWORD *)(a2 + 8) = 80;
    v8 = j__qalloc_or_throw(64, v5, v6, v7);
    *(_QWORD *)(v8 + 8) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)v8 = -1;
    *(_QWORD *)(v8 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v8 + 40) = 0;
    *(_QWORD *)(v8 + 48) = 0;
    *(_DWORD *)(v8 + 56) = 0;
    *(_OWORD *)(v8 + 24) = 0;
    *(_QWORD *)(a2 + 24) = v8;
  }
  ++*(_DWORD *)(a1 + 72);
  return 0;
}

