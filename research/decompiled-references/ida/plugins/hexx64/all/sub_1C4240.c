__int64 __fastcall sub_1C4240(_DWORD *a1, __int64 a2, int a3, double a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // ecx
  int v7; // ebp
  __int64 v8; // rbp
  __int64 v9; // [rsp+18h] [rbp-50h]

  if ( *a1 == 2 )
  {
    v8 = *((_QWORD *)a1 + 1);
    if ( !*(_QWORD *)(v8 + 8) )
    {
      if ( !under_debugger )
        sub_383060(0xCB93u, a4);
      BUG();
    }
    copy_argloc();
    if ( *(_QWORD *)(v8 + 8) <= 1u )
    {
      v4 = 1;
      *((_QWORD *)a1 + 1) = v9;
      *a1 = 0;
    }
    else
    {
      v4 = 0;
    }
    cleanup_argloc();
  }
  else
  {
    v4 = 0;
    if ( *a1 == 4 )
    {
      v6 = a1[2];
      v7 = (unsigned __int16)v6;
      if ( (unsigned __int16)v6 + a3 / 2 == HIWORD(v6) )
      {
        v4 = 1;
        cleanup_argloc();
        *a1 = 3;
        a1[2] = v7;
      }
    }
  }
  return v4;
}

