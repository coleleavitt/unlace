__int64 __fastcall sub_CA60(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int *a4, const char *a5, __int64 a6)
{
  __int64 v8; // rbx
  _QWORD *v9; // rax
  const char *v10; // rsi
  __int64 v11; // rdi
  unsigned int i; // r13d
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  const char *v16; // rsi
  unsigned int v17; // ebx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r10
  unsigned __int64 v21; // rdx
  __int64 v22; // rsi
  size_t v23; // rax
  size_t v24; // r14
  size_t v25; // r13
  const char *v26; // rsi
  unsigned __int64 v27; // r12
  size_t v28; // r14
  __int64 v29; // r13
  size_t v30; // r15
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rax
  __m128i v34; // xmm0
  char v36; // al
  unsigned __int64 v37; // r12
  size_t v38; // r14
  __int64 v39; // r13
  size_t v40; // r8
  struct _Unwind_Exception *v41; // rbx
  size_t v43; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v44; // [rsp+10h] [rbp-A8h]
  __int64 v45; // [rsp+18h] [rbp-A0h]
  void *v46; // [rsp+20h] [rbp-98h] BYREF
  __int128 v47; // [rsp+28h] [rbp-90h]
  __int64 v48; // [rsp+40h] [rbp-78h] BYREF
  __m128i v49; // [rsp+48h] [rbp-70h] BYREF
  void *src; // [rsp+60h] [rbp-58h] BYREF
  __int128 v51; // [rsp+68h] [rbp-50h]
  unsigned __int64 v52; // [rsp+78h] [rbp-40h]

  v8 = a1[3];
  v9 = (_QWORD *)a1[2];
  v10 = *((const char **)a4 + 2);
  v11 = (__int64)&v9[v8];
  v52 = __readfsqword(0x28u);
  if ( 8 * v8 )
  {
    for ( i = 0; ; ++i )
    {
      if ( (unsigned __int64)v10 < *v9 )
      {
        v14 = i - 1;
        goto LABEL_7;
      }
      if ( ++v9 == (_QWORD *)v11 )
        break;
    }
    v14 = i++;
  }
  else
  {
    v14 = 0xFFFFFFFFLL;
    i = 0;
  }
LABEL_7:
  v46 = nullptr;
  v15 = *a4;
  v47 = 0;
  if ( v14 >= a1[7] )
  {
    v41 = (struct _Unwind_Exception *)sub_BBD0(v11, (int)v10, v15, (__int64)a4, (__int64)a5, a6, a3);
    if ( src )
    {
      v10 = nullptr;
      *(_QWORD *)&v51 = 0;
      qfree(src, nullptr);
    }
    if ( v48 )
    {
      v49.m128i_i64[0] = 0;
      qfree(v48, v10);
    }
    _Unwind_Resume(v41);
  }
  v16 = *(const char **)(a1[6] + 8 * v14);
  v17 = sub_C8C0((__int64)&v46, (__int64)v16, v15, 0x55u);
  if ( (_BYTE)v17 )
  {
    sub_C1C0(&v48, (__int64)&v46);
    v20 = v49.m128i_i64[0];
    v21 = 2;
    if ( v49.m128i_i64[0] )
    {
      v21 = v49.m128i_i64[0] + 1;
      v20 = v49.m128i_i64[0] - 1;
    }
    v22 = v48;
    if ( v49.m128i_i64[1] < v21 )
    {
      v45 = v20;
      v44 = v21;
      v48 = qvector_reserve(&v48, v48, v21, 1);
      v20 = v45;
      v22 = v48;
      v21 = v44;
    }
    v49.m128i_i64[0] = v21;
    *(_BYTE *)(v22 + v20) = 95;
    *(_BYTE *)(v48 + v20 + 1) = 0;
    if ( a5 )
    {
      src = nullptr;
      v51 = 0;
      v23 = strlen(a5);
      v24 = v23 + 1;
      v25 = v23;
      v26 = a5;
      src = (void *)qvector_reserve(&src, 0, v23 + 1, 1);
      *(_QWORD *)&v51 = v24;
      memmove(src, a5, v25);
      *((_BYTE *)src + v25) = 0;
      v27 = v51;
      if ( (_QWORD)v51 )
      {
        v28 = v51 - 1;
        if ( (_QWORD)v51 != 1 )
        {
          v29 = v49.m128i_i64[0];
          v30 = v51 - 1;
          if ( v49.m128i_i64[0] )
          {
            v29 = v49.m128i_i64[0] - 1;
            v30 = v28 + v49.m128i_i64[0] - 1;
            v27 = v51 + v49.m128i_i64[0] - 1;
          }
          v31 = v48;
          if ( v49.m128i_i64[1] < v27 )
          {
            v48 = qvector_reserve(&v48, v48, v27, 1);
            v31 = v48;
          }
          v49.m128i_i64[0] = v27;
          *(_BYTE *)(v31 + v30) = 0;
          v26 = (const char *)src;
          memcpy((void *)(v29 + v48), src, v28);
        }
      }
      if ( src )
      {
        *(_QWORD *)&v51 = 0;
        qfree(src, v26);
        v16 = (const char *)v48;
        goto LABEL_23;
      }
    }
    else
    {
      v36 = sub_C690((__int64)a1, (__int64 *)&v46, i, a3, v18, v19);
      v32 = v48;
      v16 = (const char *)v48;
      if ( !v36 )
      {
        v17 = 0;
LABEL_24:
        if ( v32 )
        {
          v49.m128i_i64[0] = 0;
          qfree(v32, v16);
        }
        goto LABEL_26;
      }
      v37 = v47;
      if ( !(_QWORD)v47 || (v38 = v47 - 1, (_QWORD)v47 == 1) )
      {
LABEL_23:
        v32 = *(_QWORD *)a2;
        v33 = *(_QWORD *)(a2 + 16);
        *(_QWORD *)a2 = v16;
        v34 = _mm_loadu_si128(&v49);
        v48 = v32;
        v49.m128i_i64[1] = v33;
        *(__m128i *)(a2 + 8) = v34;
        goto LABEL_24;
      }
      v39 = v49.m128i_i64[0];
      v40 = v47 - 1;
      if ( v49.m128i_i64[0] )
      {
        v39 = v49.m128i_i64[0] - 1;
        v40 = v38 + v49.m128i_i64[0] - 1;
        v37 = v47 + v49.m128i_i64[0] - 1;
      }
      if ( v49.m128i_i64[1] < v37 )
      {
        v43 = v40;
        v48 = qvector_reserve(&v48, v48, v37, 1);
        v40 = v43;
        v32 = v48;
      }
      v49.m128i_i64[0] = v37;
      *(_BYTE *)(v32 + v40) = 0;
      memcpy((void *)(v39 + v48), v46, v38);
    }
    v16 = (const char *)v48;
    goto LABEL_23;
  }
LABEL_26:
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46, v16);
  }
  return v17;
}

