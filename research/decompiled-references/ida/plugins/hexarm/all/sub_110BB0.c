__int64 __fastcall sub_110BB0(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v5[3]; // [rsp+10h] [rbp-18h] BYREF

  v5[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 36) != 8 )
    return 0;
  if ( *(_BYTE *)(a1 + 48) != 4 )
    return 0;
  v2 = *(_DWORD **)(a1 + 56);
  if ( *v2 != 20 )
    return 0;
  if ( !v2 )
    return 0;
  v3 = sub_11C2E0(v2, &v4);
  if ( !v3 )
    return 0;
  if ( !(unsigned __int8)sub_11F7C0(v3, v5, 1) )
    return 0;
  result = v4;
  if ( v5[0] != 31 )
    return 0;
  return result;
}

