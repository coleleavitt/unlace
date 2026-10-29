__int64 __fastcall sub_B7BE0(__int64 a1, __int64 a2, __int64 a3, char a4, double a5)
{
  __int64 v7; // rbp
  __int64 v8; // r12
  _QWORD *v9; // rdx
  int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int8 *v13; // rdi

  if ( *(_BYTE *)a2 != 9 || !a4 )
    return 0;
  v7 = *(int *)(*(_QWORD *)(a2 + 8) + 16LL);
  v8 = *(_QWORD *)(**(_QWORD **)(a1 + 56) + 8 * v7);
  if ( !v8 )
    return 1;
  v9 = *(_QWORD **)(a1 + 48);
  if ( v9[1] )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      v12 = *(int *)(*v9 + 4 * v11);
      if ( (_DWORD)v7 != (_DWORD)v12 )
      {
        v13 = *(unsigned __int8 **)(**(_QWORD **)(a1 + 56) + 8 * v12);
        if ( !v13 )
        {
          if ( !under_debugger )
            sub_383060(0xC6ECu, a5);
          JUMPOUT(0x3198C);
        }
        if ( sub_1255D0(v13, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL), v8, 9) )
          return 1;
        v9 = *(_QWORD **)(a1 + 48);
      }
      v11 = ++v10;
    }
    while ( (unsigned __int64)v10 < v9[1] );
  }
  return 0;
}

