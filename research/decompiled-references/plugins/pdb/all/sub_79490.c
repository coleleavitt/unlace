__int64 __fastcall sub_79490(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v6; // eax
  int v7; // eax
  void *v8; // rdi
  __int64 v9; // rax
  void *v10; // rdx
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  bool v13; // zf
  const void *v14; // r14
  size_t v15; // rbp
  __int64 v16; // rax
  __int64 v17; // r12
  void *v18; // rsi
  __int64 v19; // rcx
  void *v20; // rdi
  __int64 v21; // rdx
  void *dest; // [rsp+10h] [rbp-48h] BYREF
  __m128i v23; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  if ( !a2 || a3 <= 3 )
    return 0;
  if ( *(_DWORD *)a2 != 808534606 )
  {
    if ( *(_DWORD *)a2 != 1396986706 || a3 <= 0x17 )
      return 0;
    v12 = _mm_loadu_si128((const __m128i *)(a2 + 4));
    *(_DWORD *)(a1 + 64) = 0;
    *(__m128i *)(a1 + 48) = v12;
    *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 20);
    if ( a3 == 24 )
      goto LABEL_19;
    v13 = *(_BYTE *)(a2 + a3 - 1) == 0;
    v14 = (const void *)(a2 + 24);
    dest = nullptr;
    v15 = a3 - 24;
    v16 = a3 - 25;
    v23 = 0;
    if ( v13 )
    {
      v19 = 0;
      v18 = nullptr;
      if ( a3 == 25 )
      {
LABEL_17:
        v20 = *(void **)a1;
        v21 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)a1 = v18;
        *(_QWORD *)(a1 + 8) = v16;
        *(_QWORD *)(a1 + 16) = v19;
        dest = v20;
        v23.m128i_i64[1] = v21;
        if ( v20 )
        {
          v23.m128i_i64[0] = 0;
          qfree(v20);
        }
LABEL_19:
        if ( (*(_DWORD *)debug & 0x400000) != 0 )
          sub_29350();
        return 1;
      }
      v17 = a3 - 24;
      v15 = a3 - 25;
    }
    else
    {
      v17 = a3 - 23;
    }
    dest = (void *)qvector_reserve(&dest, 0, v17, 1);
    v23.m128i_i64[0] = v17;
    memmove(dest, v14, v15);
    *((_BYTE *)dest + v15) = 0;
    v18 = dest;
    v19 = v23.m128i_i64[1];
    v16 = v23.m128i_i64[0];
    goto LABEL_17;
  }
  if ( (*(_DWORD *)debug & 0x400000) != 0 )
    sub_29350();
  if ( a3 <= 0xF )
    return 0;
  *(_OWORD *)(a1 + 48) = 0;
  v6 = *(_DWORD *)(a2 + 8);
  v23 = 0;
  *(_DWORD *)(a1 + 64) = v6;
  v7 = *(_DWORD *)(a2 + 12);
  dest = nullptr;
  *(_DWORD *)(a1 + 68) = v7;
  dest = (void *)qvector_reserve(&dest, 0, a3 - 15, 1);
  v23.m128i_i64[0] = a3 - 15;
  *((char *)dest + a3 - 16) = 0;
  memmove(dest, (const void *)(a2 + 16), a3 - 16);
  v9 = *(_QWORD *)(a1 + 16);
  v10 = dest;
  v11 = _mm_loadu_si128(&v23);
  dest = *(void **)a1;
  v8 = dest;
  *(_QWORD *)a1 = v10;
  v23.m128i_i64[1] = v9;
  *(__m128i *)(a1 + 8) = v11;
  if ( v8 )
  {
    v23.m128i_i64[0] = 0;
    qfree(v8);
  }
  return 1;
}
