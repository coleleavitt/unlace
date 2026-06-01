unsigned __int64 __fastcall sub_22680(
        __int64 a1,
        double a2,
        __m128d a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rbx
  __m128i v10; // xmm0
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int *v14; // rax
  char *v15; // rdx
  QT::QGraphicsItem **v16; // rbx
  QT::QGraphicsItem **i; // r13
  __m128d v18; // xmm2
  unsigned __int64 v19; // rax
  QT::QGraphicsItem *v20; // r15
  __int64 v21; // rbp
  QT::QGraphicsItem *v22; // rdi
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rdx
  __m128i *v25; // rax
  unsigned __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v30; // rsi
  __int64 v31; // rax
  unsigned __int64 v32; // [rsp+18h] [rbp-98h] BYREF
  __int128 v33; // [rsp+20h] [rbp-90h]
  void *ptr[2]; // [rsp+38h] [rbp-78h] BYREF
  __int64 v35; // [rsp+48h] [rbp-68h]
  __m128i v36; // [rsp+58h] [rbp-58h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-48h]
  unsigned __int64 v38; // [rsp+70h] [rbp-40h]

  v8 = *(_QWORD *)(a1 + 64);
  v38 = __readfsqword(0x28u);
  v33 = 0;
  v10.m128i_i64[0] = 0;
  v32 = 0;
  v35 = 0;
  *(_OWORD *)ptr = 0;
  if ( !v8
    || (sub_21300(ptr, *(_QWORD *)(v8 + 48), a5, a6, a7, a8),
        sub_22450(*(_QWORD *)(v8 + 32), v8 + 16, (int **)ptr, v11, v12, v13),
        (v14 = (int *)ptr[0]) == nullptr)
    || *(int *)ptr[0] > 1 )
  {
    sub_22070((__int64)ptr, 0, 0, 0, a7, a8);
    v14 = (int *)ptr[0];
  }
  v15 = (char *)ptr[1];
  v16 = (QT::QGraphicsItem **)ptr[1];
  if ( !v14 || *v14 > 1 )
  {
    sub_22070((__int64)ptr, 0, 0, 0, a7, a8);
    v15 = (char *)ptr[1];
  }
  for ( i = (QT::QGraphicsItem **)&v15[8 * v35]; i != v16; *(_QWORD *)&v33 = v33 + 1 )
  {
    while ( 1 )
    {
      v20 = *v16;
      v21 = *((_QWORD *)*v16 + 2);
      v22 = *v16;
      v36.m128i_i64[0] = v21;
      sub_28850(v22);
      v36.m128i_i64[1] = v10.m128i_i64[0];
      sub_28850(v20);
      v31 = v33;
      v30 = v32;
      v37 = *(_QWORD *)&a3.m128d_f64[0];
      v23 = v33 + 1;
      if ( (unsigned __int64)&v36 < v32 || (unsigned __int64)&v36 >= v32 + 24LL * *((_QWORD *)&v33 + 1) )
        break;
      v18 = (__m128d)v10.m128i_u64[0];
      if ( *((_QWORD *)&v33 + 1) < v23 )
      {
        v32 = qvector_reserve(&v32, v32, v33 + 1, 24);
        v30 = v32;
        a3 = (__m128d)*(unsigned __int64 *)&a3.m128d_f64[0];
        v31 = v33;
        v18 = (__m128d)v10.m128i_u64[0];
      }
      ++v16;
      v19 = v30 + 24 * v31;
      *(_QWORD *)v19 = v21;
      *(__m128d *)(v19 + 8) = _mm_unpacklo_pd(v18, a3);
      *(_QWORD *)&v33 = v33 + 1;
      if ( i == v16 )
        goto LABEL_18;
    }
    if ( *((_QWORD *)&v33 + 1) < v23 )
    {
      v32 = qvector_reserve(&v32, v32, v33 + 1, 24);
      v30 = v32;
      v31 = v33;
    }
    v10 = _mm_load_si128(&v36);
    v24 = v37;
    ++v16;
    v25 = (__m128i *)(v30 + 24 * v31);
    *v25 = v10;
    v25[1].m128i_i64[0] = v24;
  }
LABEL_18:
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v26 = v32;
  netnode_setblob(*(_QWORD *)(a1 + 48), v32, 24 * v33, 0, 110);
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32, v26, v27, v28);
  }
  return v38 - __readfsqword(0x28u);
}

