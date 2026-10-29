__int64 __fastcall sub_5ADD0(__int64 a1)
{
  __int64 v1; // rsi
  void *v3; // rdi
  int v4; // r12d
  int v5; // ebp
  unsigned int v6; // r14d
  void (*v7)(void); // rax
  void *v9; // r14
  __int64 v10; // r15
  char v11; // al
  int v12; // r15d
  unsigned int v13; // r14d
  unsigned int v14; // eax
  unsigned __int64 v15; // r8
  unsigned int v16; // r9d
  __int64 v17; // rsi
  unsigned int v18; // r14d
  int v19; // eax
  __int64 v20; // rdi
  const char *v21; // rdx
  __int64 v22; // rax
  __int64 *v23; // rbx
  __int64 v24; // rsi
  __m128i si128; // xmm0
  __int64 *v26; // rbx
  __m128i *v27; // rsi
  __m128i v28; // xmm0
  void (*v29)(void); // rax
  __int64 v30; // rax
  __int64 *v31; // rbx
  __m128i *v32; // rsi
  __m128i v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int v36; // ebp
  unsigned int v37; // [rsp+8h] [rbp-100h]
  unsigned int v38; // [rsp+8h] [rbp-100h]
  unsigned int v39; // [rsp+10h] [rbp-F8h]
  __int64 v40; // [rsp+10h] [rbp-F8h]
  int v41; // [rsp+24h] [rbp-E4h] BYREF
  int v42; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v43; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned int v44; // [rsp+30h] [rbp-D8h] BYREF
  int v45; // [rsp+34h] [rbp-D4h] BYREF
  void *v46; // [rsp+38h] [rbp-D0h] BYREF
  void *v47; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD v48[2]; // [rsp+48h] [rbp-C0h] BYREF
  const char *v49; // [rsp+50h] [rbp-B8h] BYREF
  int v50; // [rsp+58h] [rbp-B0h]
  __int64 v51; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v52; // [rsp+68h] [rbp-A0h]
  const char *v53; // [rsp+80h] [rbp-88h] BYREF
  __int128 v54; // [rsp+88h] [rbp-80h]
  unsigned int v55[10]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v56; // [rsp+C8h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 608);
  v56 = __readfsqword(0x28u);
  (*(void (__fastcall **)(void **, __int64, __int64))(*(_QWORD *)v1 + 24LL))(&v46, v1, 1);
  v3 = v46;
  if ( !v46 )
  {
    v23 = *(__int64 **)(a1 + 600);
    v24 = *v23;
    if ( (unsigned __int64)v23[2] <= 0x19 )
    {
      v30 = qvector_reserve(v23, v24, 26, 1);
      *v23 = v30;
      v24 = v30;
      v3 = v46;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_941D0);
    v23[1] = 26;
    *(__m128i *)v24 = si128;
    *(__m128i *)(v24 + 9) = _mm_load_si128((const __m128i *)&xmmword_941E0);
    *(_BYTE *)(*v23 + 25) = 0;
    goto LABEL_6;
  }
  v4 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v46 + 32LL))(v46);
  v5 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v46 + 24LL))(v46);
  if ( !(*(unsigned __int8 (__fastcall **)(void *, unsigned int *, __int64))(*(_QWORD *)v46 + 48LL))(v46, v55, 28)
    || v55[0] <= 0x131084C )
  {
    sub_37FD0(*(__int64 **)(a1 + 600), (__int64)"Unsupported PDB stream version %d", v55[0]);
LABEL_5:
    v3 = v46;
LABEL_6:
    v6 = 0;
    goto LABEL_7;
  }
  v9 = v46;
  v10 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v46 + 32LL))(v46);
  if ( !(*(unsigned __int8 (__fastcall **)(void *, int *, __int64))(*(_QWORD *)v9 + 48LL))(v9, &v41, 4) )
    goto LABEL_5;
  v11 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v9 + 40LL))(v9, v10);
  v3 = v46;
  if ( !v11 )
    goto LABEL_6;
  v12 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v46 + 32LL))(v46) + 4;
  (*(void (__fastcall **)(void **, void *, _QWORD, _QWORD))(*(_QWORD *)v46 + 16LL))(
    &v47,
    v46,
    (unsigned int)(v41 + v12),
    0);
  if ( !v47 )
  {
    v6 = 0;
    goto LABEL_54;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(void *, int *, __int64))(*(_QWORD *)v47 + 48LL))(v47, &v42, 4)
    || !(*(unsigned __int8 (__fastcall **)(void *, unsigned int *, __int64))(*(_QWORD *)v47 + 48LL))(v47, &v43, 4)
    || (v37 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v47 + 32LL))(v47),
        !(*(unsigned __int8 (__fastcall **)(void *, unsigned int *, __int64))(*(_QWORD *)v47 + 48LL))(v47, &v44, 4)) )
  {
LABEL_48:
    v6 = 0;
    goto LABEL_49;
  }
  if ( v44 < v43 >> 5 )
  {
    v26 = *(__int64 **)(a1 + 600);
    v27 = (__m128i *)*v26;
    if ( (unsigned __int64)v26[2] <= 0x12 )
    {
      v35 = qvector_reserve(v26, v27, 19, 1);
      *v26 = v35;
      v27 = (__m128i *)v35;
    }
    v28 = _mm_load_si128((const __m128i *)&xmmword_941F0);
    v26[1] = 19;
    v27[1].m128i_i16[0] = 30821;
    *v27 = v28;
    *(_BYTE *)(*v26 + 18) = 0;
    goto LABEL_48;
  }
  v13 = (v43 >> 5) - (((v43 & 0x1F) == 0) - 1);
  v39 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v47 + 24LL))(v47);
  v14 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v47 + 32LL))(v47);
  if ( v14 >= v39 || (v15 = 4LL * v13, v39 - v14 < v15) )
  {
    v31 = *(__int64 **)(a1 + 600);
    v32 = (__m128i *)*v31;
    if ( (unsigned __int64)v31[2] <= 0x21 )
    {
      v34 = qvector_reserve(v31, v32, 34, 1);
      *v31 = v34;
      v32 = (__m128i *)v34;
    }
    v33 = _mm_load_si128((const __m128i *)&xmmword_94200);
    v31[1] = 34;
    v32[2].m128i_i8[0] = 116;
    *v32 = v33;
    v32[1] = _mm_load_si128((const __m128i *)&xmmword_94210);
    *(_BYTE *)(*v31 + 33) = 0;
    goto LABEL_48;
  }
  v16 = 4 * v13;
  v17 = 0;
  v51 = 0;
  v52 = 0;
  if ( v15 )
  {
    v51 = qvector_reserve(&v51, 0, 4LL * v13, 1);
    memset((void *)(v51 + v52), 0, 4LL * v13 - v52);
    v17 = v51;
    v16 = 4 * v13;
    *(_QWORD *)&v52 = 4LL * v13;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v47 + 48LL))(v47, v17, v16) )
    goto LABEL_59;
  v40 = v51;
  if ( !(*(unsigned __int8 (__fastcall **)(void *, __int64))(*(_QWORD *)v47 + 40LL))(v47, v37 + 4LL * (v44 + 1)) )
    goto LABEL_59;
  v18 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v47 + 32LL))(v47);
  if ( !(*(unsigned __int8 (__fastcall **)(void *, int *, __int64))(*(_QWORD *)v47 + 48LL))(v47, &v45, 4) )
    goto LABEL_59;
  v19 = v45;
  if ( v45 )
  {
    sub_244A0();
    v19 = v45;
  }
  v6 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v47 + 40LL))(v47, v18 + 4LL * (unsigned int)(v19 + 1));
  if ( !(_BYTE)v6 )
    goto LABEL_59;
  v38 = 0;
  if ( !v43 )
    goto LABEL_64;
  while ( (*(_DWORD *)(v40 + 4LL * (v38 >> 5)) & (1 << v38)) == 0 )
  {
LABEL_34:
    if ( ++v38 >= v43 )
      goto LABEL_64;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(void *, _DWORD *, __int64))(*(_QWORD *)v47 + 48LL))(v47, v48, 8)
    || !(*(unsigned __int8 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v46 + 40LL))(v46, (unsigned int)(v48[0] + v12)) )
  {
    goto LABEL_59;
  }
  v53 = nullptr;
  v54 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(void *, const char **))(*(_QWORD *)v46 + 56LL))(v46, &v53) )
  {
    v22 = v54;
    if ( (unsigned __int64)v54 > 1 )
    {
      qstrupr(v53);
      v22 = v54;
    }
    v20 = *(_QWORD *)(a1 + 608);
    v21 = src;
    if ( v22 )
      v21 = v53;
    v49 = v21;
    v50 = v48[1];
    sub_58EE0((__int64 *)(v20 + 8), (__int64)&v49);
    --v42;
    if ( v53 )
    {
      *(_QWORD *)&v54 = 0;
      qfree(v53);
    }
    goto LABEL_34;
  }
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v53);
  }
LABEL_64:
  if ( v42 )
  {
LABEL_59:
    v6 = 0;
    goto LABEL_60;
  }
  v36 = v4 + v5;
  while ( v36 >= (unsigned __int64)((*(__int64 (__fastcall **)(void *))(*(_QWORD *)v47 + 32LL))(v47) + 4)
       && (*(unsigned __int8 (__fastcall **)(void *, const char **, __int64))(*(_QWORD *)v47 + 48LL))(v47, &v53, 4) )
  {
    switch ( (_DWORD)v53 )
    {
      case 0x1329141:
        *(_BYTE *)(a1 + 136) = 1;
        goto LABEL_60;
      case 0x13351DC:
        *(_BYTE *)(a1 + 136) = 1;
        break;
      case 0x4D544F4E:
        *(_BYTE *)(a1 + 137) = 1;
        break;
      case 0x494E494D:
        *(_BYTE *)(a1 + 138) = 1;
        break;
    }
  }
LABEL_60:
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51);
  }
LABEL_49:
  if ( v47 )
  {
    v29 = *(void (**)(void))(*(_QWORD *)v47 + 8LL);
    if ( (char *)v29 == (char *)sub_54910 )
      operator delete(v47, 0x40u);
    else
      v29();
    v3 = v46;
    goto LABEL_7;
  }
LABEL_54:
  v3 = v46;
LABEL_7:
  if ( v3 )
  {
    v7 = *(void (**)(void))(*(_QWORD *)v3 + 8LL);
    if ( (char *)v7 == (char *)sub_54910 )
      operator delete(v3, 0x40u);
    else
      v7();
  }
  return v6;
}

