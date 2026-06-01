__int64 __fastcall sub_55790(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 *v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 *v10; // rbx
  __int64 *v12; // rbp
  int i; // r13d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  size_t nb; // [rsp+8h] [rbp-B0h]
  size_t na; // [rsp+8h] [rbp-B0h]
  size_t n; // [rsp+8h] [rbp-B0h]
  int v20; // [rsp+10h] [rbp-A8h] BYREF
  __int64 *v21; // [rsp+18h] [rbp-A0h]
  __int128 v22; // [rsp+20h] [rbp-98h]
  char v23; // [rsp+30h] [rbp-88h]
  __int128 v24; // [rsp+38h] [rbp-80h]
  __int64 v25; // [rsp+48h] [rbp-70h]
  __int64 v26; // [rsp+50h] [rbp-68h]
  _OWORD v27[2]; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v28; // [rsp+78h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v2 = sub_135E0(a1, a2);
  v3 = *(_QWORD *)(a1 + 8);
  v21 = nullptr;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = v2;
  v22 = 0;
  if ( (unsigned __int8)sub_1ADC0(v2, v3)
    && (unsigned __int8)sub_1ADC0(v5, v4)
    && (unsigned __int8)sub_4E3B0(v5 + 864, (__int64)&v20, v3, v4) )
  {
    idcv_object();
    LOBYTE(v26) = 2;
    *(_QWORD *)&v27[0] = v20;
    *(_OWORD *)((char *)v27 + 8) = 0;
    set_idcv_attr();
    free_idcv();
    LOBYTE(v26) = 2;
    *(_QWORD *)&v27[0] = v22;
    *(_OWORD *)((char *)v27 + 8) = 0;
    set_idcv_attr();
    free_idcv();
    v12 = v21;
    if ( 120LL * (_QWORD)v22 )
    {
      for ( i = 0; ; ++i )
      {
        v23 = 2;
        v25 = 0;
        v24 = 0;
        idcv_object();
        v16 = *v12;
        LOBYTE(v26) = 2;
        *(_QWORD *)&v27[0] = v16;
        *(_OWORD *)((char *)v27 + 8) = 0;
        set_idcv_attr();
        free_idcv();
        v26 = 7;
        memset(v27, 0, 24);
        if ( v12[2] )
        {
          nb = v12[2];
          *(_QWORD *)&v27[0] = qalloc_or_throw();
          *(_QWORD *)&v27[1] = nb;
          memcpy(*(void **)&v27[0], (const void *)v12[1], nb);
          *((_QWORD *)&v27[0] + 1) = nb;
        }
        set_idcv_attr();
        free_idcv();
        v26 = 7;
        memset(v27, 0, 24);
        if ( v12[5] )
        {
          n = v12[5];
          *(_QWORD *)&v27[0] = qalloc_or_throw();
          *(_QWORD *)&v27[1] = n;
          memcpy(*(void **)&v27[0], (const void *)v12[4], n);
          *((_QWORD *)&v27[0] + 1) = n;
        }
        set_idcv_attr();
        free_idcv();
        v26 = 7;
        memset(v27, 0, 24);
        if ( v12[8] )
        {
          na = v12[8];
          *(_QWORD *)&v27[0] = qalloc_or_throw();
          *(_QWORD *)&v27[1] = na;
          memcpy(*(void **)&v27[0], (const void *)v12[7], na);
          *((_QWORD *)&v27[0] + 1) = na;
        }
        set_idcv_attr();
        free_idcv();
        v14 = *((int *)v12 + 20);
        LOBYTE(v26) = 2;
        *(_QWORD *)&v27[0] = v14;
        *(_OWORD *)((char *)v27 + 8) = 0;
        set_idcv_attr();
        free_idcv();
        v15 = *((int *)v12 + 21);
        LOBYTE(v26) = 2;
        *(_QWORD *)&v27[0] = v15;
        *(_OWORD *)((char *)v27 + 8) = 0;
        set_idcv_attr();
        free_idcv();
        LOBYTE(v26) = 2;
        memset(v27, 0, 24);
        deep_copy_idcv();
        set_idcv_slice();
        v12 += 15;
        free_idcv();
        free_idcv();
        v6 = v21;
        if ( v12 == &v21[15 * (_QWORD)v22] )
          break;
      }
    }
    else
    {
      v6 = v21;
    }
  }
  else
  {
    v6 = v21;
  }
  if ( v6 )
  {
    v7 = v22;
    if ( (_QWORD)v22 )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        v10 = &v6[v8];
        if ( v6[v8 + 7] )
        {
          v10[8] = 0;
          qfree();
        }
        if ( v10[4] )
        {
          v10[5] = 0;
          qfree();
        }
        if ( v10[1] )
        {
          v10[2] = 0;
          qfree();
        }
        ++v9;
        v6 = v21;
        v8 += 15;
      }
      while ( v7 != v9 );
    }
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  return 0;
}

