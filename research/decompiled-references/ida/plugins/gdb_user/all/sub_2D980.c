unsigned __int64 __fastcall sub_2D980(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r12
  unsigned int v14; // r13d
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // rbx
  _QWORD *v21; // rax
  __m128i v23; // xmm0
  __int64 v24; // rax
  _QWORD *v25; // rdi
  __int64 v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rbp
  _QWORD *v29; // rax
  __int64 v30; // rsi
  __int64 v31; // [rsp+0h] [rbp-98h] BYREF
  __int128 v32; // [rsp+8h] [rbp-90h]
  __int64 v33; // [rsp+18h] [rbp-80h]
  __int64 v34; // [rsp+20h] [rbp-78h]
  __int64 v35; // [rsp+28h] [rbp-70h]
  __int64 v36; // [rsp+30h] [rbp-68h]
  __int128 v37; // [rsp+38h] [rbp-60h]
  __int128 v38; // [rsp+48h] [rbp-50h]
  __int128 v39; // [rsp+58h] [rbp-40h]
  unsigned __int64 v40; // [rsp+68h] [rbp-30h]

  v40 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 864);
  v32 = 0;
  v31 = 0;
  if ( *(_DWORD *)(v7 + 132) == 1 )
  {
    if ( (unsigned __int8)sub_23420(a1, &v31) )
      goto LABEL_3;
    v7 = *(_QWORD *)(a1 + 864);
  }
  if ( !(unsigned __int8)sub_3BBB0(v7, (unsigned int)&v31, a3, a4, a5, a6, v31, v32, DWORD2(v32), v33, v34, v35, v36) )
  {
    v26 = v32;
    v27 = v31;
    if ( (_QWORD)v32 )
    {
      v28 = 0;
      do
      {
        v29 = (_QWORD *)(v27 + 32 * v28);
        if ( *v29 )
        {
          v29[1] = 0;
          qfree();
          v27 = v31;
        }
        ++v28;
      }
      while ( v28 != v26 );
    }
    *(_QWORD *)&v32 = 0;
    goto LABEL_46;
  }
LABEL_3:
  v8 = v32;
  if ( (_QWORD)v32 )
    goto LABEL_4;
  v27 = v31;
LABEL_46:
  if ( !*((_QWORD *)&v32 + 1) )
  {
    v31 = qvector_reserve();
    v27 = v31;
  }
  v30 = 32 * v32 + v27;
  *(_QWORD *)v30 = 0;
  *(_OWORD *)(v30 + 8) = 0;
  v8 = v32 + 1;
  *(_QWORD *)&v32 = v32 + 1;
  *(_QWORD *)(v30 + 24) = 0xFFFFFFFF00000001LL;
LABEL_4:
  v9 = v31;
  v10 = v31 + 32 * v8;
  if ( v31 != v10 )
  {
    do
    {
      sub_2C480(a1, v9);
      v9 += 32;
    }
    while ( v10 != v9 );
  }
  v11 = *(_QWORD *)(a1 + 1384);
  v12 = *(_QWORD *)(a1 + 1376);
  v13 = v12;
  if ( 112 * v11 )
  {
    do
    {
      v14 = *(_DWORD *)(v13 + 24);
      v15 = 0;
      v16 = v31;
      if ( v14 != -3 )
        v15 = *(_DWORD *)(v13 + 24);
      v17 = v31 + 32 * v32;
      if ( v31 == v17 )
        goto LABEL_25;
      while ( v15 != *(_DWORD *)(v16 + 24) )
      {
        v16 += 32;
        if ( v17 == v16 )
          goto LABEL_25;
      }
      if ( v17 == v16 )
      {
LABEL_25:
        if ( !(unsigned __int8)sub_23A10((_QWORD *)a1, v14) )
        {
          v34 = 0xFFFFFFFFLL;
          v37 = 0;
          v35 = -1;
          v36 = 0;
          v38 = 0;
          v39 = 0;
          set_debug_event_code();
          if ( (((HIDWORD(v36) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
          {
            sub_1A980();
LABEL_51:
            if ( !under_debugger )
              interr();
            BUG();
          }
          v23 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 656));
          v24 = *(_QWORD *)(a1 + 184);
          LODWORD(v37) = 0;
          v25 = *(_QWORD **)(a1 + 168);
          LOBYTE(v36) = 1;
          v35 = -1;
          v34 = _mm_unpacklo_epi32(v23, _mm_cvtsi32_si128(v14)).m128i_u64[0];
          if ( v25 == (_QWORD *)(v24 - 72) )
          {
            sub_2CCD0((_QWORD *)(a1 + 120));
          }
          else
          {
            *v25 = 0xFFFFFFFFLL;
            v25[1] = -1;
            v25[2] = 0;
            copy_debug_event();
            *(_QWORD *)(a1 + 168) += 72LL;
          }
          free_debug_event();
        }
        if ( *(_QWORD *)(v13 + 80) )
        {
          *(_QWORD *)(v13 + 88) = 0;
          qfree();
        }
        if ( *(_QWORD *)(v13 + 56) )
        {
          *(_QWORD *)(v13 + 64) = 0;
          qfree();
        }
        if ( *(_QWORD *)v13 )
        {
          *(_QWORD *)(v13 + 8) = 0;
          qfree();
        }
        memmove(
          (void *)v13,
          (const void *)(v13 + 112),
          *(_QWORD *)(a1 + 1376) + 112LL * *(_QWORD *)(a1 + 1384) - v13 - 112);
        v12 = *(_QWORD *)(a1 + 1376);
        v11 = *(_QWORD *)(a1 + 1384) - 1LL;
        *(_QWORD *)(a1 + 1384) = v11;
      }
      else
      {
        v11 = *(_QWORD *)(a1 + 1384);
        v13 += 112;
      }
    }
    while ( v13 != v12 + 112 * v11 );
  }
  if ( !v11 )
    goto LABEL_51;
  v18 = v31;
  if ( v31 )
  {
    v19 = v32;
    if ( (_QWORD)v32 )
    {
      v20 = 0;
      do
      {
        v21 = (_QWORD *)(v18 + 32 * v20);
        if ( *v21 )
        {
          v21[1] = 0;
          qfree();
          v18 = v31;
        }
        ++v20;
      }
      while ( v19 != v20 );
    }
    *(_QWORD *)&v32 = 0;
    qfree();
  }
  return v40 - __readfsqword(0x28u);
}

