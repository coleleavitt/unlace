unsigned __int64 __fastcall sub_3CD70(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r14
  size_t v4; // rbp
  size_t v5; // rbp
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  int v11; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v12; // [rsp+8h] [rbp-E0h]
  void *v13; // [rsp+10h] [rbp-D8h]
  size_t v14[2]; // [rsp+18h] [rbp-D0h]
  void *src; // [rsp+28h] [rbp-C0h]
  size_t n[2]; // [rsp+30h] [rbp-B8h]
  __int64 v17; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-A0h]
  _DWORD v19[4]; // [rsp+50h] [rbp-98h] BYREF
  void *v20; // [rsp+60h] [rbp-88h]
  __int128 v21; // [rsp+68h] [rbp-80h]
  void *v22; // [rsp+78h] [rbp-70h]
  __int128 v23; // [rsp+80h] [rbp-68h]
  __int64 v24; // [rsp+90h] [rbp-58h] BYREF
  int v25; // [rsp+98h] [rbp-50h]
  unsigned __int64 v26; // [rsp+A8h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v18 = 0;
    v11 = 0;
    v12 = 0;
    v13 = nullptr;
    src = nullptr;
    v17 = 0;
    *(_OWORD *)v14 = 0;
    *(_OWORD *)n = 0;
    if ( a2 < v2 )
    {
      v6 = a2;
      do
      {
        v7 = (_QWORD *)(*a1 + 80 * v6);
        clear_tinfo_t(v7 + 8);
        v8 = v7[5];
        if ( v8 )
        {
          v7[6] = 0;
          qfree(v8);
        }
        v9 = v7[2];
        if ( v9 )
        {
          v7[3] = 0;
          qfree(v9);
        }
        ++v6;
        cleanup_argloc(v7);
      }
      while ( v2 != v6 );
      a1[1] = a2;
    }
    else if ( (unsigned __int64)&v11 < *a1 || (unsigned __int64)&v11 >= 80LL * a1[2] + *a1 )
    {
      sub_3CBF0(a1, a2, (__int64)&v11);
    }
    else
    {
      v19[0] = 0;
      copy_argloc(v19, &v11);
      v4 = v14[0];
      v20 = nullptr;
      v21 = 0;
      if ( v14[0] )
      {
        v20 = (void *)qalloc_or_throw(v14[0]);
        *((_QWORD *)&v21 + 1) = v4;
        memcpy(v20, v13, v4);
        *(_QWORD *)&v21 = v4;
      }
      v5 = n[0];
      v22 = nullptr;
      v23 = 0;
      if ( n[0] )
      {
        v22 = (void *)qalloc_or_throw(n[0]);
        *((_QWORD *)&v23 + 1) = v5;
        memcpy(v22, src, v5);
        *(_QWORD *)&v23 = v5;
      }
      v24 = 0;
      copy_tinfo_t(&v24, &v17);
      v25 = v18;
      sub_3CBF0(a1, a2, (__int64)v19);
      clear_tinfo_t(&v24);
      if ( v22 )
      {
        *(_QWORD *)&v23 = 0;
        qfree(v22);
      }
      if ( v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree(v20);
      }
      cleanup_argloc(v19);
    }
    clear_tinfo_t(&v17);
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    if ( v13 )
    {
      v14[0] = 0;
      qfree(v13);
    }
    cleanup_argloc(&v11);
  }
  return v26 - __readfsqword(0x28u);
}
