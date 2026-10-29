__int64 __fastcall sub_21300(__int64 a1)
{
  _DWORD *v1; // r12
  _DWORD *v3; // rbp
  __int64 v4; // rbx
  char v5; // al
  bool v6; // dl
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // r15d
  const __m128i *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __m128i v15; // xmm0
  __int64 v17; // rbp
  int v18; // edx
  _DWORD *v19; // rsi
  bool v20; // r12
  unsigned int v21; // ebp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 i; // r14
  _DWORD *v31; // rcx
  int v32; // edx
  _DWORD *v33; // rax
  char v34; // al
  void *v35; // rdi
  size_t v36; // rdx
  const __m128i *v38; // rbx
  const __m128i *v39; // r14
  __int64 v40; // rax
  __int32 v41; // r15d
  __int64 v42; // rsi
  __int64 v43; // rbx
  const __m128i *v44; // [rsp+10h] [rbp-78h]
  __int64 v45; // [rsp+18h] [rbp-70h]
  __int64 v46; // [rsp+30h] [rbp-58h]
  __int128 v47; // [rsp+38h] [rbp-50h]

  v1 = *(_DWORD **)(a1 + 1376);
  v3 = &v1[28 * *(_QWORD *)(a1 + 1384)];
  if ( v1 == v3 )
  {
LABEL_63:
    v43 = qvector_reserve();
    qfree();
    v7 = 0;
    v44 = (const __m128i *)v43;
    *(_QWORD *)v43 = 0x1FFFFFFFFLL;
    *(_DWORD *)(v43 + 8) = 0;
    *(_BYTE *)(v43 + 12) = 0;
    v45 = 1;
    *(_QWORD *)v43 = 0x1FFFFFFFFLL;
    v19 = (_DWORD *)v43;
    *(_DWORD *)(v43 + 8) = 0;
LABEL_64:
    *v19 = -1;
    v20 = 1;
    v19 = v44;
    goto LABEL_27;
  }
  v4 = *(_QWORD *)(a1 + 1376);
  v5 = 0;
  do
  {
    while ( 1 )
    {
      v7 = v4;
      if ( *(_BYTE *)(v4 + 33) )
      {
        if ( !v4 )
          goto LABEL_63;
        v17 = qvector_reserve();
        qfree();
        v44 = (const __m128i *)v17;
        *(_QWORD *)v17 = 0x1FFFFFFFFLL;
        *(_DWORD *)(v17 + 8) = 0;
        *(_BYTE *)(v17 + 12) = 0;
        v45 = 1;
        *(_DWORD *)(v17 + 4) = 0;
        *(_DWORD *)(v17 + 8) = *(_DWORD *)(v4 + 28);
        v18 = *(_DWORD *)(v4 + 24);
        if ( v18 == -3 )
          v18 = 0;
        *(_DWORD *)v17 = v18;
        v19 = (_DWORD *)v17;
        v20 = *(_QWORD *)(a1 + 1384) == 1;
        goto LABEL_26;
      }
      if ( *(_DWORD *)(v4 + 36) )
        break;
      v6 = *(_DWORD *)(v4 + 28) != 0;
      v4 += 112;
      v5 |= v6;
      if ( v3 == (_DWORD *)v4 )
        goto LABEL_7;
    }
    v4 += 112;
    v5 = 1;
  }
  while ( v3 != (_DWORD *)v4 );
LABEL_7:
  v44 = nullptr;
  v8 = 0;
  v45 = 0;
  if ( !v5 )
    goto LABEL_63;
  do
  {
    v11 = v1[9];
    if ( !v11 )
    {
      if ( v8 == -1 )
      {
        v9 = (__int64)v44;
      }
      else
      {
        v9 = qvector_reserve();
        v12 = v44;
        v13 = v45 - 1;
        if ( v45 - 1 >= 0 )
        {
          v14 = v9;
          do
          {
            v15 = _mm_loadu_si128(v12);
            v14 += 16;
            ++v12;
            *(__m128i *)(v14 - 16) = v15;
          }
          while ( v13-- != 0 );
        }
        qfree();
        v8 = v45;
        v44 = (const __m128i *)v9;
      }
      v10 = v9 + 16 * v8;
      *(_QWORD *)v10 = 0x1FFFFFFFFLL;
      *(_DWORD *)(v10 + 8) = 0;
      *(_BYTE *)(v10 + 12) = 0;
      ++v45;
      *(_DWORD *)(v10 + 4) = 1;
      *(_DWORD *)(v10 + 8) = v1[7];
      if ( v1[6] != -3 )
        v11 = v1[6];
      *(_DWORD *)v10 = v11;
      v8 = v45;
    }
    v1 += 28;
  }
  while ( v1 != v3 );
  v19 = v44;
  v20 = *(_QWORD *)(a1 + 1384) == 1;
  v7 = 0;
  if ( !v8 )
  {
    v21 = 0;
    goto LABEL_50;
  }
LABEL_26:
  if ( v20 )
    goto LABEL_64;
LABEL_27:
  v21 = sub_3D9C0(*(_QWORD *)(a1 + 864), v19);
  if ( (_BYTE)v21 )
  {
    v38 = v44;
    v46 = 0;
    v47 = 0;
    v39 = &v44[v45];
    if ( v39 != v44 )
    {
      do
      {
        if ( v38->m128i_i8[12] )
        {
          v40 = v47;
          v41 = v38->m128i_i32[0];
          v42 = v46;
          if ( *((_QWORD *)&v47 + 1) < (unsigned __int64)(v47 + 1) )
          {
            v46 = qvector_reserve();
            v42 = v46;
            v40 = v47;
          }
          *(_DWORD *)(v42 + 4 * v40) = v41;
          *(_QWORD *)&v47 = v47 + 1;
        }
        ++v38;
      }
      while ( v39 != v38 );
    }
    v29 = *(_QWORD *)(a1 + 1376);
    for ( i = v29 + 112LL * *(_QWORD *)(a1 + 1384); i != v29; v29 += 112 )
    {
      if ( !*(_DWORD *)(v29 + 36) )
      {
        if ( !v20 )
        {
          v31 = (_DWORD *)(v46 + 4 * v47);
          while ( 1 )
          {
            v32 = *(_DWORD *)(v29 + 24);
            v33 = (_DWORD *)v46;
            if ( v32 == -3 )
              v32 = 0;
            if ( (_DWORD *)v46 != v31 )
            {
              while ( v32 != *v33 )
              {
                if ( v31 == ++v33 )
                  goto LABEL_60;
              }
              if ( v31 != v33 )
                break;
            }
LABEL_60:
            v29 += 112;
            if ( i == v29 )
              goto LABEL_47;
            if ( *(_DWORD *)(v29 + 36) )
              goto LABEL_46;
          }
        }
        v34 = *(_BYTE *)(v29 + 33);
        v35 = *(void **)(v29 + 80);
        *(_BYTE *)(v29 + 33) = 0;
        *(_DWORD *)(v29 + 40) = 0;
        v36 = *(_QWORD *)(v29 + 88);
        *(_BYTE *)(v29 + 32) = v34;
        *(_DWORD *)(v29 + 28) = 0;
        memset(v35, 0, v36);
      }
LABEL_46:
      ;
    }
LABEL_47:
    *(_DWORD *)(a1 + 1360) = 0;
    if ( v46 )
      qfree();
    goto LABEL_49;
  }
  if ( !v7 )
  {
LABEL_49:
    v19 = v44;
    goto LABEL_50;
  }
  sub_DB10((__int64)"Single-stepping a thread failed; possibly stub does not support single-stepping\n"
                    "Try disabling the single-step functionality in debugger-specific options.");
  v26 = sub_F590(
          "Single-stepping a thread failed; possibly stub does not support single-stepping\n"
          "Try disabling the single-step functionality in debugger-specific options.",
          v19,
          v22,
          v23,
          v24,
          v25);
  *(_WORD *)(v26 + 82) &= ~1u;
  v19 = v44;
  *(_QWORD *)(v26 + 32) &= ~0x8000000000uLL;
  v27 = *(_QWORD *)(a1 + 1376);
  v28 = v27 + 112LL * *(_QWORD *)(a1 + 1384);
  if ( v28 != v27 )
  {
    if ( ((112 * *(_BYTE *)(a1 + 1384)) & 0x10) == 0 || (*(_BYTE *)(v27 + 33) = 0, v27 += 112, v28 != v27) )
    {
      do
      {
        *(_BYTE *)(v27 + 33) = 0;
        v27 += 224;
        *(_BYTE *)(v27 - 79) = 0;
      }
      while ( v28 != v27 );
    }
  }
LABEL_50:
  if ( v19 )
    qfree();
  return v21;
}

