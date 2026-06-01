unsigned __int64 __fastcall sub_1B5CE0(_QWORD *a1)
{
  __int64 *v1; // rax
  __int64 v2; // r13
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 *v10; // rdx
  __m128i v11; // xmm0
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rdi
  unsigned __int64 v16; // xmm0_8
  __int64 v17; // rdx
  __int64 i; // rbx
  _QWORD *v19; // rax
  __int64 v21; // [rsp+0h] [rbp-68h]
  __int64 v22; // [rsp+0h] [rbp-68h]
  __int128 v23; // [rsp+8h] [rbp-60h]
  char *v24; // [rsp+18h] [rbp-50h]
  __int128 v25; // [rsp+20h] [rbp-48h]
  unsigned __int64 v26; // [rsp+38h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v1 = (__int64 *)a1[3];
  v25 = 0;
  v2 = v1[4];
  v23 = 0;
  v24 = nullptr;
  if ( (_DWORD)v2 )
  {
    v21 = qvector_reserve();
    *(_QWORD *)v21 = 0;
    *(_OWORD *)(v21 + 8) = 0;
    v4 = 1;
    if ( (unsigned __int64)(int)v2 > 1 )
    {
      v5 = 24;
      do
      {
        ++v4;
        v6 = v5 + v21;
        v5 += 24;
        *(_QWORD *)v6 = 0;
        *(_OWORD *)(v6 + 8) = 0;
      }
      while ( (int)v2 != v4 );
    }
    *(_QWORD *)&v23 = (int)v2;
    v24 = (char *)qvector_reserve();
    memset(v24, 0, 4LL * (int)v2);
    *(_QWORD *)&v25 = (int)v2;
    if ( (int)v2 > 0 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        v9 = *(int *)(*a1 + v8);
        v10 = (__int64 *)(v7 + v21);
        v7 += 24;
        v11 = _mm_loadu_si128((const __m128i *)(v10 + 1));
        v12 = (_QWORD *)(*(_QWORD *)a1[3] + 24 * v9);
        v13 = *v10;
        *v10 = *v12;
        v10[1] = v12[1];
        v10[2] = v12[2];
        *v12 = v13;
        *(__m128i *)(v12 + 1) = v11;
        *(_DWORD *)&v24[v8] = *(_DWORD *)(*(_QWORD *)(a1[3] + 24LL) + 4 * v9);
        v8 += 4;
      }
      while ( v8 != 4LL * (unsigned int)(v2 - 1) + 4 );
    }
    v1 = (__int64 *)a1[3];
    v14 = v21;
  }
  else
  {
    v14 = 0;
  }
  v15 = *v1;
  v16 = _mm_loadu_si128((const __m128i *)(v1 + 1)).m128i_u64[0];
  *v1 = v14;
  v22 = v15;
  *(_OWORD *)(v1 + 1) = v23;
  v17 = v1[3];
  v1[3] = (__int64)v24;
  *((_OWORD *)v1 + 2) = v25;
  if ( v17 )
    qfree();
  if ( v15 )
  {
    if ( v16 )
    {
      for ( i = 0; i != v16; ++i )
      {
        v19 = (_QWORD *)(v15 + 24 * i);
        if ( *v19 )
        {
          v19[1] = 0;
          qfree();
        }
        v15 = v22;
      }
    }
    qfree();
  }
  return v26 - __readfsqword(0x28u);
}

