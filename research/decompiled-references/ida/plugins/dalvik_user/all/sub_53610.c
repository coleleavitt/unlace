__int64 __fastcall sub_53610(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdi
  char *v7; // rbp
  int i; // r13d
  __int64 v9; // rax
  __int64 v10; // rax
  char *v11; // [rsp+8h] [rbp-A8h] BYREF
  __int128 v12; // [rsp+10h] [rbp-A0h]
  char v13; // [rsp+28h] [rbp-88h]
  __int128 v14; // [rsp+30h] [rbp-80h]
  __int64 v15; // [rsp+40h] [rbp-70h]
  char v16; // [rsp+48h] [rbp-68h]
  _OWORD v17[2]; // [rsp+50h] [rbp-60h] BYREF
  unsigned __int64 v18; // [rsp+70h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 40);
  v18 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  v12 = 0;
  v11 = nullptr;
  v4 = sub_135E0(a1, a2);
  if ( (unsigned __int8)sub_4D240(v4 + 864, (__int64 *)&v11, v3, v2) )
  {
    idcv_object();
    v16 = 2;
    *(_QWORD *)&v17[0] = v12;
    *(_OWORD *)((char *)v17 + 8) = 0;
    set_idcv_attr();
    free_idcv();
    v7 = v11;
    if ( 16LL * (_QWORD)v12 )
    {
      for ( i = 0; ; ++i )
      {
        v13 = 2;
        v15 = 0;
        v14 = 0;
        idcv_object();
        v9 = *v7;
        v16 = 2;
        *(_QWORD *)&v17[0] = v9;
        *(_OWORD *)((char *)v17 + 8) = 0;
        set_idcv_attr();
        free_idcv();
        v10 = *((_QWORD *)v7 + 1);
        v16 = 2;
        *(_QWORD *)&v17[0] = v10;
        *(_OWORD *)((char *)v17 + 8) = 0;
        set_idcv_attr();
        free_idcv();
        v16 = 2;
        memset(v17, 0, 24);
        deep_copy_idcv();
        set_idcv_slice();
        v7 += 16;
        free_idcv();
        free_idcv();
        v5 = (__int64)v11;
        if ( v7 == &v11[16 * (_QWORD)v12] )
          break;
      }
    }
    else
    {
      v5 = (__int64)v11;
    }
  }
  else
  {
    v5 = (__int64)v11;
  }
  if ( v5 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  return 0;
}

