__int64 __fastcall sub_279930(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r13
  int v7; // r12d

  if ( *(_DWORD *)(a2 + 8) != 81 )
    return 0;
  v4 = *(_QWORD *)(a1 + 64);
  if ( **(_DWORD **)(a2 + 24) != *(_DWORD *)(v4 + 12) )
    return 0;
  if ( *(_DWORD *)(v4 + 8) == 80 )
  {
    v6 = *(_QWORD *)a2;
    v7 = *(_DWORD *)(a2 + 12);
    sub_2556B0(a2, v4);
    *(_QWORD *)a2 = v6;
    *(_DWORD *)(a2 + 12) = v7;
  }
  else
  {
    sub_24FC90(a2);
    *(_DWORD *)(a2 + 8) = 80;
    v5 = j__qalloc_or_throw();
    *(_QWORD *)(v5 + 8) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)v5 = -1;
    *(_QWORD *)(v5 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v5 + 40) = 0;
    *(_QWORD *)(v5 + 48) = 0;
    *(_DWORD *)(v5 + 56) = 0;
    *(_OWORD *)(v5 + 24) = 0;
    *(_QWORD *)(a2 + 24) = v5;
  }
  ++*(_DWORD *)(a1 + 72);
  return 0;
}

