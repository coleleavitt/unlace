__int64 __fastcall sub_EEE0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx

  if ( (_DWORD)a2 != 89 )
    return 0;
  v3 = qalloc_or_throw(3176);
  sub_ED80(v3, a2, v4);
  return set_module_data(&dword_16050, v3);
}
