__int64 __fastcall sub_3AB80(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // edx
  int v5; // eax
  __int64 v6; // r12
  unsigned __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v10; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = *(_QWORD *)(a2 + 32);
  v4 = *(_DWORD *)(v3 + 28);
  v5 = *(_DWORD *)(v3 + 32);
  if ( v4 )
  {
    if ( !v5 )
      goto LABEL_9;
  }
  else if ( !v5 )
  {
    return a1;
  }
  sub_FB10((__int64 *)a1, (__int64)"#catch=%d", v5);
  if ( !*(_DWORD *)(*(_QWORD *)(a2 + 32) + 28LL) )
    goto LABEL_10;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 2;
  if ( v6 )
    v7 = v6-- + 1;
  v8 = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 16) < v7 )
  {
    v10 = qvector_reserve(a1, v8, v7, 1);
    *(_QWORD *)a1 = v10;
    v8 = v10;
  }
  *(_QWORD *)(a1 + 8) = v7;
  *(_BYTE *)(v8 + v6) = 32;
  *(_BYTE *)(*(_QWORD *)a1 + v6 + 1) = 0;
  v4 = *(_DWORD *)(*(_QWORD *)(a2 + 32) + 28LL);
LABEL_9:
  sub_10400((__int64 *)a1, (__int64)"#unwind=%d", v4);
LABEL_10:
  if ( *(_BYTE *)(a2 + 40) )
    sub_10400((__int64 *)a1, (__int64)" (pre-9.0 IDB)");
  return a1;
}
