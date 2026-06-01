unsigned __int64 __fastcall sub_6F130(_QWORD *a1, unsigned int a2, int a3)
{
  char **v3; // r14
  _DWORD *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v10; // rax
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  _QWORD *v14; // r13
  bool v15; // zf
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  _QWORD *v18; // r11
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rsi
  _QWORD *v21; // rax
  _QWORD *v22; // rdi
  __int64 *v23; // rax
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __int128 v25; // [rsp+18h] [rbp-50h]
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v3 = (char **)(a1 + 45);
  v26 = __readfsqword(0x28u);
  v5 = sub_5FD60(a1 + 45, a2);
  v6 = v5;
  if ( v5 )
  {
    v7 = *((_QWORD *)v5 + 3);
    v8 = v6[2];
    if ( v6[4] < (unsigned __int64)(v7 + 1) )
    {
      v10 = qvector_reserve(v6 + 2, v8, v7 + 1, 4);
      v6[2] = v10;
      v8 = v10;
      v7 = v6[3];
    }
    *(_DWORD *)(v8 + 4 * v7) = a3;
    ++v6[3];
    return v26 - __readfsqword(0x28u);
  }
  v25 = 0;
  src = nullptr;
  src = (void *)qvector_reserve(&src, 0, 1, 4);
  *((_DWORD *)src + v25) = a3;
  v12 = v25 + 1;
  *(_QWORD *)&v25 = v12;
  if ( v12 )
  {
    v6 = (_QWORD *)qalloc_or_throw(4 * v12);
    memcpy(v6, src, 4 * v12);
  }
  v13 = operator new(0x28u);
  *(_QWORD *)v13 = 0;
  v14 = (_QWORD *)v13;
  v15 = a1[48] == 0;
  *(_DWORD *)(v13 + 8) = a2;
  *(_QWORD *)(v13 + 16) = v6;
  *(__m128i *)(v13 + 24) = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
  if ( v15 )
  {
    v23 = (__int64 *)a1[47];
    if ( v23 )
    {
      while ( *((_DWORD *)v23 + 2) != a2 )
      {
        v23 = (__int64 *)*v23;
        if ( !v23 )
          goto LABEL_27;
      }
      goto LABEL_16;
    }
LABEL_27:
    v17 = a2;
    v20 = (unsigned __int64)a2 % a1[46];
  }
  else
  {
    v16 = a1[46];
    v17 = a2;
    v18 = *(_QWORD **)(a1[45] + 8 * (a2 % v16));
    v19 = a2 % v16;
    v20 = v19;
    if ( v18 )
    {
      v21 = (_QWORD *)*v18;
      if ( *(_DWORD *)(*v18 + 8LL) != a2 )
      {
        do
        {
          v22 = (_QWORD *)*v21;
          if ( !*v21 )
            goto LABEL_28;
          v18 = v21;
          if ( v19 != *((unsigned int *)v22 + 2) % v16 )
            goto LABEL_28;
          v21 = (_QWORD *)*v21;
        }
        while ( *((_DWORD *)v22 + 2) != a2 );
      }
      if ( v18 && *v18 )
      {
LABEL_16:
        if ( v14 )
        {
          if ( v6 )
          {
            v14[3] = 0;
            qfree(v6);
          }
          operator delete(v14, 0x28u);
        }
        goto LABEL_20;
      }
    }
  }
LABEL_28:
  sub_6EF70(v3, v20, v17, (char *)v14, 1u);
LABEL_20:
  if ( src )
  {
    *(_QWORD *)&v25 = 0;
    qfree(src);
  }
  return v26 - __readfsqword(0x28u);
}

