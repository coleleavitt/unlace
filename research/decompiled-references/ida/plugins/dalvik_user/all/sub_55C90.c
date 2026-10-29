__int64 __fastcall sub_55C90(__int64 a1, __int64 a2)
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
  size_t v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  size_t v17; // rbx
  int v18; // [rsp+24h] [rbp-154h]
  int v19; // [rsp+30h] [rbp-148h] BYREF
  __int64 *v20; // [rsp+38h] [rbp-140h]
  __int128 v21; // [rsp+40h] [rbp-138h]
  char v22; // [rsp+50h] [rbp-128h]
  __int64 v23; // [rsp+58h] [rbp-120h]
  __int128 v24; // [rsp+60h] [rbp-118h]
  __int64 v25; // [rsp+70h] [rbp-108h]
  void *v26; // [rsp+78h] [rbp-100h]
  __int128 v27; // [rsp+80h] [rbp-F8h]
  __int64 v28; // [rsp+90h] [rbp-E8h]
  void *v29; // [rsp+98h] [rbp-E0h]
  __int128 v30; // [rsp+A0h] [rbp-D8h]
  char v31; // [rsp+B0h] [rbp-C8h]
  __int64 v32; // [rsp+B8h] [rbp-C0h]
  __int128 v33; // [rsp+C0h] [rbp-B8h]
  char v34; // [rsp+D0h] [rbp-A8h]
  __int64 v35; // [rsp+D8h] [rbp-A0h]
  __int128 v36; // [rsp+E0h] [rbp-98h]
  char v37; // [rsp+F0h] [rbp-88h]
  __int128 v38; // [rsp+F8h] [rbp-80h]
  __int64 v39; // [rsp+108h] [rbp-70h]
  char v40; // [rsp+110h] [rbp-68h]
  _OWORD v41[2]; // [rsp+118h] [rbp-60h] BYREF
  unsigned __int64 v42; // [rsp+138h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v2 = sub_135E0(a1, a2);
  v3 = *(_QWORD *)(a1 + 8);
  v20 = nullptr;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = v2;
  v21 = 0;
  if ( (unsigned __int8)sub_1ADC0(v2, v3)
    && (unsigned __int8)sub_1ADC0(v5, v4)
    && (unsigned __int8)sub_4DAC0(v5 + 864, (__int64)&v19, v3, v4) )
  {
    idcv_object();
    v40 = 2;
    *(_QWORD *)&v41[0] = v19;
    *(_OWORD *)((char *)v41 + 8) = 0;
    set_idcv_attr();
    free_idcv();
    v40 = 2;
    *(_QWORD *)&v41[0] = v21;
    *(_OWORD *)((char *)v41 + 8) = 0;
    set_idcv_attr();
    free_idcv();
    v12 = v20;
    if ( 120LL * (_QWORD)v21 )
    {
      v18 = 0;
      do
      {
        v16 = *v12;
        v22 = 2;
        v25 = 7;
        v24 = 0;
        v23 = v16;
        v26 = nullptr;
        v27 = 0;
        v17 = v12[2];
        if ( v17 )
        {
          v26 = (void *)qalloc_or_throw();
          *((_QWORD *)&v27 + 1) = v17;
          memcpy(v26, (const void *)v12[1], v17);
          *(_QWORD *)&v27 = v17;
        }
        v28 = 7;
        v29 = nullptr;
        v30 = 0;
        v13 = v12[5];
        if ( v13 )
        {
          v29 = (void *)qalloc_or_throw();
          *((_QWORD *)&v30 + 1) = v13;
          memcpy(v29, (const void *)v12[4], v13);
          *(_QWORD *)&v30 = v13;
        }
        v14 = *((int *)v12 + 20);
        v31 = 2;
        v32 = v14;
        v33 = 0;
        v15 = *((int *)v12 + 21);
        v34 = 2;
        v35 = v15;
        v37 = 2;
        v39 = 0;
        v36 = 0;
        v38 = 0;
        idcv_object();
        set_idcv_attr();
        set_idcv_attr();
        set_idcv_attr();
        set_idcv_attr();
        set_idcv_attr();
        v40 = 2;
        memset(v41, 0, 24);
        deep_copy_idcv();
        ++v18;
        set_idcv_slice();
        v12 += 15;
        free_idcv();
        free_idcv();
        free_idcv();
        free_idcv();
        free_idcv();
        free_idcv();
        free_idcv();
        v6 = v20;
      }
      while ( v12 != &v20[15 * (_QWORD)v21] );
    }
    else
    {
      v6 = v20;
    }
  }
  else
  {
    v6 = v20;
  }
  if ( v6 )
  {
    v7 = v21;
    if ( (_QWORD)v21 )
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
        v6 = v20;
        v8 += 15;
      }
      while ( v7 != v9 );
    }
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  return 0;
}

