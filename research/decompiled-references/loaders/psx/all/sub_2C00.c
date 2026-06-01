bool __fastcall sub_2C00(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al
  int v3; // edx
  char v4[88]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v5; // [rsp+58h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  qlseek(a1, 0, 0);
  v1 = qlread(a1, v4, 76);
  result = 0;
  if ( v1 == 76 )
  {
    v3 = strcmp(v4, "SCE EXE");
    result = 1;
    if ( v3 )
      return strncmp(v4, "PS-X EXE", 8u) == 0;
  }
  return result;
}
