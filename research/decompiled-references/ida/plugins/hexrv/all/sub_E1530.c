__int64 __fastcall sub_E1530(__int64 a1)
{
  unsigned int v1; // r13d

  copy_tinfo_t();
  v1 = calc_retloc();
  if ( (_BYTE)v1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_DWORD *)a1 = 0;
  }
  cleanup_argloc();
  clear_tinfo_t();
  return v1;
}

