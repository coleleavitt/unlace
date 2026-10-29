__int64 __fastcall sub_1C0800(_DWORD *a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // ecx
  int v6; // ebp
  __int64 v7; // rbp
  __int64 v8; // [rsp+18h] [rbp-50h]

  if ( *a1 == 2 )
  {
    v7 = *((_QWORD *)a1 + 1);
    if ( !*(_QWORD *)(v7 + 8) )
    {
      if ( !under_debugger )
        sub_37EEE0(52115);
      BUG();
    }
    copy_argloc();
    if ( *(_QWORD *)(v7 + 8) <= 1u )
    {
      v3 = 1;
      *((_QWORD *)a1 + 1) = v8;
      *a1 = 0;
    }
    else
    {
      v3 = 0;
    }
    cleanup_argloc();
  }
  else
  {
    v3 = 0;
    if ( *a1 == 4 )
    {
      v5 = a1[2];
      v6 = (unsigned __int16)v5;
      if ( (unsigned __int16)v5 + a3 / 2 == HIWORD(v5) )
      {
        v3 = 1;
        cleanup_argloc();
        *a1 = 3;
        a1[2] = v6;
      }
    }
  }
  return v3;
}

