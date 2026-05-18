__int64 __fastcall sub_709D0(__int64 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  bool v4; // cf
  const void *v5; // rdx
  __int64 result; // rax
  const void *v7; // r12
  __int64 v8; // rax
  const void *v9; // r15
  const void *v10[9]; // [rsp+0h] [rbp-48h] BYREF

  v10[1] = (const void *)__readfsqword(0x28u);
  v3 = *a2;
  v4 = __CFADD__(*a2, a3);
  v5 = (const void *)(*a2 + a3);
  if ( v4 )
    return 0;
  v10[0] = (const void *)*a2;
  v7 = v5;
  v8 = sub_196FF0(v10, v5);
  v9 = v10[0];
  *a1 = v8;
  if ( v3 >= (unsigned __int64)v9 )
    return 0;
  a1[1] = sub_196FF0(v10, v7) - 1;
  if ( v9 >= v10[0] )
    return 0;
  if ( v7 < v10[0] )
    return 0;
  if ( !(unsigned __int8)sub_6B1B0(a1 + 2, v10, (unsigned __int64)v7) )
    return 0;
  result = sub_6AE40(a1 + 5, (size_t *)v10, (size_t)v7);
  if ( !(_BYTE)result )
    return 0;
  *a2 = (unsigned __int64)v10[0];
  return result;
}
