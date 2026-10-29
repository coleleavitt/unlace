unsigned __int64 __fastcall sub_1F3610(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, double a4)
{
  unsigned __int64 v5; // rbx
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // r14
  void *v18; // rax
  __int64 v19; // rax
  void *v20; // rax
  unsigned __int64 v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // r15
  unsigned __int64 v24; // rbp
  __int64 *v25; // r14
  __int64 v26; // rdi
  void *v27; // rdi
  void *v28; // rax
  const void *v29; // rsi
  __int64 n; // [rsp+8h] [rbp-70h]
  __int64 v31[2]; // [rsp+10h] [rbp-68h] BYREF
  void *src; // [rsp+20h] [rbp-58h]
  __int128 v33; // [rsp+28h] [rbp-50h]
  unsigned __int64 v34; // [rsp+38h] [rbp-40h]

  v5 = a1[1];
  v34 = __readfsqword(0x28u);
  if ( a2 < v5 )
  {
    v24 = a2;
    do
    {
      v25 = (__int64 *)(*a1 + 40 * v24);
      v26 = v25[2];
      if ( v26 )
      {
        v25[3] = 0;
        qfree(v26);
      }
      ++v24;
      qfree(*v25);
    }
    while ( v5 != v24 );
    a1[1] = a2;
  }
  else if ( v5 < a2 )
  {
    v8 = *a1;
    v9 = a1[2];
    if ( a3 < *a1 || a3 >= v8 + 40 * v9 )
    {
      if ( v9 >= a2 || (v19 = qvector_reserve((__int64)a1, v8, a2, 40), v5 = a1[1], *a1 = v19, v8 = v19, v5 < a2) )
      {
        while ( 1 )
        {
          v21 = v8 + 40 * v5;
          sub_64000((__int64 *)v21, a3, a4);
          *(_QWORD *)(v21 + 16) = 0;
          *(_OWORD *)(v21 + 24) = 0;
          v23 = *(_QWORD *)(a3 + 24);
          if ( v23 )
          {
            v20 = (void *)qalloc_or_throw(16 * v23, a3, v22, 16 * v23);
            *(_QWORD *)(v21 + 16) = v20;
            *(_QWORD *)(v21 + 32) = v23;
            memcpy(v20, *(const void **)(a3 + 16), 16 * v23);
            *(_QWORD *)(v21 + 24) = v23;
          }
          if ( ++v5 >= a2 )
            break;
          v8 = *a1;
        }
      }
      a1[1] = a2;
    }
    else
    {
      sub_64000(v31, a3, a4);
      v13 = *(_QWORD *)(a3 + 24);
      src = nullptr;
      v33 = 0;
      if ( v13 )
      {
        v28 = (void *)qalloc_or_throw(16 * v13, a3, v11, v12);
        v29 = *(const void **)(a3 + 16);
        src = v28;
        *((_QWORD *)&v33 + 1) = v13;
        memcpy(v28, v29, 16 * v13);
        *(_QWORD *)&v33 = v13;
      }
      if ( a1[2] < a2 )
        *a1 = qvector_reserve((__int64)a1, *a1, a2, 40);
      v14 = a1[1];
      if ( v14 < a2 )
      {
        do
        {
          v15 = *a1 + 40 * v14;
          sub_64000((__int64 *)v15, (__int64)v31, 0.0);
          *(_QWORD *)(v15 + 16) = 0;
          *(_OWORD *)(v15 + 24) = 0;
          v17 = v33;
          if ( (_QWORD)v33 )
          {
            n = 16 * v33;
            v18 = (void *)qalloc_or_throw(16 * v33, (__int64)v31, 16 * v33, v16);
            *(_QWORD *)(v15 + 16) = v18;
            *(_QWORD *)(v15 + 32) = v17;
            memcpy(v18, src, n);
            *(_QWORD *)(v15 + 24) = v17;
          }
          ++v14;
        }
        while ( a2 != v14 );
      }
      v27 = src;
      a1[1] = a2;
      if ( v27 )
      {
        *(_QWORD *)&v33 = 0;
        qfree((__int64)v27);
      }
      qfree(v31[0]);
    }
  }
  return v34 - __readfsqword(0x28u);
}

