unsigned __int64 __fastcall sub_73DB0(int *a1, int *a2, int *a3, int *a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v8; // r15
  __int64 v10; // rax
  size_t v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rax
  size_t v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rax
  void *v18; // rax
  const void *v19; // rsi
  void *v20; // rax
  const void *v21; // rsi
  void *v22; // rax
  const void *v23; // rsi
  __int64 v24; // [rsp+0h] [rbp-80h]
  __int64 v25; // [rsp+0h] [rbp-80h]
  size_t na; // [rsp+8h] [rbp-78h]
  size_t n; // [rsp+8h] [rbp-78h]
  __int64 v29; // [rsp+20h] [rbp-60h] BYREF
  __int128 v30; // [rsp+28h] [rbp-58h]
  __int64 v31; // [rsp+38h] [rbp-48h]
  unsigned __int64 v32; // [rsp+48h] [rbp-38h]

  v5 = 0;
  v8 = *(_QWORD *)(a5 + 8);
  v32 = __readfsqword(0x28u);
  v30 = 0;
  if ( v8 )
  {
    v18 = (void *)qalloc_or_throw(4 * v8);
    v19 = *(const void **)a5;
    *((_QWORD *)&v30 + 1) = v8;
    v5 = (__int64)v18;
    memcpy(v18, v19, 4 * v8);
    *(_QWORD *)&v30 = v8;
  }
  v10 = *(_QWORD *)(a5 + 24);
  v29 = v5;
  v31 = v10;
  sub_73220(a1, a2, a4, (__int64)&v29);
  if ( v5 )
    qfree(v5);
  v11 = *(_QWORD *)(a5 + 8);
  v12 = 0;
  v30 = 0;
  if ( v11 )
  {
    n = v11;
    v25 = 4 * v11;
    v22 = (void *)qalloc_or_throw(4 * v11);
    v23 = *(const void **)a5;
    v12 = (__int64)v22;
    *((_QWORD *)&v30 + 1) = n;
    memcpy(v22, v23, v25);
    *(_QWORD *)&v30 = n;
  }
  v13 = *(_QWORD *)(a5 + 24);
  v29 = v12;
  v31 = v13;
  sub_73220(a2, a3, a4, (__int64)&v29);
  if ( v12 )
    qfree(v12);
  v14 = *(_QWORD *)(a5 + 8);
  v15 = 0;
  v30 = 0;
  if ( v14 )
  {
    na = v14;
    v24 = 4 * v14;
    v20 = (void *)qalloc_or_throw(4 * v14);
    v21 = *(const void **)a5;
    v15 = (__int64)v20;
    *((_QWORD *)&v30 + 1) = na;
    memcpy(v20, v21, v24);
    *(_QWORD *)&v30 = na;
  }
  v16 = *(_QWORD *)(a5 + 24);
  v29 = v15;
  v31 = v16;
  sub_736B0(a1, a2, (char *)a3, a2 - a1, a3 - a2, a4, (__int64)&v29);
  if ( v15 )
    qfree(v15);
  return v32 - __readfsqword(0x28u);
}

