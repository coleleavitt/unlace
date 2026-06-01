bool __fastcall sub_192430(_QWORD *a1, _DWORD *a2, _BYTE *a3, double a4)
{
  __int64 v4; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  _DWORD **v8; // rax
  _DWORD **v9; // rdx
  _QWORD v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v10[3] = __readfsqword(0x28u);
  if ( *a2 != 12 )
    return 0;
  v4 = *(_QWORD *)(a1[1] + 1504LL);
  if ( a2[9] != *(_DWORD *)(v4 + 84) )
    return 0;
  v6 = sub_1922B0((__int64)a1, (__int64)a2, a3, a4);
  v10[1] = v7;
  v10[0] = v6;
  if ( !(_BYTE)v7 || (unsigned __int8)sub_32F7B0((__int64)v10, a1[1], (__int64)(a1 + 6), *(_DWORD *)(v4 + 84)) )
    return 0;
  v8 = (_DWORD **)a1[14];
  v9 = &v8[a1[15]];
  if ( v8 == v9 )
    return 1;
  while ( *v8 != a2 )
  {
    if ( v9 == ++v8 )
      return 1;
  }
  return v9 == v8;
}

