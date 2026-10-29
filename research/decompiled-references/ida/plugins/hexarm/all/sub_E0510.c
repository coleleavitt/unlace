unsigned __int64 __fastcall sub_E0510(__int64 a1, __int64 *a2, int a3, __int64 *a4)
{
  int v4; // r13d
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  int tinfo_size; // [rsp+10h] [rbp-D8h]
  char v19; // [rsp+17h] [rbp-D1h]
  __int64 v20; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+28h] [rbp-C0h]
  _BYTE v22[16]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v24; // [rsp+48h] [rbp-A0h]
  __int128 v25; // [rsp+58h] [rbp-90h]
  __int64 v26; // [rsp+68h] [rbp-80h]
  __int128 v27; // [rsp+70h] [rbp-78h]
  __int64 v28; // [rsp+80h] [rbp-68h]
  __int128 v29; // [rsp+88h] [rbp-60h]
  char v30; // [rsp+98h] [rbp-50h]
  unsigned __int64 v31; // [rsp+A8h] [rbp-40h]

  v4 = a1;
  v31 = __readfsqword(0x28u);
  a2[1] = 0;
  tinfo_size = get_tinfo_size();
  if ( tinfo_size > 0 && !(unsigned int)verify_tinfo() )
  {
    v7 = *(_QWORD *)(a1 + 112);
    v20 = 0;
    v21 = 0;
    v8 = sub_D00E0(v7);
    v23 = 0;
    v25 = 0u;
    v26 = 0;
    v28 = 0;
    v24 = 0;
    v27 = 0;
    v29 = 0;
    if ( (v8 & 0xFFFFFF0F) != 0 || v8 == 192 )
    {
      DWORD1(v25) = v8;
      LOBYTE(v8) = -64;
    }
    v30 = v8;
    copy_tinfo_t();
    v19 = calc_retloc();
    if ( v19 )
    {
      v9 = v27;
      *(_QWORD *)&v27 = v21;
      v21 = v9;
      LODWORD(v9) = v26;
      LODWORD(v26) = v20;
      LODWORD(v20) = v9;
    }
    cleanup_argloc();
    clear_tinfo_t();
    if ( v19 && (unsigned __int8)sub_32D720(v4, a3, (unsigned int)&v20, v10, v11, v12) )
    {
      sub_1C59F0(v22, &v20, (unsigned int)tinfo_size, 0);
      v23 = 0;
      v24 = 0u;
      v25 = 0;
      sub_1C2BF0((unsigned int)v22, (unsigned int)&v23, tinfo_size, 0, 0, v13);
      if ( (_QWORD)v25 )
      {
        if ( !under_debugger )
          sub_3835A0(51715);
        BUG();
      }
      v14 = v23;
      v23 = *a2;
      v15 = a2[1];
      *a2 = v14;
      v16 = v24;
      *(_QWORD *)&v24 = v15;
      a2[1] = v16;
      if ( a4 )
        sub_63C80(a4, a2);
      if ( *((_QWORD *)&v24 + 1) )
      {
        *(_QWORD *)&v25 = 0;
        qfree();
      }
      qfree();
      cleanup_argloc();
      cleanup_argloc();
    }
    else
    {
      cleanup_argloc();
    }
  }
  return v31 - __readfsqword(0x28u);
}

