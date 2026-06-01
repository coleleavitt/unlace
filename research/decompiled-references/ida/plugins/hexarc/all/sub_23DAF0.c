__int64 __fastcall sub_23DAF0(__int64 a1)
{
  __int64 tinfo_size; // r12

  if ( *(_DWORD *)(a1 + 8) == 48 && (tinfo_size = get_tinfo_size(), get_tinfo_size() == tinfo_size) )
    copy_tinfo_t();
  else
    sub_23DA00((__int64 *)a1);
  return a1;
}

