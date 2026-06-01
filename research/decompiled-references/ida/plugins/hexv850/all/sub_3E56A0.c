bool __fastcall sub_3E56A0(_DWORD *a1, int a2, int a3, double a4)
{
  _DWORD *v4; // rax
  _QWORD *i; // rcx
  __int64 v6; // r8
  _DWORD *v7; // r9

  if ( a1[122] <= a2 )
    return 1;
  if ( a2 > 7 && a2 >= a1[88] && a2 <= a1[119] + a1[20] - 1 )
  {
    v4 = a1 + 88;
    for ( i = &unk_40DB40; ; i += 2 )
    {
      v6 = i[2];
      v7 = v4;
      v4 = (_DWORD *)((char *)a1 + v6);
      if ( a2 < *(_DWORD *)((char *)a1 + v6) )
        break;
      if ( v6 == 504 )
      {
        if ( !under_debugger )
          sub_37CFE0(0xCED8u, a4);
        BUG();
      }
    }
    if ( a2 == *v7 )
      return a3 <= 2 * *((unsigned __int8 *)i + 14);
  }
  return 0;
}

