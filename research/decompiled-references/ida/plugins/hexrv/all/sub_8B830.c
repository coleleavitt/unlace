unsigned __int64 __fastcall sub_8B830(__int64 a1, __int64 *a2)
{
  sub_8B1C0((__int64)a2, 2, "procinf.sregs");
  sub_7BAE0(a2, (__int64 *)(a1 + 8));
  sub_8B1C0((__int64)a2, 2, "procinf.spoiled");
  return sub_7B410(a2, (__int64 *)(a1 + 32));
}

