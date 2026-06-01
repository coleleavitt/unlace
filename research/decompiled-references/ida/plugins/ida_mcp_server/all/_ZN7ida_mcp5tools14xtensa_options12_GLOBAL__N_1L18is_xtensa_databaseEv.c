bool __fastcall ida_mcp::tools::xtensa_options::`anonymous namespace'::is_xtensa_database(
        ida_mcp::tools::xtensa_options::_anonymous_namespace_ *this)
{
  int v2; // eax
  _OWORD v3[4]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v4; // [rsp+48h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  memset(v3, 0, sizeof(v3));
  get_idp_name();
  if ( strlen((const char *)v3) != 6 )
    return 0;
  if ( LODWORD(v3[0]) != 1852142712 || (v2 = 0, WORD2(v3[0]) != 24947) )
    v2 = 1;
  return v2 == 0;
}

