unsigned __int64 __fastcall sub_BFE00(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rax
  __int64 *v5; // rbp
  __int64 v6; // r15
  void *v7; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  void *v13; // rdi
  void *v14; // rax
  __int64 v15; // rbp
  __int64 v16; // r15
  __int64 n; // [rsp+0h] [rbp-A8h]
  __int64 v18; // [rsp+8h] [rbp-A0h]
  _QWORD v19[2]; // [rsp+10h] [rbp-98h] BYREF
  void *src; // [rsp+20h] [rbp-88h]
  __int128 v21; // [rsp+28h] [rbp-80h]
  __int64 v22[2]; // [rsp+40h] [rbp-68h] BYREF
  void *v23; // [rsp+50h] [rbp-58h]
  __int128 v24; // [rsp+58h] [rbp-50h]
  unsigned __int64 v25; // [rsp+68h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 == a2 )
    return v25 - __readfsqword(0x28u);
  v19[0] = 0;
  v19[1] = 0;
  src = nullptr;
  v21 = 0;
  if ( a2 < v2 )
  {
    v9 = a2;
    do
    {
      v10 = *a1 + 40 * v9;
      if ( *(_QWORD *)(v10 + 16) )
      {
        *(_QWORD *)(v10 + 24) = 0;
        qfree();
      }
      ++v9;
      qfree();
    }
    while ( v2 != v9 );
  }
  else
  {
    v4 = a1[2];
    if ( (unsigned __int64)v19 >= *a1 && (unsigned __int64)v19 < *a1 + 40 * v4 )
    {
      sub_605C0(v22, (__int64)v19);
      v11 = v21;
      v23 = nullptr;
      v24 = 0;
      if ( (_QWORD)v21 )
      {
        v23 = (void *)qalloc_or_throw();
        *((_QWORD *)&v24 + 1) = v11;
        memcpy(v23, src, 16 * v11);
        *(_QWORD *)&v24 = v11;
      }
      if ( a1[2] < a2 )
        *a1 = qvector_reserve();
      v12 = a1[1];
      if ( v12 < a2 )
      {
        do
        {
          v15 = *a1 + 40 * v12;
          sub_605C0((__int64 *)v15, (__int64)v22);
          *(_QWORD *)(v15 + 16) = 0;
          *(_OWORD *)(v15 + 24) = 0;
          v16 = v24;
          if ( (_QWORD)v24 )
          {
            v18 = 16 * v24;
            v14 = (void *)qalloc_or_throw();
            *(_QWORD *)(v15 + 16) = v14;
            *(_QWORD *)(v15 + 32) = v16;
            memcpy(v14, v23, v18);
            *(_QWORD *)(v15 + 24) = v16;
          }
          ++v12;
        }
        while ( a2 != v12 );
      }
      v13 = v23;
      a1[1] = a2;
      if ( v13 )
      {
        *(_QWORD *)&v24 = 0;
        qfree();
      }
      qfree();
      goto LABEL_12;
    }
    if ( v4 < a2 )
    {
      *a1 = qvector_reserve();
      v2 = a1[1];
    }
    for ( ; v2 < a2; v5[3] = v6 )
    {
      while ( 1 )
      {
        v5 = (__int64 *)(*a1 + 40 * v2);
        sub_605C0(v5, (__int64)v19);
        v5[2] = 0;
        *(_OWORD *)(v5 + 3) = 0;
        v6 = v21;
        if ( (_QWORD)v21 )
          break;
        if ( ++v2 >= a2 )
          goto LABEL_11;
      }
      n = 16 * v21;
      v7 = (void *)qalloc_or_throw();
      v5[2] = (__int64)v7;
      ++v2;
      v5[4] = v6;
      memcpy(v7, src, n);
    }
  }
LABEL_11:
  a1[1] = a2;
LABEL_12:
  if ( src )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  qfree();
  return v25 - __readfsqword(0x28u);
}

