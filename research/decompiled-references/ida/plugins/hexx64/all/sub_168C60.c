__int64 __fastcall sub_168C60(unsigned __int64 **a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v6; // rdx
  __int64 v7; // rax

  while ( 1 )
  {
    if ( sub_A9AA0(a2, a1, *(_QWORD *)(a2 + 48), 0, 1u) )
      return 1;
    if ( a2 == a3 )
      break;
    v6 = *(_QWORD *)(a2 + 64);
    v7 = **(unsigned int **)(a2 + 368);
    if ( (unsigned int)v7 >= *(_DWORD *)(v6 + 64) )
    {
      if ( !under_debugger )
        sub_383060(0xCDEFu, a4);
      BUG();
    }
    a2 = *(_QWORD *)(*(_QWORD *)(v6 + 528) + 8 * v7);
  }
  return 0;
}

