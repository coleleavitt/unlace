__int64 __fastcall sub_1EEC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // r13d
  __int64 v6; // rcx
  int v7; // [rsp+0h] [rbp-58h] BYREF
  int v8; // [rsp+4h] [rbp-54h] BYREF
  __int64 v9; // [rsp+8h] [rbp-50h] BYREF
  __int64 v10; // [rsp+10h] [rbp-48h] BYREF
  __int64 v11; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF

  v12[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a3 + 34) & 4) == 0 && (getinf(3) & 0x1006) != 0x1002 )
    return 0;
  qmemcpy((void *)a2, (const void *)a3, 0x168u);
  if ( !(unsigned __int8)sub_1D5E0(&v7, &v9, a2, 48, 0) )
    return 0;
  if ( !(unsigned __int8)sub_1D5E0(&v8, &v10, a2, 32, 1) )
    return 0;
  v5 = v7;
  if ( v8 != v7 )
    return 0;
  if ( !(unsigned __int8)sub_1D5E0(&v8, &v11, a2, 16, 1) )
    return 0;
  if ( v5 != v8 )
    return 0;
  result = sub_1D5E0(&v8, v12, a2, 0, 1);
  if ( !(_BYTE)result || v5 != v8 )
    return 0;
  v6 = v10;
  *(_WORD *)(a2 + 24) = 80;
  *(_WORD *)(a2 + 26) = *(_WORD *)(a2 + 16) + *(_WORD *)(a2 + 26) - *(_WORD *)(a3 + 16);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a2 + 88) = (v9 << 48) + v12[0] + (v6 << 32) + (v11 << 16);
  return result;
}
