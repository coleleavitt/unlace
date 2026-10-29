__int64 __fastcall sub_3BF900(__int64 a1, _BYTE *a2, char a3)
{
  __int64 module_data; // rsi

  if ( !a1 )
    return 0;
  if ( !a2 || !*a2 )
  {
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree();
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    clear_tinfo_t();
    return 1;
  }
  if ( !(unsigned __int8)parse_decl() )
    return 0;
  module_data = get_module_data();
  if ( sub_327100((_BYTE *)(a1 + 24), module_data) )
    return 1;
  if ( a3 )
    return 0;
  sub_2AFAB0((__int64)"AUTOHIDE NONE\nSorry, the entered type is inacceptable");
  return 0;
}

