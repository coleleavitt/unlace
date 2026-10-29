__int64 __fastcall sub_3C5980(__int64 a1, _BYTE *a2, char a3, double a4, __m128 a5)
{
  __int64 module_data; // rsi
  __int64 v9; // rdi

  if ( !a1 )
    return 0;
  if ( !a2 || !*a2 )
  {
    v9 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree(v9);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    clear_tinfo_t();
    return 1;
  }
  if ( !(unsigned __int8)parse_decl() )
    return 0;
  module_data = get_module_data();
  if ( sub_32CB80((_BYTE *)(a1 + 24), module_data, a4, a5) )
    return 1;
  if ( a3 )
    return 0;
  sub_2B4E70((__int64)"AUTOHIDE NONE\nSorry, the entered type is inacceptable");
  return 0;
}

