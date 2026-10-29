__int64 __fastcall sub_3E75D0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  _DWORD *v4; // rax
  __int64 v5; // r13
  __int64 v6; // r14
  int v7; // ecx
  __int64 v8; // rax
  unsigned __int8 v9; // [rsp+Fh] [rbp-59h]
  __int64 v10; // [rsp+18h] [rbp-50h] BYREF
  char v11[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+28h] [rbp-40h]
  unsigned __int64 v13; // [rsp+38h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 4 )
    return 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( *(_DWORD *)v3 != 12 )
    return 0;
  if ( *(_BYTE *)(v3 + 32) != 4 )
    return 0;
  v4 = *(_DWORD **)(v3 + 40);
  if ( *v4 != 12 )
    return 0;
  if ( *(_DWORD *)(v3 + 68) != *(_DWORD *)(a1 + 84) )
    return 0;
  v9 = sub_3E3D30(&v10, (__int64)(v4 + 12), v3 + 48);
  if ( !v9 )
    return 0;
  sub_11EE80((__int64)v11, (unsigned __int8 *)(v3 + 32));
  v5 = v12;
  v6 = v10;
  sub_1181E0(v12 + 48);
  *(_BYTE *)(v5 + 48) = 6;
  v7 = 8 * *(_DWORD *)(a1 + 84);
  if ( (unsigned __int64)v7 <= 0x3F )
    v6 &= ~(-1LL << v7);
  v8 = v12;
  *(_QWORD *)(v5 + 56) = v6;
  sub_117D90((char *)(v8 + 48), a1);
  sub_117E50((char *)a2, v11);
  sub_1181E0((__int64)v11);
  return v9;
}

