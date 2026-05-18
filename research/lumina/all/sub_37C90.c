__int64 __fastcall sub_37C90(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r13
  unsigned int v7; // r14d
  int v8; // eax
  unsigned __int64 v10; // xmm0_8
  __int64 v11; // r15
  __int64 v12; // rdx
  char *v13; // rax
  unsigned __int64 v14; // rdx
  void (__fastcall ***v15)(_QWORD); // rdi
  bool v16; // zf
  const char *v17; // rsi
  int v18; // r14d
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __m128 v23; // xmm0
  unsigned int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  int v27; // r14d
  const char *v28; // rax
  char v29; // al
  void *v30; // rdi
  __int64 v31; // rax
  void *v32; // rdi
  unsigned int v33; // [rsp+8h] [rbp-E8h]
  unsigned int v34; // [rsp+Ch] [rbp-E4h]
  __int64 *v35; // [rsp+10h] [rbp-E0h]
  __int64 v36; // [rsp+18h] [rbp-D8h]
  __int64 v37; // [rsp+20h] [rbp-D0h]
  __int64 v38; // [rsp+40h] [rbp-B0h]
  unsigned __int64 v39; // [rsp+48h] [rbp-A8h]
  unsigned int v42; // [rsp+64h] [rbp-8Ch] BYREF
  __int64 v43; // [rsp+68h] [rbp-88h] BYREF
  _BYTE v44[24]; // [rsp+70h] [rbp-80h] BYREF
  __int64 v45; // [rsp+88h] [rbp-68h]
  void *ptr; // [rsp+90h] [rbp-60h] BYREF
  __int128 v47; // [rsp+98h] [rbp-58h]
  __int64 v48; // [rsp+A8h] [rbp-48h]
  unsigned __int64 v49; // [rsp+B8h] [rbp-38h]

  v49 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a4 + 24) <= 1u )
  {
    v17 = "Bad IDB";
    goto LABEL_25;
  }
  if ( *(_QWORD *)(a4 + 48) <= 1u )
  {
    v17 = "Bad input file path";
    goto LABEL_25;
  }
  if ( *(_QWORD *)(a4 + 88) <= 1u )
  {
    v17 = "Bad hostname";
    goto LABEL_25;
  }
  if ( *(_QWORD *)(a4 + 136) != *(_QWORD *)(a4 + 112) )
  {
    v17 = "Bad addresses count";
    goto LABEL_25;
  }
  *(_QWORD *)&v44[8] = *(_QWORD *)(a4 + 80);
  v6 = a3 + 40;
  *(_QWORD *)v44 = off_2362A0;
  v7 = sub_33DC0(a1, (__int64 *)v44, a3 + 40);
  if ( !v7 )
  {
    v7 = sub_336D0(a1, (__int64 *)v44, v6);
    if ( !v7 )
      return 0;
  }
  v8 = sub_33F90(a1, a4 + 40, v7, v6);
  if ( !v8 )
    return 0;
  LODWORD(v45) = v8;
  *(_QWORD *)&v44[8] = a4 + 16;
  v10 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), _mm_cvtsi32_si128(*(_DWORD *)(a1 + 496))).m128i_u64[0];
  *(_QWORD *)v44 = off_236310;
  *(_QWORD *)&v44[16] = v10;
  v33 = sub_33DC0(a1, (__int64 *)v44, v6);
  if ( !v33 )
  {
    v33 = sub_336D0(a1, (__int64 *)v44, v6);
    if ( !v33 )
      return 0;
  }
  if ( !(unsigned __int8)sub_33870(
                           a1,
                           v6,
                           nullptr,
                           "INSERT INTO pushes (fk_idb, fk_user) VALUES (?, ?)",
                           (__int64)"uu",
                           v33,
                           *(unsigned int *)(a1 + 496)) )
    return 0;
  v34 = sub_31420(a1, v6);
  if ( !v34 )
    return 0;
  v37 = *(_QWORD *)(a4 + 112);
  if ( !v37 )
    return 0;
  v38 = 0;
  v35 = (__int64 *)(a3 + 16);
  while ( 1 )
  {
    unk_241E88(&v43, a1 + 368, v6);
    if ( !v43 )
    {
      v18 = -1;
      goto LABEL_27;
    }
    v11 = *(_QWORD *)(a4 + 104) + 88 * v38;
    v36 = *(_QWORD *)(*(_QWORD *)(a4 + 128) + 8 * v38);
    if ( v36 == -1 )
      break;
    v12 = *(_QWORD *)(v11 + 8);
    if ( v12 )
    {
      v13 = *(char **)v11;
      v14 = *(_QWORD *)v11 + v12 - 1;
      while ( (unsigned __int64)v13 < v14 )
      {
        if ( *v13++ < 0 )
          goto LABEL_21;
      }
    }
    v22 = *(_QWORD *)(v11 + 40) + *(_QWORD *)(v11 + 32);
    v45 = 0;
    *(_QWORD *)&v44[16] = v22;
    v23 = _mm_loadh_ps((const double *)(v11 + 32));
    ptr = nullptr;
    LODWORD(v47) = 0;
    *(__m128 *)v44 = v23;
    while ( 1 )
    {
      LODWORD(v47) = sub_196ED0(&v44[8], v22);
      if ( !(_DWORD)v47 )
        break;
      v39 = *(_QWORD *)&v44[16];
      v24 = sub_196ED0(&v44[8], *(_QWORD *)&v44[16]);
      v25 = *(_QWORD *)&v44[8];
      if ( __CFADD__(v24, *(_QWORD *)&v44[8]) )
        break;
      if ( v39 < (unsigned __int64)v24 + *(_QWORD *)&v44[8] )
        break;
      *(_QWORD *)&v44[8] += v24;
      v45 = v25;
      if ( !v25 )
        break;
      ptr = (void *)v24;
      if ( (unsigned int)(v47 - 12) <= 0x7FFFFFF3 || !(_DWORD)v47 )
        goto LABEL_21;
      v22 = *(_QWORD *)&v44[16];
    }
    if ( *(_DWORD *)(v11 + 56) == 1 )
    {
      if ( *(_QWORD *)(v11 + 72) == 16 )
      {
        *(_QWORD *)v44 = 0;
        v42 = 0;
        *(_QWORD *)(a3 + 8) = v11 + 56;
        v45 = 0;
        ptr = nullptr;
        v48 = 0;
        *(_OWORD *)&v44[8] = 0;
        v47 = 0;
        v26 = sub_340A0(a1, &v42, (__int64)v44, v11, v36, &v43, *(_DWORD *)(a4 + 12), v6, v35);
        v27 = v26;
        if ( v26 != 1 )
        {
          if ( (unsigned int)(v26 - 2) > 1 )
          {
            v30 = ptr;
            if ( ptr )
            {
LABEL_51:
              *(_QWORD *)&v47 = 0;
              j__free(v30);
            }
LABEL_52:
            if ( *(_QWORD *)v44 )
            {
              *(_QWORD *)&v44[8] = 0;
              j__free(*(void **)v44);
            }
            v18 = -1;
            sub_2C870(&v43, v6);
            goto LABEL_27;
          }
          if ( !v42 )
          {
            if ( !unk_2439A0 )
              sub_198E10(1566);
            BUG();
          }
          v28 = s1;
          if ( *(_QWORD *)&v44[8] )
            v28 = *(const char **)v44;
          v29 = sub_33870(
                  a1,
                  v6,
                  nullptr,
                  "INSERT INTO history (fk_func, fk_idb, name, ea, metadata, fk_push) VALUES (?, ?, ?, ?, ?, ?)",
                  (__int64)"uusUBu",
                  v42,
                  v33,
                  v28,
                  v48,
                  &ptr,
                  v34);
          v30 = ptr;
          if ( !v29 )
          {
            if ( ptr )
              goto LABEL_51;
            goto LABEL_52;
          }
          if ( v27 == 2 )
          {
            if ( !ptr )
            {
              if ( *(_QWORD *)v44 )
              {
                v18 = 1;
                *(_QWORD *)&v44[8] = 0;
                j__free(*(void **)v44);
                ((void (__fastcall *)(__int64 *, __int64))sub_2C860)(&v43, v6);
                goto LABEL_27;
              }
LABEL_76:
              v18 = 1;
              ((void (__fastcall *)(__int64 *, __int64))sub_2C860)(&v43, v6);
              goto LABEL_27;
            }
            *(_QWORD *)&v47 = 0;
            v18 = 1;
            j__free(ptr);
            v32 = *(void **)v44;
            if ( !*(_QWORD *)v44 )
              goto LABEL_76;
          }
          else
          {
            if ( !ptr )
            {
LABEL_68:
              if ( *(_QWORD *)v44 )
              {
                *(_QWORD *)&v44[8] = 0;
                j__free(*(void **)v44);
              }
LABEL_70:
              v18 = 0;
              ((void (__fastcall *)(__int64 *, __int64))sub_2C860)(&v43, v6);
              goto LABEL_27;
            }
LABEL_64:
            *(_QWORD *)&v47 = 0;
            v18 = 0;
            j__free(v30);
            v32 = *(void **)v44;
            if ( !*(_QWORD *)v44 )
              goto LABEL_70;
          }
          *(_QWORD *)&v44[8] = 0;
          j__free(v32);
          ((void (__fastcall *)(__int64 *, __int64))sub_2C860)(&v43, v6);
          goto LABEL_27;
        }
        v30 = ptr;
        if ( !ptr )
          goto LABEL_68;
        goto LABEL_64;
      }
      sub_2DC20(v35, "Bad data");
    }
    else
    {
      sub_2DC20(v35, "Only MD5 patterns are accepted");
    }
    v18 = -3;
    sub_2C870(&v43, v6);
LABEL_27:
    v19 = a2[3];
    v20 = a2[2];
    if ( a2[4] < (unsigned __int64)(v19 + 1) )
    {
      v31 = sub_1987B0(a2 + 2, v20, v19 + 1, 4);
      a2[2] = v31;
      v20 = v31;
      v19 = a2[3];
    }
    *(_DWORD *)(v20 + 4 * v19) = v18;
    v21 = v43;
    ++a2[3];
    if ( v21 )
    {
      v16 = (*(_DWORD *)(v21 + 8))-- == 1;
      if ( v16 )
        (**(void (__fastcall ***)(__int64))v21)(v21);
    }
    if ( ++v38 == v37 )
      return 0;
  }
LABEL_21:
  unk_241E98(&v43, v6);
  v15 = (void (__fastcall ***)(_QWORD))v43;
  if ( v43 )
  {
    v16 = (*(_DWORD *)(v43 + 8))-- == 1;
    if ( v16 )
      (**v15)(v15);
  }
  v17 = "Invalid metadata";
LABEL_25:
  sub_2DC20((__int64 *)(a3 + 16), v17);
  return 0xFFFFFFFFLL;
}
