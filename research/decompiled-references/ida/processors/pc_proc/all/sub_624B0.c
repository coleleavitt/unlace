__int64 __fastcall sub_624B0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 wide_dword; // rbx

  wide_dword = get_wide_dword();
  if ( wide_dword )
  {
    get_default_reftype();
    op_offset();
    if ( a6 )
      sub_623C0();
    if ( !(unsigned __int8)sub_62320(wide_dword, 0) )
      sub_622B0();
  }
  create_data();
  sub_622B0();
  set_cmt();
  *a1 += 4LL;
  return wide_dword;
}

