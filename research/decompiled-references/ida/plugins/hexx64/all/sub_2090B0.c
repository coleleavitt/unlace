__int64 __fastcall sub_2090B0(_QWORD *a1, unsigned __int64 a2, __int64 a3, unsigned __int8 a4, __m128i a5, __m128 a6)
{
  int v7; // eax
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // r15d
  __int64 v12; // r13
  __int64 v13; // r12
  _QWORD *v14; // rax
  int v15; // r8d
  int v16; // r9d
  unsigned __int64 v17; // rsi
  int v18; // eax
  __int64 result; // rax
  bool v20; // dl
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // [rsp+8h] [rbp-98h]
  unsigned int v25; // [rsp+8h] [rbp-98h]
  __int64 *v26; // [rsp+10h] [rbp-90h]
  unsigned int v29; // [rsp+28h] [rbp-78h]
  __m128i v30; // [rsp+30h] [rbp-70h] BYREF
  int v31; // [rsp+40h] [rbp-60h]
  int v32; // [rsp+44h] [rbp-5Ch]
  _QWORD v33[10]; // [rsp+50h] [rbp-50h] BYREF

  v33[3] = __readfsqword(0x28u);
  v7 = sub_1C3500(*(_DWORD **)(a2 + 8), *(double *)a5.m128i_i64);
  v8 = v7;
  if ( v7 != -1 )
  {
    v21 = sub_1C35C0(*(_DWORD **)(a2 + 8), *(_DWORD *)(a2 + 4), *(double *)a5.m128i_i64);
    if ( (unsigned __int8)sub_1EF9B0(a1[1], v8, v21 - (int)v8) )
      return 1;
  }
  v9 = a1[1];
  v10 = *(int *)(a1[9] + 44LL);
  v11 = *(_DWORD *)(a1[9] + 44LL);
  v12 = 104 * v10;
  v13 = 104 * v10 + *(_QWORD *)(v9 + 432);
  if ( (!*(_BYTE *)(v9 + 320) || (*(_BYTE *)(v13 + 25) & 1) == 0)
    && (unsigned __int8)sub_1C3DC0(
                          *(int **)(a2 + 8),
                          *(_DWORD *)(a2 + 4),
                          104 * v10 + *(_QWORD *)(v9 + 432),
                          *(_DWORD *)(v13 + 88),
                          &v30) )
  {
    if ( v32 )
    {
      if ( !under_debugger )
        sub_383060(0xCE83u, *(double *)a5.m128i_i64);
      BUG();
    }
    v14 = sub_1FBD10(*(_QWORD ***)(a1[1] + 800LL), a2);
    if ( v14 )
    {
      v17 = *((int *)v14 + 4);
      v18 = *(_DWORD *)(*(_QWORD *)(a1[1] + 432LL) + 104 * v17 + 24);
      if ( (v18 & 0x2000000) != 0 && (v18 & 0x400) == 0 )
        goto LABEL_9;
      return 1;
    }
    if ( *(_DWORD *)(v13 + 92) && a4
      || (unsigned __int8)sub_206BC0(a1, a2, -1, a4, v15, v16, *(double *)a5.m128i_i64, a6) )
    {
      v26 = (__int64 *)(a1[1] + 432LL);
      v22 = *(_QWORD *)(v13 + 16);
      LODWORD(v33[0]) = 0;
      v24 = v22;
      copy_argloc();
      v33[2] = v24;
      v25 = sub_1F0540(v26, (__int64)v33, *(double *)a5.m128i_i64);
      cleanup_argloc();
      v17 = v25;
      if ( v25 != -1 && *(_DWORD *)(a1[9] + 44LL) != v25 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(a1[1] + 432LL) + 104LL * (int)v25 + 88) >= *(_DWORD *)(a2 + 4) )
          goto LABEL_9;
        *(_QWORD *)(v13 + 16) = *(_QWORD *)(a1[4] + 24LL) + a4;
      }
      LODWORD(v33[0]) = 0;
      copy_argloc();
      copy_argloc();
      if ( !sub_1EF8F0(
              v13,
              *(_QWORD *)(a1[1] + 1504LL),
              (_BYTE *)(*(_QWORD *)(a2 + 8) + 48LL),
              1,
              *(double *)a5.m128i_i64) )
      {
        copy_argloc();
        cleanup_argloc();
        goto LABEL_14;
      }
      v23 = *(_QWORD *)(a1[1] + 432LL) + v12;
      *(_DWORD *)(v23 + 24) |= 0x2000000u;
      cleanup_argloc();
      v17 = v11;
LABEL_9:
      sub_207330((__int64)a1, (_QWORD *)v17, v31, *(double *)a5.m128i_i64);
      v33[0] = 0;
      copy_tinfo_t();
      v29 = sub_2089E0(a2, *(int *)(a1[9] + 44LL), a3, *(__m128i **)(*(_QWORD *)(a3 + 8) + 800LL), a4, 0, a5, a6, v33);
      clear_tinfo_t();
      return v29;
    }
  }
LABEL_14:
  v20 = sub_206A80((__int64)a1, (_BYTE *)a2, a3, 0, *(double *)a5.m128i_i64, a6);
  result = 3;
  if ( !v20 )
  {
    sub_1F45B0(a1[1], 0xFFFFFFFFFFFFFFFFLL, v13);
    *(_DWORD *)(v13 + 24) |= 0x400u;
    return 1;
  }
  return result;
}

