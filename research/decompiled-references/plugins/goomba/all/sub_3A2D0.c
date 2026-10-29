__int64 __fastcall sub_3A2D0(__int64 a1, int *a2)
{
  int v2; // edx
  __int64 v3; // rbx
  int *v4; // r12
  unsigned __int64 v5; // r15
  size_t v6; // r9
  __int64 v7; // r8
  size_t v8; // r10
  __int64 v9; // rsi
  unsigned __int64 v10; // r15
  size_t v11; // r9
  __int64 v12; // r8
  size_t v13; // r10
  __int64 v14; // rsi
  unsigned __int64 v15; // r15
  size_t v16; // r9
  __int64 v17; // r8
  size_t v18; // r10
  __int64 v19; // rsi
  unsigned __int64 v20; // rbx
  size_t v21; // r12
  const char *v22; // rbx
  size_t v23; // rax
  size_t v24; // r12
  size_t v25; // rbp
  void *v26; // rax
  __int64 v28; // rbp
  size_t v29; // r15
  __int64 v30; // rsi
  size_t v31; // [rsp+0h] [rbp-90h]
  size_t v32; // [rsp+0h] [rbp-90h]
  size_t v33; // [rsp+0h] [rbp-90h]
  __int64 v34; // [rsp+8h] [rbp-88h]
  size_t v35; // [rsp+8h] [rbp-88h]
  __int64 v36; // [rsp+8h] [rbp-88h]
  size_t v37; // [rsp+10h] [rbp-80h]
  __int64 v38; // [rsp+10h] [rbp-80h]
  size_t v39; // [rsp+10h] [rbp-80h]
  const char *v40; // [rsp+18h] [rbp-78h] BYREF
  __int128 v41; // [rsp+20h] [rbp-70h]
  void *src; // [rsp+38h] [rbp-58h] BYREF
  __int128 v43; // [rsp+40h] [rbp-50h]
  unsigned __int64 v44; // [rsp+50h] [rbp-40h]

  v2 = *a2;
  v44 = __readfsqword(0x28u);
  v41 = 0;
  v40 = nullptr;
  sub_3A210((__int64 *)&v40, (__int64)"%d*[", v2);
  v3 = *((_QWORD *)a2 + 4);
  v4 = a2 + 4;
  if ( (int *)v3 != a2 + 4 )
  {
    do
    {
      v43 = 0;
      src = nullptr;
      src = (void *)qvector_reserve(&src, 0, 2, 1);
      *(_QWORD *)&v43 = 2;
      *(_BYTE *)src = 40;
      *((_BYTE *)src + 1) = 0;
      v5 = v43;
      if ( (_QWORD)v43 )
      {
        v6 = v43 - 1;
        if ( (_QWORD)v43 != 1 )
        {
          v7 = v41;
          v8 = v43 - 1;
          if ( (_QWORD)v41 )
          {
            v7 = v41 - 1;
            v8 = v6 + v41 - 1;
            v5 = v43 + v41 - 1;
          }
          v9 = (__int64)v40;
          if ( *((_QWORD *)&v41 + 1) < v5 )
          {
            v37 = v8;
            v34 = v7;
            v31 = v43 - 1;
            v40 = (const char *)qvector_reserve(&v40, v40, v5, 1);
            v8 = v37;
            v9 = (__int64)v40;
            v7 = v34;
            v6 = v31;
          }
          *(_QWORD *)&v41 = v5;
          *(_BYTE *)(v9 + v8) = 0;
          memcpy((void *)&v40[v7], src, v6);
        }
      }
      if ( src )
      {
        *(_QWORD *)&v43 = 0;
        qfree(src);
      }
      sub_35EA0((__int64)&src, (int *)(v3 + 32));
      v10 = v43;
      if ( (_QWORD)v43 )
      {
        v11 = v43 - 1;
        if ( (_QWORD)v43 != 1 )
        {
          v12 = v41;
          v13 = v43 - 1;
          if ( (_QWORD)v41 )
          {
            v12 = v41 - 1;
            v13 = v11 + v41 - 1;
            v10 = v43 + v41 - 1;
          }
          v14 = (__int64)v40;
          if ( *((_QWORD *)&v41 + 1) < v10 )
          {
            v38 = v12;
            v35 = v43 - 1;
            v32 = v13;
            v40 = (const char *)qvector_reserve(&v40, v40, v10, 1);
            v12 = v38;
            v14 = (__int64)v40;
            v11 = v35;
            v13 = v32;
          }
          *(_QWORD *)&v41 = v10;
          *(_BYTE *)(v14 + v13) = 0;
          memcpy((void *)&v40[v12], src, v11);
        }
      }
      if ( src )
      {
        *(_QWORD *)&v43 = 0;
        qfree(src);
      }
      v43 = 0;
      src = nullptr;
      src = (void *)qvector_reserve(&src, 0, 3, 1);
      *(_QWORD *)&v43 = 3;
      strcpy((char *)src, "),");
      v15 = v43;
      if ( (_QWORD)v43 )
      {
        v16 = v43 - 1;
        if ( (_QWORD)v43 != 1 )
        {
          v17 = v41;
          v18 = v43 - 1;
          if ( (_QWORD)v41 )
          {
            v17 = v41 - 1;
            v18 = v16 + v41 - 1;
            v15 = v43 + v41 - 1;
          }
          v19 = (__int64)v40;
          if ( *((_QWORD *)&v41 + 1) < v15 )
          {
            v39 = v18;
            v36 = v17;
            v33 = v43 - 1;
            v40 = (const char *)qvector_reserve(&v40, v40, v15, 1);
            v18 = v39;
            v19 = (__int64)v40;
            v17 = v36;
            v16 = v33;
          }
          *(_QWORD *)&v41 = v15;
          *(_BYTE *)(v19 + v18) = 0;
          memcpy((void *)&v40[v17], src, v16);
        }
      }
      if ( src )
      {
        *(_QWORD *)&v43 = 0;
        qfree(src);
      }
      v3 = std::_Rb_tree_increment(v3);
    }
    while ( v4 != (int *)v3 );
  }
  v43 = 0;
  src = nullptr;
  src = (void *)qvector_reserve(&src, 0, 2, 1);
  *(_QWORD *)&v43 = 2;
  *(_BYTE *)src = 93;
  *((_BYTE *)src + 1) = 0;
  v20 = v43;
  if ( (_QWORD)v43 )
  {
    v21 = v43 - 1;
    if ( (_QWORD)v43 != 1 )
    {
      v28 = v41;
      v29 = v43 - 1;
      if ( (_QWORD)v41 )
      {
        v28 = v41 - 1;
        v29 = v21 + v41 - 1;
        v20 = v43 + v41 - 1;
      }
      v30 = (__int64)v40;
      if ( *((_QWORD *)&v41 + 1) < v20 )
      {
        v40 = (const char *)qvector_reserve(&v40, v40, v20, 1);
        v30 = (__int64)v40;
      }
      *(_QWORD *)&v41 = v20;
      *(_BYTE *)(v30 + v29) = 0;
      memcpy((void *)&v40[v28], src, v21);
    }
  }
  if ( src )
  {
    *(_QWORD *)&v43 = 0;
    qfree(src);
  }
  v22 = ::src;
  if ( (_QWORD)v41 )
    v22 = v40;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v22 )
  {
    v23 = strlen(v22);
    v24 = v23 + 1;
    v25 = v23;
    v26 = (void *)qvector_reserve(a1, 0, v23 + 1, 1);
    *(_QWORD *)a1 = v26;
    *(_QWORD *)(a1 + 8) = v24;
    memmove(v26, v22, v25);
    *(_BYTE *)(*(_QWORD *)a1 + v25) = 0;
  }
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40);
  }
  return a1;
}
