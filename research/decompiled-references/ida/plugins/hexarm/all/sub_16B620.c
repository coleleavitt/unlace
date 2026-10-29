__int64 __fastcall sub_16B620(__int128 a1, __int64 a2)
{
  const __m128i *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r15
  __int64 v6; // r13
  unsigned int v7; // r12d
  __int64 v9; // r14
  int v10; // eax
  int v11; // edx
  _BYTE *v12; // rcx
  char *v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int32 v17; // eax
  __int32 v18; // eax
  int v19; // ecx
  char v20; // al
  __int64 v21; // [rsp+0h] [rbp-78h]
  __int64 v22; // [rsp+0h] [rbp-78h]
  __int64 v23; // [rsp+8h] [rbp-70h]
  __int64 v24; // [rsp+18h] [rbp-60h] BYREF
  __int64 v25; // [rsp+20h] [rbp-58h] BYREF
  __int64 v26; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v27[9]; // [rsp+30h] [rbp-48h] BYREF

  v27[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 32LL) == 4 )
    return 0;
  *((_QWORD *)&a1 + 1) += 32LL;
  v3 = (const __m128i *)a1;
  v24 = *(_QWORD *)(a1 + 56);
  v4 = sub_128E80(a1, (__int64)&v24, 0);
  v5 = (_DWORD *)v4;
  if ( !v4 )
    return 0;
  v6 = v4 + 48;
  if ( !(unsigned __int8)sub_11F7C0((char *)(v4 + 48), v27, 0) )
    return 0;
  if ( v27[0] != 1 )
    return 0;
  v9 = sub_1223E0(*(_QWORD *)(a2 + 48));
  v10 = sub_331100(a2);
  v11 = v10;
  if ( v10 <= 0 )
    return 0;
  if ( **(_DWORD **)(a2 + 56) == 55 )
    v11 = v10 - 1;
  if ( v11 != 1 )
    return 0;
  if ( *(_DWORD *)v9 != 12 )
    return 0;
  v21 = v9 + 64;
  if ( !sub_1255A0((unsigned __int8 *)(v9 + 64), (__int64)(v5 + 16), 0) )
    return 0;
  if ( sub_1255A0((unsigned __int8 *)(v9 + 32), v21, 0) )
  {
    v12 = (_BYTE *)(v9 + 48);
  }
  else
  {
    v20 = sub_1255A0((unsigned __int8 *)(v9 + 48), v21, 0);
    v12 = (_BYTE *)(v9 + 32);
    if ( !v20 )
      return 0;
  }
  *((_QWORD *)&a1 + 1) = sub_121C40(v12, 0);
  v25 = v24;
  *(_QWORD *)&a1 = sub_128E80(a1, (__int64)&v25, 1);
  if ( !(_QWORD)a1 )
    return 0;
  v22 = *(_QWORD *)(v3[30].m128i_i64[0] + 112);
  v13 = (char *)sub_11C2E0(a1, &v26);
  if ( !v13 )
    return 0;
  if ( !(unsigned __int8)sub_11F7C0(v13, v27, 0) )
    return 0;
  if ( v27[0] != 1 )
    return 0;
  v7 = sub_12E4C0(v22, v3, v25, v26, v24, (__int64)(v5 + 8), 1);
  if ( !(_BYTE)v7 )
    return 0;
  v14 = v3[3].m128i_i64[1];
  v15 = v3[4].m128i_i64[0];
  v16 = *(unsigned int *)(v14 + 72);
  if ( (unsigned int)v16 >= *(_DWORD *)(v15 + 64) )
    sub_167530(v14);
  v23 = *(_QWORD *)(*(_QWORD *)(v15 + 528) + 8 * v16);
  sub_11CFE0(v14);
  v17 = v3[1].m128i_i32[2];
  BYTE1(v17) &= ~2u;
  LOBYTE(v17) = v17 | 0x80;
  v3[1].m128i_i32[2] = v17;
  sub_11CFE0(v9);
  v18 = v3[1].m128i_i32[2];
  BYTE1(v18) &= ~2u;
  LOBYTE(v18) = v18 | 0x80;
  v3[1].m128i_i32[2] = v18;
  v19 = v5[9];
  *v5 = 16;
  sub_120450(v6, v22, 2, v19, -1, 0);
  sub_111F90((__int64)v3, a2, v23);
  sub_A1F60((__int64)v3, (__int64)"SDIV2B");
  return v7;
}

