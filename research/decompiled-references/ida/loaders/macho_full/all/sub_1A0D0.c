__int64 __fastcall sub_1A0D0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  char v4; // bl
  __int64 v5; // rax
  __int64 v6; // rdx

  v3 = *(_QWORD **)(a1 + 16);
  v4 = a2;
  v5 = *(_QWORD *)(v3[1] + 16LL);
  if ( a2 != -1 )
    v4 = v5 & a2;
  v6 = v3[30];
  if ( v6 != v5 && v6 != -1 )
  {
    if ( !v3[23] || !rangeset_t_find_range() )
      return 0;
    v3 = *(_QWORD **)(a1 + 16);
  }
  if ( (*(_BYTE *)(*v3 + 12LL) & 8) == 0 )
  {
LABEL_14:
    auto_mark_range();
    auto_mark_range();
    return 0;
  }
  if ( (v4 & 1) != 0 || get_ea_name() <= 0 || strncmp(nullptr, "__dtrace_probe$", 0xFu) )
  {
    if ( (*(_BYTE *)(**(_QWORD **)(a1 + 8) + 12LL) & 8) != 0 )
      sub_1A010();
    goto LABEL_14;
  }
  return 0;
}

