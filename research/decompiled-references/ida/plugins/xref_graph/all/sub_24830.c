__int64 __fastcall sub_24830(QT::QGraphicsScene *this, __int64 a2, int a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 *v6; // r14
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r12
  volatile signed __int32 *v12; // rax
  __int64 *v13; // rbx
  __int64 *v14; // r13
  unsigned int v15; // ebp
  __int64 v17; // rax
  unsigned __int64 v18; // r8
  const char *v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // r8
  const char *v24; // r9
  void *v25; // r12
  __int64 v26; // rbx
  void *v27; // rdi
  __int64 v28; // rax
  unsigned __int64 v29; // [rsp+8h] [rbp-60h]
  void *v30; // [rsp+18h] [rbp-50h] BYREF
  const char *v31; // [rsp+20h] [rbp-48h] BYREF
  __int128 v32; // [rsp+28h] [rbp-40h]
  unsigned __int64 v33; // [rsp+38h] [rbp-30h]

  v4 = *(__int64 **)a2;
  v5 = *(_QWORD *)(a2 + 8);
  v33 = __readfsqword(0x28u);
  v30 = nullptr;
  v6 = &v4[v5];
  if ( v4 == v6 )
    goto LABEL_27;
  do
    sub_23960((__int64)this, (volatile signed __int32 **)&v30, *v4++, a3, 1, 0xFFFFFFFFFFFFFFFFLL);
  while ( v6 != v4 );
  if ( !v30 )
  {
LABEL_27:
    v8 = *((_QWORD *)this + 8);
    v9 = *((_QWORD *)this + 7);
    v10 = 0;
    v7 = 0;
    if ( v8 )
      goto LABEL_5;
LABEL_28:
    if ( v7 < v9 )
      goto LABEL_6;
    v11 = 0;
    goto LABEL_30;
  }
  v7 = *((_QWORD *)v30 + 6);
  v8 = *((_QWORD *)this + 8);
  v9 = *((_QWORD *)this + 7);
  v10 = v7;
  if ( !v8 )
    goto LABEL_28;
LABEL_5:
  v11 = *(_QWORD *)(v8 + 48);
  if ( v11 + v10 < v9 )
    goto LABEL_6;
  if ( v9 < v11 )
    goto LABEL_14;
  v7 += v11;
LABEL_30:
  v7 -= v9;
LABEL_14:
  if ( v9 / 0x64 < v7 )
  {
    v29 = v9;
    v32 = 0;
    v31 = nullptr;
    if ( v9 / 3 >= v7 )
    {
      v28 = qvector_reserve(&v31, 0, 38, 1);
      v31 = (const char *)v28;
      *(_QWORD *)&v32 = 38;
      v18 = v29;
      *(__m128i *)v28 = _mm_load_si128((const __m128i *)&xmmword_40F70);
      v19 = v31;
      *(__m128i *)(v28 + 16) = _mm_load_si128((const __m128i *)&xmmword_40F80);
      *(_QWORD *)(v28 + 29) = 0x2E68706172672065LL;
      *((_BYTE *)v19 + 37) = 0;
    }
    else
    {
      v17 = qvector_reserve(&v31, 0, 46, 1);
      v18 = v29;
      v31 = (const char *)v17;
      *(_QWORD *)&v32 = 46;
      *(__m128i *)v17 = _mm_load_si128((const __m128i *)&xmmword_40F70);
      v19 = v31;
      *(__m128i *)(v17 + 16) = _mm_load_si128((const __m128i *)&xmmword_40F90);
      *(__m128i *)(v17 + 29) = _mm_load_si128((const __m128i *)&xmmword_40FA0);
      *((_BYTE *)v19 + 45) = 0;
    }
    if ( !(_QWORD)v32 )
      v19 = s1;
    v22 = sub_1F9A0(
            1u,
            (__int64)"HIDECANCEL\n"
                     "There are currently %lu nodes in the graph.\n"
                     "Do you want to add %lu nodes beyond the limit (%lu)?\n"
                     "%s",
            v11,
            v7,
            v18,
            v19);
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree(
        v31,
        "HIDECANCEL\n"
        "There are currently %lu nodes in the graph.\n"
        "Do you want to add %lu nodes beyond the limit (%lu)?\n"
        "%s",
        v20,
        v21,
        v23,
        v24);
    }
    if ( v22 <= 0 )
    {
      v15 = 0;
      goto LABEL_10;
    }
  }
LABEL_6:
  v12 = (volatile signed __int32 *)v30;
  if ( !v30 )
    return 1;
  v13 = *((__int64 **)v30 + 4);
  v14 = (__int64 *)((char *)v30 + 16);
  if ( v13 != (__int64 *)((char *)v30 + 16) )
  {
    do
    {
      sub_206A0(this, v13[4], v13[5]);
      v13 = (__int64 *)std::_Rb_tree_increment(v13);
    }
    while ( v14 != v13 );
    v15 = 1;
LABEL_10:
    v12 = (volatile signed __int32 *)v30;
    if ( !v30 )
      return v15;
    goto LABEL_11;
  }
  v15 = 1;
LABEL_11:
  if ( !_InterlockedSub(v12, 1u) )
  {
    v25 = v30;
    if ( v30 )
    {
      v26 = *((_QWORD *)v30 + 3);
      while ( v26 )
      {
        sub_1F600(*(_QWORD **)(v26 + 24));
        v27 = (void *)v26;
        v26 = *(_QWORD *)(v26 + 16);
        operator delete(v27, 0x30u);
      }
      operator delete(v25, 0x38u);
    }
  }
  return v15;
}

