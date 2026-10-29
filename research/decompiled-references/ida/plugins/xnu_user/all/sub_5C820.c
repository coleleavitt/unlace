__int64 __fastcall sub_5C820(__int64 a1, const char *a2, unsigned int a3, int a4, void **a5)
{
  __int64 v5; // rbx
  __int64 v6; // r10
  __int64 v7; // rbx
  __int64 v11; // r15
  __int64 result; // rax
  void **p_src; // r8
  void *v14; // r9
  char v15; // al
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  void (*v20)(); // rax
  __int64 v21; // rax
  void **v22; // rbp
  _BYTE *v23; // rbp
  __int64 v24; // rbp
  size_t v25; // rax
  size_t v26; // rbx
  char *v27; // rax
  __m128i v28; // xmm0
  char *v29; // rdi
  size_t v30; // rcx
  __int64 v31; // rbp
  char *v32; // rax
  __int64 v33; // rbx
  void *v34; // rdi
  size_t v35; // rdx
  char *v36; // rcx
  __int64 v37; // r12
  __int64 v38; // rbp
  char *v39; // rdx
  __int64 v40; // rax
  void *v41; // rdi
  __int64 v43; // [rsp+8h] [rbp-E0h]
  __int64 v44; // [rsp+8h] [rbp-E0h]
  __int64 v45; // [rsp+8h] [rbp-E0h]
  size_t na; // [rsp+10h] [rbp-D8h]
  size_t n; // [rsp+10h] [rbp-D8h]
  size_t nb; // [rsp+10h] [rbp-D8h]
  void *v49; // [rsp+18h] [rbp-D0h]
  __int64 v50; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+30h] [rbp-B8h] BYREF
  char *v52; // [rsp+38h] [rbp-B0h]
  void *src; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v54; // [rsp+48h] [rbp-A0h]
  __m128i v55; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v56; // [rsp+A8h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 1008);
  v56 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 1000);
  v7 = v6 + 32 * v5;
  if ( v6 == v7 )
    return 1;
  v11 = *(_QWORD *)(a1 + 1000);
  while ( strcmp(*(const char **)v11, a2) )
  {
    v11 += 32;
    if ( v7 == v11 )
      return 1;
  }
  if ( !v11 )
    return 1;
  result = 2;
  if ( *(char *)(v11 + 8) == a4 )
  {
    v51 = 0;
    v52 = nullptr;
    netnode_check();
    v15 = *(_BYTE *)(v11 + 8);
    switch ( v15 )
    {
      case 2:
        v22 = *(void ***)(v11 + 16);
        if ( a3 != 1 )
        {
          *v22 = *a5;
          goto LABEL_13;
        }
        if ( (unsigned __int8)netnode_exist() && netnode_supval() >= 0 )
          *v22 = src;
        else
          *v22 = *a5;
        break;
      case 3:
        v23 = *(_BYTE **)(v11 + 16);
        if ( a3 != 1 )
        {
          *v23 = *(_BYTE *)a5;
          goto LABEL_13;
        }
        if ( (unsigned __int8)netnode_exist() )
        {
          if ( netnode_supval() < 0 )
            *v23 = *(_BYTE *)a5;
          else
            *v23 = (_BYTE)src;
        }
        else
        {
          *v23 = *(_BYTE *)a5;
        }
        break;
      case 1:
        v24 = *(_QWORD *)(v11 + 16);
        src = nullptr;
        v54 = 0;
        if ( a3 == 1 && (unsigned __int8)netnode_exist() && netnode_qsupstr() >= 0 )
        {
          p_src = &src;
          v14 = src;
          if ( (void **)v24 != &src )
          {
            v33 = v54;
            if ( (_QWORD)v54 && (n = v54 - 1, (_QWORD)v54 != 1) )
            {
              if ( *(_QWORD *)(v24 + 16) < (unsigned __int64)v54 )
              {
                v49 = src;
                *(_QWORD *)v24 = qvector_reserve();
                v14 = v49;
              }
              v41 = *(void **)v24;
              *(_QWORD *)(v24 + 8) = v33;
              memmove(v41, v14, n);
              *(_BYTE *)(*(_QWORD *)v24 + v33 - 1) = 0;
              if ( src )
              {
                *(_QWORD *)&v54 = 0;
                qfree();
              }
            }
            else
            {
              *(_QWORD *)(v24 + 8) = 0;
            }
          }
          break;
        }
        if ( a5 && (v25 = strlen((const char *)a5), (v26 = v25) != 0) )
        {
          v34 = *(void **)v24;
          v35 = v25 + 1;
          if ( *(_QWORD *)(v24 + 16) < v25 + 1 )
          {
            nb = v25 + 1;
            v40 = qvector_reserve();
            *(_QWORD *)v24 = v40;
            v35 = nb;
            v34 = (void *)v40;
          }
          *(_QWORD *)(v24 + 8) = v35;
          memmove(v34, a5, v26);
          *(_BYTE *)(*(_QWORD *)v24 + v26) = 0;
          if ( *(_BYTE *)(v11 + 9) == 7 && *(_QWORD *)(v24 + 8) > 1u )
            *(_QWORD *)(a1 + 960) = 1;
        }
        else
        {
          *(_QWORD *)(v24 + 8) = 0;
        }
        if ( !src )
          goto LABEL_13;
LABEL_35:
        *(_QWORD *)&v54 = 0;
        qfree();
LABEL_13:
        if ( a3 == 2 )
          *(_BYTE *)(a1 + 1024) = 1;
        break;
      case 6:
        v54 = 0;
        v55 = 0;
        src = (void *)qvector_reserve();
        v27 = (char *)src;
        *((_WORD *)src + 12) = 123;
        *(_OWORD *)(v27 + 8) = 0;
        v28 = _mm_load_si128(&v55);
        *(_QWORD *)v27 = 0;
        *((_QWORD *)v27 + 4) = 0;
        v27[40] = 0;
        *((__m128i *)v27 + 3) = v28;
        *(_QWORD *)&v54 = v54 + 1;
        if ( (unsigned int)parse_json() )
        {
          v21 = qerrstr();
        }
        else
        {
          if ( (_DWORD)v51 == 3 )
          {
            if ( !strcmp(a2, "CONFIGURATIONS") )
            {
              sub_4F7A0(v52);
            }
            else if ( !strcmp(a2, "IDA_FEATURES") )
            {
              sub_5A940((__int64 *)v52);
            }
            else if ( !strcmp(a2, "ARCH_MAP") )
            {
              sub_5C330(&qword_9AD00, (__int64 *)v52);
            }
            else if ( !strcmp(a2, "FEATURE_MAP") )
            {
              sub_5C330(&qword_9ACC0, (__int64 *)v52);
            }
            else if ( !strcmp(a2, "UNIQUE_REGISTER_MAP") )
            {
              sub_5C330(&qword_9AC80, (__int64 *)v52);
            }
            v29 = (char *)src;
            if ( !src )
              goto LABEL_13;
            v30 = v54;
            if ( (_QWORD)v54 )
            {
              v31 = 0;
              do
              {
                v32 = &v29[64 * v31];
                if ( *(_QWORD *)v32 )
                {
                  *((_QWORD *)v32 + 1) = 0;
                  na = v30;
                  qfree();
                  v29 = (char *)src;
                  v30 = na;
                }
                ++v31;
              }
              while ( v30 != v31 );
            }
            goto LABEL_35;
          }
          v21 = 2;
        }
        v36 = (char *)src;
        if ( src )
        {
          v37 = v54;
          if ( (_QWORD)v54 )
          {
            v38 = 0;
            do
            {
              v39 = &v36[64 * v38];
              if ( *(_QWORD *)v39 )
              {
                *((_QWORD *)v39 + 1) = 0;
                v44 = v21;
                qfree();
                v36 = (char *)src;
                v21 = v44;
              }
              ++v38;
            }
            while ( v37 != v38 );
          }
          v45 = v21;
          *(_QWORD *)&v54 = 0;
          qfree();
          v21 = v45;
        }
        goto LABEL_23;
      default:
        goto LABEL_13;
    }
    v16 = *(_QWORD *)(v11 + 24);
    if ( v16 )
    {
      v17 = 120 * xmmword_9AC58;
      v18 = qword_9AC50 + 120 * xmmword_9AC58;
      if ( v18 != qword_9AC50 )
      {
        v19 = qword_9AC50 + 120;
        *(_QWORD *)(qword_9AC50 + v16) = *a5;
        if ( v17 != 120 )
        {
          do
          {
            v16 = (__int64)*a5;
            v17 = *(_QWORD *)(v11 + 24);
            v19 += 120;
            *(_QWORD *)(v19 + v17 - 120) = *a5;
          }
          while ( v18 != v19 );
        }
      }
      sub_53CC0((_QWORD *)a1, v18, v17, v16, (__int64)p_src, (__int64)v14);
    }
    v20 = *(void (**)())(*(_QWORD *)a1 + 624LL);
    if ( v20 != nullsub_21 )
      ((void (__fastcall *)(__int64, __int64, void **, _QWORD, __int64 *, __int64 *))v20)(a1, v11, a5, a3, &v50, &v51);
    v21 = 0;
LABEL_23:
    v43 = v21;
    jvalue_t_clear();
    return v43;
  }
  return result;
}

