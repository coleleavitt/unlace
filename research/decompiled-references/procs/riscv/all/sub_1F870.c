__int64 __fastcall sub_1F870(__int64 a1, int a2)
{
  __int64 v3; // rbx

  if ( a2 != 89 )
    return 0;
  v3 = qalloc_or_throw(512);
  sub_1F630(v3);
  return set_module_data(&dword_35604, v3);
}
