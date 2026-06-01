__int64 __fastcall sub_411B0(__int64 *a1, const char *a2, const char *a3, __int64 a4)
{
  size_t v7; // rax
  size_t v8; // r15
  size_t v9; // rax
  size_t v10; // r13
  __int64 v11; // rax
  unsigned int v12; // r13d
  void *v14; // rdi
  size_t v15; // r15
  _QWORD *v16; // rbx
  __m128i v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rdx
  __m128 v24; // xmm0
  int v25; // eax
  int v26; // eax
  __int64 v27; // rbx
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  void (__fastcall *v32)(_QWORD *); // rax
  size_t v33; // [rsp+8h] [rbp-C0h]
  __int64 v34; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v35; // [rsp+18h] [rbp-B0h]
  void *v36; // [rsp+28h] [rbp-A0h] BYREF
  __int128 v37; // [rsp+30h] [rbp-98h]
  __int128 v38; // [rsp+40h] [rbp-88h]
  __int64 v39; // [rsp+50h] [rbp-78h]
  void *dest; // [rsp+58h] [rbp-70h] BYREF
  __int128 v41; // [rsp+60h] [rbp-68h]
  __int64 v42; // [rsp+70h] [rbp-58h]
  __int64 v43; // [rsp+78h] [rbp-50h]
  int v44; // [rsp+80h] [rbp-48h]
  unsigned __int64 v45; // [rsp+88h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  if ( a1[14] )
  {
    if ( !under_debugger )
      interr(30212);
    BUG();
  }
  v34 = 0;
  v36 = nullptr;
  v39 = 0;
  dest = nullptr;
  v42 = -1;
  v43 = 0;
  v44 = 18;
  v35 = 0;
  v37 = 0;
  v38 = 0;
  v41 = 0;
  if ( a2 )
  {
    v7 = strlen(a2);
    v8 = v7;
    if ( v7 )
    {
      v33 = v7 + 1;
      v36 = (void *)qvector_reserve(&v36, 0, v7 + 1, 1);
      *(_QWORD *)&v37 = v33;
      memmove(v36, a2, v8);
      *((_BYTE *)v36 + v8) = 0;
    }
  }
  if ( a3 && (v9 = strlen(a3), (v10 = v9) != 0) )
  {
    v14 = dest;
    v15 = v9 + 1;
    if ( *((_QWORD *)&v41 + 1) < v9 + 1 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v15, 1);
      v14 = dest;
    }
    a2 = a3;
    *(_QWORD *)&v41 = v15;
    memmove(v14, a3, v10);
    *((_BYTE *)dest + v10) = 0;
  }
  else
  {
    *(_QWORD *)&v41 = 0;
  }
  v11 = *a1;
  v42 = a4;
  if ( *(_DWORD *)(v11 + 448) == 2 )
  {
    sub_244A0();
    v25 = debug & 0x400000;
    if ( (unsigned int)(*(_DWORD *)(*a1 + 456) - 1) > 1 )
    {
      if ( v25 )
        sub_29350();
      v26 = v44;
      BYTE1(v26) = BYTE1(v44) & 0xFE;
    }
    else
    {
      if ( v25 )
        sub_29350();
      v26 = v44;
      BYTE1(v26) = BYTE1(v44) | 1;
    }
    v44 = v26;
    v27 = operator new(0x68u);
    *(_QWORD *)(v27 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v27 + 32) = 0xFFFFFFFFLL;
    *(_QWORD *)(v27 + 24) = -1;
    *(_BYTE *)(v27 + 72) = 0;
    *(_QWORD *)(v27 + 80) = 0;
    *(__m128i *)v27 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_B2C38, (__m128i)(unsigned __int64)&v34);
    *(_OWORD *)(v27 + 40) = 0;
    *(_OWORD *)(v27 + 56) = 0;
    *(_OWORD *)(v27 + 88) = 0;
    if ( (unsigned int)sub_545E0(v27, (_DWORD)a2, v28, v29, v30, v31) )
    {
      if ( *(_QWORD *)(v27 + 56) > 1u )
        sub_299B0();
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
      goto LABEL_12;
    }
    a1[13] = v27;
    *((_BYTE *)a1 + 120) = 1;
    goto LABEL_25;
  }
  sub_244A0();
  if ( !dbg || (*(_BYTE *)(dbg + 32) & 1) == 0 || (a2 = "win32", strcmp(*(const char **)(dbg + 8), "win32")) )
  {
LABEL_12:
    v12 = -2147467259;
    goto LABEL_13;
  }
  v44 |= 1u;
  v16 = (_QWORD *)operator new(0x488u);
  v16[2] = 0xFFFFFFFFLL;
  v16[4] = 0xFFFFFFFFLL;
  *((_DWORD *)v16 + 12) = 0;
  v16[8] = v16 + 6;
  v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_A9CE0, (__m128i)(unsigned __int64)&v34);
  v16[9] = v16 + 6;
  v16[140] = "TESTER-SQUISH";
  v16[142] = "";
  v18 = v42;
  v16[7] = 0;
  v16[10] = 0;
  *((_DWORD *)v16 + 282) = 23946;
  *((_DWORD *)v16 + 287) = -1;
  *((_BYTE *)v16 + 1152) = 0;
  v16[3] = v18;
  *(__m128i *)v16 = v17;
  v12 = sub_406C0((__int64)v16);
  if ( !v12 )
  {
    a1[13] = (__int64)v16;
LABEL_25:
    v22 = operator new(0x150u);
    get_idati(336, a2);
    v23 = *a1;
    *(_DWORD *)(v22 + 24) = 0;
    *(_QWORD *)v22 = &off_A9EF0;
    v12 = 0;
    *(_QWORD *)(v22 + 8) = v23;
    *(_QWORD *)(v22 + 40) = v22 + 24;
    *(_QWORD *)(v22 + 48) = v22 + 24;
    *(_QWORD *)(v22 + 88) = v22 + 72;
    *(_QWORD *)(v22 + 96) = v22 + 72;
    *(_QWORD *)(v22 + 136) = v22 + 120;
    *(_QWORD *)(v22 + 144) = v22 + 120;
    *(_QWORD *)(v22 + 184) = v22 + 168;
    *(_QWORD *)(v22 + 192) = v22 + 168;
    *(_QWORD *)(v22 + 232) = v22 + 216;
    *(_QWORD *)(v22 + 240) = v22 + 216;
    *(_QWORD *)(v22 + 32) = 0;
    *(_QWORD *)(v22 + 56) = 0;
    *(_DWORD *)(v22 + 72) = 0;
    *(_QWORD *)(v22 + 80) = 0;
    *(_QWORD *)(v22 + 104) = 0;
    *(_DWORD *)(v22 + 120) = 0;
    *(_QWORD *)(v22 + 128) = 0;
    *(_QWORD *)(v22 + 152) = 0;
    *(_DWORD *)(v22 + 168) = 0;
    *(_QWORD *)(v22 + 176) = 0;
    *(_QWORD *)(v22 + 200) = 0;
    *(_DWORD *)(v22 + 216) = 0;
    *(_QWORD *)(v22 + 224) = 0;
    *(_QWORD *)(v22 + 248) = 0;
    *(_DWORD *)(v22 + 264) = 0;
    *(_QWORD *)(v22 + 272) = 0;
    *(_QWORD *)(v22 + 280) = v22 + 264;
    *(_QWORD *)(v22 + 288) = v22 + 264;
    *(_QWORD *)(v22 + 296) = 0;
    v24 = _mm_loadh_ps((const double *)a1 + 13);
    *(_QWORD *)(v22 + 304) = 0;
    *(_BYTE *)(v22 + 328) = 0;
    a1[14] = v22;
    *(__m128 *)(v22 + 312) = v24;
    goto LABEL_13;
  }
  if ( v16 )
  {
    v32 = *(void (__fastcall **)(_QWORD *))(*v16 + 8LL);
    if ( (char *)v32 == (char *)sub_2F830 )
    {
      sub_2F790(
        v16,
        (__int64)"win32",
        (__int64)sub_2F830,
        v19,
        v20,
        v21,
        *(double *)v17.m128i_i64,
        0.0,
        COERCE_DOUBLE(&v34));
      operator delete(v16, 0x488u);
    }
    else
    {
      v32(v16);
    }
  }
LABEL_13:
  if ( dest )
  {
    *(_QWORD *)&v41 = 0;
    qfree(dest);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34);
  }
  return v12;
}

