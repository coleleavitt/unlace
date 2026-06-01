unsigned __int64 __fastcall sub_28E60(__int64 a1, int a2)
{
  __int64 v3; // [rsp+8h] [rbp-40h] BYREF
  __int64 v4; // [rsp+10h] [rbp-38h] BYREF
  int v5; // [rsp+18h] [rbp-30h]
  int v6; // [rsp+1Ch] [rbp-2Ch]
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v3 = 0;
  create_tinfo(&v3, 2, 7, 0);
  v5 = 0;
  v6 = a2;
  v4 = 0;
  copy_tinfo_t(&v4, &v3);
  create_tinfo(a1, 11, 11, &v4);
  clear_tinfo_t(&v4);
  clear_tinfo_t(&v3);
  return v7 - __readfsqword(0x28u);
}
