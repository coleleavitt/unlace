char __fastcall sub_118200(unsigned int *a1)
{
  unsigned __int64 v1; // rdx
  char result; // al
  __int64 v3; // rax

  v1 = *a1;
  if ( (_DWORD)v1 == 62 )
    return (*((_BYTE *)a1 + 5) & 0x10) == 0;
  result = 1;
  if ( (unsigned int)v1 <= 0x3B )
  {
    v3 = 0xCFFFC0000000003LL;
    return !_bittest64(&v3, v1);
  }
  return result;
}

