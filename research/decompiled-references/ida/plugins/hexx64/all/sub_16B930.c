__int64 __fastcall sub_16B930(const __m128i *a1, __int64 a2, __int64 a3, __m128i a4, __m128 a5)
{
  unsigned int v5; // r14d
  __int64 v7; // r14
  unsigned __int64 *v10; // r13
  _DWORD *v11; // r12
  int v12; // eax
  int v13; // edx
  __int64 v14; // rax
  unsigned __int8 *v15; // rdi
  __int64 v16; // rcx
  int v17; // r8d
  unsigned int v18; // eax
  __int32 v19; // eax
  __int32 v20; // eax
  int v21; // ecx
  int v22; // [rsp-10h] [rbp-A0h]
  __int64 v23; // [rsp+8h] [rbp-88h]
  __int64 v24; // [rsp+10h] [rbp-80h]
  __int64 v25; // [rsp+10h] [rbp-80h]
  __int64 v26; // [rsp+10h] [rbp-80h]
  __int64 v27; // [rsp+20h] [rbp-70h] BYREF
  __int64 v28; // [rsp+28h] [rbp-68h] BYREF
  __int64 v29[3]; // [rsp+30h] [rbp-60h] BYREF
  __int128 v30; // [rsp+48h] [rbp-48h]
  unsigned __int64 v31; // [rsp+58h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 32) != 4 )
    return 0;
  v7 = *(_QWORD *)(a2 + 40);
  if ( v7 == 0 || *(_DWORD *)v7 != 24 )
    return 0;
  v10 = *(unsigned __int64 **)(a1[30].m128i_i64[0] + 112);
  if ( !(unsigned __int8)sub_11FD80((char *)(v7 + 48), v29, 0) )
    return 0;
  if ( v29[0] != 1 )
    return 0;
  v11 = (_DWORD *)sub_1229A0(*(_QWORD *)(a3 + 48));
  v12 = sub_330DE0(a3);
  v13 = v12;
  if ( v12 <= 0 )
    return 0;
  if ( **(_DWORD **)(a3 + 56) == 55 )
    v13 = v12 - 1;
  if ( v13 == 1
    && *v11 == 12
    && (v14 = sub_11C8E0((__int64)v11, &v27, 9)) != 0
    && *(_BYTE *)(v14 + 32) == 4
    && (v24 = v14,
        v28 = a1[3].m128i_i64[1],
        (v15 = (unsigned __int8 *)sub_129440((__int64)a1, v27, (__int64)&v28, 0, *(double *)a4.m128i_i64, a5)) != nullptr)
    && sub_125B90(v15, (__int64)v10, (unsigned int *)v7, 0, *(double *)a4.m128i_i64)
    && (v16 = *(_QWORD *)(v24 + 40), *(_DWORD *)v16 == 20)
    && (v25 = *(_QWORD *)(v24 + 40), sub_A2350((char *)(v16 + 48), 1, 0))
    && (unsigned __int8)sub_12EA80(
                          (__int64)v10,
                          a1,
                          a1[3].m128i_i64[1],
                          v25 + 32,
                          a1[3].m128i_i64[1],
                          v7 + 32,
                          a4,
                          a5,
                          1) )
  {
    memset(v29, 0, sizeof(v29));
    v30 = 0;
    sub_127FE0((__int64)a1, v29, (__int64)(v11 + 16), 0, v17, v22, 0.0, a5);
    v26 = sub_129150((__int64)a1, v29, a1[3].m128i_i64[1], 0, 0, 0, 0.0, a5, 0x101u);
    if ( v26
      && (LOBYTE(v18) = sub_125B90((unsigned __int8 *)v26, (__int64)v10, (unsigned int *)v7, 0, 0.0),
          v5 = v18,
          (_BYTE)v18) )
    {
      v23 = sub_167E70(a1[4].m128i_i64[0], *(_DWORD *)(a1[3].m128i_i64[1] + 72), 0.0);
      sub_11D5A0(a1[3].m128i_i64[1]);
      v19 = a1[1].m128i_i32[2];
      BYTE1(v19) &= ~2u;
      LOBYTE(v19) = v19 | 0x80;
      a1[1].m128i_i32[2] = v19;
      sub_11D5A0((__int64)v11);
      v20 = a1[1].m128i_i32[2];
      BYTE1(v20) &= ~2u;
      LOBYTE(v20) = v20 | 0x80;
      a1[1].m128i_i32[2] = v20;
      v21 = *(_DWORD *)(v26 + 36);
      *(_DWORD *)v26 = 16;
      sub_120A10(v26 + 48, v10, 2, v21, -1, 0);
      sub_112550((__int64)a1, a3, v23);
      sub_A2520((__int64)a1, "SDIV2A");
    }
    else
    {
      v5 = 0;
    }
    sub_93B40(v29);
  }
  else
  {
    return 0;
  }
  return v5;
}

