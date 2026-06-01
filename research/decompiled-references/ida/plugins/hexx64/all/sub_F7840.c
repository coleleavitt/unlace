unsigned __int64 __fastcall sub_F7840(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // r12
  void (__fastcall *v13)(_QWORD *); // rax
  _QWORD *v14; // rbp
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 *v18; // rbp
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rax
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  __m128i v28; // xmm0
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  __m128i v31; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v32; // [rsp+18h] [rbp-30h]

  v32 = __readfsqword(0x28u);
  v6 = j__qalloc_or_throw(176, a2, a3, a4);
  v9 = sub_670E0((_QWORD *)a1, a2, v7, v8);
  sub_70F60(v6, v9);
  v12 = *(_QWORD **)(a1 + 784);
  *(_QWORD *)(a1 + 1240) = v6;
  if ( v12 )
  {
    v13 = *(void (__fastcall **)(_QWORD *))(*v12 + 8LL);
    if ( (char *)v13 == (char *)sub_66F30 )
    {
      v14 = v12 + 27;
      *v12 = off_4EC750;
      do
      {
        v15 = (__int64)v14;
        v14 -= 4;
        sub_66C80(v15, a5);
      }
      while ( v12 + 3 != v14 );
      v16 = v12[1];
      *v12 = &unk_4EC808;
      if ( v16 )
      {
        v12[2] = 0;
        qfree(v16);
      }
      j__qfree((__int64)v12);
    }
    else
    {
      v13(v12);
    }
  }
  *(_QWORD *)(a1 + 784) = 0;
  v17 = qalloc_or_throw(24, v9, v10, v11);
  *(_QWORD *)v17 = 0;
  v18 = (__int64 *)v17;
  *(_OWORD *)(v17 + 8) = 0;
  v19 = *(int *)(a1 + 64);
  *(_QWORD *)(a1 + 1248) = v17;
  v20 = *(_QWORD *)(v17 + 8);
  v21 = v19;
  if ( v19 != v20 )
  {
    v31 = 0;
    if ( v19 >= v20 )
    {
      v26 = *v18;
      v27 = v18[2];
      if ( (unsigned __int64)&v31 >= *v18 && (unsigned __int64)&v31 < v26 + 16 * v27 )
      {
        if ( v27 < v19 )
        {
          *v18 = qvector_reserve((__int64)v18, v26, v19, 16);
          v20 = v18[1];
        }
        if ( v20 < v19 )
        {
          do
          {
            v30 = v20++;
            *(_OWORD *)(*v18 + 16 * v30) = 0;
          }
          while ( v19 != v20 );
        }
      }
      else
      {
        if ( v27 < v19 )
        {
          *v18 = qvector_reserve((__int64)v18, v26, v19, 16);
          v20 = v18[1];
        }
        if ( v20 < v19 )
        {
          v28 = _mm_load_si128(&v31);
          do
          {
            v29 = v20++;
            *(__m128i *)(*v18 + 16 * v29) = v28;
          }
          while ( v19 != v20 );
        }
      }
    }
    v18[1] = v19;
    v21 = *(_DWORD *)(a1 + 64);
  }
  v22 = 0;
  if ( v21 > 0 )
  {
    do
    {
      v23 = (_QWORD *)(*v18 + 16 * v22);
      *v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v22) + 32LL);
      v24 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v22++);
      v23[1] = *(_QWORD *)(v24 + 40);
    }
    while ( *(_DWORD *)(a1 + 64) > (int)v22 );
  }
  return v32 - __readfsqword(0x28u);
}

