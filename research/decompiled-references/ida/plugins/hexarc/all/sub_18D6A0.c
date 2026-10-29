__int64 __fastcall sub_18D6A0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // rdx
  __m128i *v10; // rax
  __m128i *v11; // rcx
  unsigned int v12; // ebx
  signed int **v14; // rax
  signed int *v15; // r12
  signed int **v16; // r13
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // r9
  const __m128i *v21; // rdi
  __int64 v22; // rdx
  __m128i v23; // xmm0
  __int64 v25; // rax
  __int64 v26; // [rsp+8h] [rbp-78h]
  __int64 v27; // [rsp+10h] [rbp-70h]
  __int64 v29[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v30; // [rsp+30h] [rbp-50h]
  __int128 v31; // [rsp+38h] [rbp-48h]
  unsigned __int64 v32; // [rsp+48h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  if ( !a3 )
  {
    *(_BYTE *)(a2 + 48) = 1;
    return 1;
  }
  v5 = *(_QWORD *)(a1 + 24);
  if ( a3 >= *(_DWORD *)(v5 + 64) )
    sub_18A710();
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 528) + 8LL * a3);
  v31 = 0;
  v29[0] = 0;
  v29[1] = 0;
  v30 = 0;
  sub_FD6A0(a4, v5, (__int64)v29);
  v8 = sub_122A90(v7, v29, *(_QWORD *)(v7 + 56), 0, nullptr, 0, 0x101u);
  if ( !v8 )
    goto LABEL_10;
  if ( !sub_18AB10((_QWORD *)a1, v8, a4) )
  {
LABEL_18:
    v12 = 0;
    goto LABEL_11;
  }
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(__m128i **)a2;
  v11 = (__m128i *)(*(_QWORD *)a2 + 24 * v9);
  if ( *(__m128i **)a2 == v11 )
    goto LABEL_16;
  while ( v8 != v10->m128i_i64[1] )
  {
    v10 = (__m128i *)((char *)v10 + 24);
    if ( v11 == v10 )
      goto LABEL_16;
  }
  if ( v10 == v11 )
  {
LABEL_16:
    if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v9 + 1) )
    {
      v27 = *(_QWORD *)(a2 + 16);
      v17 = qvector_reserve();
      v18 = *(_QWORD *)(a2 + 8);
      v19 = v17;
      v20 = *(_QWORD *)(a2 + 16);
      v21 = *(const __m128i **)a2;
      *(_QWORD *)(a2 + 16) = v27;
      v22 = v18 - 1;
      if ( v22 >= 0 )
      {
        do
        {
          v23 = _mm_loadu_si128(v21);
          v17 += 24;
          v21 = (const __m128i *)((char *)v21 + 24);
          *(__m128i *)(v17 - 24) = v23;
          *(_QWORD *)(v17 - 8) = v21[-1].m128i_i64[1];
        }
        while ( v22-- != 0 );
      }
      v26 = v20;
      qfree();
      v25 = 3LL * *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v19;
      *(_QWORD *)(a2 + 16) = v26;
      v11 = (__m128i *)(v19 + 8 * v25);
    }
    v11[1].m128i_i64[0] = 0;
    *v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)(unsigned __int64)v8);
    ++*(_QWORD *)(a2 + 8);
    if ( !sub_A36D0(v7, v29, *(_QWORD *)(v8 + 8), 0, 1u) )
    {
      v14 = (signed int **)sub_FE730((unsigned __int64 *)(**(_QWORD **)(a1 + 8) + 24LL * *(int *)(v7 + 72)), a4);
      v15 = *v14;
      v16 = v14;
      if ( 4LL * (_QWORD)v14[1] )
      {
        while ( (unsigned __int8)sub_18D3E0(a1, (_QWORD *)a2, *v15, (__int64)v16) )
        {
          if ( ++v15 == &(*v16)[(_QWORD)v16[1]] )
            goto LABEL_10;
        }
        v12 = 0;
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    goto LABEL_18;
  }
LABEL_10:
  v12 = 1;
LABEL_11:
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  qfree();
  return v12;
}

