unsigned __int64 __fastcall sub_EA5F0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  unsigned __int64 v4; // rdx
  size_t v5; // r13
  __int64 v6; // r12
  size_t v7; // r13
  void *v8; // rax
  void *v9; // rsi
  unsigned __int64 v10; // r13
  _QWORD *v11; // r12
  size_t v13; // r12
  size_t v14; // r12
  unsigned __int64 v15; // r15
  void *v16; // rax
  void *v17; // rsi
  __int64 v18; // r12
  void *v19; // rax
  void *v20; // rsi
  void *v21; // rax
  void *v22; // rsi
  size_t v23; // [rsp+18h] [rbp-F0h]
  size_t v24; // [rsp+18h] [rbp-F0h]
  int v25; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v26; // [rsp+28h] [rbp-E0h]
  void *src; // [rsp+30h] [rbp-D8h]
  size_t n[2]; // [rsp+38h] [rbp-D0h]
  void *v29; // [rsp+48h] [rbp-C0h]
  size_t v30[2]; // [rsp+50h] [rbp-B8h]
  __int64 v31; // [rsp+60h] [rbp-A8h]
  __int64 v32; // [rsp+68h] [rbp-A0h]
  int v33; // [rsp+70h] [rbp-98h]
  void *v34; // [rsp+80h] [rbp-88h]
  __int128 v35; // [rsp+88h] [rbp-80h]
  void *v36; // [rsp+98h] [rbp-70h]
  __int128 v37; // [rsp+A0h] [rbp-68h]
  __int64 v38; // [rsp+B0h] [rbp-58h]
  int v39; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v40; // [rsp+C8h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 == a2 )
    return v40 - __readfsqword(0x28u);
  v32 = 0;
  v25 = 0;
  v26 = 0;
  src = nullptr;
  v29 = nullptr;
  v31 = 0;
  *(_OWORD *)n = 0;
  *(_OWORD *)v30 = 0;
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
    if ( (unsigned __int64)&v25 >= *a1 && (unsigned __int64)&v25 < *a1 + 80 * v4 )
    {
      v33 = 0;
      copy_argloc();
      v13 = n[0];
      v34 = nullptr;
      v35 = 0;
      if ( n[0] )
      {
        v34 = (void *)qalloc_or_throw();
        *((_QWORD *)&v35 + 1) = v13;
        memcpy(v34, src, v13);
        *(_QWORD *)&v35 = v13;
      }
      v14 = v30[0];
      v36 = nullptr;
      v37 = 0;
      if ( v30[0] )
      {
        v36 = (void *)qalloc_or_throw();
        *((_QWORD *)&v37 + 1) = v14;
        memcpy(v36, v29, v14);
        *(_QWORD *)&v37 = v14;
      }
      v38 = 0;
      copy_tinfo_t();
      v39 = v32;
      if ( a1[2] < a2 )
        *a1 = qvector_reserve();
      v15 = a1[1];
      if ( v15 < a2 )
      {
        do
        {
          v18 = *a1 + 80 * v15;
          *(_DWORD *)v18 = 0;
          copy_argloc();
          *(_QWORD *)(v18 + 16) = 0;
          *(_OWORD *)(v18 + 24) = 0;
          if ( (_QWORD)v35 )
          {
            v23 = v35;
            v16 = (void *)qalloc_or_throw();
            *(_QWORD *)(v18 + 16) = v16;
            v17 = v34;
            *(_QWORD *)(v18 + 32) = v23;
            memcpy(v16, v17, v23);
            *(_QWORD *)(v18 + 24) = v23;
          }
          *(_QWORD *)(v18 + 40) = 0;
          *(_OWORD *)(v18 + 48) = 0;
          if ( (_QWORD)v37 )
          {
            v24 = v37;
            v21 = (void *)qalloc_or_throw();
            *(_QWORD *)(v18 + 40) = v21;
            v22 = v36;
            *(_QWORD *)(v18 + 56) = v24;
            memcpy(v21, v22, v24);
            *(_QWORD *)(v18 + 48) = v24;
          }
          *(_QWORD *)(v18 + 64) = 0;
          copy_tinfo_t();
          ++v15;
          *(_DWORD *)(v18 + 72) = v39;
        }
        while ( a2 != v15 );
      }
      a1[1] = a2;
      clear_tinfo_t();
      if ( v36 )
      {
        *(_QWORD *)&v37 = 0;
        qfree();
      }
      if ( v34 )
      {
        *(_QWORD *)&v35 = 0;
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
    for ( ; v2 < a2; *(_DWORD *)(v6 + 72) = v32 )
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
      v5 = v30[0];
      if ( v30[0] )
      {
        v19 = (void *)qalloc_or_throw();
        *(_QWORD *)(v6 + 40) = v19;
        v20 = v29;
        *(_QWORD *)(v6 + 56) = v5;
        memcpy(v19, v20, v5);
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
  if ( v29 )
  {
    v30[0] = 0;
    qfree();
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  cleanup_argloc();
  return v40 - __readfsqword(0x28u);
}

