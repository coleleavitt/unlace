unsigned __int64 __fastcall sub_F3650(_DWORD *a1, __int64 a2, __int64 a3, int a4, double a5)
{
  unsigned __int64 v6; // r12
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  size_t v11; // r15
  int *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  size_t v16; // r15
  void *v17; // rax
  unsigned __int64 v18; // r15
  _QWORD *v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rdi
  char v22; // al
  int *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  size_t v27; // rbx
  size_t v28; // rbx
  unsigned __int64 v29; // r13
  void *v30; // rax
  _DWORD *v31; // rsi
  __int64 v32; // rbx
  __int64 v33; // rcx
  void *v34; // rax
  void *v35; // rsi
  void *v36; // rax
  void *v37; // rsi
  void *v38; // rax
  size_t v39; // [rsp+18h] [rbp-F0h]
  size_t v40; // [rsp+18h] [rbp-F0h]
  int v41; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v42; // [rsp+28h] [rbp-E0h]
  void *src; // [rsp+30h] [rbp-D8h]
  size_t n[2]; // [rsp+38h] [rbp-D0h]
  void *v45; // [rsp+48h] [rbp-C0h]
  size_t v46[2]; // [rsp+50h] [rbp-B8h]
  __int64 v47; // [rsp+60h] [rbp-A8h]
  __int64 v48; // [rsp+68h] [rbp-A0h]
  _DWORD v49[4]; // [rsp+70h] [rbp-98h] BYREF
  void *v50; // [rsp+80h] [rbp-88h]
  __int128 v51; // [rsp+88h] [rbp-80h]
  void *v52; // [rsp+98h] [rbp-70h]
  __int128 v53; // [rsp+A0h] [rbp-68h]
  __int64 v54; // [rsp+B0h] [rbp-58h]
  int v55; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v56; // [rsp+C8h] [rbp-40h]

  v6 = a4;
  v56 = __readfsqword(0x28u);
  a1[87] = a4;
  *(_DWORD *)(a2 + 8) = a4;
  v8 = *(_QWORD *)(a3 + 8);
  if ( a4 != v8 )
  {
    a5 = 0.0;
    v48 = 0;
    v41 = 0;
    v42 = 0;
    src = nullptr;
    v45 = nullptr;
    v47 = 0;
    *(_OWORD *)n = 0;
    *(_OWORD *)v46 = 0;
    if ( a4 < v8 )
    {
      v18 = a4;
      do
      {
        v19 = (_QWORD *)(*(_QWORD *)a3 + 80 * v18);
        clear_tinfo_t();
        v20 = v19[5];
        if ( v20 )
        {
          v19[6] = 0;
          qfree(v20);
        }
        v21 = v19[2];
        if ( v21 )
        {
          v19[3] = 0;
          qfree(v21);
        }
        ++v18;
        cleanup_argloc();
      }
      while ( v18 < v8 );
      *(_QWORD *)(a3 + 8) = v6;
    }
    else
    {
      v9 = *(_QWORD *)a3;
      v10 = *(_QWORD *)(a3 + 16);
      if ( (unsigned __int64)&v41 < v9 || (unsigned __int64)&v41 >= v9 + 80 * v10 )
      {
        if ( v10 < a4 )
        {
          *(_QWORD *)a3 = qvector_reserve(a3, v9, a4, 80);
          v8 = *(_QWORD *)(a3 + 8);
        }
        for ( ; v8 < v6; *(_DWORD *)(v13 + 72) = v48 )
        {
          v12 = &v41;
          v13 = *(_QWORD *)a3 + 80 * v8;
          *(_DWORD *)v13 = 0;
          copy_argloc();
          *(_QWORD *)(v13 + 16) = 0;
          *(_OWORD *)(v13 + 24) = 0;
          v16 = n[0];
          if ( n[0] )
          {
            v17 = (void *)qalloc_or_throw(n[0], (__int64)&v41, v14, v15);
            *(_QWORD *)(v13 + 16) = v17;
            v12 = (int *)src;
            *(_QWORD *)(v13 + 32) = v16;
            memcpy(v17, v12, v16);
            *(_QWORD *)(v13 + 24) = v16;
          }
          *(_QWORD *)(v13 + 40) = 0;
          *(_OWORD *)(v13 + 48) = 0;
          v11 = v46[0];
          if ( v46[0] )
          {
            v34 = (void *)qalloc_or_throw(v46[0], (__int64)v12, v14, v15);
            *(_QWORD *)(v13 + 40) = v34;
            v35 = v45;
            *(_QWORD *)(v13 + 56) = v11;
            memcpy(v34, v35, v11);
            *(_QWORD *)(v13 + 48) = v11;
          }
          *(_QWORD *)(v13 + 64) = 0;
          copy_tinfo_t();
          ++v8;
        }
        *(_QWORD *)(a3 + 8) = v6;
      }
      else
      {
        v24 = &v41;
        v49[0] = 0;
        copy_argloc();
        v27 = n[0];
        v50 = nullptr;
        v51 = 0;
        if ( n[0] )
        {
          v38 = (void *)qalloc_or_throw(n[0], (__int64)&v41, v25, v26);
          v24 = (int *)src;
          v50 = v38;
          *((_QWORD *)&v51 + 1) = v27;
          memcpy(v38, src, v27);
          *(_QWORD *)&v51 = v27;
        }
        v28 = v46[0];
        a5 = 0.0;
        v52 = nullptr;
        v53 = 0;
        if ( v46[0] )
        {
          v52 = (void *)qalloc_or_throw(v46[0], (__int64)v24, v25, v26);
          *((_QWORD *)&v53 + 1) = v28;
          memcpy(v52, v45, v28);
          *(_QWORD *)&v53 = v28;
        }
        v54 = 0;
        copy_tinfo_t();
        v55 = v48;
        if ( *(_QWORD *)(a3 + 16) < v6 )
          *(_QWORD *)a3 = qvector_reserve(a3, *(_QWORD *)a3, v6, 80);
        v29 = *(_QWORD *)(a3 + 8);
        if ( v29 < v6 )
        {
          do
          {
            v31 = v49;
            v32 = *(_QWORD *)a3 + 80 * v29;
            *(_DWORD *)v32 = 0;
            copy_argloc();
            *(_QWORD *)(v32 + 16) = 0;
            *(_OWORD *)(v32 + 24) = 0;
            if ( (_QWORD)v51 )
            {
              v39 = v51;
              v30 = (void *)qalloc_or_throw(v51, (__int64)v49, v51, v33);
              *(_QWORD *)(v32 + 16) = v30;
              v31 = v50;
              *(_QWORD *)(v32 + 32) = v39;
              memcpy(v30, v31, v39);
              *(_QWORD *)(v32 + 24) = v39;
            }
            *(_QWORD *)(v32 + 40) = 0;
            *(_OWORD *)(v32 + 48) = 0;
            if ( (_QWORD)v53 )
            {
              v40 = v53;
              v36 = (void *)qalloc_or_throw(v53, (__int64)v31, v53, v33);
              *(_QWORD *)(v32 + 40) = v36;
              v37 = v52;
              *(_QWORD *)(v32 + 56) = v40;
              memcpy(v36, v37, v40);
              *(_QWORD *)(v32 + 48) = v40;
            }
            *(_QWORD *)(v32 + 64) = 0;
            copy_tinfo_t();
            ++v29;
            *(_DWORD *)(v32 + 72) = v55;
          }
          while ( v6 != v29 );
        }
        *(_QWORD *)(a3 + 8) = v6;
        clear_tinfo_t();
        if ( v52 )
        {
          *(_QWORD *)&v53 = 0;
          qfree((__int64)v52);
        }
        if ( v50 )
        {
          *(_QWORD *)&v51 = 0;
          qfree((__int64)v50);
        }
        cleanup_argloc();
      }
    }
    clear_tinfo_t();
    if ( v45 )
    {
      v46[0] = 0;
      qfree((__int64)v45);
    }
    if ( src )
    {
      n[0] = 0;
      qfree((__int64)src);
    }
    cleanup_argloc();
  }
  a1[90] = 64;
  v22 = *(_BYTE *)(a3 + 88);
  *(_DWORD *)(a3 + 28) = 0;
  *(_BYTE *)(a3 + 88) = v22 & 0xF | 0x40;
  create_tinfo();
  return sub_E7260((__int64)a1, **(_DWORD **)(*(_QWORD *)a1 + 56LL) != 56, 1, a5);
}

