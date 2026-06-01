__int64 __fastcall sub_18580(int a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  sub_65BB0(
    a1,
    (unsigned int)"%a: watchpoint at %a triggered, flushing single-step from debugsever...\n",
    *(_QWORD *)(a2 + 8),
    a3,
    a5,
    a6);
  return sub_2A280(a1, a2, a3, *(_DWORD *)(a4 + 24), *(_DWORD *)(a4 + 28), 0, 0);
}

