__int64 __fastcall sub_6E560(__int64 *a1, const void **a2, __int64 a3)
{
  char *v3; // rbx
  __int64 result; // rax
  const void *v5[7]; // [rsp+0h] [rbp-38h] BYREF

  v5[1] = (const void *)__readfsqword(0x28u);
  v5[0] = *a2;
  v3 = (char *)v5[0] + a3;
  if ( __CFADD__(v5[0], a3) )
    return 0;
  if ( !(unsigned __int8)sub_6B1B0(a1, v5, (unsigned __int64)v3) )
    return 0;
  result = sub_6B1B0(a1 + 3, v5, (unsigned __int64)v3);
  if ( !(_BYTE)result )
    return 0;
  *a2 = v5[0];
  return result;
}
