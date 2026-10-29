__int64 __fastcall sub_3C4D0(__int64 a1, char *a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r13
  unsigned int v12; // r12d
  _QWORD *v14; // rax
  __int64 *v15; // rax
  __int64 v16; // r15
  unsigned __int64 v17; // r14
  __int64 v18; // rbp
  int v19; // ebx
  const char *v20; // rsi
  const char *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rax
  size_t v26; // r13
  size_t v27; // r13
  size_t v28; // r13
  int v29; // eax
  __m128i v30; // xmm0
  int v31; // eax
  char *v32; // rax
  const char *v33; // r12
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rsi
  __int64 v36; // rbp
  void *v37; // rax
  void *v38; // rax
  void *v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  char *v42; // rsi
  _QWORD *v45; // [rsp+10h] [rbp-A8h]
  __int64 *v46; // [rsp+18h] [rbp-A0h]
  __int64 v47; // [rsp+20h] [rbp-98h] BYREF
  __int128 v48; // [rsp+28h] [rbp-90h]
  char *v49; // [rsp+40h] [rbp-78h] BYREF
  __int128 v50; // [rsp+48h] [rbp-70h]
  char *v51; // [rsp+60h] [rbp-58h] BYREF
  __int128 v52; // [rsp+68h] [rbp-50h]
  unsigned __int64 v53; // [rsp+78h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v9 = sub_135E0(a1, a2);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 8) + 24LL))(*(_QWORD *)(a3 + 8));
  v47 = 0;
  v11 = v10;
  v48 = 0;
  if ( !(unsigned __int8)sub_36D30(&v47, a4) )
    goto LABEL_3;
  if ( !*(_QWORD *)(v11 + 8) )
    goto LABEL_3;
  v14 = sub_23D40(v9 + 1104, (__int64)&v47);
  if ( v14 == (_QWORD *)(v9 + 1112) )
    goto LABEL_3;
  v45 = (_QWORD *)(v9 + 1040);
  v15 = sub_25060((_QWORD *)(v9 + 1040), *(_QWORD *)(*(_QWORD *)(v9 + 1080) + 72LL * *((int *)v14 + 14) + 8));
  v46 = v15;
  if ( !v15 )
    goto LABEL_3;
  v16 = *v15;
  v17 = *(_QWORD *)(a6 + 8);
  v18 = *v15 + 112 * v15[1];
  if ( v18 == *v15 )
  {
    if ( v17 > 0xA )
    {
      v19 = 0;
      goto LABEL_35;
    }
    goto LABEL_3;
  }
  v19 = 0;
  while ( 1 )
  {
    v22 = *(_QWORD *)(v16 + 24);
    if ( v17 )
    {
      v20 = *(const char **)a6;
      v21 = nptr;
      if ( !v22 )
        goto LABEL_12;
    }
    else
    {
      if ( !v22 )
      {
        if ( v18 == v16 )
          goto LABEL_3;
        goto LABEL_19;
      }
      v20 = nptr;
    }
    v21 = *(const char **)(v16 + 16);
LABEL_12:
    if ( !strcmp(v21, v20) )
      break;
    v16 += 112;
    ++v19;
    if ( v18 == v16 )
      goto LABEL_34;
  }
  if ( v18 != v16 )
    goto LABEL_19;
LABEL_34:
  v16 = v18;
  if ( v17 <= 0xA )
    goto LABEL_3;
LABEL_35:
  v33 = *(const char **)a6;
  if ( !strncmp(v33, "_bad_name_", 0xAu) )
  {
    v34 = strtoll(v33 + 10, nullptr, 10);
    v35 = v46[1];
    v36 = *v46;
    if ( v34 < v35 )
    {
      v19 = v34;
      v16 = v36 + 112 * v34;
    }
    v18 = 112 * v35 + v36;
  }
  if ( v16 == v18 )
    goto LABEL_3;
LABEL_19:
  v12 = sub_253E0(v45, (__m128i *)v16, *(_QWORD *)(v11 + 8));
  if ( !(_BYTE)v12 )
  {
LABEL_3:
    v12 = 0;
    goto LABEL_4;
  }
  v23 = operator new(0xA0u);
  v24 = *(_QWORD *)(v11 + 8);
  *(_QWORD *)v23 = &off_7D548;
  *(_QWORD *)(v23 + 8) = 0;
  *(_QWORD *)(v23 + 32) = v24;
  *(_OWORD *)(v23 + 16) = 0;
  *(_QWORD *)(v23 + 40) = *(_QWORD *)v16;
  v25 = *(_QWORD *)(v16 + 8);
  *(_QWORD *)(v23 + 56) = 0;
  *(_QWORD *)(v23 + 48) = v25;
  *(_OWORD *)(v23 + 64) = 0;
  v26 = *(_QWORD *)(v16 + 24);
  if ( v26 )
  {
    v39 = (void *)qalloc_or_throw();
    *(_QWORD *)(v23 + 56) = v39;
    *(_QWORD *)(v23 + 72) = v26;
    memcpy(v39, *(const void **)(v16 + 16), v26);
    *(_QWORD *)(v23 + 64) = v26;
  }
  *(_QWORD *)(v23 + 80) = 0;
  *(_OWORD *)(v23 + 88) = 0;
  v27 = *(_QWORD *)(v16 + 48);
  if ( v27 )
  {
    v38 = (void *)qalloc_or_throw();
    *(_QWORD *)(v23 + 80) = v38;
    *(_QWORD *)(v23 + 96) = v27;
    memcpy(v38, *(const void **)(v16 + 40), v27);
    *(_QWORD *)(v23 + 88) = v27;
  }
  *(_QWORD *)(v23 + 104) = 0;
  *(_OWORD *)(v23 + 112) = 0;
  v28 = *(_QWORD *)(v16 + 72);
  if ( v28 )
  {
    v37 = (void *)qalloc_or_throw();
    *(_QWORD *)(v23 + 104) = v37;
    *(_QWORD *)(v23 + 120) = v28;
    memcpy(v37, *(const void **)(v16 + 64), v28);
    *(_QWORD *)(v23 + 112) = v28;
  }
  v29 = *(_DWORD *)(v16 + 88);
  v30 = _mm_loadu_si128((const __m128i *)(v16 + 96));
  *(_DWORD *)(v23 + 152) = v19;
  v49 = nullptr;
  *(_DWORD *)(v23 + 128) = v29;
  v31 = dword_7FC2C;
  *(__m128i *)(v23 + 136) = v30;
  *(_DWORD *)a1 = v31;
  *(_QWORD *)(a1 + 8) = v23;
  v50 = 0;
  if ( a2 )
  {
    if ( (unsigned __int8)sub_36D30((__int64 *)&v49, (__int64 *)a2) )
    {
      v32 = &byte_7FAF1;
      if ( (_QWORD)v50 )
        v32 = v49;
      if ( *v32 == 76 )
      {
        v51 = nullptr;
        v52 = 0;
        v40 = sub_135E0(&v49, a2);
        v41 = *(_QWORD *)(v23 + 144);
        if ( !v41 || !(unsigned __int8)sub_25C00((_QWORD *)(v40 + 1040), (void **)&v51, v41) )
          goto LABEL_44;
        v42 = (char *)nptr;
        if ( (_QWORD)v52 )
          v42 = v51;
        if ( (unsigned __int8)sub_387A0(a2, v42, 1, 0) )
        {
          if ( !v51 )
            goto LABEL_31;
        }
        else
        {
LABEL_44:
          if ( !v51 )
            goto LABEL_31;
        }
        *(_QWORD *)&v52 = 0;
        qfree();
      }
    }
LABEL_31:
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree();
    }
  }
LABEL_4:
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree();
  }
  return v12;
}

