__int64 __fastcall sub_66B0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx

  v2 = qalloc_or_throw(208);
  sub_6590(v2, a2);
  return set_module_data(&dword_29364, v2);
}
