unsigned __int64 __fastcall sub_1C870(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  char *src; // [rsp+0h] [rbp-78h]
  __int64 (__fastcall **v5)(); // [rsp+20h] [rbp-58h] BYREF
  int v6; // [rsp+28h] [rbp-50h]
  void *v7; // [rsp+30h] [rbp-48h]
  __int64 v8; // [rsp+38h] [rbp-40h]
  __int64 v9; // [rsp+40h] [rbp-38h]
  unsigned __int64 v10; // [rsp+48h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  sub_198E0(a2);
  src = (char *)qvector_reserve();
  strcpy(src, "selopt");
  v5 = &off_3C108;
  v6 = 3;
  v7 = (void *)qalloc_or_throw();
  v9 = 7;
  memcpy(v7, src, 7u);
  v8 = 7;
  if ( src )
    qfree();
  v5 = (__int64 (__fastcall **)())&off_3C130;
  v2 = sub_15060(a1, 0);
  if ( v2 != -1 )
    sub_1C480(a1, v2, &v5);
  v5 = &off_3C108;
  if ( v7 )
  {
    v8 = 0;
    qfree();
  }
  return v10 - __readfsqword(0x28u);
}
