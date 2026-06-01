__int64 __fastcall sub_164A60(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax

  while ( 1 )
  {
    if ( sub_A58A0(a2, a1, *(_QWORD *)(a2 + 48), 0, 1u) )
      return 1;
    if ( a2 == a3 )
      break;
    v5 = *(_QWORD *)(a2 + 64);
    v6 = **(unsigned int **)(a2 + 368);
    if ( (unsigned int)v6 >= *(_DWORD *)(v5 + 64) )
    {
      if ( !under_debugger )
        sub_37E160(52719);
      BUG();
    }
    a2 = *(_QWORD *)(*(_QWORD *)(v5 + 528) + 8 * v6);
  }
  return 0;
}

