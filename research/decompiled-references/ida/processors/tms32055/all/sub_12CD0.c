unsigned __int8 __fastcall sub_12CD0(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int8 result; // al
  __int64 v3; // rax

  v1 = *(unsigned __int8 *)(a1 + 1);
  result = 0;
  if ( (unsigned __int8)v1 <= 0xBu )
  {
    v3 = 3106;
    return _bittest64(&v3, v1);
  }
  return result;
}

