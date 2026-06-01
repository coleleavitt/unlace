__int64 sub_3BFF30()
{
  __int64 func; // rax
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r13
  unsigned int v5; // r12d
  __int64 *v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 i; // rbp
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 j; // rbp
  _QWORD *v15; // rax
  __int64 v17; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+18h] [rbp-A0h]
  __int128 v20; // [rsp+20h] [rbp-98h]
  _QWORD v21[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v22; // [rsp+40h] [rbp-78h]
  __int128 v23; // [rsp+48h] [rbp-70h]
  char v24; // [rsp+60h] [rbp-58h]
  __int128 v25; // [rsp+68h] [rbp-50h]
  __int64 v26; // [rsp+78h] [rbp-40h]
  unsigned __int64 v27; // [rsp+88h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  func = get_func();
  if ( !func )
    return throw_idc_exception();
  v1 = func;
  v2 = sub_334A60();
  v18 = v1;
  v23 = 0;
  v21[0] = 0;
  v21[1] = -1;
  v22 = 0;
  v19 = 0;
  v20 = 0;
  sub_148BC0(&v17, v2, &v18, v21, 0);
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  v4 = v17;
  if ( v17 )
  {
    v17 = 0;
    find_idc_class();
    idcv_object();
    v24 = 2;
    v25 = 0;
    v26 = 0;
    free_idcv();
    v24 = 8;
    *(_QWORD *)&v25 = v4;
    set_idcv_attr();
    v5 = 0;
    free_idcv();
  }
  else
  {
    sub_32C090((__int64)&v18, (__int64)v21, v3);
    v5 = throw_idc_exception();
    if ( v18 )
    {
      v19 = 0;
      qfree();
    }
  }
  v6 = (__int64 *)v17;
  if ( v17 )
  {
    if ( (*(_DWORD *)(v17 + 104))-- == 1 )
    {
      sub_2540F0(v6);
      v8 = v6[23];
      if ( v8 )
      {
        v9 = v6[24];
        if ( v9 )
        {
          for ( i = 0; i != v9; ++i )
          {
            v11 = (_QWORD *)(v8 + 24 * i);
            if ( *v11 )
            {
              v11[1] = 0;
              qfree();
              v8 = v6[23];
            }
          }
        }
        v6[24] = 0;
        qfree();
      }
      if ( v6[20] )
      {
        v6[21] = 0;
        qfree();
      }
      v12 = v6[16];
      if ( v12 )
      {
        v13 = v6[17];
        if ( v13 )
        {
          for ( j = 0; j != v13; ++j )
          {
            v15 = (_QWORD *)(v12 + 32 * j);
            if ( *v15 )
            {
              v15[1] = 0;
              qfree();
              v12 = v6[16];
            }
          }
        }
        v6[17] = 0;
        qfree();
      }
      sub_2507D0((__int64)(v6 + 2));
      j__qfree();
    }
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  return v5;
}

