size_t __fastcall sub_7DBC0(__int64 *a1, __int64 a2)
{
  size_t result; // rax
  char *v4; // r12
  size_t v5; // rbp
  void *v6; // rdi
  size_t v7; // r13
  __int64 v8; // rax

  LOBYTE(result) = *(_BYTE *)(a2 + 8) - 10;
  if ( (unsigned __int8)result > 0x27u )
    sub_7D9F0();
  result = (char)result;
  v4 = off_23E900[(char)result];
  if ( v4 && (result = strlen(off_23E900[(char)result]), (v5 = result) != 0) )
  {
    v6 = (void *)*a1;
    v7 = result + 1;
    if ( a1[2] < result + 1 )
    {
      v8 = sub_1987B0(a1, *a1, result + 1, 1);
      *a1 = v8;
      v6 = (void *)v8;
    }
    a1[1] = v7;
    memmove(v6, v4, v5);
    result = *a1;
    *(_BYTE *)(*a1 + v5) = 0;
  }
  else
  {
    a1[1] = 0;
  }
  return result;
}
