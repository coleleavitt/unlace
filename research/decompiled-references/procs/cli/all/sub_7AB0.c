__int64 *__fastcall sub_7AB0(__int64 *a1, __int64 a2, unsigned int a3, double a4, double a5, __m128 a6)
{
  __int64 v6; // rbp
  int v8; // eax
  unsigned int v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm0
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // r15
  size_t v19; // r13
  size_t v20; // r12
  size_t v21; // r14
  __int64 v22; // rsi
  size_t v23; // rdx
  unsigned __int64 v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r12
  _BYTE *v30; // rsi
  size_t v31; // r13
  __int64 v32; // r12
  unsigned __int64 v33; // r13
  __int64 v34; // r12
  _BYTE *v35; // rsi
  size_t v36; // r13
  __int64 v37; // r8
  __int64 v38; // r12
  _BYTE *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // [rsp+0h] [rbp-A0h] BYREF
  __m128i v46; // [rsp+8h] [rbp-98h] BYREF
  unsigned int v47; // [rsp+24h] [rbp-7Ch] BYREF
  __int64 v48; // [rsp+28h] [rbp-78h] BYREF
  __m128i v49; // [rsp+30h] [rbp-70h] BYREF
  void *src; // [rsp+48h] [rbp-58h] BYREF
  size_t n; // [rsp+50h] [rbp-50h]
  unsigned __int64 v52; // [rsp+60h] [rbp-40h]

  v6 = *(_QWORD *)(a2 + 616);
  v52 = __readfsqword(0x28u);
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v8 = *(_DWORD *)(v6 + 10392);
  *(_DWORD *)(v6 + 10392) = v8 + 1;
  if ( v8 + 1 <= 1023 && (a3 & 0xFF000000) == 0x1000000 )
  {
    if ( netnode_supval(*(_QWORD *)(v6 + 144), a3, &v47, 4, 97) <= 0
      || (v10 = v47 & 0xFF000000, v10 != 0x1000000 && v10 != 587202560) && v10 != 436207616 )
    {
LABEL_23:
      v8 = *(_DWORD *)(v6 + 10392) - 1;
      goto LABEL_3;
    }
    sub_7A10(&v48, a2, v47, 0.0, a5, a6);
    v15 = (__m128)_mm_loadu_si128(&v49);
    v16 = *a1;
    v17 = v48;
    _mm_storeh_ps((double *)&v45, v15);
    v18 = v15.m128_u64[0];
    if ( v16 )
    {
      a1[1] = 0;
      v46 = (__m128i)v15;
      qfree(v16, a2, v11, v12, v13, v14);
      v15 = (__m128)_mm_load_si128(&v46);
    }
    *a1 = v17;
    *(__m128 *)(a1 + 1) = v15;
    if ( v10 != 436207616 )
    {
      if ( v10 != 587202560 )
      {
        sub_7AB0(&src, a2, v47);
        v19 = n;
        v20 = (a1[1] == 0) + a1[1] - 1;
        v21 = v20;
        if ( n )
        {
          v19 = n - 1;
          v21 = n - 1 + v20;
        }
        v22 = *a1;
        if ( a1[2] < v21 + 1 )
        {
          v44 = qvector_reserve(a1, v22, v21 + 1, 1);
          *a1 = v44;
          v22 = v44;
        }
        a1[1] = v21 + 1;
        *(_BYTE *)(v22 + v21) = 0;
        if ( v20 )
          memmove((void *)(*a1 + v19), (const void *)*a1, v20);
        v23 = v19;
        v24 = 2;
        memcpy((void *)*a1, src, v23);
        v29 = a1[1];
        if ( v29 )
          v24 = v29-- + 1;
        v30 = (_BYTE *)*a1;
        if ( a1[2] < v24 )
        {
          v41 = qvector_reserve(a1, v30, v24, 1);
          *a1 = v41;
          v30 = (_BYTE *)v41;
        }
        a1[1] = v24;
        v30[v29] = 47;
        *(_BYTE *)(*a1 + v29 + 1) = 0;
        if ( src )
        {
          n = 0;
          qfree(src, v30, v25, v26, v27, v28);
        }
        goto LABEL_23;
      }
      if ( v18 )
      {
        v31 = v18 - 1;
        v32 = v18 + 1;
        if ( v45 >= v18 + 1 )
          goto LABEL_26;
      }
      else
      {
        if ( v45 > 1 )
        {
          a1[1] = 2;
          *(_BYTE *)(v17 + 1) = 0;
          goto LABEL_28;
        }
        v31 = 0;
        v32 = 2;
      }
      v43 = qvector_reserve(a1, v17, v32, 1);
      *a1 = v43;
      v17 = v43;
      v18 = v31 + 1;
LABEL_26:
      a1[1] = v32;
      *(_BYTE *)(v17 + v18) = 0;
      if ( v31 )
        memmove((void *)(*a1 + 1), (const void *)*a1, v31);
LABEL_28:
      v33 = 2;
      *(_BYTE *)*a1 = 91;
      v34 = a1[1];
      if ( !v34 )
      {
LABEL_30:
        v35 = (_BYTE *)*a1;
        if ( a1[2] < v33 )
        {
          v40 = qvector_reserve(a1, v35, v33, 1);
          *a1 = v40;
          v35 = (_BYTE *)v40;
        }
        a1[1] = v33;
        v35[v34] = 93;
        *(_BYTE *)(*a1 + v34 + 1) = 0;
        goto LABEL_23;
      }
LABEL_29:
      v33 = v34-- + 1;
      goto LABEL_30;
    }
    if ( v18 )
    {
      v36 = v18 - 1;
      v37 = v18 + 8;
      v38 = v18 + 9;
      if ( v45 >= v18 + 9 )
        goto LABEL_35;
    }
    else
    {
      if ( v45 > 9 )
      {
        a1[1] = 10;
        *(_BYTE *)(v17 + 9) = 0;
        goto LABEL_37;
      }
      v36 = 0;
      v38 = 10;
      v37 = 9;
    }
    v45 = v37;
    v42 = qvector_reserve(a1, v17, v38, 1);
    *a1 = v42;
    v37 = v45;
    v17 = v42;
LABEL_35:
    a1[1] = v38;
    *(_BYTE *)(v17 + v37) = 0;
    if ( v36 )
      memmove((void *)(*a1 + 9), (const void *)*a1, v36);
LABEL_37:
    v39 = (_BYTE *)*a1;
    v33 = 2;
    *(_QWORD *)v39 = 0x656C75646F6D2E5BLL;
    v39[8] = 32;
    v34 = a1[1];
    if ( !v34 )
      goto LABEL_30;
    goto LABEL_29;
  }
LABEL_3:
  *(_DWORD *)(v6 + 10392) = v8;
  return a1;
}
