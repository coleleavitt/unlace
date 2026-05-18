__int64 __fastcall sub_6DFB0(__int64 a1, size_t *a2, __int64 a3)
{
  size_t v3; // rbx
  bool v4; // cf
  size_t v5; // rdx
  __int64 result; // rax
  size_t v7; // rbp
  size_t v8; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v9[7]; // [rsp+10h] [rbp-38h] BYREF

  v9[1] = __readfsqword(0x28u);
  v3 = *a2;
  v8 = v3;
  v4 = __CFADD__(v3, a3);
  v5 = v3 + a3;
  if ( v4 )
    return 0;
  v9[0] = v3;
  v7 = v5;
  *(_DWORD *)a1 = sub_196ED0(v9, v5);
  v8 = v9[0];
  if ( v3 >= v9[0] )
    return 0;
  result = sub_6AE40((__int64 *)(a1 + 8), &v8, v7);
  if ( !(_BYTE)result )
    return 0;
  *a2 = v8;
  return result;
}
