unsigned __int64 __fastcall sub_E0AD0(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  int tinfo_size; // [rsp+10h] [rbp-D8h]
  char v15; // [rsp+17h] [rbp-D1h]
  __int64 v16; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+28h] [rbp-C0h]
  _BYTE v18[16]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v20; // [rsp+48h] [rbp-A0h]
  __int128 v21; // [rsp+58h] [rbp-90h]
  __int64 v22; // [rsp+68h] [rbp-80h]
  __int128 v23; // [rsp+70h] [rbp-78h]
  __int64 v24; // [rsp+80h] [rbp-68h]
  __int128 v25; // [rsp+88h] [rbp-60h]
  char v26; // [rsp+98h] [rbp-50h]
  unsigned __int64 v27; // [rsp+A8h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  a2[1] = 0;
  tinfo_size = get_tinfo_size();
  if ( tinfo_size > 0 && !(unsigned int)verify_tinfo() )
  {
    v7 = *(_QWORD *)(a1 + 112);
    v16 = 0;
    v17 = 0;
    v8 = sub_D06A0(v7);
    v19 = 0;
    v21 = 0u;
    v22 = 0;
    v24 = 0;
    v20 = 0;
    v23 = 0;
    v25 = 0;
    if ( (v8 & 0xFFFFFF0F) != 0 || v8 == 192 )
    {
      DWORD1(v21) = v8;
      LOBYTE(v8) = -64;
    }
    v26 = v8;
    copy_tinfo_t();
    v15 = calc_retloc();
    if ( v15 )
    {
      v9 = v23;
      *(_QWORD *)&v23 = v17;
      v17 = v9;
      LODWORD(v9) = v22;
      LODWORD(v22) = v16;
      LODWORD(v16) = v9;
    }
    cleanup_argloc();
    clear_tinfo_t();
    if ( v15 && (unsigned __int8)sub_32D400(a1, a3, (__int64)&v16) )
    {
      sub_1C5FB0((__int64)v18, (__int64)&v16, tinfo_size, 0);
      v19 = 0;
      v20 = 0u;
      v21 = 0;
      sub_1C31B0((__int64)v18, (__int64)&v19, tinfo_size, 0, 0);
      if ( (_QWORD)v21 )
      {
        if ( !under_debugger )
          sub_383060(0xCA03u, 0.0);
        BUG();
      }
      v10 = v19;
      v19 = *a2;
      v11 = a2[1];
      *a2 = v10;
      v12 = v20;
      *(_QWORD *)&v20 = v11;
      a2[1] = v12;
      if ( a4 )
        sub_64280(a4, a2, 0.0);
      if ( *((_QWORD *)&v20 + 1) )
      {
        *(_QWORD *)&v21 = 0;
        qfree(*((__int64 *)&v20 + 1));
      }
      qfree(v19);
      cleanup_argloc();
      cleanup_argloc();
    }
    else
    {
      cleanup_argloc();
    }
  }
  return v27 - __readfsqword(0x28u);
}

