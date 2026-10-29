__int64 __fastcall sub_2B040(__int64 a1, _QWORD *a2, __int64 (*a3)(), __int64 (*a4)())
{
  bool v4; // zf
  int v5; // ebx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm0
  __int64 v11; // rbp
  __int64 v12; // rbp
  __int64 v13; // rbx
  size_t v14; // r15
  void *v15; // rax
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rcx
  __int128 v19; // xmm0
  __int64 v20; // rbp
  __int64 v21; // rbp
  __int64 v22; // rbx
  size_t v23; // r15
  void *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 i; // rbx
  _QWORD *v28; // rdx
  __int64 v29; // [rsp+8h] [rbp-60h]
  __int64 v30; // [rsp+8h] [rbp-60h]
  __int64 v31; // [rsp+8h] [rbp-60h]
  __int64 v32; // [rsp+8h] [rbp-60h]
  __m128i v33; // [rsp+10h] [rbp-58h] BYREF
  int v34; // [rsp+20h] [rbp-48h]
  unsigned __int64 v35; // [rsp+28h] [rbp-40h]

  v4 = a2[44] == 0;
  v35 = __readfsqword(0x28u);
  v5 = (int)a3;
  if ( !v4 )
  {
    if ( !(_DWORD)a3 )
      goto LABEL_3;
    v34 = (int)a3;
    v33.m128i_i64[0] = (__int64)off_63128;
    v33.m128i_i64[1] = (__int64)(a2 + 43);
    sub_27280((__int64)a2, &v33, a3, a4);
LABEL_6:
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    if ( a2[44] )
    {
      v31 = a2[44];
      v16 = 0;
      v17 = qalloc_or_throw();
      v18 = v31;
      v19 = 0;
      *(_QWORD *)a1 = v17;
      v20 = v17;
      *(_QWORD *)(a1 + 16) = v31;
      while ( 1 )
      {
        v21 = 24 * v16 + v20;
        v22 = 24 * v16 + a2[43];
        *(_QWORD *)v21 = 0;
        *(_OWORD *)(v21 + 8) = v19;
        v23 = *(_QWORD *)(v22 + 8);
        if ( v23 )
        {
          v32 = v18;
          v24 = (void *)qalloc_or_throw();
          *(_QWORD *)(v21 + 16) = v23;
          *(_QWORD *)v21 = v24;
          memcpy(v24, *(const void **)v22, v23);
          *(_QWORD *)(v21 + 8) = v23;
          v18 = v32;
          v19 = 0;
        }
        if ( v18 == ++v16 )
          break;
        v20 = *(_QWORD *)a1;
      }
      *(_QWORD *)(a1 + 8) = v18;
      v25 = a2[43];
      if ( !v25 )
        return a1;
      v26 = a2[44];
      if ( v26 )
      {
        for ( i = 0; i != v26; ++i )
        {
          v28 = (_QWORD *)(v25 + 24 * i);
          if ( *v28 )
          {
            v28[1] = 0;
            qfree();
            v25 = a2[43];
          }
        }
      }
    }
    else if ( !a2[43] )
    {
      return a1;
    }
    a2[44] = 0;
    qfree();
    a2[43] = 0;
    a2[45] = 0;
    return a1;
  }
  v34 = (int)a3;
  v33.m128i_i64[0] = (__int64)off_63128;
  v33.m128i_i64[1] = (__int64)(a2 + 43);
  sub_27280((__int64)a2, &v33, a3, a4);
  if ( v5 )
    goto LABEL_6;
LABEL_3:
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a2[44] )
  {
    v29 = a2[44];
    v7 = 0;
    v8 = qalloc_or_throw();
    v9 = v29;
    v10 = 0;
    *(_QWORD *)a1 = v8;
    v11 = v8;
    *(_QWORD *)(a1 + 16) = v29;
    while ( 1 )
    {
      v12 = 24 * v7 + v11;
      v13 = 24 * v7 + a2[43];
      *(_QWORD *)v12 = 0;
      *(_OWORD *)(v12 + 8) = v10;
      v14 = *(_QWORD *)(v13 + 8);
      if ( v14 )
      {
        v30 = v9;
        ++v7;
        v15 = (void *)qalloc_or_throw();
        *(_QWORD *)(v12 + 16) = v14;
        *(_QWORD *)v12 = v15;
        memcpy(v15, *(const void **)v13, v14);
        v9 = v30;
        *(_QWORD *)(v12 + 8) = v14;
        v10 = 0;
        if ( v30 == v7 )
        {
LABEL_16:
          *(_QWORD *)(a1 + 8) = v9;
          return a1;
        }
      }
      else if ( v9 == ++v7 )
      {
        goto LABEL_16;
      }
      v11 = *(_QWORD *)a1;
    }
  }
  return a1;
}

