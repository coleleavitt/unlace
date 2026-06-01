__int64 __fastcall sub_9140(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, const char *a5)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 *v8; // rax
  unsigned __int64 *v9; // rsi
  unsigned int i; // r12d
  unsigned __int64 v11; // r15
  unsigned int v12; // edx
  unsigned int v13; // ebx
  __int64 v14; // rbx
  unsigned __int64 v15; // rdx
  size_t v16; // rsi
  size_t v17; // rdi
  unsigned __int64 v19; // rdx
  size_t v20; // r11
  __int64 v21; // r10
  size_t v22; // r8
  size_t v23; // rsi
  __int64 v24; // r10
  unsigned __int64 v25; // rdx
  size_t v26; // rsi
  size_t v27; // rax
  size_t v28; // r14
  size_t v29; // r13
  unsigned __int64 v30; // r12
  size_t v31; // r14
  __int64 v32; // r13
  size_t v33; // r15
  size_t v34; // rsi
  size_t v35; // rsi
  __m128i v36; // xmm0
  __int64 v37; // rax
  char v38; // al
  unsigned __int64 v39; // r12
  size_t v40; // r14
  __int64 v41; // r13
  size_t v42; // r15
  struct _Unwind_Exception *v43; // rbx
  unsigned __int64 v44; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v45; // [rsp+0h] [rbp-D8h]
  __int64 v49; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v50; // [rsp+28h] [rbp-B0h]
  size_t v51; // [rsp+28h] [rbp-B0h]
  __int64 v52; // [rsp+30h] [rbp-A8h]
  size_t v53; // [rsp+38h] [rbp-A0h]
  void *v54; // [rsp+40h] [rbp-98h] BYREF
  __int128 v55; // [rsp+48h] [rbp-90h]
  __int64 v56; // [rsp+60h] [rbp-78h] BYREF
  __m128i v57; // [rsp+68h] [rbp-70h] BYREF
  void *src; // [rsp+80h] [rbp-58h] BYREF
  __int128 v59; // [rsp+88h] [rbp-50h]
  unsigned __int64 v60; // [rsp+98h] [rbp-40h]

  v6 = a1[3];
  v7 = *(_QWORD *)(a4 + 16);
  v60 = __readfsqword(0x28u);
  v8 = (unsigned __int64 *)a1[2];
  v9 = &v8[v6];
  if ( 8 * v6 )
  {
    for ( i = 0; ; ++i )
    {
      if ( v7 < *v8 )
      {
        v11 = i - 1;
        goto LABEL_7;
      }
      if ( ++v8 == v9 )
        break;
    }
    v11 = i++;
  }
  else
  {
    v11 = 0xFFFFFFFFLL;
    i = 0;
  }
LABEL_7:
  v54 = nullptr;
  v12 = *(_DWORD *)(a4 + 8);
  v55 = 0;
  if ( v11 >= a1[7] )
    sub_59F0();
  v13 = sub_8BD0((__int64)&v54, *(_QWORD *)(a1[6] + 8 * v11), v12, 0x55u);
  if ( (_BYTE)v13 )
  {
    sub_7850((size_t *)&v56, (__int64)&v54);
    v14 = v57.m128i_i64[0];
    v15 = 2;
    if ( v57.m128i_i64[0] )
    {
      v15 = v57.m128i_i64[0] + 1;
      v14 = v57.m128i_i64[0] - 1;
    }
    v16 = v56;
    if ( v57.m128i_i64[1] < v15 )
    {
      v50 = v15;
      v56 = qvector_reserve(&v56, v56, v15, 1);
      v15 = v50;
      v16 = v56;
    }
    v57.m128i_i64[0] = v15;
    *(_BYTE *)(v16 + v14) = 32;
    *(_BYTE *)(v56 + v14 + 1) = 0;
    if ( v11 >= a1[7] )
    {
      v43 = (struct _Unwind_Exception *)sub_59F0();
      if ( v56 )
      {
        v57.m128i_i64[0] = 0;
        qfree(v56);
      }
      if ( v54 )
      {
        *(_QWORD *)&v55 = 0;
        qfree(v54);
      }
      _Unwind_Resume(v43);
    }
    v13 = sub_8BD0((__int64)&v54, *(_QWORD *)(a1[6] + 8 * v11), *(_DWORD *)a4, 0x55u);
    if ( !(_BYTE)v13 )
    {
      v17 = v56;
      goto LABEL_16;
    }
    sub_7850((size_t *)&src, (__int64)&v54);
    v19 = v59;
    if ( (_QWORD)v59 )
    {
      v20 = v59 - 1;
      if ( (_QWORD)v59 != 1 )
      {
        v21 = v57.m128i_i64[0];
        v22 = v59 - 1;
        if ( v57.m128i_i64[0] )
        {
          v21 = v57.m128i_i64[0] - 1;
          v22 = v20 + v57.m128i_i64[0] - 1;
          v19 = v59 + v57.m128i_i64[0] - 1;
        }
        v23 = v56;
        if ( v57.m128i_i64[1] < v19 )
        {
          v53 = v22;
          v52 = v21;
          v51 = v59 - 1;
          v45 = v19;
          v56 = qvector_reserve(&v56, v56, v19, 1);
          v22 = v53;
          v23 = v56;
          v21 = v52;
          v20 = v51;
          v19 = v45;
        }
        v57.m128i_i64[0] = v19;
        *(_BYTE *)(v23 + v22) = 0;
        memcpy((void *)(v21 + v56), src, v20);
      }
    }
    if ( src )
    {
      *(_QWORD *)&v59 = 0;
      qfree(src);
    }
    v24 = v57.m128i_i64[0];
    v25 = 2;
    if ( v57.m128i_i64[0] )
    {
      v25 = v57.m128i_i64[0] + 1;
      v24 = v57.m128i_i64[0] - 1;
    }
    v26 = v56;
    if ( v57.m128i_i64[1] < v25 )
    {
      v49 = v24;
      v44 = v25;
      v56 = qvector_reserve(&v56, v56, v25, 1);
      v24 = v49;
      v26 = v56;
      v25 = v44;
    }
    v57.m128i_i64[0] = v25;
    *(_BYTE *)(v26 + v24) = 46;
    *(_BYTE *)(v56 + v24 + 1) = 0;
    if ( a5 )
    {
      src = nullptr;
      v59 = 0;
      v27 = strlen(a5);
      v28 = v27 + 1;
      v29 = v27;
      src = (void *)qvector_reserve(&src, 0, v27 + 1, 1);
      *(_QWORD *)&v59 = v28;
      memmove(src, a5, v29);
      *((_BYTE *)src + v29) = 0;
      v30 = v59;
      if ( (_QWORD)v59 )
      {
        v31 = v59 - 1;
        if ( (_QWORD)v59 != 1 )
        {
          v32 = v57.m128i_i64[0];
          v33 = v59 - 1;
          if ( v57.m128i_i64[0] )
          {
            v32 = v57.m128i_i64[0] - 1;
            v33 = v31 + v57.m128i_i64[0] - 1;
            v30 = v59 + v57.m128i_i64[0] - 1;
          }
          v34 = v56;
          if ( v57.m128i_i64[1] < v30 )
          {
            v56 = qvector_reserve(&v56, v56, v30, 1);
            v34 = v56;
          }
          v57.m128i_i64[0] = v30;
          *(_BYTE *)(v34 + v33) = 0;
          memcpy((void *)(v32 + v56), src, v31);
        }
      }
      if ( src )
      {
        *(_QWORD *)&v59 = 0;
        qfree(src);
        v35 = v56;
        goto LABEL_45;
      }
    }
    else
    {
      v38 = sub_89A0((__int64)a1, (__int64 *)&v54, i, a3);
      v17 = v56;
      v35 = v56;
      if ( !v38 )
      {
        v13 = 0;
LABEL_16:
        if ( v17 )
        {
          v57.m128i_i64[0] = 0;
          qfree(v17);
        }
        goto LABEL_18;
      }
      v39 = v55;
      if ( !(_QWORD)v55 || (v40 = v55 - 1, (_QWORD)v55 == 1) )
      {
LABEL_45:
        v36 = _mm_loadu_si128(&v57);
        v17 = *(_QWORD *)a2;
        v37 = *(_QWORD *)(a2 + 16);
        *(_QWORD *)a2 = v35;
        *(__m128i *)(a2 + 8) = v36;
        v56 = v17;
        v57.m128i_i64[1] = v37;
        goto LABEL_16;
      }
      v41 = v57.m128i_i64[0];
      v42 = v55 - 1;
      if ( v57.m128i_i64[0] )
      {
        v41 = v57.m128i_i64[0] - 1;
        v42 = v40 + v57.m128i_i64[0] - 1;
        v39 = v55 + v57.m128i_i64[0] - 1;
      }
      if ( v57.m128i_i64[1] < v39 )
      {
        v56 = qvector_reserve(&v56, v56, v39, 1);
        v17 = v56;
      }
      v57.m128i_i64[0] = v39;
      *(_BYTE *)(v17 + v42) = 0;
      memcpy((void *)(v41 + v56), v54, v40);
    }
    v35 = v56;
    goto LABEL_45;
  }
LABEL_18:
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  return v13;
}
