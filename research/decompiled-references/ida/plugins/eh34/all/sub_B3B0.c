int sub_B3B0()
{
  char *v0; // r12
  __int64 v1; // rdi
  char v3; // [rsp+1Eh] [rbp-AAh] BYREF
  char v4; // [rsp+1Fh] [rbp-A9h] BYREF
  _QWORD v5[3]; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD v6[3]; // [rsp+38h] [rbp-90h] BYREF
  _BYTE v7[24]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v8[24]; // [rsp+68h] [rbp-60h] BYREF
  char v9; // [rsp+80h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+88h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  sub_1B350(v5, "__eh34_try_continuation");
  sub_1B350(v6, "__eh34_scope_strut");
  sub_1B350(v7, "__eh34_dead_end_try");
  sub_1B350(v8, "__eh34_dead_end_wind");
  sub_1DAE0(&unk_8D4C0, v5, 4, &v4, &v3);
  v0 = &v9;
  do
  {
    v1 = *((_QWORD *)v0 - 3);
    v0 -= 24;
    if ( v1 )
    {
      *((_QWORD *)v0 + 1) = 0;
      qfree(v1);
    }
  }
  while ( v0 != (char *)v5 );
  __cxa_atexit(func, &unk_8D4C0, &off_8B6C0);
  sub_1B350(v5, "__eh34_wind");
  sub_1B350(v6, "__eh34_try");
  sub_1DAE0(&unk_8D480, v5, 2, &v4, &v3);
  if ( v6[0] )
  {
    v6[1] = 0;
    qfree(v6[0]);
  }
  if ( v5[0] )
  {
    v5[1] = 0;
    qfree(v5[0]);
  }
  return __cxa_atexit(func, &unk_8D480, &off_8B6C0);
}

