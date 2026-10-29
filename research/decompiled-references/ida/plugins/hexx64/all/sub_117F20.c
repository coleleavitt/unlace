char __fastcall sub_117F20(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v9; // ebp
  __int128 v11; // rdi
  int *v12; // rax
  char result; // al
  _DWORD *v14; // rax
  __int64 v15[6]; // [rsp+8h] [rbp-30h] BYREF

  v9 = a4;
  *(_QWORD *)&v11 = *(_QWORD *)(a1 + 8);
  v15[0] = a2;
  *((_QWORD *)&v11 + 1) = a4;
  v12 = (int *)sub_129440(v11, (__int64)v15, 1);
  if ( !v12 )
    return 0;
  result = sub_117FD0((_QWORD *)a1, 0, v15[0], v9, v15[0], v12, a5, a6);
  if ( !result )
    return 0;
  if ( a3 )
  {
    if ( *(_BYTE *)a3 == 4 )
    {
      v14 = *((_DWORD **)a3 + 1);
      if ( *v14 == 8 )
        a3 = v14 + 8;
    }
    return sub_125B60((unsigned __int8 *)(a1 + 32), (__int64)a3, 0);
  }
  return result;
}

