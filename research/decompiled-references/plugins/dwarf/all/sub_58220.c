__int64 __fastcall sub_58220(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // eax
  unsigned int v4; // ebx
  unsigned int *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // [rsp-10h] [rbp-68h]
  __int64 v11; // [rsp-8h] [rbp-60h]
  __int64 v12; // [rsp+8h] [rbp-50h] BYREF
  int v13; // [rsp+10h] [rbp-48h] BYREF
  __int64 v14; // [rsp+18h] [rbp-40h]
  __int64 v15; // [rsp+20h] [rbp-38h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v2 = *(unsigned int *)(a1 + 192);
  v16 = __readfsqword(0x28u);
  v14 = -1;
  v15 = v2;
  v13 = 0;
  v3 = sub_554E0(&v12, (__int64)&v13, a2, 1);
  if ( !(_BYTE)v3 )
    return 0;
  v4 = v3;
  if ( *(_DWORD *)v12 != 1 )
    return 0;
  v6 = *(unsigned int **)(v12 + 8);
  v7 = v6[70];
  if ( v6[84] != 2 )
    v7 = v6[69];
  if ( (v13 & 0xFFFFFFFD) != 0 )
    return 0;
  if ( !(unsigned __int8)get_numbered_type(*(_QWORD *)(a1 + 8), v7, 0, 0, 0, 0, 0) )
    return v4;
  if ( v6[84] != 3 )
    return 0;
  return sub_58160(a1, (unsigned int)v7, v10, v11, v8, v9);
}
