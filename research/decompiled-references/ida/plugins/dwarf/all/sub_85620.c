unsigned __int64 *__fastcall sub_85620(unsigned __int64 *a1, char a2)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // [rsp+4h] [rbp-Ch] BYREF

  v3 = *a1;
  LOBYTE(v5) = a2;
  *a1 = sub_7EF60(v3, &v5, 1);
  return a1;
}

