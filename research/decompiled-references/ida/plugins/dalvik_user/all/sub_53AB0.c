__int64 __fastcall sub_53AB0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v8; // rbp
  int i; // r14d
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v17; // [rsp+28h] [rbp-E0h]
  char v18; // [rsp+40h] [rbp-C8h]
  __int128 v19; // [rsp+48h] [rbp-C0h]
  __int64 v20; // [rsp+58h] [rbp-B0h]
  char v21; // [rsp+60h] [rbp-A8h]
  __int128 v22; // [rsp+68h] [rbp-A0h]
  __int64 v23; // [rsp+78h] [rbp-90h]
  char v24; // [rsp+80h] [rbp-88h]
  __int128 v25; // [rsp+88h] [rbp-80h]
  __int64 v26; // [rsp+98h] [rbp-70h]
  char v27; // [rsp+A0h] [rbp-68h]
  _OWORD v28[2]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 v29; // [rsp+C8h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v2 = sub_135E0(a1, a2);
  v3 = a1[1];
  v4 = a1[5];
  v5 = a1[9];
  v6 = v2;
  if ( (unsigned __int8)sub_1ADC0(v2, v3) )
  {
    v17 = 0;
    v16 = 0;
    if ( (unsigned __int8)sub_4FBE0(v6 + 864, &v16, v3, v4, v5) )
    {
      idcv_object();
      v27 = 2;
      *(_QWORD *)&v28[0] = v17;
      *(_OWORD *)((char *)v28 + 8) = 0;
      set_idcv_attr();
      free_idcv();
      v8 = v16;
      if ( 40LL * (_QWORD)v17 )
      {
        for ( i = 0; ; ++i )
        {
          v18 = 2;
          v20 = 0;
          v19 = 0;
          idcv_object();
          v10 = *(_QWORD *)v8;
          v27 = 2;
          *(_QWORD *)&v28[0] = v10;
          *(_OWORD *)((char *)v28 + 8) = 0;
          set_idcv_attr();
          free_idcv();
          v21 = 2;
          v23 = 0;
          v22 = 0;
          idcv_object();
          v11 = *(char *)(v8 + 8);
          v27 = 2;
          *(_QWORD *)&v28[0] = v11;
          *(_OWORD *)((char *)v28 + 8) = 0;
          set_idcv_attr();
          free_idcv();
          v12 = *(_QWORD *)(v8 + 16);
          v27 = 2;
          *(_QWORD *)&v28[0] = v12;
          *(_OWORD *)((char *)v28 + 8) = 0;
          set_idcv_attr();
          free_idcv();
          v13 = *(_QWORD *)(v8 + 24);
          v27 = 2;
          *(_QWORD *)&v28[0] = v13;
          *(_OWORD *)((char *)v28 + 8) = 0;
          set_idcv_attr();
          free_idcv();
          v14 = *(_QWORD *)(v8 + 32);
          v27 = 2;
          *(_QWORD *)&v28[0] = v14;
          *(_OWORD *)((char *)v28 + 8) = 0;
          set_idcv_attr();
          free_idcv();
          v24 = 2;
          v26 = 0;
          v25 = 0;
          deep_copy_idcv();
          set_idcv_attr();
          v27 = 2;
          memset(v28, 0, 24);
          deep_copy_idcv();
          set_idcv_slice();
          v8 += 40;
          free_idcv();
          free_idcv();
          free_idcv();
          free_idcv();
          v15 = v16;
          if ( v8 == v16 + 40LL * (_QWORD)v17 )
            break;
        }
      }
      else
      {
        v15 = v16;
      }
    }
    else
    {
      v15 = v16;
    }
    if ( v15 )
    {
      *(_QWORD *)&v17 = 0;
      qfree();
    }
  }
  return 0;
}

