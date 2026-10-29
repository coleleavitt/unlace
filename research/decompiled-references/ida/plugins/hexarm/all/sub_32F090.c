bool __fastcall sub_32F090(unsigned __int64 a1)
{
  bool result; // al
  __int64 v2; // rax

  result = 1;
  if ( (unsigned int)a1 <= 0x3E )
  {
    v2 = 0x7CFFFC0000000003LL;
    return !_bittest64(&v2, a1);
  }
  return result;
}

