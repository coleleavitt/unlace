__int64 __fastcall sub_322030(__int64 *a1, __int64 a2, signed __int64 a3, char a4, __int64 a5)
{
  __int64 result; // rax
  _QWORD *v8; // rax
  __int64 v9; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // r12
  __int64 v15; // rax

  if ( a3 >= 0 )
  {
    if ( *(_BYTE *)a2 != 5 )
    {
      if ( *(_BYTE *)a2 != 6 )
        return 0;
      sub_11C460(a1, *(_QWORD *)(a2 + 8), a3);
      return 1;
    }
    v8 = *(_QWORD **)(a2 + 8);
    v9 = v8[1];
    if ( v9 >= 0 )
    {
      sub_11C460(
        a1,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v8 + 1496LL) + 24LL) + 16LL) & (*(_QWORD *)(*v8 + 1440LL) + v9),
        a3);
      return 1;
    }
    if ( !under_debugger )
      sub_37B760(50661);
    goto LABEL_22;
  }
  result = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    if ( *(_BYTE *)a2 != 5 )
    {
      if ( *(_BYTE *)a2 != 6 )
        return 0;
      sub_321F20(a1, *(_QWORD *)(a2 + 8), ~*(_QWORD *)(a2 + 8), a5);
      return 1;
    }
    v10 = *(_QWORD **)(a2 + 8);
    v11 = (_QWORD *)*v10;
    v12 = v10[1];
    v13 = *(_QWORD *)(*(_QWORD *)(*v10 + 1496LL) + 24LL);
    v14 = *(_QWORD *)(v13 + 16) & (v12 + v11[180]);
    if ( v11[21] <= v12 )
    {
      sub_321F20(a1, *(_QWORD *)(v13 + 16) & (v12 + v11[180]), v11[83] + v11[84] - v14, a5);
      return 1;
    }
    if ( !(unsigned __int8)sub_1E8630((__int64)v11, v12, *(_DWORD *)(a2 + 4)) )
    {
      v15 = sub_1C8DE0((__int64)v11, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL));
      sub_321F20(a1, v14, *(_QWORD *)(v15 + 16) + *(_QWORD *)(v15 + 8) - *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), a5);
      return 1;
    }
    if ( !under_debugger )
      sub_37B760(51118);
LABEL_22:
    BUG();
  }
  return result;
}

