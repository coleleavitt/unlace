__int64 __fastcall sub_55090(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  const char *v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rbx
  _QWORD *v8; // rbp
  char *v10; // rbp
  int i; // r13d
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  char *v15; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v16; // [rsp+18h] [rbp-A0h]
  char v17; // [rsp+30h] [rbp-88h]
  __int128 v18; // [rsp+38h] [rbp-80h]
  __int64 v19; // [rsp+48h] [rbp-70h]
  char v20; // [rsp+50h] [rbp-68h]
  _OWORD v21[2]; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v16 = 0;
  v15 = nullptr;
  v3 = sub_135E0(a1, a2) + 864;
  v4 = nptr;
  if ( *(_QWORD *)(a1 + 16) )
    v4 = *(const char **)(a1 + 8);
  if ( (unsigned __int8)sub_49550(v3, (__int64 *)&v15, v4) )
  {
    idcv_object();
    v20 = 2;
    *(_QWORD *)&v21[0] = v16;
    *(_OWORD *)((char *)v21 + 8) = 0;
    set_idcv_attr();
    free_idcv();
    v10 = v15;
    if ( 72LL * (_QWORD)v16 )
    {
      for ( i = 0; ; ++i )
      {
        v17 = 2;
        v19 = 0;
        v18 = 0;
        idcv_object();
        v12 = *v10;
        v20 = 2;
        *(_QWORD *)&v21[0] = v12;
        *(_OWORD *)((char *)v21 + 8) = 0;
        set_idcv_attr();
        free_idcv();
        v13 = *((_QWORD *)v10 + 1);
        v20 = 2;
        *(_QWORD *)&v21[0] = v13;
        *(_OWORD *)((char *)v21 + 8) = 0;
        set_idcv_attr();
        free_idcv();
        v14 = *((int *)v10 + 16);
        v20 = 2;
        *(_QWORD *)&v21[0] = v14;
        *(_OWORD *)((char *)v21 + 8) = 0;
        set_idcv_attr();
        free_idcv();
        v20 = 2;
        memset(v21, 0, 24);
        deep_copy_idcv();
        set_idcv_slice();
        v10 += 72;
        free_idcv();
        free_idcv();
        v5 = (__int64)v15;
        if ( v10 == &v15[72 * (_QWORD)v16] )
          break;
      }
    }
    else
    {
      v5 = (__int64)v15;
    }
  }
  else
  {
    v5 = (__int64)v15;
  }
  if ( v5 )
  {
    v6 = v16;
    if ( (_QWORD)v16 )
    {
      v7 = 0;
      do
      {
        v8 = (_QWORD *)(v5 + 72 * v7);
        if ( v8[5] )
        {
          v8[6] = 0;
          qfree();
        }
        if ( v8[2] )
        {
          v8[3] = 0;
          qfree();
        }
        ++v7;
        v5 = (__int64)v15;
      }
      while ( v6 != v7 );
    }
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  return 0;
}

