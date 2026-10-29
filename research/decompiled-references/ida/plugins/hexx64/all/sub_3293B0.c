__int64 __fastcall sub_3293B0(__int64 *a1, __int64 a2, signed __int64 a3, char a4, __int64 a5, double a6)
{
  __int64 result; // rax
  _QWORD *v9; // rax
  __int64 v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // r12
  __int64 v16; // rax

  if ( a3 >= 0 )
  {
    if ( *(_BYTE *)a2 != 5 )
    {
      if ( *(_BYTE *)a2 != 6 )
        return 0;
      sub_122B20(a1, *(_QWORD *)(a2 + 8), a3);
      return 1;
    }
    v9 = *(_QWORD **)(a2 + 8);
    v10 = v9[1];
    if ( v10 >= 0 )
    {
      sub_122B20(
        a1,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v9 + 1496LL) + 24LL) + 16LL) & (*(_QWORD *)(*v9 + 1440LL) + v10),
        a3);
      return 1;
    }
    if ( !under_debugger )
      sub_383060(0xC5E5u, a6);
    goto LABEL_22;
  }
  result = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    if ( *(_BYTE *)a2 != 5 )
    {
      if ( *(_BYTE *)a2 != 6 )
        return 0;
      sub_3292A0(a1, *(_QWORD *)(a2 + 8), ~*(_QWORD *)(a2 + 8), a5);
      return 1;
    }
    v11 = *(_QWORD **)(a2 + 8);
    v12 = (_QWORD *)*v11;
    v13 = v11[1];
    v14 = *(_QWORD *)(*(_QWORD *)(*v11 + 1496LL) + 24LL);
    v15 = *(_QWORD *)(v14 + 16) & (v13 + v12[180]);
    if ( v12[21] <= v13 )
    {
      sub_3292A0(a1, *(_QWORD *)(v14 + 16) & (v13 + v12[180]), v12[83] + v12[84] - v15, a5);
      return 1;
    }
    if ( !(unsigned __int8)sub_1EF9B0((__int64)v12, v13, *(_DWORD *)(a2 + 4)) )
    {
      v16 = sub_1CFD00((__int64)v12, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), a6);
      sub_3292A0(a1, v15, *(_QWORD *)(v16 + 16) + *(_QWORD *)(v16 + 8) - *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), a5);
      return 1;
    }
    if ( !under_debugger )
      sub_383060(0xC7AEu, a6);
LABEL_22:
    BUG();
  }
  return result;
}

