__int64 __fastcall sub_16BBE0(const __m128i *a1, __int64 a2, __int64 a3, __m128i a4, __m128 a5)
{
  __int64 v7; // rax
  _DWORD *v8; // r15
  __int64 v9; // r13
  unsigned int v10; // r12d
  __int64 v12; // r14
  int v13; // eax
  int v14; // edx
  _BYTE *v15; // rcx
  _BYTE *v16; // rax
  __int64 v17; // rdi
  char *v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rax
  __int32 v22; // eax
  __int32 v23; // eax
  int v24; // ecx
  char v25; // al
  __int64 v26; // [rsp+0h] [rbp-78h]
  unsigned __int64 *v27; // [rsp+0h] [rbp-78h]
  __int64 v28; // [rsp+8h] [rbp-70h]
  __int64 v29; // [rsp+18h] [rbp-60h] BYREF
  __int64 v30; // [rsp+20h] [rbp-58h] BYREF
  __int64 v31; // [rsp+28h] [rbp-50h] BYREF
  __int64 v32[9]; // [rsp+30h] [rbp-48h] BYREF

  v32[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 32) == 4 )
    return 0;
  v29 = a1[3].m128i_i64[1];
  v7 = sub_129440((__int64)a1, a2 + 32, (__int64)&v29, 0, *(double *)a4.m128i_i64, a5);
  v8 = (_DWORD *)v7;
  if ( !v7 )
    return 0;
  v9 = v7 + 48;
  if ( !(unsigned __int8)sub_11FD80((char *)(v7 + 48), v32, 0) )
    return 0;
  if ( v32[0] != 1 )
    return 0;
  v12 = sub_1229A0(*(_QWORD *)(a3 + 48));
  v13 = sub_330DE0(a3);
  v14 = v13;
  if ( v13 <= 0 )
    return 0;
  if ( **(_DWORD **)(a3 + 56) == 55 )
    v14 = v13 - 1;
  if ( v14 != 1 )
    return 0;
  if ( *(_DWORD *)v12 != 12 )
    return 0;
  v26 = v12 + 64;
  if ( !sub_125B60((unsigned __int8 *)(v12 + 64), (__int64)(v8 + 16), 0, *(double *)a4.m128i_i64) )
    return 0;
  if ( sub_125B60((unsigned __int8 *)(v12 + 32), v26, 0, *(double *)a4.m128i_i64) )
  {
    v15 = (_BYTE *)(v12 + 48);
  }
  else
  {
    v25 = sub_125B60((unsigned __int8 *)(v12 + 48), v26, 0, *(double *)a4.m128i_i64);
    v15 = (_BYTE *)(v12 + 32);
    if ( !v25 )
      return 0;
  }
  v16 = sub_122200(v15, 0);
  v30 = v29;
  v17 = sub_129440((__int64)a1, (__int64)v16, (__int64)&v30, 1, *(double *)a4.m128i_i64, a5);
  if ( !v17 )
    return 0;
  v27 = *(unsigned __int64 **)(a1[30].m128i_i64[0] + 112);
  v18 = (char *)sub_11C8A0(v17, &v31);
  if ( !v18 )
    return 0;
  if ( !(unsigned __int8)sub_11FD80(v18, v32, 0) )
    return 0;
  if ( v32[0] != 1 )
    return 0;
  v10 = sub_12EA80((__int64)v27, a1, v30, v31, v29, (__int64)(v8 + 8), a4, a5, 1);
  if ( !(_BYTE)v10 )
    return 0;
  v19 = a1[3].m128i_i64[1];
  v20 = a1[4].m128i_i64[0];
  v21 = *(unsigned int *)(v19 + 72);
  if ( (unsigned int)v21 >= *(_DWORD *)(v20 + 64) )
    sub_167AF0(*(double *)a4.m128i_i64);
  v28 = *(_QWORD *)(*(_QWORD *)(v20 + 528) + 8 * v21);
  sub_11D5A0(v19);
  v22 = a1[1].m128i_i32[2];
  BYTE1(v22) &= ~2u;
  LOBYTE(v22) = v22 | 0x80;
  a1[1].m128i_i32[2] = v22;
  sub_11D5A0(v12);
  v23 = a1[1].m128i_i32[2];
  BYTE1(v23) &= ~2u;
  LOBYTE(v23) = v23 | 0x80;
  a1[1].m128i_i32[2] = v23;
  v24 = v8[9];
  *v8 = 16;
  sub_120A10(v9, v27, 2, v24, -1, 0);
  sub_112550((__int64)a1, a3, v28);
  sub_A2520((__int64)a1, "SDIV2B");
  return v10;
}

