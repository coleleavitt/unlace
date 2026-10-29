__int64 __fastcall sub_E2160(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  int *v8; // rax
  int v9; // eax
  unsigned int *v10; // r12
  unsigned int *i; // r13
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r9d
  __int64 v24; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v26[2]; // [rsp+10h] [rbp-A8h] BYREF
  _QWORD v27[7]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v28[3]; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v29[9]; // [rsp+70h] [rbp-48h] BYREF

  v29[3] = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  v6 = *(_QWORD *)(a2 + 56);
  if ( v6 )
  {
    v7 = sub_11C940(v6, 0);
    if ( v7 )
    {
      if ( !*(_BYTE *)(v7 + 64) )
      {
        sub_CD670((__int64)&v24, *(_QWORD *)(a2 + 480), 0x70u);
        sub_DFDE0((__int64 *)a1, (_QWORD *)a2, &v25, v28);
        sub_DFDE0((__int64 *)a1, (_QWORD *)a2, v27, v29);
        if ( v29[0] )
        {
          v29[1] = 0;
          qfree();
        }
        if ( v28[0] )
        {
          v28[1] = 0;
          qfree();
        }
        if ( v27[0] )
        {
          v27[1] = 0;
          qfree();
        }
        if ( v25 )
        {
          v26[0] = 0;
          qfree();
        }
      }
    }
  }
  v8 = *(int **)(a2 + 48);
  if ( !v8 || (v9 = *v8, v9 == 55) || a3 && (unsigned int)(v9 - 42) <= 0xA )
  {
    v10 = *(unsigned int **)(a2 + 368);
    for ( i = &v10[*(_QWORD *)(a2 + 376)]; i != v10; ++v10 )
    {
      v12 = *(_QWORD *)(a2 + 64);
      v13 = *v10;
      if ( (unsigned int)v13 >= *(_DWORD *)(v12 + 64) )
      {
        if ( !under_debugger )
          sub_37EEE0(52719);
        BUG();
      }
      v14 = *(_QWORD *)(*(_QWORD *)(v12 + 528) + 8 * v13);
      if ( *(_DWORD *)(v14 + 352) == 1 )
      {
        sub_E2160(&v24, v14, 0);
        sub_60840((__int64 *)a1, &v24);
        sub_312B30(a1 + 16, v26);
        if ( v26[0] )
        {
          v26[1] = 0;
          qfree();
        }
        qfree();
      }
    }
  }
  if ( !(unsigned __int8)sub_60E40((_QWORD *)a1) || *(_QWORD *)(a1 + 24) )
  {
    sub_60C00((__int64 *)a1, (__int64 *)(a2 + 200), v15, v16, v17, v18);
    sub_313AE0(a1 + 16, a2 + 216);
  }
  sub_60840((__int64 *)a1, (__int64 *)(a2 + 120));
  if ( *(_DWORD *)(a2 + 76) != 1 && *(_BYTE *)(*(_QWORD *)(a2 + 480) + 148LL) )
  {
    if ( (*(_DWORD *)(a2 + 24) & 0x600) != 0x200 )
      sub_A3B50(a2, 0, v19, v20, v21, v22);
    sub_312B30(a1 + 16, a2 + 136);
  }
  return a1;
}

