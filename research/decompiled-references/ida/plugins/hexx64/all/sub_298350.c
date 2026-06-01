__int64 __fastcall sub_298350(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v6; // r13
  unsigned int v7; // ebx
  __int64 v8; // r12
  __int64 v9; // rax

  v3 = *(_QWORD *)(a2 + 24);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 64) + 24LL);
  if ( !*(_QWORD *)(v4 + 16) )
    return 0;
  v6 = *(_QWORD *)(v4 + 8);
  v7 = sub_288E90(*(_QWORD *)(a1 + 64), v3, v6 + 16, a3);
  if ( !(_BYTE)v7 )
    return 0;
  if ( *(_DWORD *)(v6 + 28) == -1 )
  {
    v8 = *(_QWORD *)(v4 + 8);
    v9 = *(_QWORD *)v8;
    **(_QWORD **)(v8 + 8) = *(_QWORD *)v8;
    *(_QWORD *)(v9 + 8) = *(_QWORD *)(v8 + 8);
    sub_255050(v8 + 16, a3);
    qfree(v8);
    --*(_QWORD *)(v4 + 16);
  }
  else
  {
    sub_255050(v6 + 16, a3);
  }
  return v7;
}

