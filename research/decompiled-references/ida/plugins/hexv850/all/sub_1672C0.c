__int64 __fastcall sub_1672C0(const __m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r13
  int v15; // r8d
  unsigned __int8 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r13
  __int32 v21; // eax
  unsigned __int8 v22; // r9
  unsigned __int8 v23; // [rsp+8h] [rbp-70h]
  unsigned __int8 v24; // [rsp+8h] [rbp-70h]
  int v25; // [rsp+10h] [rbp-68h]
  __int64 v26; // [rsp+18h] [rbp-60h]
  unsigned __int8 v27; // [rsp+27h] [rbp-51h]
  _QWORD v28[9]; // [rsp+30h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a3 + 48);
  v28[1] = __readfsqword(0x28u);
  v6 = sub_11DDE0(v4);
  if ( !v6 )
    return 0;
  v7 = v6;
  if ( *(_DWORD *)v6 != 12 )
    return 0;
  v8 = *(_QWORD *)(v6 + 8);
  if ( v8 )
  {
    v9 = v6 + 64;
    while ( *(_DWORD *)v8 != 55 )
    {
      if ( (unsigned int)(*(_DWORD *)v8 - 29) > 0xC
        || !sub_120FA0((unsigned __int8 *)(v8 + 32), v9, 0)
        || !(unsigned __int8)sub_11B1C0((char *)(v8 + 48), v28, 0)
        || v28[0] )
      {
        return 0;
      }
      v8 = *(_QWORD *)(v8 + 8);
      if ( !v8 )
        break;
    }
  }
  v12 = sub_117CE0(v7, v28);
  if ( v12
    && (v13 = *(_QWORD *)(a1[30].m128i_i64[0] + 112),
        (unsigned __int8)sub_129EC0(v13, a1, a1[3].m128i_i64[1], v7 + 32, a1[3].m128i_i64[1], a2 + 32, 0))
    && (v27 = sub_129EC0(v13, a1, a1[3].m128i_i64[1], v7 + 64, a1[3].m128i_i64[1], a2 + 32, 1)) != 0 )
  {
    v26 = *(_QWORD *)(a2 + 24);
    v14 = j__qalloc_or_throw();
    *(_QWORD *)(v14 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v14 + 40) = 0;
    *(_QWORD *)(v14 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v14 + 56) = 0;
    *(_QWORD *)(v14 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v14 + 72) = 0;
    sub_32ADE0(v14, v26);
    *(_DWORD *)v14 = 20;
    sub_117E50((char *)(v14 + 48), (char *)v12);
    sub_1205C0(v14 + 32, (unsigned __int8 *)(v7 + 32));
    sub_11BC20((char *)(v14 + 32), v13, 29, v26, 1);
    sub_11BC20((char *)(v14 + 32), v13, 5, v26, 1);
    v15 = *(_DWORD *)(v7 + 68);
    v16 = v27;
    if ( v15 > 1 )
    {
      v25 = *(_DWORD *)(v7 + 68);
      sub_11BC20((char *)(v14 + 32), v13, 8, v26, v15);
      v16 = v27;
      v15 = v25;
    }
    *(_DWORD *)(v14 + 68) = v15;
    *(_BYTE *)v12 = 4;
    *(_QWORD *)(v12 + 8) = v14;
    *(_DWORD *)(v12 + 4) = v15;
    v17 = a1[3].m128i_i64[1];
    v18 = a1[4].m128i_i64[0];
    v19 = *(unsigned int *)(v17 + 72);
    if ( (unsigned int)v19 >= *(_DWORD *)(v18 + 64) )
      sub_162F30(v17);
    v23 = v16;
    v20 = *(_QWORD *)(*(_QWORD *)(v18 + 528) + 8 * v19);
    sub_1189E0(v17);
    v21 = a1[1].m128i_i32[2];
    v22 = v23;
    BYTE1(v21) &= ~2u;
    LOBYTE(v21) = v21 | 0x80;
    a1[1].m128i_i32[2] = v21;
    if ( *(_DWORD *)(a3 + 72) != a1[4].m128i_i32[2] + 1 )
    {
      sub_118CD0(a1[3].m128i_i64[1], v7);
      v22 = v23;
    }
    v24 = v22;
    sub_10D990((__int64)a1, a3, v20);
    sub_9D960((__int64)a1, (__int64)"FLATTEN_JNS");
    return v24;
  }
  else
  {
    return 0;
  }
}

