__int64 __fastcall sub_1F3350(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, __int64 a6)
{
  _QWORD *v8; // rcx
  _QWORD *v9; // r14
  const char *v10; // rsi
  size_t v11; // r13
  void *v12; // r14
  unsigned int v13; // eax
  int v14; // eax
  unsigned int v15; // r13d
  __int64 v17; // r15
  int v18; // eax
  __int64 v19; // rbp
  __int64 v20; // rax
  unsigned int v22; // [rsp+8h] [rbp-B0h]
  __int64 v23; // [rsp+8h] [rbp-B0h]
  _DWORD v24[4]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+20h] [rbp-98h]
  int v26; // [rsp+28h] [rbp-90h]
  void *v27; // [rsp+30h] [rbp-88h]
  __int128 v28; // [rsp+38h] [rbp-80h]
  __int64 v29; // [rsp+48h] [rbp-70h]
  __int128 v30; // [rsp+50h] [rbp-68h]
  __int64 v31; // [rsp+60h] [rbp-58h]
  unsigned __int64 v32; // [rsp+68h] [rbp-50h]
  __int64 v33; // [rsp+70h] [rbp-48h]
  unsigned __int64 v34; // [rsp+78h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v8 = *(_QWORD **)(a2 + 8);
  v9 = (_QWORD *)v8[1];
  if ( v9[1] == 1 && *(_DWORD *)*v9 == 1 )
  {
    v17 = *(_QWORD *)(a1 + 440);
    v18 = sub_22F010(a1, *(_QWORD *)(*v9 + 8LL), *(unsigned __int16 *)(*v9 + 18LL), (int)v8 + 48, a3, a4, a5, a6);
    v15 = v18;
    if ( v18 != -1 && v18 >= (int)v17 )
    {
      v19 = *(_QWORD *)(a1 + 432) + 104LL * v18;
      if ( *(_DWORD *)(v19 + 88) == *(unsigned __int16 *)(*v9 + 18LL) )
      {
        sub_1C56F0(v19, *(_DWORD *)(a2 + 4));
        copy_tinfo_t();
        v20 = *(_QWORD *)(a2 + 8);
        if ( *(_QWORD *)(v20 + 32) > 1u )
          sub_2100D0(a1, v19, *(_QWORD *)(v20 + 24), 4);
      }
    }
  }
  else
  {
    v10 = s1;
    if ( v8[4] )
      v10 = (const char *)v8[3];
    if ( (unsigned __int8)sub_20F4C0(a1, v10, 4294967287LL) )
    {
      v11 = 0;
      v12 = nullptr;
    }
    else
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
      v12 = nullptr;
      if ( v11 )
      {
        v23 = *(_QWORD *)(a2 + 8);
        v12 = (void *)qalloc_or_throw();
        memcpy(v12, *(const void **)(v23 + 24), v11);
      }
    }
    v13 = *(_DWORD *)(a2 + 4);
    v24[0] = 0;
    v22 = v13;
    copy_argloc();
    v25 = a4;
    v26 = 1;
    v27 = nullptr;
    v28 = 0;
    if ( v11 )
    {
      v27 = (void *)qalloc_or_throw();
      *((_QWORD *)&v28 + 1) = v11;
      memcpy(v27, v12, v11);
      *(_QWORD *)&v28 = v11;
    }
    v29 = 0;
    v30 = 0;
    v31 = 0;
    copy_tinfo_t();
    v14 = v26;
    v33 = 0;
    BYTE1(v14) = BYTE1(v26) & 0x7E;
    v26 = v14 | 0x100000;
    v32 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), _mm_cvtsi32_si128(a3)).m128i_u64[0];
    v15 = sub_1F28E0(a1, (__int64)v24, 0);
    clear_tinfo_t();
    if ( v29 )
    {
      *(_QWORD *)&v30 = 0;
      qfree();
    }
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree();
    }
    cleanup_argloc();
    if ( v12 )
      qfree();
  }
  return v15;
}

