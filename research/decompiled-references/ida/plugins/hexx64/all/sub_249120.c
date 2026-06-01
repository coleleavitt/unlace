__int64 __fastcall sub_249120(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx

  v6 = *(_QWORD *)(a1 + 112);
  sub_2441C0(a3, v6, 0, a4);
  v9 = j__qalloc_or_throw(64, v6, v7, v8);
  *(_QWORD *)v9 = -1;
  v10 = v9;
  *(_DWORD *)(v9 + 8) = 2;
  *(_QWORD *)(v9 + 12) = -1;
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = a3;
  *(_QWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 48) = 0;
  *(_DWORD *)(v9 + 56) = 0;
  sub_2441C0(v9, *(_QWORD *)(a1 + 112), 0, a4);
  if ( !(unsigned __int8)sub_2453C0(v10, a1, a4) )
    sub_248660(v10, a1, 0, a4);
  return v10;
}

