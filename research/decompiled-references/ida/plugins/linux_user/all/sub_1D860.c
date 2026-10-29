__int64 __fastcall sub_1D860(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v6; // rax
  char *v7; // rdi
  __int64 v8; // rbp
  char *v9; // rdx
  char *v10; // r15
  signed int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r10
  __int64 v15; // rdi
  __int64 v16; // rcx
  size_t v17; // r10
  const void *v18; // rbp
  void *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdi
  const char *v22; // rax
  signed int v24; // [rsp+1Ch] [rbp-8Ch] BYREF
  unsigned __int64 v25; // [rsp+20h] [rbp-88h]
  __int64 v26; // [rsp+28h] [rbp-80h]
  __int64 v27; // [rsp+30h] [rbp-78h]
  void *dest[2]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v29; // [rsp+48h] [rbp-60h]
  __int128 v30; // [rsp+58h] [rbp-50h]
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v6 = sub_1A040((_QWORD *)a1, a2);
  v7 = *(char **)(a1 + 1280);
  v8 = v6;
  v9 = &v7[4 * *(_QWORD *)(a1 + 1288)];
  if ( v7 != v9 )
  {
    while ( *(_DWORD *)v7 != a2 )
    {
      v7 += 4;
      if ( v9 == v7 )
        goto LABEL_16;
    }
    if ( v9 != v7 )
    {
      memmove(v7, v7 + 4, v9 - v7 - 4);
      --*(_QWORD *)(a1 + 1288);
      goto LABEL_7;
    }
  }
LABEL_16:
  v12 = sub_25CB0(a1, &v24, a2, 0xFFFFFFFFLL);
  if ( v12 == -1 )
  {
    __errno_location();
    v22 = (const char *)winerr();
    sub_143D0(a1, (__int64)"Finish attaching to %d thread: %s\n", a2, v22);
    return 0;
  }
  if ( v12 != a2 || (_BYTE)v24 != 127 )
    goto LABEL_18;
  if ( *(_BYTE *)(a1 + 1350) )
  {
    if ( v24 >> 16 == 128 )
      goto LABEL_7;
LABEL_18:
    v13 = *(_QWORD *)(a1 + 1224);
    if ( !v13 )
      goto LABEL_25;
    v14 = a1 + 1216;
    do
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(v13 + 16);
        v16 = *(_QWORD *)(v13 + 24);
        if ( *(_DWORD *)(v13 + 32) < (signed int)a2 )
          break;
        v14 = v13;
        v13 = *(_QWORD *)(v13 + 16);
        if ( !v15 )
          goto LABEL_23;
      }
      v13 = *(_QWORD *)(v13 + 24);
    }
    while ( v16 );
LABEL_23:
    if ( a1 + 1216 != v14 && *(_DWORD *)(v14 + 32) <= (signed int)a2 )
    {
      *(_BYTE *)(v14 + 64) = 1;
      if ( v12 <= 0 )
        goto LABEL_7;
    }
    else
    {
LABEL_25:
      *(_BYTE *)(v13 + 24) = 1;
      if ( v12 <= 0 )
        goto LABEL_7;
    }
    sub_15670((_QWORD *)a1, v12, v24);
    goto LABEL_7;
  }
  if ( (v24 & 0xFF00) != 0x1300 )
    goto LABEL_18;
LABEL_7:
  *(_OWORD *)dest = 0;
  v25 = 0xFFFFFFFFLL;
  v26 = -1;
  v27 = 0;
  v29 = 0;
  v30 = 0;
  set_debug_event_code();
  if ( (HIDWORD(v27) & 0xFFFFFFFu) - 9 > 1 && (HIDWORD(v27) & 0xFFFFFFF) != 3 )
    sub_10280();
  if ( (void **)(v8 + 32) != dest )
  {
    v10 = *(char **)(v8 + 40);
    if ( !v10 || (v17 = (size_t)(v10 - 1), v10 == (_BYTE *)&dword_0 + 1) )
    {
      dest[1] = nullptr;
    }
    else
    {
      v18 = *(const void **)(v8 + 32);
      v19 = dest[0];
      if ( (unsigned __int64)v29 < (unsigned __int64)v10 )
      {
        v19 = (void *)qvector_reserve();
        dest[0] = v19;
        v17 = (size_t)(v10 - 1);
      }
      dest[1] = v10;
      memmove(v19, v18, v17);
      *((_BYTE *)dest[0] + (unsigned __int64)v10 - 1) = 0;
    }
  }
  v25 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 1340)), _mm_cvtsi32_si128(a2)).m128i_u64[0];
  if ( a4 )
    a3 = ptrace(PTRACE_PEEKUSER, a2, 128, 0);
  v26 = a3;
  LOBYTE(v27) = 1;
  if ( (v27 & 0xFFFFFFF00000000LL) != 0 )
  {
    v20 = *(_QWORD *)(a1 + 136);
    if ( v20 == *(_QWORD *)(a1 + 144) )
    {
      sub_1D6F0((_QWORD *)(a1 + 120));
    }
    else
    {
      *(_BYTE *)(v20 - 56) = 0;
      v21 = v20 - 72;
      *(_QWORD *)(v21 + 8) = -1;
      *(_QWORD *)v21 = 0xFFFFFFFFLL;
      *(_DWORD *)(v21 + 20) = 0;
      copy_debug_event();
      *(_QWORD *)(a1 + 136) -= 72LL;
    }
    *(_BYTE *)(a1 + 1412) = 0;
  }
  free_debug_event();
  return 1;
}

