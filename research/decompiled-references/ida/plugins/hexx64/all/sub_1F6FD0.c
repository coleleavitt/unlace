__int64 __fastcall sub_1F6FD0(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, __int16 a5, _BYTE *a6, double a7)
{
  _QWORD *v9; // rcx
  _QWORD *v10; // r14
  const char *v11; // rsi
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  size_t v16; // r13
  void *v17; // r14
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // r13d
  __int64 v24; // r15
  int v25; // eax
  __int64 v26; // rbp
  __int64 v27; // rax
  __int64 v28; // [rsp-10h] [rbp-C8h]
  unsigned int v30; // [rsp+8h] [rbp-B0h]
  __int64 v31; // [rsp+8h] [rbp-B0h]
  _DWORD v32[4]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+20h] [rbp-98h]
  int v34; // [rsp+28h] [rbp-90h]
  void *v35; // [rsp+30h] [rbp-88h]
  __int128 v36; // [rsp+38h] [rbp-80h]
  __int64 v37; // [rsp+48h] [rbp-70h]
  __int128 v38; // [rsp+50h] [rbp-68h]
  __int64 v39; // [rsp+60h] [rbp-58h]
  double v40; // [rsp+68h] [rbp-50h]
  __int64 v41; // [rsp+70h] [rbp-48h]
  unsigned __int64 v42; // [rsp+78h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v9 = *(_QWORD **)(a2 + 8);
  v10 = (_QWORD *)v9[1];
  if ( v10[1] == 1 && *(_DWORD *)*v10 == 1 )
  {
    v24 = a1[55];
    v25 = sub_232C90(
            (__int64)a1,
            *(_QWORD *)(*v10 + 8LL),
            *(unsigned __int16 *)(*v10 + 18LL),
            (__int64)(v9 + 6),
            a3,
            a4,
            a5,
            a6);
    v22 = v25;
    if ( v25 != -1 && v25 >= (int)v24 )
    {
      v26 = a1[54] + 104LL * v25;
      if ( *(_DWORD *)(v26 + 88) == *(unsigned __int16 *)(*v10 + 18LL) )
      {
        sub_1C9130(v26, *(unsigned int *)(a2 + 4), 13LL * v25, v28, a7);
        copy_tinfo_t();
        v27 = *(_QWORD *)(a2 + 8);
        if ( *(_QWORD *)(v27 + 32) > 1u )
          sub_213D50(a1, v26, *(const char **)(v27 + 24), 4);
      }
    }
  }
  else
  {
    v11 = s1;
    if ( v9[4] )
      v11 = (const char *)v9[3];
    v12 = sub_213140((__int64)a1, v11, -9);
    v15 = *(_QWORD *)(a2 + 8);
    if ( v12 )
    {
      v16 = 0;
      v17 = nullptr;
    }
    else
    {
      v16 = *(_QWORD *)(v15 + 32);
      v17 = nullptr;
      if ( v16 )
      {
        v31 = *(_QWORD *)(a2 + 8);
        v17 = (void *)qalloc_or_throw(*(_QWORD *)(v15 + 32), v15, v13, v14);
        memcpy(v17, *(const void **)(v31 + 24), v16);
        v15 = *(_QWORD *)(a2 + 8);
      }
    }
    v18 = *(_DWORD *)(a2 + 4);
    v32[0] = 0;
    v30 = v18;
    copy_argloc();
    v33 = a4;
    v34 = 1;
    v35 = nullptr;
    v36 = 0;
    if ( v16 )
    {
      v35 = (void *)qalloc_or_throw(v16, v15, v19, v20);
      *((_QWORD *)&v36 + 1) = v16;
      memcpy(v35, v17, v16);
      *(_QWORD *)&v36 = v16;
    }
    v37 = 0;
    v38 = 0;
    v39 = 0;
    copy_tinfo_t();
    v21 = v34;
    v41 = 0;
    BYTE1(v21) = BYTE1(v34) & 0x7E;
    v34 = v21 | 0x100000;
    *(_QWORD *)&v40 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v30), _mm_cvtsi32_si128(a3)).m128i_u64[0];
    v22 = sub_1F6560((__int64)a1, (__int64)v32, 0, v40);
    clear_tinfo_t();
    if ( v37 )
    {
      *(_QWORD *)&v38 = 0;
      qfree(v37);
    }
    if ( v35 )
    {
      *(_QWORD *)&v36 = 0;
      qfree((__int64)v35);
    }
    cleanup_argloc();
    if ( v17 )
      qfree((__int64)v17);
  }
  return v22;
}

