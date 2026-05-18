__int64 __fastcall sub_C2A40(int a1)
{
  int v1; // eax
  int v2; // edx
  unsigned __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 result; // rax
  unsigned __int64 v6; // rax

  HIWORD(v1) = HIWORD(a1);
  LOWORD(v1) = (__int16)a1 >> 15;
  v2 = ((26215 * (__int16)a1) >> 18) - v1;
  v3 = (__int16)a1 % 10;
  if ( v3 <= 4 )
    v4 = (v3 == 0) + v3 - 1;
  else
    v4 = v3 - 2;
  result = 0x7FFFFFFFFFFFFFFFLL;
  if ( (__int16)v2 <= 60 )
  {
    v6 = v4 + 8;
    if ( (__int16)v2 > 2 )
      return v6 << ((unsigned __int8)v2 - 3);
    else
      return v6 >> (3 - (unsigned __int8)v2);
  }
  return result;
}
