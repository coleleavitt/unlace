__int64 __fastcall sub_12870(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (unsigned __int8)callui(27, a2, &callui) )
    return 0xFFFFFFFFLL;
  if ( (unsigned __int8)is_loaded() )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 13689LL) & 8) == 0 && a4 != a3 )
      patch_qword();
    get_default_reftype();
    op_offset();
  }
  return 0;
}

