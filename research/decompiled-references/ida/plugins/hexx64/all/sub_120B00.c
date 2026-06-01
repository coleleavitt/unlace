__int64 __fastcall sub_120B00(__int64 a1, unsigned __int64 *a2, __int64 a3, double a4)
{
  int v6; // esi
  char v7; // al
  _DWORD *v8; // rdi
  __int64 v9; // r13

  v6 = *(_DWORD *)(a1 + 4);
  v7 = *(_BYTE *)a1;
  if ( v6 > 8 )
  {
    if ( v7 == 4 )
    {
      v8 = *(_DWORD **)(a1 + 8);
      if ( (unsigned int)(*v8 - 8) <= 1 )
      {
        if ( (unsigned __int8)sub_120B00((__int64)(v8 + 8), (__int64)a2, a3) )
        {
          **(_DWORD **)(a1 + 8) = 8;
          return 1;
        }
        return 0;
      }
    }
    if ( !under_debugger )
      sub_383060(0xCD95u, a4);
LABEL_15:
    BUG();
  }
  if ( v7 != 2 )
  {
    if ( !under_debugger )
      sub_383060(0xC468u, a4);
    goto LABEL_15;
  }
  v9 = -a3;
  if ( a3 != sub_32ABC0(-a3, v6, 1) )
  {
    sub_120A10(a1, a2, v9, *(_DWORD *)(a1 + 4), **(_QWORD **)(a1 + 8), *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL));
    return 1;
  }
  return 0;
}

