__int64 __fastcall sub_9AC0(_QWORD *a1, char **a2, __int64 a3)
{
  int v3; // r12d
  unsigned __int64 *v4; // rax
  __int64 v5; // rsi
  unsigned __int64 *v6; // rcx
  unsigned __int64 v8; // rdx
  unsigned int v9; // ecx
  char *v10; // rax
  const char *v11; // rax
  const char *v12; // r14
  size_t v13; // r13
  const char *v14; // rsi
  unsigned __int64 v15; // r14
  __int64 v16; // r13
  char *v17; // rsi
  unsigned __int64 v18; // r12
  unsigned int v19; // edx
  unsigned int v20; // ebp
  unsigned __int64 v22; // rdx
  size_t v23; // r9
  __int64 v24; // r8
  unsigned __int64 v25; // rdx
  char *v26; // rsi
  unsigned __int64 v27; // rbx
  size_t v28; // r14
  __int64 v29; // r12
  size_t v30; // r8
  char *v31; // rsi
  __int64 v32; // rbx
  unsigned __int64 v33; // r12
  char *v34; // rsi
  int v35; // r12d
  __int64 v36; // rbx
  const char *v37; // rax
  const char *v38; // r14
  size_t v39; // rax
  size_t v40; // r15
  size_t v41; // rbx
  unsigned __int64 v42; // rbx
  size_t v43; // r15
  __int64 v44; // r14
  size_t v45; // r9
  char *v46; // rsi
  unsigned __int64 v47; // r14
  size_t v48; // r15
  __int64 v49; // r8
  size_t v50; // r10
  char *v51; // rsi
  __int64 v52; // rbx
  unsigned __int64 v53; // r12
  char *v54; // rsi
  __m128i v55; // xmm0
  char *v56; // rdx
  __m128i v57; // xmm1
  __int64 v58; // r8
  size_t v59; // r10
  char *v60; // rsi
  struct _Unwind_Exception *v61; // rbx
  size_t v62; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v63; // [rsp+0h] [rbp-E8h]
  size_t v64; // [rsp+0h] [rbp-E8h]
  size_t v65; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v66; // [rsp+0h] [rbp-E8h]
  __int64 v68; // [rsp+18h] [rbp-D0h]
  __int64 v69; // [rsp+18h] [rbp-D0h]
  size_t v70; // [rsp+18h] [rbp-D0h]
  __int64 v71; // [rsp+20h] [rbp-C8h]
  size_t v72; // [rsp+28h] [rbp-C0h]
  char *v73; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v74; // [rsp+38h] [rbp-B0h]
  char *v75; // [rsp+50h] [rbp-98h] BYREF
  __m128i v76; // [rsp+58h] [rbp-90h] BYREF
  void *src; // [rsp+70h] [rbp-78h] BYREF
  __int128 v78; // [rsp+78h] [rbp-70h]
  void *v79; // [rsp+90h] [rbp-58h] BYREF
  __int128 v80; // [rsp+98h] [rbp-50h]
  unsigned __int64 v81; // [rsp+A8h] [rbp-40h]

  v3 = 0;
  v4 = (unsigned __int64 *)a1[2];
  v5 = a1[3];
  v6 = &v4[v5];
  v81 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a3 + 8);
  if ( v5 * 8 )
  {
    do
    {
      if ( v8 < *v4 )
        break;
      ++v4;
      ++v3;
    }
    while ( v4 != v6 );
  }
  v9 = *(_DWORD *)(a3 + 28);
  v74 = 0;
  v73 = nullptr;
  sub_8910((__int64)a1, (__int64)&v73, v3, v9);
  v10 = (char *)&unk_28401;
  if ( (_QWORD)v74 )
    v10 = v73;
  v11 = sub_5670(*v10);
  v76 = 0;
  v75 = nullptr;
  v12 = v11;
  v13 = strlen(v11);
  v14 = v12;
  v75 = (char *)qvector_reserve(&v75, 0, v13 + 1, 1);
  v15 = 2;
  v76.m128i_i64[0] = v13 + 1;
  memmove(v75, v14, v13);
  v75[v13] = 0;
  v16 = v76.m128i_i64[0];
  if ( v76.m128i_i64[0] )
  {
    v15 = v76.m128i_i64[0] + 1;
    v16 = v76.m128i_i64[0] - 1;
  }
  v17 = v75;
  if ( v76.m128i_i64[1] < v15 )
  {
    v75 = (char *)qvector_reserve(&v75, v75, v15, 1);
    v17 = v75;
  }
  v76.m128i_i64[0] = v15;
  v18 = (unsigned int)(v3 - 1);
  v17[v16] = 32;
  v75[v16 + 1] = 0;
  v19 = *(_DWORD *)(a3 + 16);
  src = nullptr;
  v78 = 0;
  if ( v18 >= a1[7] )
    sub_59F0();
  if ( !(unsigned __int8)sub_8BD0((__int64)&src, *(_QWORD *)(a1[6] + 8 * v18), v19, 0x55u) )
    goto LABEL_13;
  sub_83C0(&v79, (__int64)&src);
  v22 = v80;
  if ( (_QWORD)v80 )
  {
    v23 = v80 - 1;
    if ( (_QWORD)v80 != 1 )
    {
      v58 = v76.m128i_i64[0];
      v59 = v80 - 1;
      if ( v76.m128i_i64[0] )
      {
        v58 = v76.m128i_i64[0] - 1;
        v59 = v23 + v76.m128i_i64[0] - 1;
        v22 = v80 + v76.m128i_i64[0] - 1;
      }
      v60 = v75;
      if ( v76.m128i_i64[1] < v22 )
      {
        v72 = v59;
        v71 = v58;
        v70 = v80 - 1;
        v66 = v22;
        v75 = (char *)qvector_reserve(&v75, v75, v22, 1);
        v59 = v72;
        v60 = v75;
        v58 = v71;
        v23 = v70;
        v22 = v66;
      }
      v76.m128i_i64[0] = v22;
      v60[v59] = 0;
      memcpy(&v75[v58], v79, v23);
    }
  }
  if ( v79 )
  {
    *(_QWORD *)&v80 = 0;
    qfree(v79);
  }
  v24 = v76.m128i_i64[0];
  v25 = 2;
  if ( v76.m128i_i64[0] )
  {
    v25 = v76.m128i_i64[0] + 1;
    v24 = v76.m128i_i64[0] - 1;
  }
  v26 = v75;
  if ( v76.m128i_i64[1] < v25 )
  {
    v68 = v24;
    v63 = v25;
    v75 = (char *)qvector_reserve(&v75, v75, v25, 1);
    v24 = v68;
    v26 = v75;
    v25 = v63;
  }
  v76.m128i_i64[0] = v25;
  v26[v24] = 46;
  v75[v24 + 1] = 0;
  if ( v18 >= a1[7] )
  {
    v61 = (struct _Unwind_Exception *)sub_59F0();
    if ( v75 )
    {
      v76.m128i_i64[0] = 0;
      qfree(v75);
    }
    if ( v73 )
    {
      *(_QWORD *)&v74 = 0;
      qfree(v73);
    }
    _Unwind_Resume(v61);
  }
  v20 = sub_8BD0((__int64)&src, *(_QWORD *)(a1[6] + 8 * v18), *(_DWORD *)(a3 + 20), 0x4Eu);
  if ( (_BYTE)v20 )
  {
    sub_57A0(&src);
    v27 = v78;
    if ( (_QWORD)v78 )
    {
      v28 = v78 - 1;
      if ( (_QWORD)v78 != 1 )
      {
        v29 = v76.m128i_i64[0];
        v30 = v78 - 1;
        if ( v76.m128i_i64[0] )
        {
          v29 = v76.m128i_i64[0] - 1;
          v30 = v28 + v76.m128i_i64[0] - 1;
          v27 = v78 + v76.m128i_i64[0] - 1;
        }
        v31 = v75;
        if ( v76.m128i_i64[1] < v27 )
        {
          v65 = v30;
          v75 = (char *)qvector_reserve(&v75, v75, v27, 1);
          v30 = v65;
          v31 = v75;
        }
        v76.m128i_i64[0] = v27;
        v31[v30] = 0;
        memcpy(&v75[v29], src, v28);
      }
    }
    v32 = v76.m128i_i64[0];
    v33 = 2;
    if ( v76.m128i_i64[0] )
    {
      v33 = v76.m128i_i64[0] + 1;
      v32 = v76.m128i_i64[0] - 1;
    }
    v34 = v75;
    if ( v76.m128i_i64[1] < v33 )
    {
      v75 = (char *)qvector_reserve(&v75, v75, v33, 1);
      v34 = v75;
    }
    v76.m128i_i64[0] = v33;
    v35 = 1;
    v34[v32] = 40;
    v75[v32 + 1] = 0;
    v36 = 1;
    if ( (unsigned __int64)v74 > 1 )
    {
      while ( v73[v36] )
      {
        v37 = sub_5670(v73[v36]);
        v79 = nullptr;
        v38 = v37;
        v80 = 0;
        v39 = strlen(v37);
        v40 = v39 + 1;
        v41 = v39;
        v79 = (void *)qvector_reserve(&v79, 0, v39 + 1, 1);
        *(_QWORD *)&v80 = v40;
        memmove(v79, v38, v41);
        *((_BYTE *)v79 + v41) = 0;
        v42 = v80;
        if ( (_QWORD)v80 )
        {
          v43 = v80 - 1;
          if ( (_QWORD)v80 != 1 )
          {
            v44 = v76.m128i_i64[0];
            v45 = v80 - 1;
            if ( v76.m128i_i64[0] )
            {
              v44 = v76.m128i_i64[0] - 1;
              v45 = v43 + v76.m128i_i64[0] - 1;
              v42 = v80 + v76.m128i_i64[0] - 1;
            }
            v46 = v75;
            if ( v76.m128i_i64[1] < v42 )
            {
              v62 = v45;
              v75 = (char *)qvector_reserve(&v75, v75, v42, 1);
              v45 = v62;
              v46 = v75;
            }
            v76.m128i_i64[0] = v42;
            v46[v45] = 0;
            memcpy(&v75[v44], v79, v43);
          }
        }
        if ( v79 )
        {
          *(_QWORD *)&v80 = 0;
          qfree(v79);
        }
        v36 = ++v35;
        if ( !v73[v35] )
          goto LABEL_44;
        v80 = 0;
        v79 = nullptr;
        v79 = (void *)qvector_reserve(&v79, 0, 3, 1);
        *(_QWORD *)&v80 = 3;
        strcpy((char *)v79, ", ");
        v47 = v80;
        if ( (_QWORD)v80 )
        {
          v48 = v80 - 1;
          if ( (_QWORD)v80 != 1 )
          {
            v49 = v76.m128i_i64[0];
            v50 = v80 - 1;
            if ( v76.m128i_i64[0] )
            {
              v49 = v76.m128i_i64[0] - 1;
              v50 = v48 + v76.m128i_i64[0] - 1;
              v47 = v80 + v76.m128i_i64[0] - 1;
            }
            v51 = v75;
            if ( v76.m128i_i64[1] < v47 )
            {
              v64 = v50;
              v69 = v49;
              v75 = (char *)qvector_reserve(&v75, v75, v47, 1);
              v49 = v69;
              v51 = v75;
              v50 = v64;
            }
            v76.m128i_i64[0] = v47;
            v51[v50] = 0;
            memcpy(&v75[v49], v79, v48);
          }
        }
        if ( v79 )
        {
          *(_QWORD *)&v80 = 0;
          qfree(v79);
          if ( v35 >= (unsigned __int64)v74 )
            break;
        }
        else
        {
LABEL_44:
          if ( v35 >= (unsigned __int64)v74 )
            break;
        }
      }
    }
    v52 = v76.m128i_i64[0];
    v53 = 2;
    if ( v76.m128i_i64[0] )
    {
      v53 = v76.m128i_i64[0] + 1;
      v52 = v76.m128i_i64[0] - 1;
    }
    v54 = v75;
    if ( v76.m128i_i64[1] < v53 )
    {
      v75 = (char *)qvector_reserve(&v75, v75, v53, 1);
      v54 = v75;
    }
    v76.m128i_i64[0] = v53;
    v54[v52] = 41;
    v75[v52 + 1] = 0;
    v55 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    v56 = v75;
    v57 = _mm_loadu_si128(&v76);
    v75 = *a2;
    *a2 = v56;
    *(__m128i *)(a2 + 1) = v57;
    v76 = v55;
  }
  else
  {
LABEL_13:
    v20 = 0;
  }
  if ( src )
  {
    *(_QWORD *)&v78 = 0;
    qfree(src);
  }
  if ( v75 )
  {
    v76.m128i_i64[0] = 0;
    qfree(v75);
  }
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  return v20;
}
