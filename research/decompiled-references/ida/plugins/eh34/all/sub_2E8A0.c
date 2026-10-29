__int64 __fastcall sub_2E8A0(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  int v6; // ebx
  int v8; // ebp
  __int64 v9; // rax
  __m128i v10; // xmm0
  int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // rsi
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rsi
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rdx
  int v25; // ebp
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rsi
  int v29; // r13d
  __int64 v30; // rax
  __m128 v31; // xmm0
  __int64 v32; // rax
  __m128 v33; // xmm0
  __int64 v34; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v35; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v37; // [rsp+28h] [rbp-A0h]
  __int64 v38; // [rsp+40h] [rbp-88h] BYREF
  __m128i v39; // [rsp+48h] [rbp-80h] BYREF
  char v40; // [rsp+58h] [rbp-70h]
  __int64 v41; // [rsp+60h] [rbp-68h] BYREF
  __m128i v42; // [rsp+68h] [rbp-60h] BYREF
  char v43; // [rsp+78h] [rbp-50h]
  unsigned __int64 v44; // [rsp+88h] [rbp-40h]

  v6 = a3;
  v44 = __readfsqword(0x28u);
  v34 = 0;
  v35 = 0;
  if ( a3 == a4 )
  {
    sub_19A90((__int64)&v41, (__int64)"get_state_transition_sequence(%d,%d,%d): same state, no transition", a3, a3, a5);
LABEL_16:
    *(_QWORD *)a1 = v41;
    v15 = _mm_loadu_si128(&v42);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v15;
    goto LABEL_4;
  }
  v8 = a4;
  sub_2E700((__int64)&v38, a2, a3, a4);
  if ( v40 )
  {
    v9 = v38;
    v10 = _mm_loadu_si128(&v39);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v9;
    *(__m128i *)(a1 + 8) = v10;
    goto LABEL_4;
  }
  v12 = v38;
  if ( (_DWORD)v38 == -2 )
  {
    sub_19A90((__int64)&v41, (__int64)"get_state_transition_sequence(%d,%d,%d): no ancestor", v6, v8, a5);
    goto LABEL_16;
  }
  if ( a5 > (int)v38 )
  {
    sub_19A90(
      (__int64)&v41,
      (__int64)"get_state_transition_sequence(%d,%d): ancestor %d below root %d",
      v6,
      v8,
      v38,
      a5);
    goto LABEL_16;
  }
  if ( v6 != (_DWORD)v38 )
  {
    do
    {
      v13 = v35;
      v14 = v34;
      if ( *((_QWORD *)&v35 + 1) < (unsigned __int64)(v35 + 1) )
      {
        v34 = qvector_reserve(&v34, v34, v35 + 1, 4);
        v14 = v34;
        v13 = v35;
      }
      *(_DWORD *)(v14 + 4 * v13) = v6;
      *(_QWORD *)&v35 = v35 + 1;
      sub_26920((__int64)&v41, a2, v6);
      if ( v43 )
        goto LABEL_16;
      v6 = v41;
    }
    while ( v12 != (_DWORD)v41 );
  }
  v16 = v35;
  v17 = v34;
  if ( *((_QWORD *)&v35 + 1) < (unsigned __int64)(v35 + 1) )
  {
    v34 = qvector_reserve(&v34, v34, v35 + 1, 4);
    v17 = v34;
    v16 = v35;
  }
  *(_DWORD *)(v17 + 4 * v16) = v12;
  v18 = 0;
  v36 = 0;
  v19 = 0;
  v37 = 0;
  v20 = 0;
  *(_QWORD *)&v35 = v35 + 1;
  if ( v8 == v12 )
  {
    v32 = v34;
    v34 = 0;
    v33 = _mm_loadh_ps((const double *)&v35 + 1);
    *(_BYTE *)(a1 + 24) = 0;
    *(_QWORD *)a1 = v32;
    *(__m128 *)(a1 + 8) = v33;
    v35 = 0;
  }
  else
  {
    while ( 1 )
    {
      if ( v19 < v20 + 1 )
      {
        v36 = qvector_reserve(&v36, v18, v20 + 1, 4);
        v18 = v36;
        v20 = v37;
      }
      *(_DWORD *)(v18 + 4 * v20) = v8;
      *(_QWORD *)&v37 = v37 + 1;
      sub_26920((__int64)&v41, a2, v8);
      v18 = v36;
      v21 = v36;
      if ( v43 )
      {
        v22 = v41;
        v23 = _mm_loadu_si128(&v42);
        *(_BYTE *)(a1 + 24) = 1;
        *(_QWORD *)a1 = v22;
        *(__m128i *)(a1 + 8) = v23;
        goto LABEL_29;
      }
      v8 = v41;
      v20 = v37;
      if ( v12 == (_DWORD)v41 )
        break;
      v19 = *((_QWORD *)&v37 + 1);
    }
    v24 = v35;
    if ( (_QWORD)v37 )
    {
      v25 = 0;
      v26 = 0;
      while ( 1 )
      {
        v27 = v20 - 1 - v26;
        v28 = v34;
        v29 = *(_DWORD *)(v21 + 4 * v27);
        if ( *((_QWORD *)&v35 + 1) < (unsigned __int64)(v24 + 1) )
        {
          v34 = qvector_reserve(&v34, v34, v24 + 1, 4);
          v24 = v35;
          v28 = v34;
        }
        *(_DWORD *)(v28 + 4 * v24) = v29;
        v26 = ++v25;
        v24 = v35 + 1;
        v20 = v37;
        *(_QWORD *)&v35 = v35 + 1;
        if ( v25 >= (unsigned __int64)v37 )
          break;
        v21 = v36;
      }
      v18 = v36;
    }
    v30 = v34;
    *(_BYTE *)(a1 + 24) = 0;
    v31 = _mm_loadh_ps((const double *)&v35 + 1);
    v34 = 0;
    *(__m128 *)(a1 + 8) = v31;
    *(_QWORD *)a1 = v30;
    v35 = 0;
LABEL_29:
    if ( v18 )
    {
      *(_QWORD *)&v37 = 0;
      qfree(v18);
    }
  }
LABEL_4:
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34);
  }
  return a1;
}

