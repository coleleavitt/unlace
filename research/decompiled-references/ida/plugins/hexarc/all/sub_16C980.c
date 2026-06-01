__int64 __fastcall sub_16C980(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, char a6, unsigned int a7)
{
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rax

  a1[2] = a3;
  v8 = *(_QWORD *)(a3 + 48);
  if ( v8 )
  {
    v9 = a4;
    if ( (a6 & 1) != 0 )
    {
      if ( a4 )
        v8 = a4;
      while ( 1 )
      {
        v12 = sub_A33E0(a3, a2, v8, a5, a7);
        v13 = v12;
        if ( !v12 )
          break;
        a1[4] = v12;
        result = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
        if ( (_DWORD)result )
          return result;
        v8 = *(_QWORD *)(v13 + 8);
      }
    }
    if ( (a6 & 2) != 0 )
    {
      if ( !v9 )
        v9 = *(_QWORD *)(a3 + 48);
      while ( 1 )
      {
        v14 = sub_A36D0(a3, a2, v9, a5, a7);
        v15 = v14;
        if ( !v14 )
          break;
        a1[4] = v14;
        result = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
        if ( (_DWORD)result )
          return result;
        v9 = *(_QWORD *)(v15 + 8);
      }
    }
  }
  else if ( *(_DWORD *)(a3 + 76) == 1 )
  {
    v16 = *a1;
    a1[4] = 0;
    return (*(__int64 (**)(void))(v16 + 16))();
  }
  return 0;
}

