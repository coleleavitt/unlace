unsigned __int64 __fastcall sub_1E1F0(__int64 a1)
{
  __int64 v1; // rax
  const char *v2; // rax

  v1 = sub_87270();
  v2 = (const char *)(*(__int64 (__fastcall **)(__int64))(v1 + 464))(a1);
  return sub_1E060((__int64)"The DWARF plugin failed working properly (%s)", v2);
}

