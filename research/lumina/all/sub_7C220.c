__int64 __fastcall sub_7C220(unsigned int *src, unsigned int *a2, unsigned int *a3)
{
  __int64 v4; // rsi
  unsigned int *v6; // r14
  unsigned int *v8; // r15
  unsigned int *v9; // rdi
  __int64 result; // rax
  __int64 v11; // r15
  __int64 v12; // rcx

  v4 = (char *)a2 - (char *)src;
  v6 = (unsigned int *)((char *)a3 + v4);
  if ( v4 <= 13152 )
    return sub_7BEC0(src, a2);
  v8 = src;
  do
  {
    v9 = v8;
    v8 += 3836;
    sub_7BEC0(v9, v8);
  }
  while ( (char *)a2 - (char *)v8 > 13152 );
  result = sub_7BEC0(v8, a2);
  if ( v4 > 15344 )
  {
    v11 = 7;
    do
    {
      sub_7C170(src, a2, a3, v11);
      v12 = 2 * v11;
      v11 *= 4;
      result = sub_7C170(a3, v6, src, v12);
    }
    while ( (__int64)(0xE21A291C077975B9LL * (v4 >> 4)) > v11 );
  }
  return result;
}
