__int64 __fastcall sub_23200(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int16 v5; // r13
  int v6; // ebx
  int dword; // eax

  if ( WORD1(a3) )
  {
    if ( under_debugger )
      BUG();
    interr(20038);
    return sub_23290();
  }
  else
  {
    v5 = a4;
    v6 = a3;
    dword = get_dword(*(_QWORD *)(a2 + 4), a2, a3, a4, a5);
    sub_42050(a1, *(_QWORD *)(a2 + 4), *(_QWORD *)(a2 + 20), (v6 << 12) | dword & 0xF0000FFF, 0, v5, 0, 0, 0);
    return create_insn(*(_QWORD *)(a2 + 4), 0);
  }
}
