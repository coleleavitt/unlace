unsigned __int64 __fastcall sub_38D8C0(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  unsigned __int64 v5; // [rsp+188h] [rbp-38h]

  v5 = __readfsqword(0x28u);
  if ( *a2 )
  {
    a2[1] = 0;
    qfree();
    *a2 = 0;
    a2[2] = 0;
  }
  copy_tinfo_t();
  copy_tinfo_t();
  find_tinfo_udt_member();
  copy_tinfo_t();
  clear_tinfo_t();
  if ( (unsigned int)get_tinfo_property() && (unsigned __int8)get_numbered_type() )
    deserialize_tinfo();
  print_tinfo();
  *a3 = 0;
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  return v5 - __readfsqword(0x28u);
}

