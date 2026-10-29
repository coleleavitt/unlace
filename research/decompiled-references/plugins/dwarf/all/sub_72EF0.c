unsigned __int64 __fastcall sub_72EF0(int *a1, int *a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v7; // r15
  __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // r8d
  int v12; // r9d
  size_t v13; // rcx
  __int64 v14; // rax
  size_t v15; // rcx
  void *v16; // r14
  void *v18; // rax
  const void *v19; // rsi
  void *v20; // r14
  __int64 v21; // rax
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rax
  void *v26; // rax
  const void *v27; // rsi
  void *v28; // rax
  const void *v29; // rsi
  void *v30; // r14
  __int64 v31; // rax
  int v32; // r8d
  int v33; // r9d
  void *v34; // rax
  const void *v35; // rsi
  void *v36; // rbx
  __int64 v37; // rax
  int *v38; // [rsp+8h] [rbp-80h]
  size_t n; // [rsp+10h] [rbp-78h]
  size_t na; // [rsp+10h] [rbp-78h]
  __int64 v41; // [rsp+18h] [rbp-70h]
  __int64 v42; // [rsp+18h] [rbp-70h]
  void *v43; // [rsp+20h] [rbp-68h] BYREF
  __int128 v44; // [rsp+28h] [rbp-60h]
  __int64 v45; // [rsp+38h] [rbp-50h]
  unsigned __int64 v46; // [rsp+48h] [rbp-40h]

  v7 = *(_QWORD *)(a3 + 8);
  v46 = __readfsqword(0x28u);
  if ( (char *)a2 - (char *)a1 <= 56 )
  {
    v44 = 0;
    if ( v7 )
    {
      v34 = (void *)qalloc_or_throw(4 * v7);
      v35 = *(const void **)a3;
      *((_QWORD *)&v44 + 1) = v7;
      v36 = v34;
      memcpy(v34, v35, 4 * v7);
      v37 = *(_QWORD *)(a3 + 24);
      *(_QWORD *)&v44 = v7;
      v45 = v37;
      v43 = v36;
      sub_72980(a1, a2, (__int64)&v43);
      if ( v36 )
        qfree(v36);
    }
    else
    {
      v25 = *(_QWORD *)(a3 + 24);
      v43 = nullptr;
      v45 = v25;
      sub_72980(a1, a2, (__int64)&v43);
    }
  }
  else
  {
    v9 = 4 * (((char *)a2 - (char *)a1) >> 3);
    v44 = 0;
    v38 = &a1[(unsigned __int64)v9 / 4];
    if ( v7 )
    {
      v18 = (void *)qalloc_or_throw(4 * v7);
      v19 = *(const void **)a3;
      *((_QWORD *)&v44 + 1) = v7;
      v20 = v18;
      memcpy(v18, v19, 4 * v7);
      *(_QWORD *)&v44 = v7;
      v21 = *(_QWORD *)(a3 + 24);
      v43 = v20;
      v45 = v21;
      sub_72EF0((_DWORD)a1, (_DWORD)v38, (unsigned int)&v43, v22, v23, v24);
      if ( v20 )
        qfree(v20);
    }
    else
    {
      v10 = *(_QWORD *)(a3 + 24);
      v43 = nullptr;
      v45 = v10;
      sub_72EF0((_DWORD)a1, (_DWORD)a1 + v9, (unsigned int)&v43, a4, a5, a6);
    }
    v13 = *(_QWORD *)(a3 + 8);
    v44 = 0;
    if ( v13 )
    {
      na = v13;
      v42 = 4 * v13;
      v28 = (void *)qalloc_or_throw(4 * v13);
      v29 = *(const void **)a3;
      v30 = v28;
      *((_QWORD *)&v44 + 1) = na;
      memcpy(v28, v29, v42);
      v31 = *(_QWORD *)(a3 + 24);
      v43 = v30;
      *(_QWORD *)&v44 = na;
      v45 = v31;
      sub_72EF0((_DWORD)v38, (_DWORD)a2, (unsigned int)&v43, na, v32, v33);
      if ( v30 )
        qfree(v30);
    }
    else
    {
      v14 = *(_QWORD *)(a3 + 24);
      v43 = nullptr;
      v45 = v14;
      sub_72EF0((_DWORD)v38, (_DWORD)a2, (unsigned int)&v43, 0, v11, v12);
    }
    v15 = *(_QWORD *)(a3 + 8);
    v16 = nullptr;
    v44 = 0;
    if ( v15 )
    {
      n = v15;
      v41 = 4 * v15;
      v26 = (void *)qalloc_or_throw(4 * v15);
      v27 = *(const void **)a3;
      v16 = v26;
      *((_QWORD *)&v44 + 1) = n;
      memcpy(v26, v27, v41);
      *(_QWORD *)&v44 = n;
    }
    v45 = *(_QWORD *)(a3 + 24);
    v43 = v16;
    sub_71FC0(a1, v38, (__int64)a2, v9 >> 2, a2 - v38, (__int64)&v43);
    if ( v16 )
      qfree(v16);
  }
  return v46 - __readfsqword(0x28u);
}
