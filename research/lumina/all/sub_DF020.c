__int64 *__fastcall sub_DF020(__int64 *a1, __int64 a2, const char *a3)
{
  __int64 *result; // rax
  const char *v4; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v4 = a3;
  if ( !a3 )
    return (__int64 *)a2;
  if ( !(strlen(a3) & 0x3FFFFFFF) )
    return (__int64 *)a2;
  result = sub_DEC00(*a1, 113, (__int64)&v4, 0);
  if ( !result )
    return (__int64 *)a2;
  result[2] = a2;
  *((_DWORD *)result + 1) |= 0x1100u;
  return result;
}
