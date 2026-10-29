unsigned __int64 __fastcall sub_15830(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v4; // rdx
  size_t v5; // r15
  __int64 v6; // rbx
  size_t v7; // r15
  void *v8; // rax
  void *v9; // rsi
  unsigned __int64 v10; // r14
  _QWORD *v11; // rbx
  size_t v13; // rbp
  size_t v14; // rbp
  void *v15; // rax
  void *v16; // rsi
  int v17; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v18; // [rsp+8h] [rbp-E0h]
  void *src; // [rsp+10h] [rbp-D8h]
  size_t n[2]; // [rsp+18h] [rbp-D0h]
  void *v21; // [rsp+28h] [rbp-C0h]
  size_t v22[2]; // [rsp+30h] [rbp-B8h]
  __int64 v23; // [rsp+40h] [rbp-A8h]
  __int64 v24; // [rsp+48h] [rbp-A0h]
  _DWORD v25[4]; // [rsp+50h] [rbp-98h] BYREF
  void *v26; // [rsp+60h] [rbp-88h]
  __int128 v27; // [rsp+68h] [rbp-80h]
  void *v28; // [rsp+78h] [rbp-70h]
  __int128 v29; // [rsp+80h] [rbp-68h]
  __int64 v30; // [rsp+90h] [rbp-58h]
  int v31; // [rsp+98h] [rbp-50h]
  unsigned __int64 v32; // [rsp+A8h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 == a2 )
    return v32 - __readfsqword(0x28u);
  v24 = 0;
  v17 = 0;
  v18 = 0;
  src = nullptr;
  v21 = nullptr;
  v23 = 0;
  *(_OWORD *)n = 0;
  *(_OWORD *)v22 = 0;
  if ( a2 < v2 )
  {
    v10 = a2;
    do
    {
      v11 = (_QWORD *)(*a1 + 80 * v10);
      clear_tinfo_t();
      if ( v11[5] )
      {
        v11[6] = 0;
        qfree();
      }
      if ( v11[2] )
      {
        v11[3] = 0;
        qfree();
      }
      ++v10;
      cleanup_argloc();
    }
    while ( v2 != v10 );
  }
  else
  {
    v4 = a1[2];
    if ( (unsigned __int64)&v17 >= *a1 && (unsigned __int64)&v17 < *a1 + 80 * v4 )
    {
      v25[0] = 0;
      copy_argloc();
      v13 = n[0];
      v26 = nullptr;
      v27 = 0;
      if ( n[0] )
      {
        v26 = (void *)qalloc_or_throw();
        *((_QWORD *)&v27 + 1) = v13;
        memcpy(v26, src, v13);
        *(_QWORD *)&v27 = v13;
      }
      v14 = v22[0];
      v28 = nullptr;
      v29 = 0;
      if ( v22[0] )
      {
        v28 = (void *)qalloc_or_throw();
        *((_QWORD *)&v29 + 1) = v14;
        memcpy(v28, v21, v14);
        *(_QWORD *)&v29 = v14;
      }
      v30 = 0;
      copy_tinfo_t();
      v31 = v24;
      sub_156B0(a1, a2, (__int64)v25);
      clear_tinfo_t();
      if ( v28 )
      {
        *(_QWORD *)&v29 = 0;
        qfree();
      }
      if ( v26 )
      {
        *(_QWORD *)&v27 = 0;
        qfree();
      }
      cleanup_argloc();
      goto LABEL_20;
    }
    if ( v4 < a2 )
    {
      *a1 = qvector_reserve();
      v2 = a1[1];
    }
    for ( ; v2 < a2; *(_DWORD *)(v6 + 72) = v24 )
    {
      v6 = *a1 + 80 * v2;
      *(_DWORD *)v6 = 0;
      copy_argloc();
      *(_QWORD *)(v6 + 16) = 0;
      *(_OWORD *)(v6 + 24) = 0;
      v7 = n[0];
      if ( n[0] )
      {
        v8 = (void *)qalloc_or_throw();
        *(_QWORD *)(v6 + 16) = v8;
        v9 = src;
        *(_QWORD *)(v6 + 32) = v7;
        memcpy(v8, v9, v7);
        *(_QWORD *)(v6 + 24) = v7;
      }
      *(_QWORD *)(v6 + 40) = 0;
      *(_OWORD *)(v6 + 48) = 0;
      v5 = v22[0];
      if ( v22[0] )
      {
        v15 = (void *)qalloc_or_throw();
        *(_QWORD *)(v6 + 40) = v15;
        v16 = v21;
        *(_QWORD *)(v6 + 56) = v5;
        memcpy(v15, v16, v5);
        *(_QWORD *)(v6 + 48) = v5;
      }
      *(_QWORD *)(v6 + 64) = 0;
      copy_tinfo_t();
      ++v2;
    }
  }
  a1[1] = a2;
LABEL_20:
  clear_tinfo_t();
  if ( v21 )
  {
    v22[0] = 0;
    qfree();
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  cleanup_argloc();
  return v32 - __readfsqword(0x28u);
}
