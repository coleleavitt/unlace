unsigned __int64 __fastcall sub_72770(int *src, int *a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  int *v6; // r11
  __int64 v8; // rax
  __int64 v11; // rax
  int *v12; // rbx
  __int64 v13; // rbx
  void *v14; // rbp
  void *v15; // rax
  const void *v16; // rsi
  __int64 v17; // r15
  __int64 v18; // rcx
  void *v19; // rbp
  __int64 v20; // rax
  void *v22; // rax
  const void *v23; // rsi
  size_t v24; // [rsp+8h] [rbp-90h]
  __int64 v25; // [rsp+10h] [rbp-88h]
  __int64 v26; // [rsp+10h] [rbp-88h]
  int *v27; // [rsp+20h] [rbp-78h]
  void *v29; // [rsp+30h] [rbp-68h] BYREF
  __int128 v30; // [rsp+38h] [rbp-60h]
  __int64 v31; // [rsp+48h] [rbp-50h]
  unsigned __int64 v32; // [rsp+58h] [rbp-40h]

  v5 = 2 * a4;
  v6 = src;
  v8 = a2 - src;
  v32 = __readfsqword(0x28u);
  if ( 2 * a4 > v8 )
  {
    v12 = src;
  }
  else
  {
    v24 = 2 * a4;
    v25 = -1 * a4;
    while ( 1 )
    {
      v13 = *(_QWORD *)(a5 + 8);
      v14 = nullptr;
      v30 = 0;
      if ( v13 )
      {
        v27 = v6;
        v15 = (void *)qalloc_or_throw(4 * v13);
        v16 = *(const void **)a5;
        *((_QWORD *)&v30 + 1) = v13;
        v14 = v15;
        memcpy(v15, v16, 4 * v13);
        *(_QWORD *)&v30 = v13;
        v6 = v27;
      }
      v11 = *(_QWORD *)(a5 + 24);
      v29 = v14;
      v31 = v11;
      v12 = &v6[v24];
      a3 = (_DWORD *)sub_72470(v6, &v6[v24 + v25], &v6[v24 + v25], &v6[v24], a3, (__int64)&v29);
      if ( v14 )
        qfree(v14);
      v8 = a2 - v12;
      if ( v8 < v5 )
        break;
      v6 = v12;
    }
  }
  v17 = *(_QWORD *)(a5 + 8);
  v30 = 0;
  v18 = a4;
  if ( v8 <= a4 )
    v18 = v8;
  v19 = nullptr;
  if ( v17 )
  {
    v26 = v18;
    v22 = (void *)qalloc_or_throw(4 * v17);
    v23 = *(const void **)a5;
    *((_QWORD *)&v30 + 1) = v17;
    v19 = v22;
    memcpy(v22, v23, 4 * v17);
    *(_QWORD *)&v30 = v17;
    v18 = v26;
  }
  v20 = *(_QWORD *)(a5 + 24);
  v29 = v19;
  v31 = v20;
  sub_72470(v12, &v12[v18], &v12[v18], a2, a3, (__int64)&v29);
  if ( v19 )
    qfree(v19);
  return v32 - __readfsqword(0x28u);
}

