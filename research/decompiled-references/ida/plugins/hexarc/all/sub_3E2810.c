__int64 __fastcall sub_3E2810(__int64 a1, __int64 a2, _DWORD *a3)
{
  int tinfo_size; // eax

  tinfo_size = get_tinfo_size();
  *a3 = tinfo_size;
  if ( tinfo_size == -1 )
  {
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
  }
  else
  {
    if ( *(_DWORD *)(a2 + 80) >= tinfo_size || tinfo_size == 8 )
      cleanup_argloc();
    *(_DWORD *)a1 = 0;
    copy_argloc();
    cleanup_argloc();
  }
  return a1;
}

