__int64 __fastcall sub_16570(__int64 a1, int a2)
{
  __int64 v3; // rbx

  if ( a2 != 89 )
    return 0;
  v3 = qalloc_or_throw("copy_tinfo_t");
  sub_163B0(v3);
  return set_module_data(&dword_2B9D0, v3);
}
