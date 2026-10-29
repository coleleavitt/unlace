unsigned __int64 __fastcall sub_361C20(__int64 *a1)
{
  __int64 v1; // r13
  unsigned __int64 v3; // [rsp+68h] [rbp-40h]

  v3 = __readfsqword(0x28u);
  qstrftime();
  v1 = *a1;
  get_func_qty();
  sub_383390(v1);
  return v3 - __readfsqword(0x28u);
}

