__int64 __fastcall sub_3EA1F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rax

  v4 = *(_QWORD *)(a3 + 16) + 16LL * *(_QWORD *)a2;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL);
  if ( v4 != v5 )
  {
    v5 &= v4;
    if ( v4 == -1 )
      v5 = -1;
  }
  if ( *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26) != v5 )
    return 0;
  v7 = *(_QWORD **)(a1 + 8);
  v8 = sub_32CB20(v7, v5);
  return sub_32E510((__int64)(v7 + 1), v8);
}

