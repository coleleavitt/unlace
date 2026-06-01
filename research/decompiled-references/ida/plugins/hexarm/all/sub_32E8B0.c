__int64 __fastcall sub_32E8B0(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a2 + 8) != 1 || **(_QWORD **)a2 )
    return 0;
  if ( a1 )
  {
    copy_tinfo_t();
    copy_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    copy_tinfo_t();
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
  }
  return 1;
}

