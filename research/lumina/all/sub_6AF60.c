__int64 __fastcall sub_6AF60(__int64 a1, size_t *a2, __int64 a3)
{
  bool v3; // cf
  size_t v4; // rdx
  __int64 result; // rax
  size_t v6[3]; // [rsp+0h] [rbp-18h] BYREF

  v6[1] = __readfsqword(0x28u);
  v6[0] = *a2;
  v3 = __CFADD__(a3, v6[0]);
  v4 = a3 + v6[0];
  if ( v3 )
    return 0;
  result = sub_6AE40((__int64 *)(a1 + 16), v6, v4);
  if ( !(_BYTE)result )
    return 0;
  *a2 = v6[0];
  return result;
}
