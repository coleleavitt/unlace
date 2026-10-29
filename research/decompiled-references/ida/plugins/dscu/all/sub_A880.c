__int64 __fastcall sub_A880(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rdi
  _QWORD *v17; // r15
  __int64 v18; // rdx
  _QWORD *v19; // rbp
  __int64 v20; // rsi
  int v21; // r12d
  __int64 v22; // rax
  unsigned int v23; // ebp
  __m128i *v24; // rbx
  __int64 v25; // rdi
  _DWORD *v27; // rax
  const void *v28; // rsi
  __int64 (__fastcall **v29)(); // [rsp+30h] [rbp-138h] BYREF
  __int64 v30; // [rsp+38h] [rbp-130h]
  __int128 v31; // [rsp+40h] [rbp-128h]
  __int64 v32; // [rsp+50h] [rbp-118h]
  __int64 v33; // [rsp+58h] [rbp-110h]
  int v34; // [rsp+60h] [rbp-108h]
  __m128i v35; // [rsp+68h] [rbp-100h] BYREF
  int v36; // [rsp+78h] [rbp-F0h]
  char v37; // [rsp+80h] [rbp-E8h] BYREF
  char v38; // [rsp+C8h] [rbp-A0h] BYREF
  int v39; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v40; // [rsp+E8h] [rbp-80h]
  _DWORD *v41; // [rsp+F0h] [rbp-78h] BYREF
  __int128 v42; // [rsp+F8h] [rbp-70h]
  _QWORD *v43; // [rsp+108h] [rbp-60h]
  __int128 v44; // [rsp+110h] [rbp-58h]
  unsigned __int64 v45; // [rsp+128h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v30 = 0x7FF000004LL;
  v31 = -1;
  v29 = (__int64 (__fastcall **)())&unk_1EB20;
  v32 = 0;
  v33 = a3;
  v34 = 2;
  v36 = -1;
  v8 = (int *)&v37;
  v35 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1EAB8), (__m128i)(unsigned __int64)off_1EA90);
  do
  {
    *(_QWORD *)v8 = 0;
    v8 += 6;
    *((_OWORD *)v8 - 1) = 0;
  }
  while ( &v39 != v8 );
  v39 = 0;
  v9 = HIDWORD(v30);
  v10 = ((HIDWORD(v30) >> 19) & 0x3F) - 1;
  if ( ((HIDWORD(v30) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v30) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449);
      BUG();
    }
    v9 = HIDWORD(v30) & 0xFE07FFFF;
    BYTE3(v30) = ((HIDWORD(v30) >> 19) & 0x3F) - 1;
    HIDWORD(v30) &= 0xFE07FFFF;
  }
  v11 = *(_QWORD *)(a4 + 8);
  v40 = a1;
  v29 = off_1E690;
  v41 = nullptr;
  v42 = 0;
  if ( v11 )
  {
    v27 = (_DWORD *)qalloc_or_throw(4 * v11);
    v28 = *(const void **)a4;
    v41 = v27;
    *((_QWORD *)&v42 + 1) = v11;
    memcpy(v27, v28, 4 * v11);
    *(_QWORD *)&v42 = v11;
    v43 = nullptr;
    v44 = 0;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 112);
    v43 = nullptr;
    v44 = 0;
    sub_9FF0(v12, (__int64 *)&v41, v9, v10, a5, a6);
  }
  v13 = callui(16, 0, &v29);
  v16 = v43;
  if ( v13 < 0 )
  {
    v23 = 0;
  }
  else
  {
    v17 = &v43[v44];
    if ( v43 == v17 )
    {
      v23 = 1;
    }
    else
    {
      v18 = a2[1];
      v19 = v43;
      do
      {
        v20 = *a2;
        v21 = v41[*v19];
        if ( a2[2] < (unsigned __int64)(v18 + 1) )
        {
          v22 = qvector_reserve(a2, v20, v18 + 1, 4, v14, v15);
          *a2 = v22;
          v18 = a2[1];
          v20 = v22;
        }
        *(_DWORD *)(v20 + 4 * v18) = v21;
        ++v19;
        v18 = a2[1] + 1;
        a2[1] = v18;
      }
      while ( v17 != v19 );
      v16 = v43;
      v23 = 1;
    }
  }
  v29 = off_1E690;
  if ( v16 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v16);
  }
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41);
  }
  v29 = (__int64 (__fastcall **)())&unk_1EB20;
  v24 = (__m128i *)&v38;
  do
  {
    v25 = v24->m128i_i64[0];
    if ( v24->m128i_i64[0] )
    {
      v24->m128i_i64[1] = 0;
      qfree(v25);
    }
    v24 = (__m128i *)((char *)v24 - 24);
  }
  while ( &v35 != v24 );
  return v23;
}

