__int64 __fastcall sub_11A20(__int64 a1, int a2)
{
  __int64 v3; // rbx

  if ( a2 != 89 )
    return 0;
  v3 = qalloc_or_throw(304);
  sub_118D0(v3);
  return set_module_data(&dword_194F0, v3);
}
