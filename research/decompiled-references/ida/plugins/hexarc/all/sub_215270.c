unsigned __int64 __fastcall sub_215270(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  char v3; // r14
  int v5; // ebx
  unsigned __int64 v6; // [rsp+C8h] [rbp-40h]

  v6 = __readfsqword(0x28u);
  if ( !(unsigned __int8)get_tinfo_details() )
  {
    if ( !under_debugger )
      sub_37B760(51218);
    BUG();
  }
  if ( (get_tinfo_property() & 0x3F) != 1 )
    *(_QWORD *)(a1 + 136) = 0;
  v5 = getinf();
  v2 = *(_DWORD *)(a1 + 148);
  if ( v2 <= 0x10 )
    v2 = getinf();
  if ( v2 == v5 )
  {
    copy_argloc();
  }
  else
  {
    copy_tinfo_t();
    v3 = calc_retloc();
    if ( v3 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      *(_DWORD *)a2 = 0;
    }
    cleanup_argloc();
    clear_tinfo_t();
    if ( !v3 )
      clear_tinfo_t();
  }
  cleanup_argloc();
  clear_tinfo_t();
  return v6 - __readfsqword(0x28u);
}

