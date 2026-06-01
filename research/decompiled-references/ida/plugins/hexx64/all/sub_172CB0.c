unsigned __int64 __fastcall sub_172CB0(_QWORD *a1, __int64 a2, __m128i a3)
{
  __int64 v4; // rax
  bool v5; // zf
  unsigned int v7; // r13d
  unsigned __int8 *v8; // rdi
  __int64 v9; // r14
  unsigned __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rcx
  char v14; // r15
  char v15; // al
  __int64 v16; // rbp
  unsigned __int8 v17; // al
  int v18; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-40h]

  v4 = a1[2];
  v5 = *(_BYTE *)a2 == 4;
  v19 = __readfsqword(0x28u);
  v7 = *(_DWORD *)(a2 + 4);
  v8 = (unsigned __int8 *)a1[6];
  v18 = 0;
  v9 = *(_QWORD *)(v4 + 480);
  v10 = *(unsigned __int64 **)(v9 + 112);
  if ( v5 )
  {
    if ( !sub_125B90(v8, *(_QWORD *)(v9 + 112), *(unsigned int **)(a2 + 8), 0, *(double *)a3.m128i_i64) )
    {
      if ( !under_debugger )
        sub_383060(0xC565u, *(double *)a3.m128i_i64);
      goto LABEL_31;
    }
    v11 = a1[6];
    if ( *(_DWORD *)(v11 + 68) != v7 && *(_DWORD *)v11 == 11 )
    {
      sub_125180((unsigned __int8 *)a2, (unsigned __int8 *)(v11 + 64));
      sub_1279B0(a2, v10, *(_QWORD *)(a1[4] + 24LL), v7, a3);
      return v19 - __readfsqword(0x28u);
    }
  }
  else
  {
    if ( *(_DWORD *)v8 != 4 )
    {
      if ( *(_DWORD *)v8 == 67 )
      {
        if ( sub_1255D0((unsigned __int8 *)a2, *(_QWORD *)(v9 + 112), (__int64)(v8 + 32), 0, *(double *)a3.m128i_i64) )
        {
          v11 = a1[6];
          goto LABEL_6;
        }
        if ( !under_debugger )
          sub_383060(0xC566u, *(double *)a3.m128i_i64);
      }
      else if ( !under_debugger )
      {
        sub_383060(0xC568u, *(double *)a3.m128i_i64);
      }
LABEL_31:
      BUG();
    }
    if ( !sub_1255D0((unsigned __int8 *)a2, *(_QWORD *)(v9 + 112), (__int64)(v8 + 32), 1, *(double *)a3.m128i_i64)
      && !(unsigned __int8)sub_121BB0(a1[6] + 32LL, (char *)a2, &v18) )
    {
      if ( !under_debugger )
        sub_383060(0xC567u, *(double *)a3.m128i_i64);
      goto LABEL_31;
    }
    v14 = sub_11CC50((unsigned __int8 *)(a1[6] + 32LL), v9, 0, *(double *)a3.m128i_i64);
    v15 = sub_11CC50((unsigned __int8 *)(a1[6] + 64LL), v9, 0, *(double *)a3.m128i_i64);
    v11 = a1[6];
    if ( v14 != v15 )
    {
      v18 = *(_DWORD *)(v11 + 68) - (v7 + v18);
      if ( v18 < 0 )
      {
        if ( !under_debugger )
          sub_383060(0xC92Du, *(double *)a3.m128i_i64);
        goto LABEL_31;
      }
    }
  }
LABEL_6:
  sub_125180((unsigned __int8 *)a2, (unsigned __int8 *)(v11 + 64));
  if ( !(unsigned __int8)sub_126F10((int *)a2, v10, v18, v12, *(double *)a3.m128i_i64) )
  {
    if ( !under_debugger )
      sub_383060(0xC569u, *(double *)a3.m128i_i64);
    goto LABEL_31;
  }
  if ( *(_DWORD *)(a2 + 4) != v7 && !(unsigned __int8)sub_1274C0((unsigned __int8 *)a2, v10, v7, 0, a3) )
  {
    v16 = *(_QWORD *)(a1[4] + 24LL);
    v17 = sub_11CC50((unsigned __int8 *)a2, v9, 0, *(double *)a3.m128i_i64);
    sub_1207E0((char *)a2, v10, (unsigned int)v17 + 10, v16, v7, a3);
  }
  return v19 - __readfsqword(0x28u);
}

