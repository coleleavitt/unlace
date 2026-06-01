__int64 __fastcall sub_397200(
        __int64 a1,
        __int64 a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double (__fastcall *a7)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
        double a8,
        __m128i a9,
        double a10)
{
  int v11; // r12d
  __int64 v12; // rdx
  __int16 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  double v17; // xmm0_8
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v21; // rax
  __int64 v22; // rdi
  char v23; // dl
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  double v31; // xmm0_8
  __int64 v32; // rax
  __int64 func; // rax
  __int16 v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  double v38; // xmm0_8
  __int64 v39; // rax
  __int16 v40; // [rsp+Eh] [rbp-3Ah] BYREF
  __int64 v41; // [rsp+10h] [rbp-38h]
  unsigned __int64 v42; // [rsp+18h] [rbp-30h]

  v11 = *(_DWORD *)(a1 + 80);
  v42 = __readfsqword(0x28u);
  v40 = 0;
  if ( v11 == 3 )
  {
    func = get_func();
    v13 = v40;
    v12 = *(_QWORD *)(a1 + 32);
    a7 = callui;
    if ( func )
    {
      v34 = v40 & 0xFFFE;
      if ( (*(_BYTE *)(func + 16) & 4) != 0 )
        v34 = v40 | 1;
      if ( *(_DWORD *)(func + 64) != *(_DWORD *)(*(_QWORD *)(a1 + 128) + 588LL) )
      {
        v13 = v34 & 0xFFFD;
        v40 = v13;
        if ( v12 )
          goto LABEL_4;
        goto LABEL_26;
      }
      v13 = v34 | 2;
      v40 = v13;
    }
    if ( v12 )
      goto LABEL_4;
LABEL_26:
    v38 = ((double (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
            185,
            a2,
            1,
            &v40,
            &callui,
            callui);
    v39 = *(_QWORD *)(a1 + 32);
    if ( v39 )
    {
      *(_DWORD *)(v39 + 108) &= ~8u;
      if ( (*(_BYTE *)a1 & 2) == 0 )
        sub_395A90(a1, 0, v38, v35, v36, v37, a8, a9, a10);
    }
    goto LABEL_8;
  }
  v12 = *(_QWORD *)(a1 + 32);
  if ( !v12 )
  {
    v31 = ((double (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(185, a2, 0, &v40, &callui, a7);
    v32 = *(_QWORD *)(a1 + 32);
    if ( v32 )
    {
      *(_DWORD *)(v32 + 108) &= ~8u;
      if ( (*(_BYTE *)a1 & 2) == 0 )
        sub_395A90(a1, 0, v31, v28, v29, v30, a8, a9, a10);
    }
    goto LABEL_10;
  }
  v13 = 0;
LABEL_4:
  *(_DWORD *)(v12 + 108) |= 8u;
  v17 = ((double (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
          185,
          a2,
          v11 == 3,
          &v40,
          &callui,
          a7);
  v18 = *(_QWORD *)(a1 + 32);
  if ( v18 )
  {
    *(_DWORD *)(v18 + 108) &= ~8u;
    if ( (*(_BYTE *)a1 & 2) == 0 )
      sub_395A90(a1, 0, v17, v14, v15, v16, a8, a9, a10);
  }
  if ( v11 == 3 )
  {
LABEL_8:
    if ( v40 != v13 )
    {
      v21 = get_func();
      v22 = v21;
      if ( v21 )
      {
        v23 = v40;
        v24 = *(_QWORD *)(v21 + 16);
        v25 = v24 & 0xFFFFFFFFFFFFFFFBLL;
        v26 = v24 | 4;
        if ( (v40 & 1) != 0 )
          v25 = v26;
        *(_QWORD *)(v22 + 16) = v25;
        v27 = -1;
        if ( (v23 & 2) != 0 )
          v27 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 588LL);
        *(_DWORD *)(v22 + 64) = v27;
        update_func();
      }
    }
    v19 = *(_QWORD *)(a1 + 24);
    v41 = 0;
    sub_3767A0(v19);
    sub_263730((__int64 *)(*(_QWORD *)(a1 + 24) + 408LL));
    clear_tinfo_t();
  }
LABEL_10:
  sub_38F620(a1, 1);
  return 1;
}

