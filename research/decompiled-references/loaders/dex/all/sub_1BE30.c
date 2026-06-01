__int64 __fastcall sub_1BE30(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 result; // rax
  int v7; // edx
  int v8; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( !(unsigned __int8)unpack_xleb128(&v8, 32, 0, a1) )
    return 0;
  if ( !(unsigned __int8)unpack_xleb128(a3 + 1, 32, 0, a1) )
    return 0;
  result = unpack_xleb128(a3 + 2, 32, 0, a1);
  if ( !(_BYTE)result )
    return 0;
  v7 = *a4 + v8;
  *a3 = v7;
  *a4 = v7;
  return result;
}
