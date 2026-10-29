__int64 __fastcall sub_1C2180(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        int a5,
        _DWORD *a6,
        double a7,
        _DWORD *a8)
{
  int v8; // eax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  bool v11; // cf
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 result; // rax

  v8 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 2 )
    return sub_1C1D10(a1, *(_QWORD **)(a2 + 8), a3, a4, a6, a8, 0);
  if ( v8 > 2 )
  {
    if ( (unsigned int)(v8 - 3) <= 3 )
      return 0;
    goto LABEL_20;
  }
  if ( v8 != 1 )
  {
LABEL_20:
    if ( !under_debugger )
      sub_383060(0xC75Fu, a7);
LABEL_25:
    BUG();
  }
  v9 = *(_QWORD *)(a2 + 8);
  v10 = v9 + a5;
  if ( __CFADD__(v9, a5) )
  {
    if ( !under_debugger )
      sub_383060(0xCB2Au, a7);
    goto LABEL_25;
  }
  v11 = __CFADD__(a3, a4);
  v12 = a3 + a4;
  if ( v11 )
    sub_1C1F40(a7);
  v13 = v9;
  if ( a3 >= v9 )
    v13 = a3;
  if ( v12 > v10 )
    v12 = v10;
  result = 0;
  if ( v13 < v12 )
  {
    if ( a8 )
      *a8 = a3 - v13;
    if ( a6 )
      *a6 = v13 - v9;
    return (unsigned int)(v12 - v13);
  }
  return result;
}

