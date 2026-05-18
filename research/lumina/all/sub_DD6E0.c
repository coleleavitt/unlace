__m128i *__fastcall sub_DD6E0(__int64 a1, __int64 a2, unsigned int a3, __m128i **a4)
{
  __m128i *v8; // rbx
  int v9; // r8d
  int v10; // ecx
  int v11; // edx
  int v12; // r9d
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned int v16; // r9d
  int v17; // eax
  char *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  const char *v25; // rdi
  int v26; // eax
  unsigned __int64 v27; // rcx
  unsigned int v28; // edi
  __int64 v29; // r10
  _QWORD *v30; // rax
  __int64 v31; // rsi
  void *v32; // rdi
  int v33; // eax
  __int64 *v34; // rax
  int v35; // [rsp+0h] [rbp-58h]
  int v36; // [rsp+8h] [rbp-50h]
  int v37; // [rsp+Ch] [rbp-4Ch]
  _QWORD v38[9]; // [rsp+10h] [rbp-48h] BYREF

  v38[1] = __readfsqword(0x28u);
  if ( a4 )
  {
    v8 = *a4;
    v9 = 0x8000000;
    v38[0] = *a4;
  }
  else
  {
    v33 = sub_D8EA0(a2, a3);
    v34 = sub_DBF10(a1, v33);
    v9 = 0;
    v8 = (__m128i *)v34;
    v38[0] = v34;
  }
  if ( !v8 )
    return v8;
  v10 = *(_DWORD *)(a2 + 4);
  if ( a3 )
  {
    if ( *(_BYTE *)a2 == 0xB2 || (v10 & 0x1000000) != 0 )
    {
      v12 = 0;
      v13 = 72;
    }
    else
    {
      v12 = 0x2000;
      v13 = 44;
      if ( !*(_QWORD *)(a2 + 16) )
      {
        v12 = *(_QWORD *)(a2 + 32) == 0 ? 0x4000 : 0x2000;
        v13 = *(_QWORD *)(a2 + 32) == 0 ? 16 : 44;
      }
    }
    if ( (v10 & 0x400) != 0 || (v25 = *(const char **)(a2 + 8)) == nullptr )
    {
      v11 = 0;
LABEL_10:
      v8->m128i_i64[0] = *(_QWORD *)a2;
      *(__int64 *)((char *)&v8->m128i_i64[-1] + v13) = *(_QWORD *)(a2 + v13 - 8);
      qmemcpy(
        (void *)((unsigned __int64)&v8->m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL),
        (const void *)(a2 - ((_QWORD)v8 - ((unsigned __int64)&v8->m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL))),
        8LL * ((v13 + (_DWORD)v8 - (((_DWORD)v8 + 8) & 0xFFFFFFF8)) >> 3));
      goto LABEL_11;
    }
  }
  else
  {
    if ( (v10 & 0x400) != 0 || (v25 = *(const char **)(a2 + 8)) == nullptr )
    {
      v11 = 0;
      v12 = 0;
      v13 = 72;
      if ( (v10 & 0x4000) != 0 )
      {
LABEL_36:
        v14 = 16;
        v15 = 56;
        goto LABEL_37;
      }
      goto LABEL_7;
    }
    v12 = 0;
    v13 = 72;
  }
  v37 = *(_DWORD *)(a2 + 4);
  v35 = v12;
  v36 = v9;
  v26 = strlen(v25);
  v9 = v36;
  v11 = (v26 & 0x3FFFFFFF) + 1;
  v12 = v35;
  BYTE1(v10) = BYTE1(v37);
  if ( a3 )
    goto LABEL_10;
  if ( (v37 & 0x4000) != 0 )
    goto LABEL_36;
LABEL_7:
  if ( (v10 & 0x2000) != 0 )
  {
    v14 = 44;
    v15 = 28;
LABEL_37:
    v8->m128i_i64[0] = *(_QWORD *)a2;
    *(__int64 *)((char *)&v8->m128i_i64[-1] + (unsigned int)v14) = *(_QWORD *)(a2 + (unsigned int)v14 - 8);
    v27 = (unsigned __int64)&v8->m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL;
    if ( (((_DWORD)v14 + (_DWORD)v8 - (_DWORD)v27) & 0xFFFFFFF8) >= 8 )
    {
      v28 = 0;
      do
      {
        v29 = v28;
        v28 += 8;
        *(_QWORD *)(v27 + v29) = *(_QWORD *)(a2 - ((_QWORD)v8 - v27) + v29);
      }
      while ( v28 < (((_DWORD)v14 + (_DWORD)v8 - (_DWORD)v27) & 0xFFFFFFF8) );
    }
    v30 = (_QWORD *)(v38[0] + v14);
    *v30 = 0;
    *(_QWORD *)((char *)v30 + v15 - 8) = 0;
    memset(
      (void *)((unsigned __int64)(v30 + 1) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)v15 + (_DWORD)v30 - (((_DWORD)v30 + 8) & 0xFFFFFFF8)) >> 3));
    goto LABEL_11;
  }
  *v8 = _mm_loadu_si128((const __m128i *)a2);
  v8[1] = _mm_loadu_si128((const __m128i *)(a2 + 16));
  v8[2] = _mm_loadu_si128((const __m128i *)(a2 + 32));
  v8[3] = _mm_loadu_si128((const __m128i *)(a2 + 48));
  v8[4].m128i_i64[0] = *(_QWORD *)(a2 + 64);
LABEL_11:
  v16 = v8->m128i_i32[1] & 0xF7FE9FFF | v9 | v12;
  v8->m128i_i32[1] = v16;
  if ( v11 )
  {
    v32 = (void *)(v38[0] + (int)v13);
    v8->m128i_i64[1] = (__int64)v32;
    memcpy(v32, *(const void **)(a2 + 8), v11);
    v16 = v8->m128i_u32[1];
  }
  v17 = *(_DWORD *)(a2 + 4);
  if ( ((v16 | v17) & 0x804000) == 0 )
  {
    v18 = *(char **)(a2 + 32);
    if ( (v17 & 0x800) != 0 )
      v19 = sub_DD450(a1, v18, a3);
    else
      v19 = (__int64)sub_DD150(a1, v18, a3);
    v16 = v8->m128i_u32[1];
    v8[2].m128i_i64[0] = v19;
  }
  if ( (v16 & 0x1006000) != 0 )
  {
    v38[0] += (int)sub_D8E30(a2, a3);
    if ( (v8->m128i_i32[1] & 0x804000) == 0 )
    {
      v20 = *(_QWORD *)(a2 + 16);
      v21 = 0;
      if ( v20 )
        v21 = sub_DD6E0(a1, v20, 1, v38);
      v8[1].m128i_i64[0] = v21;
      v22 = *(_QWORD *)(a2 + 24);
      v23 = 0;
      if ( v22 )
        v23 = sub_DD6E0(a1, v22, 1, v38);
      v8[1].m128i_i64[1] = v23;
    }
    if ( (*(_BYTE *)(a2 + 7) & 1) != 0 )
      v8[4].m128i_i64[0] = sub_DDD90(a1, v8, *(_QWORD *)(a2 + 64));
    if ( a4 )
      *a4 = (__m128i *)v38[0];
  }
  else if ( (*(_DWORD *)(a2 + 4) & 0x804000) == 0 )
  {
    v31 = *(_QWORD *)(a2 + 16);
    if ( v8->m128i_i8[0] == -78 )
      v8[1].m128i_i64[0] = v31;
    else
      v8[1].m128i_i64[0] = sub_DDB30(a1, v31, 0);
    v8[1].m128i_i64[1] = sub_DDB30(a1, *(_QWORD *)(a2 + 24), 0);
  }
  return v8;
}
