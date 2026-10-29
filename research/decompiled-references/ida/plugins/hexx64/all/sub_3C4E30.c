__int64 __fastcall sub_3C4E30(double a1, double a2, __m128i a3, double a4)
{
  __int64 func; // rax
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r13
  unsigned int v8; // r12d
  __int64 *v9; // rbx
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 i; // rbp
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r13
  __int64 j; // rbp
  __int64 *v20; // rax
  __int64 v21; // rdi
  __int64 v23; // [rsp+8h] [rbp-B0h] BYREF
  __int64 *v24; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+18h] [rbp-A0h]
  __int128 v26; // [rsp+20h] [rbp-98h]
  _QWORD v27[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v28; // [rsp+40h] [rbp-78h]
  __int128 v29; // [rsp+48h] [rbp-70h]
  char v30; // [rsp+60h] [rbp-58h]
  __int128 v31; // [rsp+68h] [rbp-50h]
  __int64 v32; // [rsp+78h] [rbp-40h]
  unsigned __int64 v33; // [rsp+88h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  func = get_func();
  if ( !func )
    return throw_idc_exception();
  v5 = (__int64 *)func;
  v6 = sub_339CA0();
  v24 = v5;
  v29 = 0;
  v27[0] = 0;
  v27[1] = -1;
  v28 = 0;
  v25 = 0;
  v26 = 0;
  sub_14CDC0(&v23, v6, &v24, v27, 0, 0.0, a2, a3, a4);
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  v7 = v23;
  if ( v23 )
  {
    v23 = 0;
    find_idc_class();
    idcv_object();
    v30 = 2;
    v31 = 0;
    v32 = 0;
    free_idcv();
    v30 = 8;
    *(_QWORD *)&v31 = v7;
    set_idcv_attr();
    v8 = 0;
    free_idcv();
  }
  else
  {
    sub_3310F0((__int64)&v24, v27, 0.0);
    v8 = throw_idc_exception();
    if ( v24 )
    {
      v25 = 0;
      qfree((__int64)v24);
    }
  }
  v9 = (__int64 *)v23;
  if ( v23 )
  {
    if ( (*(_DWORD *)(v23 + 104))-- == 1 )
    {
      sub_258970(v9);
      v11 = v9[23];
      if ( v11 )
      {
        v12 = v9[24];
        if ( v12 )
        {
          for ( i = 0; i != v12; ++i )
          {
            v14 = (__int64 *)(v11 + 24 * i);
            v15 = *v14;
            if ( *v14 )
            {
              v14[1] = 0;
              qfree(v15);
              v11 = v9[23];
            }
          }
        }
        v9[24] = 0;
        qfree(v11);
      }
      v16 = v9[20];
      if ( v16 )
      {
        v9[21] = 0;
        qfree(v16);
      }
      v17 = v9[16];
      if ( v17 )
      {
        v18 = v9[17];
        if ( v18 )
        {
          for ( j = 0; j != v18; ++j )
          {
            v20 = (__int64 *)(v17 + 32 * j);
            v21 = *v20;
            if ( *v20 )
            {
              v20[1] = 0;
              qfree(v21);
              v17 = v9[16];
            }
          }
        }
        v9[17] = 0;
        qfree(v17);
      }
      sub_255050((__int64)(v9 + 2), 0.0);
      j__qfree((__int64)v9);
    }
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  return v8;
}

