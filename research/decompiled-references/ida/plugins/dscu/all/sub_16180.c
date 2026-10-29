__int64 __fastcall sub_16180(_QWORD *a1, const char *a2, __int64 *a3)
{
  void *v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  size_t v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  size_t v11; // r14
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  size_t v16; // r15
  void *v17; // rax
  __int64 v18; // rax
  int *v19; // rax
  const char *v20; // rax
  const char *v21; // rbx
  size_t v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  size_t v25; // rbp
  void *v26; // rdi
  size_t v27; // r12
  __int64 v28; // rsi
  __m128i si128; // xmm0
  __int64 v30; // rax
  __int64 v31; // rax

  v4 = (void *)a1[14];
  if ( v4 )
  {
    sub_8270(a1[14]);
    operator delete(v4, 0x360u);
  }
  v5 = operator new(0x360u);
  v6 = netnode_altval(a1[13], 6, 65);
  v7 = a1[3];
  *(_QWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 528) = 0;
  *(_QWORD *)v5 = v7;
  *(_QWORD *)(v5 + 552) = 0;
  *(_QWORD *)(v5 + 576) = 0;
  *(_QWORD *)(v5 + 600) = 0;
  *(_QWORD *)(v5 + 624) = 0;
  *(_QWORD *)(v5 + 648) = 0;
  *(_QWORD *)(v5 + 672) = 0;
  *(_QWORD *)(v5 + 696) = v6;
  *(_QWORD *)(v5 + 704) = 0;
  *(_QWORD *)(v5 + 728) = 0;
  *(_QWORD *)(v5 + 752) = 0;
  *(_QWORD *)(v5 + 760) = -1;
  *(_QWORD *)(v5 + 768) = 0;
  *(_QWORD *)(v5 + 808) = 0;
  *(_QWORD *)(v5 + 816) = 0;
  *(_DWORD *)(v5 + 856) = 0;
  *(_OWORD *)(v5 + 536) = 0;
  *(_OWORD *)(v5 + 560) = 0;
  *(_OWORD *)(v5 + 584) = 0;
  *(_OWORD *)(v5 + 608) = 0;
  *(_OWORD *)(v5 + 632) = 0;
  *(_OWORD *)(v5 + 656) = 0;
  *(_OWORD *)(v5 + 680) = 0;
  *(_OWORD *)(v5 + 712) = 0;
  *(_OWORD *)(v5 + 736) = 0;
  *(_OWORD *)(v5 + 776) = 0;
  *(_OWORD *)(v5 + 792) = 0;
  *(_OWORD *)(v5 + 824) = 0;
  *(_OWORD *)(v5 + 840) = 0;
  *(_BYTE *)(v5 + 860) = 0;
  a1[14] = v5;
  if ( a2
    && (v8 = strlen(a2), (v11 = v8) != 0)
    && (v16 = v8 + 1,
        v17 = (void *)qvector_reserve(v5 + 832, 0, v8 + 1, 1, v9, v10),
        *(_QWORD *)(v5 + 840) = v16,
        *(_QWORD *)(v5 + 832) = v17,
        memmove(v17, a2, v11),
        *(_BYTE *)(*(_QWORD *)(v5 + 832) + v11) = 0,
        *(_QWORD *)(v5 + 840)) )
  {
    v18 = open_linput(*(_QWORD *)(v5 + 832), 0);
    *(_QWORD *)(v5 + 8) = v18;
    if ( !v18 )
      goto LABEL_10;
  }
  else
  {
    v12 = open_linput(byte_190C8, 0);
    *(_QWORD *)(v5 + 8) = v12;
    if ( !v12 )
    {
LABEL_10:
      v19 = __errno_location();
      v20 = (const char *)winerr((unsigned int)*v19);
      v21 = v20;
      if ( v20 && (v22 = strlen(v20), (v25 = v22) != 0) )
      {
        v26 = (void *)*a3;
        v27 = v22 + 1;
        if ( a3[2] < v22 + 1 )
        {
          v31 = qvector_reserve(a3, *a3, v22 + 1, 1, v23, v24);
          *a3 = v31;
          v26 = (void *)v31;
        }
        a3[1] = v27;
        memmove(v26, v21, v25);
        *(_BYTE *)(*a3 + v25) = 0;
        return 0;
      }
      else
      {
        a3[1] = 0;
        return 0;
      }
    }
  }
  *(_BYTE *)(v5 + 774) = 1;
  result = sub_15540(a1[14], 255, a2);
  if ( !(_BYTE)result )
  {
    v28 = *a3;
    if ( (unsigned __int64)a3[2] <= 0x1B )
    {
      v30 = qvector_reserve(a3, v28, 28, 1, v14, v15);
      *a3 = v30;
      v28 = v30;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_19180);
    a3[1] = 28;
    *(__m128i *)v28 = si128;
    *(__m128i *)(v28 + 11) = _mm_load_si128((const __m128i *)&xmmword_19190);
    *(_BYTE *)(*a3 + 27) = 0;
    return 0;
  }
  return result;
}

