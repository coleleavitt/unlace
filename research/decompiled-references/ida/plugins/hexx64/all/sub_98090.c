__int64 __fastcall sub_98090(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *v7; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  _DWORD *v12; // r12
  char *v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // eax
  _DWORD *v17; // rdx
  __int64 v19; // [rsp+0h] [rbp-78h]
  unsigned __int8 v20; // [rsp+0h] [rbp-78h]
  __int64 v21; // [rsp+8h] [rbp-70h]
  __int64 v22; // [rsp+18h] [rbp-60h] BYREF
  unsigned __int64 v23; // [rsp+20h] [rbp-58h] BYREF
  _DWORD *v24; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( *(_BYTE *)a5 != 4 )
    return 0;
  v7 = *(_DWORD **)(a5 + 8);
  if ( *v7 != 14 )
    return 0;
  v10 = sub_11C8A0((__int64)v7, &v22);
  if ( !v10 )
    return 0;
  if ( *(_BYTE *)v22 != 4 )
    return 0;
  v11 = *(_QWORD *)(v22 + 8);
  if ( *(_DWORD *)v11 != 9 )
    return 0;
  if ( *(_BYTE *)(v11 + 32) != 4 )
    return 0;
  v12 = *(_DWORD **)(v11 + 40);
  if ( *v12 != 34 )
    return 0;
  if ( v12[9] != 2 * *(_DWORD *)(a5 + 4) )
    return 0;
  v13 = (char *)(v12 + 12);
  v21 = a4;
  v19 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 16LL), *(_DWORD *)(v10 + 4), 1);
  if ( !(unsigned __int8)sub_11FD80(v13, &v23, 1u) || v23 != v19 )
    return 0;
  v14 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
  v15 = a3 + 32;
  if ( *(_BYTE *)(a3 + 32) == 4 )
  {
    v17 = *(_DWORD **)(a3 + 40);
    if ( *v17 == 9 )
      v15 = (__int64)(v17 + 8);
  }
  v20 = sub_12EA80(v14, a1, a2, v15, v21, *(_QWORD *)(v22 + 8) + 32LL, 0);
  if ( !v20 )
    return 0;
  v23 = 0xFFFFFFFF00000000LL;
  v24 = nullptr;
  sub_11CA10((char *)&v23, (char *)(*(_QWORD *)(v22 + 8) + 32LL));
  *v24 = 15;
  v16 = *(_DWORD *)(a5 + 4);
  v24[17] = 2 * v16;
  HIDWORD(v23) = 2 * v16;
  sub_126010((char *)&v23, v14, 14, *(_QWORD *)(*(_QWORD *)(a5 + 8) + 24LL), (unsigned __int8 *)v13);
  sub_11CA10((char *)a5, (char *)&v23);
  sub_11CDA0((__int64)&v23);
  return v20;
}

