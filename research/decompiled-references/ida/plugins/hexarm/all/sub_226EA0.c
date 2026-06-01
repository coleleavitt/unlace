unsigned __int64 __fastcall sub_226EA0(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 *v4; // r13
  __int64 (__fastcall *v5)(_QWORD *); // rax
  __int64 *v6; // rbx
  __int64 *v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rbp
  __int64 v16; // rbx
  _QWORD v18[3]; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+18h] [rbp-C0h]
  __int64 v20; // [rsp+20h] [rbp-B8h]
  __int64 v21; // [rsp+40h] [rbp-98h]
  __int64 v22; // [rsp+48h] [rbp-90h]
  __int64 v23; // [rsp+60h] [rbp-78h]
  __int64 v24; // [rsp+68h] [rbp-70h]
  char v25; // [rsp+98h] [rbp-40h]
  unsigned __int64 v26; // [rsp+A8h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  sub_21D0C0((__int64)v18, (__int64)a1);
  v2 = sub_10FD80(a1[98], 0);
  v3 = v2;
  if ( !v2 )
  {
    if ( !under_debugger )
      sub_3835A0(50446);
    BUG();
  }
  ++*(_DWORD *)(v2 + 24);
  sub_104880((_QWORD *)v2, a1[188], v18, 36);
  sub_226C50((__int64)v18);
  sub_104850(v3);
  if ( v25 )
  {
    v4 = (__int64 *)a1[98];
    if ( v4 )
    {
      v5 = *(__int64 (__fastcall **)(_QWORD *))(*v4 + 8);
      if ( v5 == sub_66930 )
      {
        v6 = v4 + 27;
        *v4 = (__int64)off_4E8630;
        do
        {
          v7 = v6;
          v6 -= 4;
          sub_66680(v7);
        }
        while ( v6 != v4 + 3 );
        v8 = v4[1];
        *v4 = (__int64)&unk_4E86E8;
        if ( v8 )
        {
          v4[2] = 0;
          qfree();
        }
        j__qfree();
      }
      else
      {
        v5((_QWORD *)a1[98]);
      }
    }
    a1[98] = 0;
    sub_66AE0(a1);
  }
  v18[0] = &off_4D9E30;
  clear_tinfo_t();
  cleanup_argloc();
  v9 = v23;
  if ( v23 )
  {
    v10 = v24;
    if ( v24 )
    {
      v11 = 0;
      do
      {
        v12 = (_QWORD *)(v9 + 32 * v11);
        if ( *v12 )
        {
          v12[1] = 0;
          qfree();
          v9 = v23;
        }
        ++v11;
      }
      while ( v10 != v11 );
    }
    v24 = 0;
    qfree();
  }
  if ( v21 )
  {
    v22 = 0;
    qfree();
  }
  qfree();
  v13 = v19;
  if ( v19 )
  {
    v14 = v20;
    if ( v20 )
    {
      v15 = 0;
      v16 = 0;
      do
      {
        if ( *(_QWORD *)(v13 + v15) )
        {
          *(_QWORD *)(v13 + v15 + 8) = 0;
          qfree();
          v13 = v19;
        }
        ++v16;
        v15 += 56;
      }
      while ( v14 != v16 );
    }
    v20 = 0;
    qfree();
  }
  return v26 - __readfsqword(0x28u);
}

