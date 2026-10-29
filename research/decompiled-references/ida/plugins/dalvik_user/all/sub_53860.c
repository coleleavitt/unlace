__int64 __fastcall sub_53860(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdi
  char *v6; // rbp
  int i; // r13d
  __int64 v8; // rax
  __int64 v9; // rax
  char *v10; // [rsp+8h] [rbp-A8h] BYREF
  __int128 v11; // [rsp+10h] [rbp-A0h]
  char v12; // [rsp+28h] [rbp-88h]
  __int128 v13; // [rsp+30h] [rbp-80h]
  __int64 v14; // [rsp+40h] [rbp-70h]
  char v15; // [rsp+48h] [rbp-68h]
  _OWORD v16[2]; // [rsp+50h] [rbp-60h] BYREF
  unsigned __int64 v17; // [rsp+70h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 8);
  v11 = 0;
  v10 = nullptr;
  v3 = sub_135E0(a1, a2);
  if ( (unsigned __int8)sub_4C460(v3 + 864, (__int64)&v10, v2) )
  {
    idcv_object();
    v15 = 2;
    *(_QWORD *)&v16[0] = v11;
    *(_OWORD *)((char *)v16 + 8) = 0;
    set_idcv_attr();
    free_idcv();
    v6 = v10;
    if ( 16LL * (_QWORD)v11 )
    {
      for ( i = 0; ; ++i )
      {
        v12 = 2;
        v14 = 0;
        v13 = 0;
        idcv_object();
        v8 = *v6;
        v15 = 2;
        *(_QWORD *)&v16[0] = v8;
        *(_OWORD *)((char *)v16 + 8) = 0;
        set_idcv_attr();
        free_idcv();
        v9 = *((_QWORD *)v6 + 1);
        v15 = 2;
        *(_QWORD *)&v16[0] = v9;
        *(_OWORD *)((char *)v16 + 8) = 0;
        set_idcv_attr();
        free_idcv();
        v15 = 2;
        memset(v16, 0, 24);
        deep_copy_idcv();
        set_idcv_slice();
        v6 += 16;
        free_idcv();
        free_idcv();
        v4 = v10;
        if ( v6 == &v10[16 * (_QWORD)v11] )
          break;
      }
    }
    else
    {
      v4 = v10;
    }
  }
  else
  {
    v4 = v10;
  }
  if ( v4 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  return 0;
}

