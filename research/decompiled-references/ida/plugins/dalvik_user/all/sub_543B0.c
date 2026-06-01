__int64 __fastcall sub_543B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rbp
  _QWORD *v9; // rbx
  __int64 v11; // rbp
  int i; // r13d
  size_t v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  size_t v16; // r15
  __int64 v17; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v18; // [rsp+18h] [rbp-A0h]
  char v19; // [rsp+30h] [rbp-88h]
  __int128 v20; // [rsp+38h] [rbp-80h]
  __int64 v21; // [rsp+48h] [rbp-70h]
  __int64 v22; // [rsp+50h] [rbp-68h]
  _OWORD v23[2]; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v2 = sub_135E0(a1, a2);
  v3 = *(_QWORD *)(a1 + 8);
  v17 = 0;
  v4 = v2;
  v18 = 0;
  if ( (unsigned __int8)sub_1ADC0(v2, v3) && (unsigned __int8)sub_4B6B0(v4 + 864, &v17, v3) )
  {
    idcv_object();
    LOBYTE(v22) = 2;
    *(_QWORD *)&v23[0] = v18;
    *(_OWORD *)((char *)v23 + 8) = 0;
    set_idcv_attr();
    free_idcv();
    v11 = v17;
    if ( 112LL * (_QWORD)v18 )
    {
      for ( i = 0; ; ++i )
      {
        v19 = 2;
        v21 = 0;
        v20 = 0;
        idcv_object();
        v15 = *(_QWORD *)(v11 + 8);
        LOBYTE(v22) = 2;
        *(_QWORD *)&v23[0] = v15;
        *(_OWORD *)((char *)v23 + 8) = 0;
        set_idcv_attr();
        free_idcv();
        v22 = 7;
        memset(v23, 0, 24);
        v16 = *(_QWORD *)(v11 + 24);
        if ( v16 )
        {
          *(_QWORD *)&v23[0] = qalloc_or_throw();
          *(_QWORD *)&v23[1] = v16;
          memcpy(*(void **)&v23[0], *(const void **)(v11 + 16), v16);
          *((_QWORD *)&v23[0] + 1) = v16;
        }
        set_idcv_attr();
        free_idcv();
        v22 = 7;
        memset(v23, 0, 24);
        v13 = *(_QWORD *)(v11 + 48);
        if ( v13 )
        {
          *(_QWORD *)&v23[0] = qalloc_or_throw();
          *(_QWORD *)&v23[1] = v13;
          memcpy(*(void **)&v23[0], *(const void **)(v11 + 40), v13);
          *((_QWORD *)&v23[0] + 1) = v13;
        }
        set_idcv_attr();
        free_idcv();
        v14 = *(unsigned int *)(v11 + 88);
        LOBYTE(v22) = 2;
        *(_QWORD *)&v23[0] = v14;
        *(_OWORD *)((char *)v23 + 8) = 0;
        set_idcv_attr();
        free_idcv();
        LOBYTE(v22) = 2;
        memset(v23, 0, 24);
        deep_copy_idcv();
        set_idcv_slice();
        v11 += 112;
        free_idcv();
        free_idcv();
        v5 = v17;
        if ( v11 == v17 + 112LL * (_QWORD)v18 )
          break;
      }
    }
    else
    {
      v5 = v17;
    }
  }
  else
  {
    v5 = v17;
  }
  if ( v5 )
  {
    v6 = v18;
    if ( (_QWORD)v18 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        v9 = (_QWORD *)(v5 + v7);
        if ( *(_QWORD *)(v5 + v7 + 64) )
        {
          v9[9] = 0;
          qfree();
        }
        if ( v9[5] )
        {
          v9[6] = 0;
          qfree();
        }
        if ( v9[2] )
        {
          v9[3] = 0;
          qfree();
        }
        ++v8;
        v5 = v17;
        v7 += 112;
      }
      while ( v6 != v8 );
    }
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  return 0;
}

