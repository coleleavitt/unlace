__int64 __fastcall sub_1D61C0(__int64 a1)
{
  unsigned __int64 v1; // rsi
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
  if ( v1 != *(_QWORD *)(a1 + 80) + 16LL * *(_QWORD *)(a1 + 24) )
    return 0;
  v3 = *(_QWORD **)(a1 + 8);
  v4 = sub_330F80(v3, v1);
  return sub_332920((__int64)(v3 + 1), v4);
}

