__int64 __fastcall sub_55390(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 v5; // rbx
  _QWORD *v6; // rbp
  char *v8; // rbp
  int i; // r13d
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  size_t v13; // r15
  char *v14; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v15; // [rsp+18h] [rbp-A0h]
  char v16; // [rsp+30h] [rbp-88h]
  __int128 v17; // [rsp+38h] [rbp-80h]
  __int64 v18; // [rsp+48h] [rbp-70h]
  __int64 v19; // [rsp+50h] [rbp-68h]
  _OWORD v20[2]; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v15 = 0;
  v14 = nullptr;
  v2 = sub_135E0(a1, a2);
  if ( (unsigned __int8)sub_49BF0(v2 + 864, (__int64 *)&v14) )
  {
    idcv_object();
    LOBYTE(v19) = 2;
    *(_QWORD *)&v20[0] = v15;
    *(_OWORD *)((char *)v20 + 8) = 0;
    set_idcv_attr();
    free_idcv();
    v8 = v14;
    if ( 72LL * (_QWORD)v15 )
    {
      for ( i = 0; ; ++i )
      {
        v16 = 2;
        v18 = 0;
        v17 = 0;
        idcv_object();
        v11 = *v8;
        LOBYTE(v19) = 2;
        *(_QWORD *)&v20[0] = v11;
        *(_OWORD *)((char *)v20 + 8) = 0;
        set_idcv_attr();
        free_idcv();
        v12 = *((_QWORD *)v8 + 1);
        LOBYTE(v19) = 2;
        *(_QWORD *)&v20[0] = v12;
        *(_OWORD *)((char *)v20 + 8) = 0;
        set_idcv_attr();
        free_idcv();
        v19 = 7;
        memset(v20, 0, 24);
        v13 = *((_QWORD *)v8 + 3);
        if ( v13 )
        {
          *(_QWORD *)&v20[0] = qalloc_or_throw();
          *(_QWORD *)&v20[1] = v13;
          memcpy(*(void **)&v20[0], *((const void **)v8 + 2), v13);
          *((_QWORD *)&v20[0] + 1) = v13;
        }
        set_idcv_attr();
        free_idcv();
        v10 = *((int *)v8 + 16);
        LOBYTE(v19) = 2;
        *(_QWORD *)&v20[0] = v10;
        *(_OWORD *)((char *)v20 + 8) = 0;
        set_idcv_attr();
        free_idcv();
        LOBYTE(v19) = 2;
        memset(v20, 0, 24);
        deep_copy_idcv();
        set_idcv_slice();
        v8 += 72;
        free_idcv();
        free_idcv();
        v3 = (__int64)v14;
        if ( v8 == &v14[72 * (_QWORD)v15] )
          break;
      }
    }
    else
    {
      v3 = (__int64)v14;
    }
  }
  else
  {
    v3 = (__int64)v14;
  }
  if ( v3 )
  {
    v4 = v15;
    if ( (_QWORD)v15 )
    {
      v5 = 0;
      do
      {
        v6 = (_QWORD *)(v3 + 72 * v5);
        if ( v6[5] )
        {
          v6[6] = 0;
          qfree();
        }
        if ( v6[2] )
        {
          v6[3] = 0;
          qfree();
        }
        ++v5;
        v3 = (__int64)v14;
      }
      while ( v4 != v5 );
    }
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  return 0;
}

