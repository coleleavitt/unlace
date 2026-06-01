__int64 __fastcall sub_3E63D0(__int64 a1, __int64 a2, _DWORD *a3)
{
  int tinfo_size; // eax

  tinfo_size = get_tinfo_size();
  *a3 = tinfo_size;
  if ( tinfo_size != -1 )
  {
    copy_tinfo_t();
    calc_retloc();
    cleanup_argloc();
    clear_tinfo_t();
  }
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  cleanup_argloc();
  return a1;
}

