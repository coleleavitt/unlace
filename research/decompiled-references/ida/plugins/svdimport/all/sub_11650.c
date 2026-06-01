unsigned __int64 __fastcall sub_11650(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  _QWORD *v4; // r12
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  size_t v9; // rcx
  __int64 v10; // r15
  __int64 v11; // r14
  const char *v13; // r13
  int v14; // eax
  unsigned __int64 v15; // rcx
  char *v16; // rsi
  char *v17; // rsi
  unsigned __int64 v18; // r13
  size_t v19; // r9
  const void *v20; // r15
  void *v21; // rdi
  unsigned __int64 v22; // r13
  size_t v23; // r9
  __int64 v24; // rax
  unsigned __int64 v25; // r13
  const void *v26; // r15
  void *v27; // rax
  __int64 v28; // rax
  const void *v29; // r14
  void *v30; // rax
  size_t na; // [rsp+0h] [rbp-68h]
  size_t n; // [rsp+0h] [rbp-68h]
  unsigned __int64 v33; // [rsp+8h] [rbp-60h]
  char v34; // [rsp+1Fh] [rbp-49h] BYREF
  __int64 v35; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v36; // [rsp+28h] [rbp-40h]

  v1 = a1[7];
  v2 = a1[6];
  v36 = __readfsqword(0x28u);
  v4 = (_QWORD *)(*(_QWORD *)(v2 + 160 * v1 - 160 + 136) + 224LL * *(_QWORD *)(v2 + 160 * v1 - 160 + 144) - 224);
  v5 = v4[26];
  v6 = v4[25];
  if ( v4[27] < (unsigned __int64)(v5 + 1) )
  {
    v24 = qvector_reserve();
    v5 = v4[26];
    v4[25] = v24;
    v6 = v24;
  }
  v7 = v6 + 112 * v5;
  *(_QWORD *)v7 = 0;
  *(_QWORD *)(v7 + 24) = 0;
  *(_QWORD *)(v7 + 64) = 0;
  *(_QWORD *)(v7 + 88) = 0;
  *(_OWORD *)(v7 + 8) = 0;
  *(_OWORD *)(v7 + 32) = 0;
  *(_OWORD *)(v7 + 48) = 0;
  *(_OWORD *)(v7 + 72) = 0;
  *(_OWORD *)(v7 + 96) = 0;
  ++v4[26];
LABEL_4:
  while ( (unsigned __int8)sub_10B00(a1, &v34) )
  {
    while ( 1 )
    {
      v8 = a1[3];
      v9 = a1[2];
      v10 = v9 + 80 * v8 - 80;
      v11 = *(_QWORD *)(v10 + 8);
      if ( !v34 )
        break;
      if ( !v11 || strcmp(*(const char **)v10, "enum") )
        goto LABEL_4;
      sub_112A0(a1);
      if ( !(unsigned __int8)sub_10B00(a1, &v34) )
        return v36 - __readfsqword(0x28u);
    }
    if ( v11 )
    {
      v13 = *(const char **)v10;
      v33 = a1[3];
      na = a1[2];
      v14 = strcmp(*(const char **)v10, "field");
      v9 = na;
      v8 = v33;
      if ( !v14 )
        return v36 - __readfsqword(0x28u);
    }
    else
    {
      v13 = s1;
    }
    if ( v8 > 1 )
    {
      v15 = 16 * (5 * v8 - 10) + v9;
      if ( v15 )
      {
        if ( *(_QWORD *)(v15 + 8) && !strcmp(*(const char **)v15, "field") )
        {
          n = v10 + 24;
          if ( !strcmp(v13, "name") )
          {
            if ( v7 != n )
            {
              v18 = *(_QWORD *)(v10 + 32);
              if ( !v18 || (v19 = v18 - 1, v18 == 1) )
              {
                *(_QWORD *)(v7 + 8) = 0;
              }
              else
              {
                v20 = *(const void **)(v10 + 24);
                v21 = *(void **)v7;
                if ( *(_QWORD *)(v7 + 16) < v18 )
                {
                  v28 = qvector_reserve();
                  v19 = v18 - 1;
                  *(_QWORD *)v7 = v28;
                  v21 = (void *)v28;
                }
                *(_QWORD *)(v7 + 8) = v18;
                memmove(v21, v20, v19);
                *(_BYTE *)(*(_QWORD *)v7 + v18 - 1) = 0;
              }
            }
          }
          else if ( !strcmp(v13, "description") )
          {
            if ( v7 + 24 != n )
            {
              v22 = *(_QWORD *)(v10 + 32);
              if ( v22 && (v23 = v22 - 1, v22 != 1) )
              {
                v26 = *(const void **)(v10 + 24);
                v27 = *(void **)(v7 + 24);
                if ( *(_QWORD *)(v7 + 40) < v22 )
                {
                  v27 = (void *)qvector_reserve();
                  v23 = v22 - 1;
                  *(_QWORD *)(v7 + 24) = v27;
                }
                *(_QWORD *)(v7 + 32) = v22;
                memmove(v27, v26, v23);
                *(_BYTE *)(*(_QWORD *)(v7 + 24) + v22 - 1) = 0;
              }
              else
              {
                *(_QWORD *)(v7 + 32) = 0;
              }
            }
          }
          else if ( !strcmp(v13, "bitOffset") )
          {
            v16 = (char *)s1;
            if ( *(_QWORD *)(v10 + 32) )
              v16 = *(char **)(v10 + 24);
            sub_10460(&v35, v16);
            *(_QWORD *)(v7 + 48) = v35;
          }
          else if ( !strcmp(v13, "bitWidth") )
          {
            v17 = (char *)s1;
            if ( *(_QWORD *)(v10 + 32) )
              v17 = *(char **)(v10 + 24);
            sub_10460(&v35, v17);
            *(_QWORD *)(v7 + 56) = v35;
          }
          else if ( !strcmp(v13, "access") && v7 + 64 != n )
          {
            v25 = *(_QWORD *)(v10 + 32);
            if ( v25 > 1 )
            {
              v29 = *(const void **)(v10 + 24);
              v30 = *(void **)(v7 + 64);
              if ( *(_QWORD *)(v7 + 80) < v25 )
              {
                v30 = (void *)qvector_reserve();
                *(_QWORD *)(v7 + 64) = v30;
              }
              *(_QWORD *)(v7 + 72) = v25;
              memmove(v30, v29, v25 - 1);
              *(_BYTE *)(*(_QWORD *)(v7 + 64) + v25 - 1) = 0;
            }
            else
            {
              *(_QWORD *)(v7 + 72) = 0;
            }
          }
        }
      }
    }
  }
  return v36 - __readfsqword(0x28u);
}

