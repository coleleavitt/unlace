unsigned __int64 __fastcall sub_13E10(__int64 *a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  __int64 (*v4)(void); // rax
  __int64 v5; // r12
  __int64 (*v6)(); // rax
  __int64 v7; // r14
  int v9; // eax
  const char *v10; // rsi
  int v11; // eax
  int v12; // r14d
  const char *v13; // rsi
  int v14; // edx
  const char *v15; // [rsp+30h] [rbp-50h] BYREF
  __int128 v16; // [rsp+38h] [rbp-48h]
  unsigned __int64 v17; // [rsp+48h] [rbp-38h]

  v2 = *a1;
  v17 = __readfsqword(0x28u);
  v4 = *(__int64 (**)(void))(v2 + 32);
  if ( (char *)v4 == (char *)sub_F0E0 )
    v5 = (__int64)(a1 + 28);
  else
    v5 = v4();
  if ( a2 )
  {
    v6 = *(__int64 (**)())(*(_QWORD *)v5 + 584LL);
    if ( v6 != sub_F0D0 )
      ((void (__fastcall *)(__int64))v6)(v5);
  }
  v7 = *(_QWORD *)(v5 + 680);
  if ( (*((_BYTE *)&debug + 2) & 1) != 0 )
  {
    v15 = nullptr;
    v16 = 0;
    get_dbctx_id();
    sub_13B20((__int64 *)&v15);
    v10 = nptr;
    if ( (_QWORD)v16 )
      v10 = v15;
    sub_111A0((__int64)"%s: update_idd_registers(%d) idaregs nregs %d\n", v10, a2, v7);
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree();
    }
    v11 = debug & 0x10000;
    if ( v7 )
    {
      a1[20] = *(_QWORD *)(v5 + 720);
      v14 = *(_DWORD *)(v5 + 768);
      *((_DWORD *)a1 + 46) = v7;
      *((_DWORD *)a1 + 42) = v14;
      a1[22] = *(_QWORD *)(v5 + 672);
    }
    else
    {
      *((_DWORD *)a1 + 46) = 1;
      a1[22] = (__int64)&off_7F720;
      a1[20] = (__int64)&off_7F740;
      *((_DWORD *)a1 + 42) = 1;
    }
    if ( v11 )
    {
      v12 = *((_DWORD *)a1 + 46);
      v16 = 0;
      v15 = nullptr;
      get_dbctx_id();
      sub_13B20((__int64 *)&v15);
      v13 = nptr;
      if ( (_QWORD)v16 )
        v13 = v15;
      sub_111A0((__int64)"%s: update_idd_registers(%d) debugger.nregisters %d\n", v13, a2, v12);
      if ( v15 )
      {
        *(_QWORD *)&v16 = 0;
        qfree();
      }
    }
  }
  else if ( v7 )
  {
    a1[20] = *(_QWORD *)(v5 + 720);
    v9 = *(_DWORD *)(v5 + 768);
    *((_DWORD *)a1 + 46) = v7;
    *((_DWORD *)a1 + 42) = v9;
    a1[22] = *(_QWORD *)(v5 + 672);
  }
  else
  {
    *((_DWORD *)a1 + 46) = 1;
    a1[22] = (__int64)&off_7F720;
    a1[20] = (__int64)&off_7F740;
    *((_DWORD *)a1 + 42) = 1;
  }
  return v17 - __readfsqword(0x28u);
}

