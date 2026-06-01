bool __fastcall sub_2C90(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al
  __int16 v3; // [rsp+4h] [rbp-14h] BYREF
  char v4; // [rsp+6h] [rbp-12h]
  char v5; // [rsp+7h] [rbp-11h]
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  qlseek(a1, 0, 0);
  v1 = qlread(a1, &v3, 4);
  result = 0;
  if ( v1 == 4 )
    return v3 == 18764 && v4 == 66 && (unsigned __int8)(v5 - 1) <= 1u;
  return result;
}
