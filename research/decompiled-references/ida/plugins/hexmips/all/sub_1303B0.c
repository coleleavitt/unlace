bool __fastcall sub_1303B0(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD v11[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = a4;
  v11[1] = __readfsqword(0x28u);
  if ( a4 == -1 || *(_DWORD *)(a3 + 4) != *(_DWORD *)(*(_QWORD *)(a2 + 1504) + 84LL) )
    return 0;
  if ( (unsigned __int8)sub_155210(a3, v11, 0) )
  {
    v7 = v11[0];
  }
  else
  {
    if ( *(_BYTE *)a3 != 10 )
      return 0;
    v10 = *(_QWORD *)(a3 + 8);
    if ( *(_BYTE *)v10 != 6 )
      return 0;
    v7 = *(_QWORD *)(v10 + 8);
    v11[0] = v7;
  }
  v8 = *(_QWORD *)(a2 + 1496);
  v9 = *(_QWORD *)(v8 + 24);
  if ( v7 == -1 )
  {
    if ( v4 )
      goto LABEL_8;
    return 0;
  }
  if ( *(_QWORD *)(v9 + 16) - v7 >= v4 )
    return 0;
LABEL_8:
  if ( a1 )
  {
    *a1 = v7;
    v9 = *(_QWORD *)(v8 + 24);
  }
  return (*(_QWORD *)(v9 + 16) & (v7 + v4)) != 0;
}

