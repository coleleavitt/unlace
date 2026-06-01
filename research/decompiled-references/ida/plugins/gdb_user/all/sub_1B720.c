unsigned __int64 __fastcall sub_1B720(__int64 a1, __int32 *a2, int a3)
{
  __int64 v6; // rdx
  __int32 v7; // ecx
  __int32 *v8; // r8
  int v9; // r9d
  __int64 v10; // r14
  __m128i *v11; // r13
  __int64 v12; // rbp
  __int32 v13; // r15d
  __int64 v14; // rbx
  int *v15; // rbp
  unsigned __int64 v16; // rdx
  __m128i *v17; // rbx
  __int32 v18; // edx
  __int32 *v19; // rax
  __m128i *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdi
  __int32 *v24; // [rsp+8h] [rbp-70h]
  __int32 v25; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int64 v26; // [rsp+20h] [rbp-58h] BYREF
  __int128 v27; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  sub_46C20();
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 864) + 116LL) != 1 )
    return v28 - __readfsqword(0x28u);
  v26 = 0;
  v10 = a3;
  v27 = 0;
  if ( !a3 )
  {
LABEL_18:
    v21 = *(_QWORD *)(a1 + 1680);
    if ( !v21 )
      goto LABEL_20;
    goto LABEL_19;
  }
  v6 = 0;
  v11 = nullptr;
  v8 = &v25;
  v12 = 0;
  do
  {
    while ( (a2[1] & 0xF) != 8 )
    {
      ++v12;
      a2 += 14;
      if ( v12 == v10 )
        goto LABEL_9;
    }
    v13 = *a2;
    v25 = *a2;
    if ( *((_QWORD *)&v27 + 1) < (unsigned __int64)(v6 + 1) )
    {
      v24 = v8;
      v26 = qvector_reserve();
      v6 = v27;
      v11 = (__m128i *)v26;
      v8 = v24;
    }
    v11->m128i_i32[v6] = v13;
    ++v12;
    a2 += 14;
    v11 = (__m128i *)v26;
    v6 = v27 + 1;
    *(_QWORD *)&v27 = v27 + 1;
  }
  while ( v12 != v10 );
LABEL_9:
  v14 = 4 * v6;
  v15 = &v11->m128i_i32[v6];
  if ( v15 != (int *)v11 )
  {
    if ( v14 >> 2 )
    {
      _BitScanReverse64(&v16, v14 >> 2);
      sub_1B590(v11, v15, 2LL * (int)v16);
      if ( v14 > 64 )
      {
        v17 = v11 + 4;
        sub_1B1E0(v11->m128i_i8, v11[4].m128i_i8);
        do
        {
          v7 = v17->m128i_i32[0];
          v18 = v17[-1].m128i_i32[3];
          v19 = &v17[-1].m128i_i32[3];
          if ( v18 <= v17->m128i_i32[0] )
          {
            v20 = v17;
          }
          else
          {
            do
            {
              v19[1] = v18;
              v20 = (__m128i *)v19;
              v18 = *--v19;
            }
            while ( v7 < v18 );
          }
          v17 = (__m128i *)((char *)v17 + 4);
          v20->m128i_i32[0] = v7;
        }
        while ( v15 != (int *)v17 );
        goto LABEL_16;
      }
    }
    else
    {
      sub_1B590(v11, v15, -2);
    }
    sub_1B1E0(v11->m128i_i8, (char *)v15);
LABEL_16:
    v6 = v27;
  }
  if ( !v6 )
    goto LABEL_18;
LABEL_19:
  sub_3BEF0(*(_QWORD *)(a1 + 864), (unsigned int)&v26, v6, v7, (_DWORD)v8, v9);
  v21 = v27;
LABEL_20:
  v22 = v26;
  *(_QWORD *)(a1 + 1680) = v21;
  if ( v22 )
  {
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  return v28 - __readfsqword(0x28u);
}

