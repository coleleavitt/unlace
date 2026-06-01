unsigned __int64 __fastcall sub_3FD510(_BYTE *a1, __int64 a2)
{
  unsigned __int64 v3; // [rsp+78h] [rbp-30h]

  v3 = __readfsqword(0x28u);
  if ( *a1 || (unsigned __int8)parse_decl() )
  {
    copy_tinfo_t();
    if ( (unsigned __int8)get_tinfo_details() )
      *(_DWORD *)(a2 + 20) = get_tinfo_property();
    cleanup_argloc();
    clear_tinfo_t();
  }
  clear_tinfo_t();
  return v3 - __readfsqword(0x28u);
}

