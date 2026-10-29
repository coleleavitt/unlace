__int64 __fastcall sub_92EB0(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  _DWORD *v4; // r12
  _DWORD *v5; // r14
  _DWORD *v6; // r13
  __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v8[7]; // [rsp+10h] [rbp-38h] BYREF

  v8[1] = __readfsqword(0x28u);
  v2 = sub_118EA0(a2, &v7, 19);
  if ( !v2 )
    return 0;
  if ( *(_BYTE *)v7 != 4 )
    return 0;
  v4 = (_DWORD *)sub_118EA0(v2, v8, 22);
  if ( !v4 || *(_BYTE *)v8[0] != 4 )
    return 0;
  v5 = *(_DWORD **)(v8[0] + 8LL);
  v6 = *(_DWORD **)(v7 + 8);
  result = sub_8FE10(a1, a2, v6, v5, v4, 22, 23, 11);
  if ( !(_BYTE)result )
    return sub_8FE10(a1, a2, v6, v5, v4, 23, 22, 10);
  return result;
}

