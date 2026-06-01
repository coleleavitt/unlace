__int64 sub_41000()
{
  unsigned int v0; // r13d
  __int64 v1; // rdi
  __int64 v2; // r12
  __int64 v3; // rbp
  _QWORD *v4; // rbx
  __int64 v6; // [rsp+10h] [rbp-98h] BYREF
  __int128 v7; // [rsp+18h] [rbp-90h]
  __int64 v8; // [rsp+28h] [rbp-80h]
  __int64 v9; // [rsp+30h] [rbp-78h]
  __int64 v10; // [rsp+38h] [rbp-70h]
  __int128 v11; // [rsp+40h] [rbp-68h]
  __int64 v12; // [rsp+50h] [rbp-58h]
  __int128 v13; // [rsp+58h] [rbp-50h]
  char v14; // [rsp+68h] [rbp-40h]
  unsigned __int64 v15; // [rsp+78h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  get_tinfo_property();
  v6 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v12 = 0;
  v14 = 16;
  v7 = 0;
  v11 = 0;
  v13 = 0;
  if ( (unsigned __int8)get_tinfo_details() )
    v0 = sub_40F60((__int64)&v6);
  else
    v0 = (unsigned __int8)getinf_flag() - 1;
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v1 = v6;
  if ( v6 )
  {
    v2 = v7;
    if ( (_QWORD)v7 )
    {
      v3 = 0;
      do
      {
        v4 = (_QWORD *)(v1 + 80 * v3);
        clear_tinfo_t();
        if ( v4[5] )
        {
          v4[6] = 0;
          qfree();
        }
        if ( v4[2] )
        {
          v4[3] = 0;
          qfree();
        }
        ++v3;
        cleanup_argloc();
        v1 = v6;
      }
      while ( v2 != v3 );
    }
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  clear_tinfo_t();
  return v0;
}

