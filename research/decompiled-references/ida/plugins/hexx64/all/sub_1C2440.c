__int64 __fastcall sub_1C2440(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned __int16 a4)
{
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rsi
  _DWORD *v10; // r12
  __int64 v11; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rax
  int v15; // [rsp+20h] [rbp-98h]
  __int64 v16; // [rsp+50h] [rbp-68h] BYREF
  __int128 v17; // [rsp+58h] [rbp-60h]
  __int64 v18; // [rsp+68h] [rbp-50h]
  int v19; // [rsp+70h] [rbp-48h]
  unsigned __int64 v20; // [rsp+78h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  copy_argloc();
  LOWORD(v15) = a3;
  v16 = 0;
  v18 = 0;
  v19 = -1;
  HIWORD(v15) = a4;
  v17 = 0;
  if ( a3 < (unsigned __int64)a4 )
  {
    v16 = qvector_reserve((__int64)&v16, 0, 1, 16);
    v13 = (_QWORD *)(16 * v17 + v16);
    *v13 = a3;
    v13[1] = a4;
    *(_QWORD *)&v17 = v17 + 1;
  }
  if ( (unsigned __int8)rangeset_t_sub2() )
  {
    if ( 16LL * (_QWORD)v17 )
    {
      if ( !under_debugger )
        sub_383060(0xC903u, 0.0);
      BUG();
    }
    v11 = v16;
    ++*(_DWORD *)(a1 + 24);
  }
  else
  {
    v7 = *(__int64 **)(a1 + 8);
    copy_argloc();
    v8 = v7[1];
    v9 = *v7;
    if ( v7[2] < (unsigned __int64)(v8 + 1) )
    {
      v14 = qvector_reserve((__int64)v7, v9, v8 + 1, 24);
      *v7 = v14;
      v8 = v7[1];
      v9 = v14;
    }
    v10 = (_DWORD *)(v9 + 24 * v8);
    *v10 = 0;
    copy_argloc();
    v10[4] = v15;
    ++v7[1];
    cleanup_argloc();
    v11 = v16;
  }
  if ( v11 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v11);
  }
  cleanup_argloc();
  return 0;
}

