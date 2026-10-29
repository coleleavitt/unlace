unsigned __int64 *__fastcall sub_85680(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // [rsp+4h] [rbp-Ch] BYREF

  v3 = *a1;
  LODWORD(v5) = a2;
  *a1 = sub_7EF60(v3, &v5, 4);
  return a1;
}
