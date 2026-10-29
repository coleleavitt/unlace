__int64 __fastcall sub_150650(__int128 a1, __int64 a2, __m128i a3, __m128 a4)
{
  const __m128i *v4; // r12
  __int64 v6; // rax
  _DWORD *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r14
  char *v11; // rax
  char *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ecx
  unsigned __int64 *v16; // rsi
  unsigned __int8 v17; // al
  __int64 v18; // [rsp+0h] [rbp-80h]
  unsigned __int8 *v19; // [rsp+0h] [rbp-80h]
  unsigned __int8 v20; // [rsp+8h] [rbp-78h]
  __int64 v21; // [rsp+18h] [rbp-68h] BYREF
  __int64 v22; // [rsp+20h] [rbp-60h] BYREF
  __int64 v23; // [rsp+28h] [rbp-58h] BYREF
  __int64 v24[10]; // [rsp+30h] [rbp-50h] BYREF

  v4 = (const __m128i *)a1;
  v24[3] = __readfsqword(0x28u);
  v6 = sub_11C8E0(a2, &v21, 11);
  if ( !v6 )
    return 0;
  if ( *(_BYTE *)(v6 + 32) != 4 )
    return 0;
  v8 = *(_DWORD **)(v6 + 40);
  if ( *v8 != 14 )
    return 0;
  v9 = sub_11C8A0((__int64)v8, &v22);
  if ( !v9 )
    return 0;
  if ( *(_BYTE *)v22 != 4 )
    return 0;
  if ( **(_DWORD **)(v22 + 8) != 9 )
    return 0;
  v10 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL), *(_DWORD *)(v9 + 4), 1);
  if ( (v10 & (v10 - 1)) != 0 )
    return 0;
  v18 = *(_QWORD *)(v22 + 8);
  v11 = (char *)sub_11C8A0(*(_QWORD *)(v21 + 8), &v23);
  v12 = v11;
  if ( !v11 )
    return 0;
  if ( !(unsigned __int8)sub_11FD80(v11, v24, 1) )
    return 0;
  if ( v10 != v24[0] )
    return 0;
  v19 = (unsigned __int8 *)(v18 + 32);
  if ( !(unsigned __int8)sub_130BC0(v4, *((__int64 *)&a1 + 1), (__int64)v19, *((__int64 *)&a1 + 1), v23, 0, a3, a4) )
    return 0;
  sub_123A40((__int64)v24, v19, v13, v14);
  *(_QWORD *)&a1 = v4;
  sub_B1520(
    a1,
    (__int64)v24,
    *((_DWORD **)&a1 + 1),
    (unsigned __int8 *)v24,
    *((__int64 *)&a1 + 1),
    *(double *)a3.m128i_i64,
    v23,
    0);
  v15 = HIDWORD(v24[0]);
  v16 = *(unsigned __int64 **)(v4[30].m128i_i64[0] + 112);
  *(_DWORD *)a2 = 14;
  sub_120A10(a2 + 32, v16, v10, v15, **((_QWORD **)v12 + 1), 0);
  sub_11CA10((char *)(a2 + 48), (char *)v24);
  *(_DWORD *)(a2 + 68) = *(_DWORD *)(a2 + 36);
  v17 = sub_12B6F0(a2, v16, 11, -1, 1, a3);
  if ( !v17 )
  {
    if ( !under_debugger )
      sub_383060(0xC9E7u, *(double *)a3.m128i_i64);
    BUG();
  }
  v20 = v17;
  *(_DWORD *)(a2 + 68) = HIDWORD(v24[0]);
  sub_11CDA0((__int64)v24);
  return v20;
}

