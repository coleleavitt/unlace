unsigned __int64 __fastcall sub_ECF90(_DWORD *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  size_t v9; // r15
  __int64 v10; // rbx
  size_t v11; // r15
  void *v12; // rax
  void *v13; // rsi
  unsigned __int64 v14; // r15
  _QWORD *v15; // rbx
  char v16; // al
  size_t v18; // rbx
  size_t v19; // rbx
  unsigned __int64 v20; // r13
  void *v21; // rax
  void *v22; // rsi
  __int64 v23; // rbx
  void *v24; // rax
  void *v25; // rsi
  void *v26; // rax
  void *v27; // rsi
  size_t v28; // [rsp+18h] [rbp-F0h]
  size_t v29; // [rsp+18h] [rbp-F0h]
  int v30; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v31; // [rsp+28h] [rbp-E0h]
  void *src; // [rsp+30h] [rbp-D8h]
  size_t n[2]; // [rsp+38h] [rbp-D0h]
  void *v34; // [rsp+48h] [rbp-C0h]
  size_t v35[2]; // [rsp+50h] [rbp-B8h]
  __int64 v36; // [rsp+60h] [rbp-A8h]
  __int64 v37; // [rsp+68h] [rbp-A0h]
  int v38; // [rsp+70h] [rbp-98h]
  void *v39; // [rsp+80h] [rbp-88h]
  __int128 v40; // [rsp+88h] [rbp-80h]
  void *v41; // [rsp+98h] [rbp-70h]
  __int128 v42; // [rsp+A0h] [rbp-68h]
  __int64 v43; // [rsp+B0h] [rbp-58h]
  int v44; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v45; // [rsp+C8h] [rbp-40h]

  v4 = a4;
  v45 = __readfsqword(0x28u);
  a1[87] = a4;
  *(_DWORD *)(a2 + 8) = a4;
  v6 = *(_QWORD *)(a3 + 8);
  if ( a4 != v6 )
  {
    v37 = 0;
    v30 = 0;
    v31 = 0;
    src = nullptr;
    v34 = nullptr;
    v36 = 0;
    *(_OWORD *)n = 0;
    *(_OWORD *)v35 = 0;
    if ( a4 < v6 )
    {
      v14 = a4;
      do
      {
        v15 = (_QWORD *)(*(_QWORD *)a3 + 80 * v14);
        clear_tinfo_t();
        if ( v15[5] )
        {
          v15[6] = 0;
          qfree();
        }
        if ( v15[2] )
        {
          v15[3] = 0;
          qfree();
        }
        ++v14;
        cleanup_argloc();
      }
      while ( v14 < v6 );
      *(_QWORD *)(a3 + 8) = v4;
    }
    else
    {
      v7 = *(_QWORD *)a3;
      v8 = *(_QWORD *)(a3 + 16);
      if ( (unsigned __int64)&v30 < v7 || (unsigned __int64)&v30 >= v7 + 80 * v8 )
      {
        if ( v8 < a4 )
        {
          *(_QWORD *)a3 = qvector_reserve();
          v6 = *(_QWORD *)(a3 + 8);
        }
        for ( ; v6 < v4; *(_DWORD *)(v10 + 72) = v37 )
        {
          v10 = *(_QWORD *)a3 + 80 * v6;
          *(_DWORD *)v10 = 0;
          copy_argloc();
          *(_QWORD *)(v10 + 16) = 0;
          *(_OWORD *)(v10 + 24) = 0;
          v11 = n[0];
          if ( n[0] )
          {
            v12 = (void *)qalloc_or_throw();
            *(_QWORD *)(v10 + 16) = v12;
            v13 = src;
            *(_QWORD *)(v10 + 32) = v11;
            memcpy(v12, v13, v11);
            *(_QWORD *)(v10 + 24) = v11;
          }
          *(_QWORD *)(v10 + 40) = 0;
          *(_OWORD *)(v10 + 48) = 0;
          v9 = v35[0];
          if ( v35[0] )
          {
            v24 = (void *)qalloc_or_throw();
            *(_QWORD *)(v10 + 40) = v24;
            v25 = v34;
            *(_QWORD *)(v10 + 56) = v9;
            memcpy(v24, v25, v9);
            *(_QWORD *)(v10 + 48) = v9;
          }
          *(_QWORD *)(v10 + 64) = 0;
          copy_tinfo_t();
          ++v6;
        }
        *(_QWORD *)(a3 + 8) = v4;
      }
      else
      {
        v38 = 0;
        copy_argloc();
        v18 = n[0];
        v39 = nullptr;
        v40 = 0;
        if ( n[0] )
        {
          v39 = (void *)qalloc_or_throw();
          *((_QWORD *)&v40 + 1) = v18;
          memcpy(v39, src, v18);
          *(_QWORD *)&v40 = v18;
        }
        v19 = v35[0];
        v41 = nullptr;
        v42 = 0;
        if ( v35[0] )
        {
          v41 = (void *)qalloc_or_throw();
          *((_QWORD *)&v42 + 1) = v19;
          memcpy(v41, v34, v19);
          *(_QWORD *)&v42 = v19;
        }
        v43 = 0;
        copy_tinfo_t();
        v44 = v37;
        if ( *(_QWORD *)(a3 + 16) < v4 )
          *(_QWORD *)a3 = qvector_reserve();
        v20 = *(_QWORD *)(a3 + 8);
        if ( v20 < v4 )
        {
          do
          {
            v23 = *(_QWORD *)a3 + 80 * v20;
            *(_DWORD *)v23 = 0;
            copy_argloc();
            *(_QWORD *)(v23 + 16) = 0;
            *(_OWORD *)(v23 + 24) = 0;
            if ( (_QWORD)v40 )
            {
              v28 = v40;
              v21 = (void *)qalloc_or_throw();
              *(_QWORD *)(v23 + 16) = v21;
              v22 = v39;
              *(_QWORD *)(v23 + 32) = v28;
              memcpy(v21, v22, v28);
              *(_QWORD *)(v23 + 24) = v28;
            }
            *(_QWORD *)(v23 + 40) = 0;
            *(_OWORD *)(v23 + 48) = 0;
            if ( (_QWORD)v42 )
            {
              v29 = v42;
              v26 = (void *)qalloc_or_throw();
              *(_QWORD *)(v23 + 40) = v26;
              v27 = v41;
              *(_QWORD *)(v23 + 56) = v29;
              memcpy(v26, v27, v29);
              *(_QWORD *)(v23 + 48) = v29;
            }
            *(_QWORD *)(v23 + 64) = 0;
            copy_tinfo_t();
            ++v20;
            *(_DWORD *)(v23 + 72) = v44;
          }
          while ( v4 != v20 );
        }
        *(_QWORD *)(a3 + 8) = v4;
        clear_tinfo_t();
        if ( v41 )
        {
          *(_QWORD *)&v42 = 0;
          qfree();
        }
        if ( v39 )
        {
          *(_QWORD *)&v40 = 0;
          qfree();
        }
        cleanup_argloc();
      }
    }
    clear_tinfo_t();
    if ( v34 )
    {
      v35[0] = 0;
      qfree();
    }
    if ( src )
    {
      n[0] = 0;
      qfree();
    }
    cleanup_argloc();
  }
  a1[90] = 64;
  v16 = *(_BYTE *)(a3 + 88);
  *(_DWORD *)(a3 + 28) = 0;
  *(_BYTE *)(a3 + 88) = v16 & 0xF | 0x40;
  create_tinfo();
  return sub_E0BA0((__int64)a1, **(_DWORD **)(*(_QWORD *)a1 + 56LL) != 56, 1);
}

