__int64 __fastcall sub_16BE80(const __m128i *a1, __int64 a2, __int64 a3, __m128i a4, __m128 a5)
{
  __int64 v6; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v14; // r14
  unsigned __int64 *v15; // r15
  __int64 v16; // rcx
  __int64 v17; // r13
  int v18; // r8d
  unsigned __int8 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r13
  __int32 v24; // eax
  unsigned __int8 v25; // r9
  __int64 v26; // [rsp-8h] [rbp-80h]
  unsigned __int8 v27; // [rsp+8h] [rbp-70h]
  unsigned __int8 v28; // [rsp+8h] [rbp-70h]
  int v29; // [rsp+10h] [rbp-68h]
  __int64 v30; // [rsp+18h] [rbp-60h]
  unsigned __int8 v31; // [rsp+27h] [rbp-51h]
  __int64 v32[9]; // [rsp+30h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(a3 + 48);
  v32[1] = __readfsqword(0x28u);
  v8 = sub_1229A0(v6);
  if ( !v8 )
    return 0;
  v9 = v8;
  if ( *(_DWORD *)v8 != 12 )
    return 0;
  v10 = *(_QWORD *)(v8 + 8);
  if ( v10 )
  {
    v11 = v8 + 64;
    while ( *(_DWORD *)v10 != 55 )
    {
      if ( (unsigned int)(*(_DWORD *)v10 - 29) > 0xC
        || !sub_125B60((unsigned __int8 *)(v10 + 32), v11, 0, *(double *)a4.m128i_i64)
        || !(unsigned __int8)sub_11FD80((char *)(v10 + 48), v32, 0)
        || v32[0] )
      {
        return 0;
      }
      v10 = *(_QWORD *)(v10 + 8);
      if ( !v10 )
        break;
    }
  }
  v14 = sub_11C8A0(v9, v32);
  if ( v14
    && (v15 = *(unsigned __int64 **)(a1[30].m128i_i64[0] + 112),
        (unsigned __int8)sub_12EA80(
                           (__int64)v15,
                           a1,
                           a1[3].m128i_i64[1],
                           v9 + 32,
                           a1[3].m128i_i64[1],
                           a2 + 32,
                           a4,
                           a5,
                           0))
    && (v31 = sub_12EA80((__int64)v15, a1, a1[3].m128i_i64[1], v9 + 64, a1[3].m128i_i64[1], a2 + 32, a4, a5, 1)) != 0 )
  {
    v30 = *(_QWORD *)(a2 + 24);
    v17 = j__qalloc_or_throw(80, (__int64)a1, v26, v16);
    *(_QWORD *)(v17 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v17 + 40) = 0;
    *(_QWORD *)(v17 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v17 + 56) = 0;
    *(_QWORD *)(v17 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v17 + 72) = 0;
    sub_330970(v17, v30);
    *(_DWORD *)v17 = 20;
    sub_11CA10((char *)(v17 + 48), (char *)v14);
    sub_125180((unsigned __int8 *)(v17 + 32), (unsigned __int8 *)(v9 + 32));
    sub_1207E0((char *)(v17 + 32), v15, 29, v30, 1, a4);
    sub_1207E0((char *)(v17 + 32), v15, 5, v30, 1, a4);
    v18 = *(_DWORD *)(v9 + 68);
    v19 = v31;
    if ( v18 > 1 )
    {
      v29 = *(_DWORD *)(v9 + 68);
      sub_1207E0((char *)(v17 + 32), v15, 8, v30, v18, a4);
      v19 = v31;
      v18 = v29;
    }
    *(_DWORD *)(v17 + 68) = v18;
    *(_BYTE *)v14 = 4;
    *(_QWORD *)(v14 + 8) = v17;
    *(_DWORD *)(v14 + 4) = v18;
    v20 = a1[3].m128i_i64[1];
    v21 = a1[4].m128i_i64[0];
    v22 = *(unsigned int *)(v20 + 72);
    if ( (unsigned int)v22 >= *(_DWORD *)(v21 + 64) )
      sub_167AF0(*(double *)a4.m128i_i64);
    v27 = v19;
    v23 = *(_QWORD *)(*(_QWORD *)(v21 + 528) + 8 * v22);
    sub_11D5A0(v20);
    v24 = a1[1].m128i_i32[2];
    v25 = v27;
    BYTE1(v24) &= ~2u;
    LOBYTE(v24) = v24 | 0x80;
    a1[1].m128i_i32[2] = v24;
    if ( *(_DWORD *)(a3 + 72) != a1[4].m128i_i32[2] + 1 )
    {
      sub_11D890(a1[3].m128i_i64[1], v9);
      v25 = v27;
    }
    v28 = v25;
    sub_112550((__int64)a1, a3, v23);
    sub_A2520((__int64)a1, "FLATTEN_JNS");
    return v28;
  }
  else
  {
    return 0;
  }
}

