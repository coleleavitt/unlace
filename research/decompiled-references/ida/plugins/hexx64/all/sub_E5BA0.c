__int64 __fastcall sub_E5BA0(__int64 a1, __int64 a2, char a3)
{
  _BYTE *v6; // rdi
  _BYTE *v7; // rax
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
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+8h] [rbp-B0h] BYREF
  __int64 *v28[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v29[7]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v30[3]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v31[9]; // [rsp+70h] [rbp-48h] BYREF

  v31[3] = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  v6 = *(_BYTE **)(a2 + 56);
  if ( v6 )
  {
    v7 = sub_120380(v6, 0);
    if ( v7 )
    {
      if ( !v7[64] )
      {
        sub_D10B0((__int64)&v26, *(_QWORD *)(a2 + 480), 0x70u);
        sub_E3820((__int64 *)a1, (_QWORD *)a2, &v27, v30);
        sub_E3820((__int64 *)a1, (_QWORD *)a2, v29, v31);
        if ( v31[0] )
        {
          v31[1] = 0;
          qfree(v31[0]);
        }
        if ( v30[0] )
        {
          v30[1] = 0;
          qfree(v30[0]);
        }
        if ( v29[0] )
        {
          v29[1] = 0;
          qfree(v29[0]);
        }
        if ( v27 )
        {
          v28[0] = nullptr;
          qfree(v27);
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
          sub_383060(0xCDEFu, 0.0);
        BUG();
      }
      v14 = *(_QWORD *)(*(_QWORD *)(v12 + 528) + 8 * v13);
      if ( *(_DWORD *)(v14 + 352) == 1 )
      {
        sub_E5BA0((__int64)&v26, v14, 0);
        sub_64280((__int64 *)a1, &v26, 0.0);
        sub_316CB0((__int64 *)(a1 + 16), v28, v24, v25);
        if ( v28[0] )
        {
          v28[1] = nullptr;
          qfree((__int64)v28[0]);
        }
        qfree(v26);
      }
    }
  }
  if ( !(unsigned __int8)sub_64880((_QWORD *)a1) || *(_QWORD *)(a1 + 24) )
  {
    sub_64640((__int64 *)a1, (__int64 *)(a2 + 200), v15, v16, v17, v18);
    sub_317C60((__int64 *)(a1 + 16), a2 + 216);
  }
  sub_64280((__int64 *)a1, (__int64 *)(a2 + 120), 0.0);
  if ( *(_DWORD *)(a2 + 76) != 1 && *(_BYTE *)(*(_QWORD *)(a2 + 480) + 148LL) )
  {
    if ( (*(_DWORD *)(a2 + 24) & 0x600) != 0x200 )
      sub_A7590(a2, 0, v19, v20, v21, v22);
    sub_316CB0((__int64 *)(a1 + 16), (__int64 **)(a2 + 136), v19, v20);
  }
  return a1;
}

