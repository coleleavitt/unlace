__int64 __fastcall sub_16DF0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // eax
  __int64 v6; // rdi
  int v7; // ebx
  const char *v8; // rdi
  __int64 v9; // rax
  const char *v10; // rax
  const char *v11; // r13
  size_t v12; // rax
  size_t v13; // r15
  size_t v14; // r14
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbp
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // rbx
  int v24; // r15d
  unsigned int v25; // ebp
  const char *v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  const char *v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rdx
  _QWORD **v33; // rbx
  void *v34; // rdi
  unsigned __int64 i; // rbx
  __int64 v36; // rdi
  __int64 v37; // [rsp+8h] [rbp-100h] BYREF
  void *v38; // [rsp+10h] [rbp-F8h] BYREF
  __int128 v39; // [rsp+18h] [rbp-F0h]
  __int64 v40; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v41; // [rsp+38h] [rbp-D0h]
  const char *v42; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v43; // [rsp+58h] [rbp-B0h]
  __int64 v44; // [rsp+70h] [rbp-98h] BYREF
  __int128 v45; // [rsp+78h] [rbp-90h]
  __int64 v46; // [rsp+90h] [rbp-78h] BYREF
  void *v47[2]; // [rsp+98h] [rbp-70h] BYREF
  void **v48; // [rsp+A8h] [rbp-60h]
  void **v49; // [rsp+B0h] [rbp-58h]
  __int64 v50; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v51; // [rsp+C8h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  v2 = netnode_altval(*(_QWORD *)(a1 + 104), 4, 65);
  *(_OWORD *)v47 = 0;
  v46 = 0;
  v5 = sub_A5E0(a1, (__int64)"please choose a base module", v2 - 1, (__int64)&v46, v3, v4);
  if ( v5 < 0 )
  {
    return 0;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 104);
    v7 = v5;
    v46 = v5 + 1;
    netnode_supset(v6, 4, &v46, 8, 65);
    v8 = byte_190C8;
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 600LL) + 24LL * v7;
    if ( *(_QWORD *)(v9 + 8) )
      v8 = *(const char **)v9;
    v10 = (const char *)qbasename(v8, 4, 3LL * v7);
    v38 = nullptr;
    v11 = v10;
    v39 = 0;
    if ( v10 )
    {
      v12 = strlen(v10);
      v13 = v12 + 1;
      v14 = v12;
      v38 = (void *)qvector_reserve(&v38, 0, v12 + 1, 1, v15, v16);
      *(_QWORD *)&v39 = v13;
      memmove(v38, v11, v14);
      *((_BYTE *)v38 + v14) = 0;
    }
    v17 = *(_QWORD **)(a1 + 112);
    v48 = v47;
    LODWORD(v47[0]) = 0;
    v47[1] = nullptr;
    v49 = v47;
    v50 = 0;
    sub_12FE0(v17, &v46, v7, -1);
    if ( v50 )
    {
      v20 = (__int64)v48;
      v40 = 0;
      v41 = 0;
      if ( v48 != v47 )
      {
        v21 = 0;
        v22 = 0;
        v23 = 0;
        while ( 1 )
        {
          v24 = *(_DWORD *)(v20 + 32);
          if ( v22 < v23 + 1 )
          {
            v40 = qvector_reserve(&v40, v21, v23 + 1, 4, v18, v19);
            v23 = v41;
            v21 = v40;
          }
          *(_DWORD *)(v21 + 4 * v23) = v24;
          v23 = v41 + 1;
          *(_QWORD *)&v41 = v41 + 1;
          v20 = std::_Rb_tree_increment(v20);
          if ( (void **)v20 == v47 )
            break;
          v22 = *((_QWORD *)&v41 + 1);
          v21 = v40;
        }
      }
      v42 = nullptr;
      v27 = byte_190C8;
      v43 = 0;
      if ( (_QWORD)v39 )
        v27 = (const char *)v38;
      sub_13580((__int64 *)&v42, (__int64)"choose dependencies for %s", v27);
      v44 = 0;
      v30 = byte_190C8;
      v45 = 0;
      if ( (_QWORD)v43 )
        v30 = v42;
      v31 = (__int64)&v44;
      v25 = sub_A880(a1, &v44, (__int64)v30, (__int64)&v40, v28, v29);
      if ( (_BYTE)v25 )
      {
        for ( i = 0; i < (unsigned __int64)v45; ++i )
        {
          v36 = *(_QWORD *)(a1 + 104);
          v31 = *(int *)(v44 + 4 * i);
          v37 = 1;
          netnode_supset(v36, v31, &v37, 8, 116);
        }
        v25 = sub_AC60(a1, v31, v32);
      }
      if ( v44 )
      {
        *(_QWORD *)&v45 = 0;
        qfree(v44);
      }
      if ( v42 )
      {
        *(_QWORD *)&v43 = 0;
        qfree(v42);
      }
      if ( v40 )
      {
        *(_QWORD *)&v41 = 0;
        qfree(v40);
      }
    }
    else
    {
      sub_78B0((__int64)"No dependencies found for %s");
      v25 = 0;
    }
    v33 = (_QWORD **)v47[1];
    if ( v47[1] )
    {
      do
      {
        sub_6D90(v33[3]);
        v34 = v33;
        v33 = (_QWORD **)v33[2];
        operator delete(v34, 0x28u);
      }
      while ( v33 );
    }
    if ( v38 )
    {
      *(_QWORD *)&v39 = 0;
      qfree(v38);
    }
  }
  return v25;
}

