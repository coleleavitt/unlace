__int64 __fastcall sub_32F330(__int64 a1, _QWORD *a2, double a3)
{
  _QWORD *v4; // rax
  unsigned __int64 v5; // r8
  _DWORD *v6; // rdi
  __int64 v7; // r10
  _DWORD *v8; // rax
  int v9; // ecx
  __int64 v10; // rsi
  __int64 v11; // rdx

  if ( *(_BYTE *)a1 == 5 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  }
  else
  {
    if ( *(_BYTE *)a1 != 15 )
      return 0;
    v4 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 8LL);
    v5 = v4[1];
    if ( !v5 )
    {
      if ( !under_debugger )
        sub_383060(0xC9DAu, a3);
      BUG();
    }
    v6 = (_DWORD *)*v4;
    if ( *(_DWORD *)*v4 != 1 )
      return 0;
    v7 = *((_QWORD *)v6 + 1);
    v8 = (_DWORD *)*v4;
    v9 = 0;
    v10 = v7;
    while ( 1 )
    {
      ++v9;
      v11 = *((unsigned __int16 *)v8 + 9) + v10;
      if ( v9 >= v5 )
        break;
      v8 = &v6[6 * v9];
      if ( *v8 == 1 )
      {
        v10 = *((_QWORD *)v8 + 1);
        if ( v11 == v10 )
          continue;
      }
      return 0;
    }
  }
  *a2 = v7;
  return 1;
}

