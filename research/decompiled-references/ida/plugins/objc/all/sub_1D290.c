unsigned __int64 __fastcall sub_1D290(__int64 a1, __int64 a2)
{
  char *src; // [rsp+0h] [rbp-78h]
  __int64 (__fastcall **v4)(); // [rsp+20h] [rbp-58h] BYREF
  int v5; // [rsp+28h] [rbp-50h]
  void *v6; // [rsp+30h] [rbp-48h]
  __int64 v7; // [rsp+38h] [rbp-40h]
  __int64 v8; // [rsp+40h] [rbp-38h]
  unsigned __int64 v9; // [rsp+48h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  sub_198E0(a2);
  src = (char *)qvector_reserve();
  strcpy(src, "protocolopt");
  v4 = &off_3C108;
  v5 = 3;
  v6 = (void *)qalloc_or_throw();
  v8 = 12;
  memcpy(v6, src, 0xCu);
  v7 = 12;
  if ( src )
    qfree();
  v4 = (__int64 (__fastcall **)())&off_3C188;
  sub_1D050(a1, &v4);
  v4 = &off_3C108;
  if ( v6 )
  {
    v7 = 0;
    qfree();
  }
  return v9 - __readfsqword(0x28u);
}
