__int64 __fastcall sub_72AB0(const __m128i *a1)
{
  __int64 result; // rax
  unsigned int *v2; // rcx
  unsigned int v3; // edx

  result = sub_728B0(a1, 1);
  if ( (_BYTE)result )
  {
    v2 = (unsigned int *)a1[23].m128i_i64[1];
    v3 = *v2 & 0xFFFFFE7F;
    LOBYTE(v3) = *(_BYTE *)v2 & 0x7F | 0x80;
    *v2 = v3;
  }
  return result;
}
