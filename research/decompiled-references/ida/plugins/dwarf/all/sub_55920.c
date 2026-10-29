__int64 __fastcall sub_55920(_DWORD *a1, __int64 a2, const __m128i **a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __m128i *v6; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  const __m128i *v10; // rdx
  const __m128i *v11; // r15
  const __m128i *v12; // r10
  unsigned __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rax
  const __m128i *v18; // rcx
  __int64 v19; // r14
  const __m128i *v20; // rax
  const __m128i *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __m128i v24; // xmm0
  const __m128i *v26; // rax
  __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // [rsp+8h] [rbp-90h]
  __int64 v30; // [rsp+10h] [rbp-88h]
  __int64 v31; // [rsp+18h] [rbp-80h]
  __int64 v32; // [rsp+20h] [rbp-78h]
  const __m128i *v33; // [rsp+28h] [rbp-70h]
  const __m128i *v34; // [rsp+28h] [rbp-70h]
  __int64 v35; // [rsp+38h] [rbp-60h] BYREF
  int v36; // [rsp+40h] [rbp-58h] BYREF
  __int64 v37; // [rsp+48h] [rbp-50h]
  __int64 v38; // [rsp+50h] [rbp-48h]
  unsigned __int64 v39; // [rsp+58h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  while ( 1 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    v36 = 0;
    v37 = -1;
    v5 = *(_QWORD *)(v4 + 16);
    v35 = 0;
    v38 = *(unsigned int *)(*(_QWORD *)(v5 + 144) + 192LL);
    if ( !(unsigned __int8)sub_554E0(&v35, (__int64)&v36, a1, 1) || *(_DWORD *)v35 != 1 || (v36 & 0xFFFFFFFD) != 0 )
      goto LABEL_4;
    v8 = *(_QWORD *)(v35 + 8);
    v9 = *(_QWORD *)(v8 + 232);
    v30 = v8;
    if ( (v9 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v9 == -1 )
      goto LABEL_20;
    v10 = a3[1];
    v11 = *a3;
    v29 = v8 + 232;
    v6 = (__m128i *)&(*a3)[(_QWORD)v10];
    if ( *a3 != v6 )
    {
      do
      {
        if ( !(unsigned int)sub_849A0(v29, v11) )
          break;
        ++v11;
      }
      while ( v6 != v11 );
      v10 = a3[1];
      v6 = (__m128i *)&(*a3)[(_QWORD)v10];
      if ( v11 != v6 )
        goto LABEL_4;
    }
    v12 = a3[2];
    v13 = (unsigned __int64)v10->m128i_u64 + 1;
    v14 = *(_QWORD *)(v30 + 232);
    v15 = *(_QWORD *)(v30 + 240);
    if ( (unsigned __int64)v12 < v13 )
    {
LABEL_22:
      v33 = v12;
      v32 = v15;
      v31 = v14;
      v17 = qvector_reserve(a3, 0, v13, 16);
      v18 = a3[2];
      v19 = v17;
      v20 = a3[1];
      v21 = *a3;
      a3[2] = v33;
      v22 = (__int64)&v20[-1].m128i_i64[1] + 7;
      if ( v22 >= 0 )
      {
        v23 = v19;
        do
        {
          v24 = _mm_loadu_si128(v21);
          v23 += 16;
          ++v21;
          *(__m128i *)(v23 - 16) = v24;
        }
        while ( v22-- != 0 );
        v21 = *a3;
      }
      v34 = v18;
      qfree(v21);
      v26 = a3[1];
      *a3 = (const __m128i *)v19;
      v15 = v32;
      v14 = v31;
      a3[2] = v34;
      v6 = (__m128i *)(16LL * (_QWORD)v26 + v19);
    }
    v6->m128i_i64[0] = v14;
    v6->m128i_i64[1] = v15;
    a3[1] = (const __m128i *)((char *)a3[1] + 1);
    LOBYTE(v6) = *(_QWORD *)(a2 + 232) != -1 && (*(_QWORD *)(a2 + 232) & 0x7FFFFFFFFFFFFFFFLL) != 0;
    if ( !(_BYTE)v6 )
    {
LABEL_20:
      if ( under_debugger )
        BUG();
      interr(30478);
      goto LABEL_22;
    }
    if ( !(unsigned int)sub_849A0(v29, a2 + 232) )
      return (unsigned int)v6;
    v16 = *(_DWORD *)(v30 + 272);
    if ( v16 == 2 )
      break;
    if ( v16 != 1 )
      goto LABEL_4;
    a1 = (_DWORD *)(v30 + 392);
  }
  v27 = *(_QWORD *)(v30 + 384);
  v28 = v27 + 104LL * *(_QWORD *)(v30 + 392);
  if ( v28 == v27 )
  {
LABEL_4:
    LODWORD(v6) = 0;
  }
  else
  {
    while ( !(unsigned __int8)sub_55920(v27 + 48, a2, a3) )
    {
      v27 += 104;
      if ( v27 == v28 )
        goto LABEL_4;
    }
  }
  return (unsigned int)v6;
}

