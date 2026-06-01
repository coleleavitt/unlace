__int64 __fastcall sub_36EF80(__int64 a1, __int64 a2, char a3, double a4)
{
  unsigned __int64 v5; // r14
  __m128i v6; // xmm1
  __int64 *v7; // rax
  __int64 v8; // r12
  bool v9; // zf
  __int64 v10; // rbx
  __int64 v11; // rax
  char v12; // cl
  int v13; // esi
  unsigned int v14; // edx
  int v15; // edx
  _BYTE *v16; // rax
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // cl
  int v20; // ecx
  unsigned int tinfo_size; // eax
  __int64 v22; // rsi
  int v23; // edx
  __int64 v24; // rcx
  char v25; // dl
  unsigned int v26; // eax
  int v27; // eax
  char *v28; // rbx
  __m128i si128; // xmm2
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // rax
  char *v32; // rax
  char *v33; // rbx
  __m128i v34[4]; // [rsp+0h] [rbp-48h] BYREF

  *(_QWORD *)(a1 + 8) = *(_QWORD *)a2;
  v5 = *(_QWORD *)(a2 + 16);
  v34[0] = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
  if ( v5 )
  {
    v28 = (char *)qalloc_or_throw();
    memcpy(v28, *(const void **)(a2 + 8), 16 * v5);
    if ( *(_QWORD *)(a1 + 16) )
    {
      *(_QWORD *)(a1 + 24) = 0;
      qfree();
    }
    si128 = _mm_load_si128(v34);
    *(_QWORD *)(a1 + 16) = v28;
    *(__m128i *)(a1 + 24) = si128;
    if ( v5 != 1 )
    {
      v30 = 1;
      while ( 1 )
      {
        v32 = &v28[16 * v30 - 16];
        v33 = &v28[16 * v30];
        if ( *((_QWORD *)v32 + 1) == *(_QWORD *)v33 )
        {
          *((_QWORD *)v32 + 1) = *((_QWORD *)v33 + 1);
          memmove(
            (void *)(16 * v30 + *(_QWORD *)(a1 + 16)),
            (const void *)(16 * v30 + *(_QWORD *)(a1 + 16) + 16),
            16LL * *(_QWORD *)(a1 + 24) - 16 - 16 * v30);
          v31 = *(_QWORD *)(a1 + 24) - 1LL;
          *(_QWORD *)(a1 + 24) = v31;
        }
        else
        {
          v31 = *(_QWORD *)(a1 + 24);
          ++v30;
        }
        if ( v30 >= v31 )
          break;
        v28 = *(char **)(a1 + 16);
      }
    }
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 16) )
    {
      v7 = *(__int64 **)(a1 + 8);
      a4 = 0.0;
      *(_OWORD *)(a1 + 24) = 0;
      if ( v7 )
        goto LABEL_5;
LABEL_22:
      v7 = *(__int64 **)(a1 + 16);
      goto LABEL_5;
    }
    *(_QWORD *)(a1 + 24) = 0;
    qfree();
    v6 = _mm_load_si128(v34);
    *(_QWORD *)(a1 + 16) = 0;
    *(__m128i *)(a1 + 24) = v6;
  }
  v7 = *(__int64 **)(a1 + 8);
  if ( !v7 )
    goto LABEL_22;
LABEL_5:
  v8 = *v7;
  *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 408LL) = *v7;
  v9 = *(_QWORD *)(a1 + 8) == 0;
  *(_QWORD *)(a1 + 40) = v8;
  if ( v9 && (a3 & 4) != 0 )
    *(_DWORD *)(a1 + 4) |= 0x4000u;
  v10 = getseg();
  if ( !v10 || (unsigned __int8)is_spec_segm() )
    return (unsigned int)-28;
  v11 = *(_QWORD *)(a1 + 1504);
  v12 = *(_BYTE *)(v10 + 43);
  if ( *(_DWORD *)(v11 + 84) == 8 )
  {
    if ( v12 != 2 )
      return (unsigned int)-25;
    v14 = -24;
    if ( (*(_BYTE *)(v11 + 49) & 1) == 0 )
      return v14;
  }
  else
  {
    v13 = *(_DWORD *)(v11 + 48);
    if ( v12 != 2 )
    {
      v14 = -25;
      if ( (v13 & 0x80) == 0 )
        return v14;
      v15 = *(_DWORD *)(v11 + 80);
      if ( v15 != 4 )
      {
        if ( v12 )
          goto LABEL_13;
        return (unsigned int)-11;
      }
      v16 = *(_BYTE **)(a1 + 1496);
      if ( !v16[144] )
      {
        if ( v12 )
        {
          v17 = v16[130];
          if ( v17 == 4 )
          {
            v18 = v16[132];
            if ( v18 != 4 )
              goto LABEL_18;
            v20 = 3;
            goto LABEL_26;
          }
          goto LABEL_56;
        }
        return (unsigned int)-11;
      }
      goto LABEL_39;
    }
    v14 = -24;
    if ( (v13 & 0x100) == 0 )
      return v14;
  }
  v15 = *(_DWORD *)(v11 + 80);
  if ( v15 == 4 )
  {
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 1496) + 144LL) )
    {
      sub_69660((__int64)"%a: the application is 32-bit but the segment is 64-bit\n", a4);
      return (unsigned int)-15;
    }
LABEL_39:
    sub_69660((__int64)"%a: wrong application bitness (64)\n", a4);
    return (unsigned int)-15;
  }
LABEL_13:
  v16 = *(_BYTE **)(a1 + 1496);
  v17 = v16[130];
  if ( v17 != 4 )
  {
    if ( v15 == 8 && v17 == 8 )
    {
      v18 = v16[132];
      if ( v18 > 8u )
      {
        v15 = 8;
        goto LABEL_18;
      }
      if ( ((v18 - 4) & 0xFB) != 0 )
      {
LABEL_18:
        sub_69660((__int64)"Size of 'enum' is %d (%d expected)\n", v18, v15);
        return (unsigned int)-16;
      }
      goto LABEL_24;
    }
LABEL_56:
    sub_69660((__int64)"Wrong sizeof(int) %d bytes\n", v17);
    return (unsigned int)-16;
  }
  v18 = v16[132];
  if ( v18 != 4 )
  {
    v15 = 4;
    goto LABEL_18;
  }
LABEL_24:
  v20 = 3;
  if ( v16[144] )
    v20 = 1;
LABEL_26:
  if ( (v16[129] & 3) != v20 )
  {
    sub_69660((__int64)"Wrong memory model selected\n");
    return (unsigned int)-16;
  }
  tinfo_size = get_tinfo_size();
  v22 = tinfo_size;
  v23 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 84LL);
  if ( tinfo_size != v23 )
  {
    sub_69660((__int64)"Size of 'void *' is %d (%d expected)\n", tinfo_size, v23);
    return (unsigned int)-16;
  }
  v24 = *(_QWORD *)(a1 + 1496);
  if ( !*(_DWORD *)(*(_QWORD *)(v24 + 8) + 4LL) || (v14 = -27, (*(_BYTE *)(v24 + 129) & 0xC) == 0) )
  {
    v25 = *(_BYTE *)(v24 + 129);
    v26 = v25 & 0xF0;
    if ( (v25 & 0xF0) == 0xC0 )
      v26 = *(_DWORD *)(v24 + 140);
    if ( v26 > 0x10 )
      return 0;
    v27 = *(_DWORD *)(v24 + 1416);
    if ( (v27 & 4) != 0 )
    {
      return 0;
    }
    else
    {
      *(_DWORD *)(v24 + 1416) = v27 | 4;
      sub_69660((__int64)"Default calling convention is not set, decompilation may be incorrect!\n", v22);
      return 0;
    }
  }
  return v14;
}

