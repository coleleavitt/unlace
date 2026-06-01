unsigned __int64 __fastcall sub_BFC0(__int64 a1, char a2)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // r12
  __int64 (*v4)(); // rax
  __int64 v5; // r14
  int v6; // eax
  int v7; // edx
  char **v9; // rdx
  int v10; // ecx
  int v11; // r12d
  const char *v12; // rsi
  const char *v13; // rsi
  _BYTE v14[12]; // [rsp+2Ch] [rbp-54h] BYREF
  __int128 v15; // [rsp+38h] [rbp-48h]
  unsigned __int64 v16; // [rsp+48h] [rbp-38h]

  v14[0] = a2;
  v16 = __readfsqword(0x28u);
  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v2 == (char *)sub_ABD0 )
    v3 = a1 + 224;
  else
    v3 = v2();
  if ( a2 )
  {
    v4 = *(__int64 (**)())(*(_QWORD *)v3 + 584LL);
    if ( v4 != sub_ABC0 )
      ((void (__fastcall *)(__int64))v4)(v3);
  }
  v5 = *(_QWORD *)(v3 + 680);
  v6 = debug & 0x10000;
  if ( (debug & 0x10000) != 0 )
  {
    *(_QWORD *)&v14[4] = 0;
    v15 = 0;
    get_dbctx_id();
    sub_BF00((__int64 *)&v14[4]);
    v13 = s;
    if ( (_QWORD)v15 )
      v13 = *(const char **)&v14[4];
    sub_AF10((__int64)"%s: update_idd_registers(%d) idaregs nregs %d\n", v13, v14[0], v5);
    if ( *(_QWORD *)&v14[4] )
    {
      *(_QWORD *)&v15 = 0;
      qfree();
    }
    v6 = debug & 0x10000;
  }
  if ( v5 )
  {
    *(_QWORD *)(a1 + 160) = *(_QWORD *)(v3 + 720);
    v7 = *(_DWORD *)(v3 + 768);
    *(_DWORD *)(a1 + 184) = v5;
    *(_DWORD *)(a1 + 168) = v7;
    *(_QWORD *)(a1 + 176) = *(_QWORD *)(v3 + 672);
    if ( !v6 )
      return v16 - __readfsqword(0x28u);
  }
  else
  {
    if ( *(_DWORD *)(v3 + 276) == 8 )
    {
      v9 = &off_46C20;
      v10 = 76;
    }
    else
    {
      v9 = &off_465A0;
      v10 = 52;
    }
    *(_QWORD *)(a1 + 176) = v9;
    *(_DWORD *)(a1 + 184) = v10;
    *(_QWORD *)(a1 + 160) = off_48040;
    *(_DWORD *)(a1 + 168) = 1;
    if ( !v6 )
      return v16 - __readfsqword(0x28u);
  }
  *(_QWORD *)&v14[4] = 0;
  v11 = *(_DWORD *)(a1 + 184);
  v15 = 0;
  *(_QWORD *)v14 = v14[0];
  get_dbctx_id();
  sub_BF00((__int64 *)&v14[4]);
  v12 = s;
  if ( (_QWORD)v15 )
    v12 = *(const char **)&v14[4];
  sub_AF10((__int64)"%s: update_idd_registers(%d) debugger.nregisters %d\n", v12, *(_DWORD *)v14, v11);
  if ( *(_QWORD *)&v14[4] )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  return v16 - __readfsqword(0x28u);
}

