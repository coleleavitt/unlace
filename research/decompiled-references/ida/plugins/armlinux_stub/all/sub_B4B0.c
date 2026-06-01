unsigned __int64 __fastcall sub_B4B0(__int64 *a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  __int64 (*v4)(void); // rax
  __int64 v5; // r14
  int v6; // eax
  int v7; // edx
  int v9; // ecx
  char **v10; // rdx
  int v11; // eax
  const char *v12; // rsi
  const char *v13; // rsi
  int v14; // [rsp+24h] [rbp-5Ch]
  __int64 v15; // [rsp+28h] [rbp-58h]
  int v16; // [rsp+28h] [rbp-58h]
  const char *v17; // [rsp+30h] [rbp-50h] BYREF
  __int128 v18; // [rsp+38h] [rbp-48h]
  unsigned __int64 v19; // [rsp+48h] [rbp-38h]

  v2 = *a1;
  v19 = __readfsqword(0x28u);
  v4 = *(__int64 (**)(void))(v2 + 32);
  if ( (char *)v4 == (char *)sub_9300 )
    v15 = (__int64)(a1 + 34);
  else
    v15 = v4();
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 584LL))(v15);
  v5 = *(_QWORD *)(v15 + 680);
  v6 = debug & 0x10000;
  if ( (debug & 0x10000) != 0 )
  {
    v14 = *(_QWORD *)(v15 + 680);
    v17 = nullptr;
    v18 = 0;
    get_dbctx_id();
    sub_B140((__int64 *)&v17);
    v13 = s;
    if ( (_QWORD)v18 )
      v13 = v17;
    sub_9F20((__int64)"%s: update_idd_registers(%d) idaregs nregs %d\n", v13, a2, v14);
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree();
    }
    v6 = debug & 0x10000;
  }
  if ( v5 )
  {
    a1[20] = *(_QWORD *)(v15 + 720);
    v7 = *(_DWORD *)(v15 + 768);
    *((_DWORD *)a1 + 46) = v5;
    *((_DWORD *)a1 + 42) = v7;
    a1[22] = *(_QWORD *)(v15 + 672);
    if ( !v6 )
      return v19 - __readfsqword(0x28u);
    goto LABEL_12;
  }
  v9 = 50;
  v10 = &off_38500;
  if ( *(_DWORD *)(v15 + 276) == 8 )
  {
    v9 = 68;
    v10 = &off_38B40;
  }
  *((_DWORD *)a1 + 46) = v9;
  a1[22] = (__int64)v10;
  a1[20] = (__int64)off_393C0;
  *((_DWORD *)a1 + 42) = 1;
  if ( v6 )
  {
LABEL_12:
    v11 = *((_DWORD *)a1 + 46);
    v18 = 0;
    v16 = v11;
    v17 = nullptr;
    get_dbctx_id();
    sub_B140((__int64 *)&v17);
    v12 = s;
    if ( (_QWORD)v18 )
      v12 = v17;
    sub_9F20((__int64)"%s: update_idd_registers(%d) debugger.nregisters %d\n", v12, a2, v16);
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree();
    }
  }
  return v19 - __readfsqword(0x28u);
}

