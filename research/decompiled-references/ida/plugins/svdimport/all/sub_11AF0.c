unsigned __int64 __fastcall sub_11AF0(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // r13
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  _QWORD *v9; // r12
  void *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r13
  unsigned __int64 v15; // r13
  const void *v16; // rbp
  void *v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r15
  __int64 v21; // r14
  const char *v22; // r13
  int v23; // eax
  __int64 v24; // rcx
  unsigned __int64 v26; // r13
  size_t v27; // r9
  unsigned __int64 v28; // r13
  size_t v29; // r9
  const void *v30; // r15
  void *v31; // rdi
  unsigned __int64 v32; // r13
  size_t v33; // r9
  __int64 v34; // rax
  __int64 v35; // rax
  const void *v36; // r15
  void *v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // r13
  const void *v40; // r15
  void *v41; // rax
  const void *v42; // r14
  size_t na; // [rsp+8h] [rbp-80h]
  void **n; // [rsp+8h] [rbp-80h]
  __int64 v45; // [rsp+10h] [rbp-78h]
  char v46; // [rsp+27h] [rbp-61h] BYREF
  __int64 v47; // [rsp+28h] [rbp-60h] BYREF
  void *dest; // [rsp+30h] [rbp-58h] BYREF
  __int128 v49; // [rsp+38h] [rbp-50h]
  unsigned __int64 v50; // [rsp+48h] [rbp-40h]

  v3 = a2[1];
  v50 = __readfsqword(0x28u);
  v5 = *a2;
  v6 = v3;
  if ( a2[2] < (unsigned __int64)(v3 + 1) )
  {
    v35 = qvector_reserve();
    v6 = a2[1];
    *a2 = v35;
    v5 = v35;
  }
  v7 = 224 * v6 + v5;
  *(_BYTE *)v7 = 0;
  *(_QWORD *)(v7 + 8) = 0;
  *(_QWORD *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 56) = 0;
  *(_QWORD *)(v7 + 96) = 0;
  *(_QWORD *)(v7 + 104) = 0;
  *(_QWORD *)(v7 + 128) = 0;
  *(_QWORD *)(v7 + 152) = 0;
  *(_QWORD *)(v7 + 192) = 0;
  *(_QWORD *)(v7 + 200) = 0;
  *(_OWORD *)(v7 + 16) = 0;
  *(_OWORD *)(v7 + 40) = 0;
  *(_OWORD *)(v7 + 64) = 0;
  *(_OWORD *)(v7 + 80) = 0;
  *(_OWORD *)(v7 + 112) = 0;
  *(_OWORD *)(v7 + 136) = 0;
  *(_OWORD *)(v7 + 160) = 0;
  *(_OWORD *)(v7 + 176) = 0;
  *(_OWORD *)(v7 + 208) = 0;
  v8 = a2[1] + 1;
  a2[1] = v8;
  v9 = (_QWORD *)(*a2 + 224 * v8 - 224);
  v10 = (void *)v9[1];
  if ( v9[3] <= 0xFu )
  {
    v34 = qvector_reserve();
    v9[1] = v34;
    v10 = (void *)v34;
  }
  v9[2] = 16;
  qmemcpy(v10, "<none_name_reg>", 15);
  *(_BYTE *)(v9[1] + 15LL) = 0;
  v11 = *(_QWORD *)(a1[2] + 80LL * a1[3] - 8);
  v9[24] = v3;
  v9[22] = v11;
  v12 = a1[2] + 80LL * a1[3] - 80;
  v13 = *(_QWORD *)(v12 + 48);
  v14 = v13 + 48LL * *(_QWORD *)(v12 + 56);
  if ( v13 != v14 )
  {
    while ( !*(_QWORD *)(v13 + 8) || strcmp(*(const char **)v13, "derivedFrom") )
    {
      v13 += 48;
      if ( v14 == v13 )
        goto LABEL_15;
    }
    if ( v9 + 7 != (_QWORD *)(v13 + 24) )
    {
      v15 = *(_QWORD *)(v13 + 32);
      if ( v15 < 2 )
      {
        v9[8] = 0;
      }
      else
      {
        v16 = *(const void **)(v13 + 24);
        v17 = (void *)v9[7];
        if ( v9[9] < v15 )
        {
          v17 = (void *)qvector_reserve();
          v9[7] = v17;
        }
        v9[8] = v15;
        memmove(v17, v16, v15 - 1);
        *(_BYTE *)(v9[7] + v15 - 1) = 0;
      }
    }
  }
LABEL_15:
  dest = nullptr;
  v49 = 0;
  while ( (unsigned __int8)sub_10B00(a1, &v46) )
  {
    v18 = a1[3];
    v19 = a1[2];
    v20 = v19 + 80 * v18 - 80;
    v21 = *(_QWORD *)(v20 + 8);
    if ( v46 )
    {
      if ( v21 )
      {
        if ( !strcmp(*(const char **)v20, "field") )
          sub_11650(a1);
      }
    }
    else
    {
      if ( v21 )
      {
        v22 = *(const char **)v20;
        v45 = a1[2];
        na = a1[3];
        v23 = strcmp(*(const char **)v20, "register");
        v18 = na;
        v19 = v45;
        if ( !v23 )
          break;
      }
      else
      {
        v22 = s1;
      }
      if ( v18 > 1 )
      {
        v24 = 16 * (5 * v18 - 10) + v19;
        if ( v24 )
        {
          if ( *(_QWORD *)(v24 + 8) && !strcmp(*(const char **)v24, "register") )
          {
            n = (void **)(v20 + 24);
            if ( !strcmp(v22, "name") )
            {
              if ( v9 + 1 != n )
              {
                v28 = *(_QWORD *)(v20 + 32);
                if ( !v28 || (v29 = v28 - 1, v28 == 1) )
                {
                  v9[2] = 0;
                }
                else
                {
                  v30 = *(const void **)(v20 + 24);
                  v31 = (void *)v9[1];
                  if ( v9[3] < v28 )
                  {
                    v38 = qvector_reserve();
                    v9[1] = v38;
                    v29 = v28 - 1;
                    v31 = (void *)v38;
                  }
                  v9[2] = v28;
                  memmove(v31, v30, v29);
                  *(_BYTE *)(v9[1] + v28 - 1) = 0;
                }
              }
            }
            else if ( !strcmp(v22, "description") )
            {
              if ( v9 + 4 != n )
              {
                v32 = *(_QWORD *)(v20 + 32);
                if ( v32 && (v33 = v32 - 1, v32 != 1) )
                {
                  v36 = *(const void **)(v20 + 24);
                  v37 = (void *)v9[4];
                  if ( v9[6] < v32 )
                  {
                    v37 = (void *)qvector_reserve();
                    v9[4] = v37;
                    v33 = v32 - 1;
                  }
                  v9[5] = v32;
                  memmove(v37, v36, v33);
                  *(_BYTE *)(v9[4] + v32 - 1) = 0;
                }
                else
                {
                  v9[5] = 0;
                }
              }
            }
            else if ( !strcmp(v22, "access") )
            {
              if ( v9 + 13 != n )
              {
                v26 = *(_QWORD *)(v20 + 32);
                if ( v26 && (v27 = v26 - 1, v26 != 1) )
                {
                  v40 = *(const void **)(v20 + 24);
                  v41 = (void *)v9[13];
                  if ( v9[15] < v26 )
                  {
                    v41 = (void *)qvector_reserve();
                    v9[13] = v41;
                    v27 = v26 - 1;
                  }
                  v9[14] = v26;
                  memmove(v41, v40, v27);
                  *(_BYTE *)(v9[13] + v26 - 1) = 0;
                }
                else
                {
                  v9[14] = 0;
                }
              }
            }
            else if ( !strcmp(v22, "size") )
            {
              if ( *(_QWORD *)(v20 + 32) > 1u )
              {
                sub_10460(&v47, *(char **)(v20 + 24));
                v9[23] = (unsigned __int64)(v47 + 7) >> 3;
              }
            }
            else if ( !strcmp(v22, "dim") )
            {
              if ( *(_QWORD *)(v20 + 32) > 1u )
              {
                sub_10460(&v47, *(char **)(v20 + 24));
                v9[11] = v47;
              }
            }
            else if ( !strcmp(v22, "dimIncrement") )
            {
              if ( *(_QWORD *)(v20 + 32) > 1u )
              {
                sub_10460(&v47, *(char **)(v20 + 24));
                v9[12] = v47;
              }
            }
            else if ( !strcmp(v22, "dimIndex") )
            {
              if ( n != &dest )
              {
                v39 = *(_QWORD *)(v20 + 32);
                if ( v39 > 1 )
                {
                  v42 = *(const void **)(v20 + 24);
                  if ( *((_QWORD *)&v49 + 1) < v39 )
                    dest = (void *)qvector_reserve();
                  *(_QWORD *)&v49 = v39;
                  memmove(dest, v42, v39 - 1);
                  *((char *)dest + v39 - 1) = 0;
                }
                else
                {
                  *(_QWORD *)&v49 = 0;
                }
              }
            }
            else if ( !strcmp(v22, "addressOffset") && *(_QWORD *)(v20 + 32) > 1u )
            {
              sub_10460(v9 + 10, *(char **)(v20 + 24));
            }
          }
        }
      }
    }
  }
  if ( (unsigned __int64)v49 > 1 )
    sub_110C0((__int64)a1, v9 + 16, v9[11]);
  if ( dest )
  {
    *(_QWORD *)&v49 = 0;
    qfree();
  }
  return v50 - __readfsqword(0x28u);
}

