unsigned __int64 __fastcall sub_33C00(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int v3; // r8d
  int v4; // r9d
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v7; // [rsp+8h] [rbp-50h]
  unsigned __int64 v8; // [rsp+18h] [rbp-40h]

  v8 = __readfsqword(0x28u);
  v7 = 0;
  ptr = nullptr;
  ptr = (void *)sub_1987B0(&ptr, 0, 12, 1);
  *(_QWORD *)&v7 = 12;
  strcpy((char *)ptr, "schema_info");
  v2 = sub_33A40(a1);
  if ( ptr )
  {
    *(_QWORD *)&v7 = 0;
    j__free(ptr);
  }
  if ( v2 )
    sub_2F260((__int64)"Table schema_info only allows for one record\n", &ptr);
  v7 = 0;
  ptr = nullptr;
  sub_299F0((char **)&ptr);
  sub_32C80(a1, *(_BYTE *)(a2 + 107), (__int64)&ptr, 0, v3, v4);
  if ( ptr )
  {
    *(_QWORD *)&v7 = 0;
    j__free(ptr);
  }
  return v8 - __readfsqword(0x28u);
}
