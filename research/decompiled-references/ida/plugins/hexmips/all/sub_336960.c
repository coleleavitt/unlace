unsigned __int64 __fastcall sub_336960(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // al
  __int64 v4; // r12
  unsigned __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rax
  size_t v9; // rdx
  __m128i *v10; // r12
  __int64 v11; // rax
  char v12; // r12
  __int64 v13; // rsi
  __int64 v14; // r12
  unsigned __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rax
  size_t v19; // rdx
  __m128i *v20; // r12
  __int64 v21; // [rsp+10h] [rbp-58h] BYREF
  __int128 v22; // [rsp+18h] [rbp-50h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  netnode_check();
  if ( *(_DWORD *)(a1 + 1420) )
  {
    v21 = *(unsigned int *)(a1 + 1420);
    netnode_set();
  }
  else
  {
    netnode_delvalue();
  }
  v1 = *(_QWORD *)(a1 + 840);
  v2 = *(_BYTE *)(v1 + 286);
  if ( (v2 & 1) != 0 )
  {
    *(_BYTE *)(v1 + 286) = v2 & 0xFE;
    v22 = 0;
    v21 = qvector_reserve();
    *(_BYTE *)v21 = 89;
    *(_QWORD *)&v22 = v22 + 1;
    sub_785F0(&v21);
    sub_785F0(&v21);
    sub_785F0(&v21);
    sub_785F0(&v21);
    sub_785F0(&v21);
    sub_785F0(&v21);
    sub_785F0(&v21);
    sub_785F0(&v21);
    sub_785F0(&v21);
    v4 = v22;
    v5 = v22 + 32;
    v6 = v22 + 32;
    if ( (unsigned __int64)v22 >= 0xFFFFFFFFFFFFFFE0LL )
    {
      v6 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v7 = v21;
      v8 = v22;
      v9 = 32;
      if ( *((_QWORD *)&v22 + 1) < v5 )
      {
        v21 = qvector_reserve();
        v7 = v21;
        v8 = v22;
        v9 = v5 - v22;
      }
      memset((void *)(v7 + v8), 0, v9);
    }
    *(_QWORD *)&v22 = v6;
    v10 = (__m128i *)(v21 + v4);
    *v10 = _mm_loadu_si128((const __m128i *)(a1 + 608));
    v10[1] = _mm_loadu_si128((const __m128i *)(a1 + 624));
    sub_785F0(&v21);
    sub_785F0(&v21);
    sub_785F0(&v21);
    sub_785F0(&v21);
    v11 = v22;
    v12 = *(_BYTE *)(a1 + 712);
    v13 = v21;
    if ( *((_QWORD *)&v22 + 1) < (unsigned __int64)(v22 + 1) )
    {
      v21 = qvector_reserve();
      v13 = v21;
      v11 = v22;
    }
    *(_BYTE *)(v13 + v11) = v12;
    *(_QWORD *)&v22 = v22 + 1;
    sub_785F0(&v21);
    sub_785F0(&v21);
    v14 = v22;
    v15 = v22 + 32;
    v16 = v22 + 32;
    if ( (unsigned __int64)v22 >= 0xFFFFFFFFFFFFFFE0LL )
    {
      v16 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v17 = v21;
      v18 = v22;
      v19 = 32;
      if ( *((_QWORD *)&v22 + 1) < v15 )
      {
        v21 = qvector_reserve();
        v17 = v21;
        v18 = v22;
        v19 = v15 - v22;
      }
      memset((void *)(v17 + v18), 0, v19);
    }
    *(_QWORD *)&v22 = v16;
    v20 = (__m128i *)(v21 + v14);
    *v20 = _mm_loadu_si128((const __m128i *)(a1 + 728));
    v20[1] = _mm_loadu_si128((const __m128i *)(a1 + 744));
    sub_785F0(&v21);
    if ( (unsigned __int64)v22 > 0x400 )
    {
      if ( !under_debugger )
        sub_37E160(51484);
      BUG();
    }
    netnode_supset();
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree();
    }
  }
  return v23 - __readfsqword(0x28u);
}

