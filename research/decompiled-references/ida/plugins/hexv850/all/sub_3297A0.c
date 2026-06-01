__int64 __fastcall sub_3297A0(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  unsigned __int64 v4; // r8
  _DWORD *v5; // rdi
  __int64 v6; // r10
  _DWORD *v7; // rax
  int v8; // ecx
  __int64 v9; // rsi
  __int64 v10; // rdx

  if ( *(_BYTE *)a1 == 5 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  }
  else
  {
    if ( *(_BYTE *)a1 != 15 )
      return 0;
    v3 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 8LL);
    v4 = v3[1];
    if ( !v4 )
    {
      if ( !under_debugger )
        sub_37CFE0(51674);
      BUG();
    }
    v5 = (_DWORD *)*v3;
    if ( *(_DWORD *)*v3 != 1 )
      return 0;
    v6 = *((_QWORD *)v5 + 1);
    v7 = (_DWORD *)*v3;
    v8 = 0;
    v9 = v6;
    while ( 1 )
    {
      ++v8;
      v10 = *((unsigned __int16 *)v7 + 9) + v9;
      if ( v8 >= v4 )
        break;
      v7 = &v5[6 * v8];
      if ( *v7 == 1 )
      {
        v9 = *((_QWORD *)v7 + 1);
        if ( v10 == v9 )
          continue;
      }
      return 0;
    }
  }
  *a2 = v6;
  return 1;
}

