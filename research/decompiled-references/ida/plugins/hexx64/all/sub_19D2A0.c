__int64 __fastcall sub_19D2A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned int v6; // r13d
  __int64 v7; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // r15
  unsigned __int64 v16; // r8
  void *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r13
  __int64 v21; // r12
  __int64 v22; // rbp
  __int64 v23; // rbx
  __int64 *v24; // r15
  __int64 v25; // rdi
  __int64 v26; // rbx
  void *v27; // rax
  void *v28; // rbx
  __int64 v29; // rdi
  __m128i v30; // xmm2
  __int64 v31; // rsi
  __int64 v32; // rax
  __m128i v33; // [rsp+0h] [rbp-C8h] BYREF
  size_t n; // [rsp+10h] [rbp-B8h]
  _QWORD *v35; // [rsp+18h] [rbp-B0h]
  _QWORD v36[2]; // [rsp+20h] [rbp-A8h] BYREF
  void *dest; // [rsp+30h] [rbp-98h]
  __int64 v38; // [rsp+38h] [rbp-90h]
  __int64 v39; // [rsp+40h] [rbp-88h]
  __int128 v40; // [rsp+48h] [rbp-80h]
  __int64 v41; // [rsp+58h] [rbp-70h]
  __int64 v42; // [rsp+60h] [rbp-68h]
  __int128 v43; // [rsp+68h] [rbp-60h]
  __int64 v44; // [rsp+78h] [rbp-50h]
  int v45; // [rsp+80h] [rbp-48h]
  unsigned __int64 v46; // [rsp+88h] [rbp-40h]

  v6 = 0;
  v46 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  if ( (_DWORD)v7 )
  {
    v9 = (int)v7;
    v10 = *(_QWORD *)(a1 + 8);
    if ( v10 < v9 )
    {
      v31 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < v9 )
      {
        v32 = qvector_reserve(a1, v31, v9, 8);
        *(_QWORD *)a1 = v32;
        v31 = v32;
        v10 = *(_QWORD *)(a1 + 8);
      }
      memset((void *)(v31 + 8 * v10), 0, 8 * (v9 - v10));
      *(_QWORD *)(a1 + 8) = v9;
    }
    else if ( v9 != v10 )
    {
      *(_QWORD *)(a1 + 8) = v9;
    }
    v12 = *(_QWORD *)(a1 + 32);
    dest = nullptr;
    v13 = *(_QWORD *)(v12 + 480);
    v36[0] = &off_4DE288;
    v38 = 0;
    v36[1] = v13;
    v39 = 0;
    v41 = a1;
    v42 = 0;
    v44 = -1;
    v45 = -1;
    v35 = v36;
    v40 = 0;
    v43 = 0;
    sub_331E00(v36, v12, a3, a4, a5, a6);
    *(_QWORD *)(v41 + 8) = 0;
    v14 = v42;
    v15 = v42 + 56 * v43;
    if ( v42 != v15 )
    {
      do
      {
        v16 = *(_QWORD *)(v14 + 8);
        v17 = *(void **)v14;
        if ( *(_QWORD *)(*(_QWORD *)v14 + 8 * v16 - 8) )
        {
          v18 = (int)v16;
          v19 = (__int64)v17 + 8 * (int)v16 - 8;
          while ( 1 )
          {
            if ( (int)v18 <= 0 )
            {
              v20 = v41;
              if ( *(_QWORD *)(v41 + 8) >= v16 )
                goto LABEL_13;
              goto LABEL_28;
            }
            v19 -= 8;
            v12 = (unsigned int)(v18 - 1);
            if ( !*(_QWORD *)(v19 + 8) )
              break;
            v18 = (int)v12;
          }
          v12 = (__int64)v17 + 8 * v18;
          v26 = (8 * v18) >> 3;
          memmove(v17, (const void *)v12, 8 * v16 - 8 * v18);
          v16 = *(_QWORD *)(v14 + 8) - v26;
          *(_QWORD *)(v14 + 8) = v16;
          v20 = v41;
          if ( *(_QWORD *)(v41 + 8) >= v16 )
            goto LABEL_13;
LABEL_28:
          v33.m128i_i64[0] = v16;
          n = 8 * v16;
          v27 = (void *)qalloc_or_throw(8 * v16, v12, 8 * v16, v19);
          v12 = *(_QWORD *)v14;
          v28 = v27;
          v33 = _mm_unpacklo_epi64((__m128i)v33.m128i_u64[0], (__m128i)v33.m128i_u64[0]);
          memcpy(v27, (const void *)v12, n);
          v29 = *(_QWORD *)v20;
          if ( *(_QWORD *)v20 )
          {
            *(_QWORD *)(v20 + 8) = 0;
            qfree(v29);
          }
          v30 = _mm_load_si128(&v33);
          *(_QWORD *)v20 = v28;
          *(__m128i *)(v20 + 8) = v30;
          *(_QWORD *)(v20 + 24) = *(_QWORD *)(v14 + 24);
          *(_QWORD *)(v20 + 32) = *(_QWORD *)(v14 + 32);
          *(_DWORD *)(v20 + 40) = *(_DWORD *)(v14 + 40);
          *(_DWORD *)(v20 + 44) = *(_DWORD *)(v14 + 44);
          *(_DWORD *)(v20 + 48) = *(_DWORD *)(v14 + 48);
        }
LABEL_13:
        v14 += 56;
      }
      while ( v15 != v14 );
      v15 = v42;
      v14 = v42;
    }
    v6 = 1;
    if ( !*(_QWORD *)(v41 + 8) )
    {
      *(_DWORD *)(a1 + 44) = -1;
      v6 = 0;
    }
    v36[0] = &off_4DE288;
    if ( v15 )
    {
      v21 = v43;
      if ( (_QWORD)v43 )
      {
        v22 = 0;
        v23 = 0;
        do
        {
          v24 = (__int64 *)(v22 + v15);
          v25 = *v24;
          if ( *v24 )
          {
            v24[1] = 0;
            qfree(v25);
            v14 = v42;
          }
          ++v23;
          v15 = v14;
          v22 += 56;
        }
        while ( v21 != v23 );
      }
      *(_QWORD *)&v43 = 0;
      qfree(v15);
    }
    v36[0] = &unk_4EBEE0;
    if ( v39 )
    {
      *(_QWORD *)&v40 = 0;
      qfree(v39);
    }
    qfree((__int64)dest);
  }
  return v6;
}

