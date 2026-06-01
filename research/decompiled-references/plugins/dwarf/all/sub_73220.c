unsigned __int64 __fastcall sub_73220(int *src, int *a2, int *a3, __int64 a4)
{
  int *v6; // r12
  int *v7; // r8
  void *v8; // rbp
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  void *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rcx
  void *v16; // r12
  void *v17; // rax
  const void *v18; // rsi
  void *v19; // rax
  const void *v20; // rsi
  void *v22; // rbp
  __int64 v24; // [rsp+10h] [rbp-B8h]
  __int64 v25; // [rsp+10h] [rbp-B8h]
  __int64 v26; // [rsp+10h] [rbp-B8h]
  int *v27; // [rsp+18h] [rbp-B0h]
  __int64 v28; // [rsp+20h] [rbp-A8h]
  int *v29; // [rsp+28h] [rbp-A0h]
  __int64 v30; // [rsp+28h] [rbp-A0h]
  __int64 v31; // [rsp+28h] [rbp-A0h]
  __int64 n; // [rsp+30h] [rbp-98h]
  __int64 v33; // [rsp+38h] [rbp-90h]
  void *srca; // [rsp+40h] [rbp-88h]
  int *v35; // [rsp+48h] [rbp-80h]
  __int64 v36; // [rsp+58h] [rbp-70h]
  void *v37; // [rsp+60h] [rbp-68h] BYREF
  __int128 v38; // [rsp+68h] [rbp-60h]
  __int64 v39; // [rsp+78h] [rbp-50h]
  unsigned __int64 v40; // [rsp+88h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v28 = a2 - src;
  v27 = (int *)((char *)a3 + (char *)a2 - (char *)src);
  v36 = (char *)a2 - (char *)src;
  v33 = *(_QWORD *)(a4 + 8);
  if ( v33 )
  {
    n = 4 * v33;
    srca = (void *)qalloc_or_throw(4 * v33);
    memcpy(srca, *(const void **)a4, 4 * v33);
    v24 = *(_QWORD *)(a4 + 24);
    if ( v36 <= 24 )
    {
      *(_QWORD *)&v38 = 0;
      v29 = src;
LABEL_29:
      v22 = (void *)qalloc_or_throw(n);
      *((_QWORD *)&v38 + 1) = v33;
      memcpy(v22, srca, n);
      *(_QWORD *)&v38 = v33;
      v37 = v22;
      v39 = v24;
      sub_72980(v29, a2, (__int64)&v37);
      if ( v22 )
        qfree(v22);
      goto LABEL_12;
    }
  }
  else
  {
    n = 0;
    srca = nullptr;
    v24 = *(_QWORD *)(a4 + 24);
    if ( (char *)a2 - (char *)src <= 24 )
    {
      v39 = *(_QWORD *)(a4 + 24);
      v38 = 0;
      v37 = nullptr;
      sub_72980(src, a2, (__int64)&v37);
      return v40 - __readfsqword(0x28u);
    }
  }
  v6 = src + 7;
  v7 = src;
  v38 = 0;
  if ( v33 )
  {
    while ( 1 )
    {
      v35 = v7;
      v8 = (void *)qalloc_or_throw(n);
      *((_QWORD *)&v38 + 1) = v33;
      memcpy(v8, srca, n);
      *(_QWORD *)&v38 = v33;
      v39 = v24;
      v29 = v6;
      v37 = v8;
      sub_72980(v35, v6, (__int64)&v37);
      if ( v8 )
        qfree(v8);
      if ( (char *)a2 - (char *)v6 <= 24 )
        break;
      v7 = v6;
      v6 += 7;
      v38 = 0;
    }
  }
  else
  {
    while ( 1 )
    {
      v29 = v6;
      v39 = v24;
      v37 = nullptr;
      sub_72980(v7, v6, (__int64)&v37);
      if ( (char *)a2 - (char *)v6 <= 24 )
        break;
      v7 = v6;
      v6 += 7;
      v38 = 0;
    }
  }
  v38 = 0;
  if ( v33 )
    goto LABEL_29;
  v37 = nullptr;
  v39 = v24;
  sub_72980(v6, a2, (__int64)&v37);
LABEL_12:
  if ( srca )
    qfree(srca);
  v9 = 7;
  if ( v36 > 28 )
  {
    do
    {
      v15 = *(_QWORD *)(a4 + 8);
      v16 = nullptr;
      v38 = 0;
      if ( v15 )
      {
        v25 = v15;
        v30 = 4 * v15;
        v17 = (void *)qalloc_or_throw(4 * v15);
        v18 = *(const void **)a4;
        v16 = v17;
        *((_QWORD *)&v38 + 1) = v25;
        memcpy(v17, v18, v30);
        *(_QWORD *)&v38 = v25;
      }
      v10 = *(_QWORD *)(a4 + 24);
      v37 = v16;
      v39 = v10;
      sub_72770(src, a2, a3, v9, (__int64)&v37);
      if ( v16 )
        qfree(v16);
      v11 = *(_QWORD *)(a4 + 8);
      v12 = 2 * v9;
      v13 = nullptr;
      v38 = 0;
      if ( v11 )
      {
        v26 = v11;
        v31 = 4 * v11;
        v19 = (void *)qalloc_or_throw(4 * v11);
        v20 = *(const void **)a4;
        v13 = v19;
        *((_QWORD *)&v38 + 1) = v26;
        memcpy(v19, v20, v31);
        v12 = 2 * v9;
        *(_QWORD *)&v38 = v26;
      }
      v14 = *(_QWORD *)(a4 + 24);
      v37 = v13;
      v39 = v14;
      sub_72770(a3, v27, src, v12, (__int64)&v37);
      if ( v13 )
        qfree(v13);
      v9 *= 4;
    }
    while ( v28 > v9 );
  }
  return v40 - __readfsqword(0x28u);
}
