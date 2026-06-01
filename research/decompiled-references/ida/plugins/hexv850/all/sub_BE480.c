unsigned __int64 __fastcall sub_BE480(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 *v5; // r12
  __int64 v6; // rax
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rdx
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rbp
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+0h] [rbp-48h] BYREF
  __int128 v33; // [rsp+8h] [rbp-40h]
  unsigned __int64 v34; // [rsp+18h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  v2 = a2;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 8;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  *(_OWORD *)(a1 + 176) = 0;
  v3 = operator new(0x40u);
  v4 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 112) = v3;
  v5 = (__int64 *)(v3 + ((4 * v4 - 4) & 0xFFFFFFFFFFFFFFF8LL));
  v6 = operator new(0x1F8u);
  *v5 = v6;
  v7 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)(unsigned __int64)v6);
  *(_QWORD *)(a1 + 192) = 0;
  v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(v6 + 504), (__m128i)(unsigned __int64)v5);
  *(_QWORD *)(a1 + 232) = 0;
  *(__m128i *)(a1 + 144) = v8;
  *(__m128i *)(a1 + 176) = v8;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 392) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 280) = 0;
  *(_OWORD *)(a1 + 304) = 0;
  *(_OWORD *)(a1 + 376) = 0;
  *(_OWORD *)(a1 + 400) = 0;
  v9 = *(int *)(a2 + 64);
  *(_QWORD *)(a1 + 416) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 320) = a2;
  *(_QWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 228) = -1;
  *(_QWORD *)(a1 + 328) = 0;
  *(_DWORD *)(a1 + 424) = -1;
  *(_DWORD *)(a1 + 224) = v9 - 1;
  *(__m128i *)(a1 + 128) = v7;
  *(__m128i *)(a1 + 160) = v7;
  LODWORD(v32) = -1;
  v10 = *(_QWORD *)(a1 + 24);
  if ( v9 >= v10 )
  {
    if ( v10 < v9 )
    {
      v22 = *(_QWORD *)(a1 + 16);
      v23 = *(_QWORD *)(a1 + 32);
      if ( (unsigned __int64)&v32 < v22 || (unsigned __int64)&v32 >= v22 + 4 * v23 )
      {
        if ( v23 >= v9
          || (v31 = qvector_reserve(), v10 = *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 16) = v31, v22 = v31, v10 < v9) )
        {
          while ( 1 )
          {
            *(_DWORD *)(v22 + 4 * v10++) = -1;
            if ( v9 == v10 )
              break;
            v22 = *(_QWORD *)(a1 + 16);
          }
        }
      }
      else if ( v23 >= v9
             || (v26 = qvector_reserve(), v10 = *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 16) = v26, v22 = v26, v10 < v9) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v22 + 4 * v10++) = -1;
          if ( v9 == v10 )
            break;
          v22 = *(_QWORD *)(a1 + 16);
        }
      }
      *(_QWORD *)(a1 + 24) = v9;
      v2 = *(_QWORD *)(a1 + 320);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v9;
  }
  v11 = *(int *)(v2 + 64);
  v12 = *(_QWORD *)(a1 + 48);
  if ( v11 != v12 )
  {
    v32 = 0;
    v33 = 0;
    if ( v11 < v12 )
    {
      v24 = v11;
      do
      {
        v25 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 24 * v24);
        if ( *v25 )
        {
          v25[1] = 0;
          qfree();
        }
        ++v24;
      }
      while ( v24 < v12 );
      *(_QWORD *)(a1 + 48) = v11;
      v2 = *(_QWORD *)(a1 + 320);
    }
    else
    {
      v13 = *(_QWORD *)(a1 + 40);
      v14 = *(_QWORD *)(a1 + 56);
      if ( (unsigned __int64)&v32 < v13 || (unsigned __int64)&v32 >= v13 + 24 * v14 )
      {
        if ( v14 < v11 )
        {
          *(_QWORD *)(a1 + 40) = qvector_reserve();
          v12 = *(_QWORD *)(a1 + 48);
        }
        if ( v12 < v11 )
        {
          v15 = 24 * v12;
          do
          {
            ++v12;
            v16 = v15 + *(_QWORD *)(a1 + 40);
            v15 += 24;
            *(_QWORD *)v16 = 0;
            *(_OWORD *)(v16 + 8) = 0;
          }
          while ( v11 != v12 );
        }
      }
      else
      {
        if ( v14 < v11 )
        {
          *(_QWORD *)(a1 + 40) = qvector_reserve();
          v12 = *(_QWORD *)(a1 + 48);
        }
        if ( v12 < v11 )
        {
          v28 = 24 * v12;
          do
          {
            ++v12;
            v29 = v28 + *(_QWORD *)(a1 + 40);
            v28 += 24;
            *(_QWORD *)v29 = 0;
            *(_OWORD *)(v29 + 8) = 0;
          }
          while ( v11 != v12 );
        }
      }
      *(_QWORD *)(a1 + 48) = v11;
      v2 = *(_QWORD *)(a1 + 320);
    }
  }
  v17 = *(_QWORD *)(v2 + 440);
  v18 = *(_QWORD *)(a1 + 72);
  v32 = 0;
  if ( v17 < v18 )
    goto LABEL_20;
  if ( v18 < v17 )
  {
    v20 = *(_QWORD *)(a1 + 64);
    v21 = *(_QWORD *)(a1 + 80);
    if ( (unsigned __int64)&v32 < v20 || (unsigned __int64)&v32 >= v20 + 8 * v21 )
    {
      if ( v21 >= v17
        || (v30 = qvector_reserve(), v18 = *(_QWORD *)(a1 + 72), *(_QWORD *)(a1 + 64) = v30, v20 = v30, v18 < v17) )
      {
        while ( 1 )
        {
          *(_QWORD *)(v20 + 8 * v18++) = 0;
          if ( v17 == v18 )
            break;
          v20 = *(_QWORD *)(a1 + 64);
        }
      }
    }
    else if ( v21 >= v17
           || (v27 = qvector_reserve(), v18 = *(_QWORD *)(a1 + 72), *(_QWORD *)(a1 + 64) = v27, v20 = v27, v18 < v17) )
    {
      while ( 1 )
      {
        *(_QWORD *)(v20 + 8 * v18++) = 0;
        if ( v17 == v18 )
          break;
        v20 = *(_QWORD *)(a1 + 64);
      }
    }
LABEL_20:
    *(_QWORD *)(a1 + 72) = v17;
  }
  return v34 - __readfsqword(0x28u);
}

