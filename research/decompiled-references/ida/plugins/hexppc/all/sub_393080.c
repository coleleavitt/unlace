__int64 __fastcall sub_393080(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 (__fastcall *a14)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))
{
  int v15; // r12d
  __int64 v16; // rdx
  __int16 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v27; // rax
  __int64 v28; // rdi
  char v29; // dl
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 func; // rax
  __int16 v38; // r13
  __int64 v39; // rax
  __int16 v40; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v41[7]; // [rsp+10h] [rbp-38h] BYREF

  v15 = *(_DWORD *)(a1 + 80);
  v41[1] = __readfsqword(0x28u);
  v40 = 0;
  if ( v15 == 3 )
  {
    func = get_func();
    v17 = v40;
    v16 = *(_QWORD *)(a1 + 32);
    a14 = callui;
    if ( func )
    {
      v38 = v40 & 0xFFFE;
      if ( (*(_BYTE *)(func + 16) & 4) != 0 )
        v38 = v40 | 1;
      if ( *(_DWORD *)(func + 64) != *(_DWORD *)(*(_QWORD *)(a1 + 128) + 588LL) )
      {
        v17 = v38 & 0xFFFD;
        v40 = v17;
        if ( v16 )
          goto LABEL_4;
        goto LABEL_26;
      }
      v17 = v38 | 2;
      v40 = v17;
    }
    if ( v16 )
      goto LABEL_4;
LABEL_26:
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(185, a2, 1, &v40, &callui, callui);
    v39 = *(_QWORD *)(a1 + 32);
    if ( v39 )
    {
      *(_DWORD *)(v39 + 108) &= ~8u;
      if ( (*(_BYTE *)a1 & 2) == 0 )
        sub_391910(a1, 0, *(double *)a3.m128_u64, v18, v19, v20);
    }
    goto LABEL_8;
  }
  v16 = *(_QWORD *)(a1 + 32);
  if ( !v16 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(185, a2, 0, &v40, &callui, a14);
    v36 = *(_QWORD *)(a1 + 32);
    if ( v36 )
    {
      *(_DWORD *)(v36 + 108) &= ~8u;
      if ( (*(_BYTE *)a1 & 2) == 0 )
        sub_391910(a1, 0, *(double *)a3.m128_u64, v18, v34, v35);
    }
    goto LABEL_10;
  }
  v17 = 0;
LABEL_4:
  *(_DWORD *)(v16 + 108) |= 8u;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(185, a2, v15 == 3, &v40, &callui, a14);
  v24 = *(_QWORD *)(a1 + 32);
  if ( v24 )
  {
    *(_DWORD *)(v24 + 108) &= ~8u;
    if ( (*(_BYTE *)a1 & 2) == 0 )
      sub_391910(a1, 0, *(double *)a3.m128_u64, v18, v19, v20);
  }
  if ( v15 == 3 )
  {
LABEL_8:
    if ( v40 != v17 )
    {
      v27 = get_func();
      v28 = v27;
      if ( v27 )
      {
        v29 = v40;
        v30 = *(_QWORD *)(v27 + 16);
        v31 = v30 & 0xFFFFFFFFFFFFFFFBLL;
        v32 = v30 | 4;
        if ( (v40 & 1) != 0 )
          v31 = v32;
        *(_QWORD *)(v28 + 16) = v31;
        v33 = -1;
        if ( (v29 & 2) != 0 )
          v33 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 588LL);
        *(_DWORD *)(v28 + 64) = v33;
        update_func();
      }
    }
    v25 = *(_QWORD *)(a1 + 24);
    v41[0] = 0;
    sub_372620(v25, a3, a4, a5, a6, v22, v23, a9, a10, (__int64)v41, v18, v19, v20, v21);
    sub_25FAB0((__int64 *)(*(_QWORD *)(a1 + 24) + 408LL));
    clear_tinfo_t();
  }
LABEL_10:
  sub_38B4A0(a1, 1u, v18);
  return 1;
}

