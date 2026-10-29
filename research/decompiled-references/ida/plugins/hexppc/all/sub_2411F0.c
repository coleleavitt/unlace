__int64 __fastcall sub_2411F0(__int64 a1)
{
  __int64 tinfo_size; // r12

  if ( *(_DWORD *)(a1 + 8) == 48 && (tinfo_size = get_tinfo_size(), get_tinfo_size() == tinfo_size) )
    copy_tinfo_t();
  else
    sub_241100((__int64 *)a1);
  return a1;
}

