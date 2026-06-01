unsigned __int64 __fastcall sub_12810(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r13
  unsigned __int64 v10; // r13
  const void *v11; // rbp
  void *v12; // rax
  unsigned __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // r13
  const char *v17; // rbp
  const char *v19; // r14
  int v20; // eax
  __int64 v21; // rax
  bool v22; // zf
  __int64 v23; // rcx
  __int64 v24; // rbp
  __int64 v25; // rax
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // r14
  const void *v29; // r13
  void *v30; // rax
  const void *v31; // r13
  void *v32; // rax
  const void *v33; // r15
  void *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // [rsp+8h] [rbp-60h]
  __int64 v37; // [rsp+8h] [rbp-60h]
  char v38; // [rsp+1Fh] [rbp-49h] BYREF
  __int64 v39; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v40; // [rsp+28h] [rbp-40h]

  v1 = a1[7];
  v2 = a1[6];
  v40 = __readfsqword(0x28u);
  if ( a1[8] < (unsigned __int64)(v1 + 1) )
  {
    v25 = qvector_reserve();
    v1 = a1[7];
    a1[6] = v25;
    v2 = v25;
  }
  v4 = v2 + 160 * v1;
  *(_QWORD *)v4 = 0;
  *(_QWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 48) = 0;
  *(_QWORD *)(v4 + 72) = 0;
  *(_QWORD *)(v4 + 96) = 0;
  *(_QWORD *)(v4 + 136) = 0;
  *(_OWORD *)(v4 + 8) = 0;
  *(_OWORD *)(v4 + 32) = 0;
  *(_OWORD *)(v4 + 56) = 0;
  *(_OWORD *)(v4 + 80) = 0;
  *(_OWORD *)(v4 + 104) = 0;
  *(_OWORD *)(v4 + 120) = 0;
  *(_OWORD *)(v4 + 144) = 0;
  v5 = a1[3];
  v6 = a1[2];
  ++a1[7];
  v7 = v6 + 80 * v5 - 80;
  v8 = *(_QWORD *)(v7 + 48);
  v9 = v8 + 48LL * *(_QWORD *)(v7 + 56);
  if ( v8 != v9 )
  {
    while ( !*(_QWORD *)(v8 + 8) || strcmp(*(const char **)v8, "derivedFrom") )
    {
      v8 += 48;
      if ( v9 == v8 )
        goto LABEL_13;
    }
    if ( v4 + 96 != v8 + 24 )
    {
      v10 = *(_QWORD *)(v8 + 32);
      if ( v10 < 2 )
      {
        *(_QWORD *)(v4 + 104) = 0;
      }
      else
      {
        v11 = *(const void **)(v8 + 24);
        v12 = *(void **)(v4 + 96);
        if ( *(_QWORD *)(v4 + 112) < v10 )
        {
          v12 = (void *)qvector_reserve();
          *(_QWORD *)(v4 + 96) = v12;
        }
        *(_QWORD *)(v4 + 104) = v10;
        memmove(v12, v11, v10 - 1);
        *(_BYTE *)(*(_QWORD *)(v4 + 96) + v10 - 1) = 0;
      }
    }
  }
LABEL_13:
  while ( (unsigned __int8)sub_10B00(a1, &v38) )
  {
    while ( 1 )
    {
      v13 = a1[3];
      v14 = a1[2];
      v15 = v14 + 80 * v13 - 80;
      v16 = *(_QWORD *)(v15 + 8);
      if ( !v38 )
        break;
      if ( !v16 )
        goto LABEL_13;
      v17 = *(const char **)v15;
      if ( !strcmp(*(const char **)v15, "cluster") )
      {
        sub_122B0(a1, (__int64 *)(v4 + 136));
        goto LABEL_13;
      }
      if ( strcmp(v17, "register") )
        goto LABEL_13;
      sub_11AF0(a1, (__int64 *)(v4 + 136));
      if ( !(unsigned __int8)sub_10B00(a1, &v38) )
        return v40 - __readfsqword(0x28u);
    }
    if ( v16 )
    {
      v19 = *(const char **)v15;
      v36 = a1[2];
      v20 = strcmp(*(const char **)v15, "peripheral");
      v14 = v36;
      if ( !v20 )
        return v40 - __readfsqword(0x28u);
    }
    else
    {
      v19 = s1;
    }
    if ( v13 > 1 )
    {
      v21 = 16 * (5 * v13 - 10);
      v22 = v21 + v14 == 0;
      v23 = v21 + v14;
      v24 = v23;
      if ( !v22 && *(_QWORD *)(v23 + 8) && !strcmp(*(const char **)v23, "peripheral") )
      {
        v37 = v15 + 24;
        if ( !strcmp(v19, "baseAddress") )
        {
          if ( *(_QWORD *)(v15 + 32) > 1u )
            sub_10460((__int64 *)(v4 + 120), *(char **)(v15 + 24));
        }
        else if ( !strcmp(v19, "name") )
        {
          if ( v4 != v37 )
          {
            v26 = *(_QWORD *)(v15 + 32);
            if ( v26 > 1 )
            {
              v33 = *(const void **)(v15 + 24);
              v34 = *(void **)v4;
              if ( *(_QWORD *)(v4 + 16) < v26 )
              {
                v35 = qvector_reserve();
                *(_QWORD *)v4 = v35;
                v34 = (void *)v35;
              }
              *(_QWORD *)(v4 + 8) = v26;
              memmove(v34, v33, v26 - 1);
              *(_BYTE *)(*(_QWORD *)v4 + v26 - 1) = 0;
            }
            else
            {
              *(_QWORD *)(v4 + 8) = 0;
            }
          }
        }
        else if ( !strcmp(v19, "description") )
        {
          if ( v4 + 48 != v37 )
          {
            v27 = *(_QWORD *)(v15 + 32);
            if ( v27 > 1 )
            {
              v31 = *(const void **)(v15 + 24);
              v32 = *(void **)(v4 + 48);
              if ( *(_QWORD *)(v4 + 64) < v27 )
              {
                v32 = (void *)qvector_reserve();
                *(_QWORD *)(v4 + 48) = v32;
              }
              *(_QWORD *)(v4 + 56) = v27;
              memmove(v32, v31, v27 - 1);
              *(_BYTE *)(*(_QWORD *)(v4 + 48) + v27 - 1) = 0;
            }
            else
            {
              *(_QWORD *)(v4 + 56) = 0;
            }
          }
        }
        else if ( !strcmp(v19, "prependToName") )
        {
          if ( v4 + 72 != v37 )
          {
            v28 = *(_QWORD *)(v15 + 32);
            if ( v28 < 2 )
            {
              *(_QWORD *)(v4 + 80) = 0;
            }
            else
            {
              v29 = *(const void **)(v15 + 24);
              v30 = *(void **)(v4 + 72);
              if ( *(_QWORD *)(v4 + 88) < v28 )
              {
                v30 = (void *)qvector_reserve();
                *(_QWORD *)(v4 + 72) = v30;
              }
              *(_QWORD *)(v4 + 80) = v28;
              memmove(v30, v29, v28 - 1);
              *(_BYTE *)(*(_QWORD *)(v4 + 72) + v28 - 1) = 0;
            }
          }
        }
        else if ( !strcmp(v19, "size") && *(_QWORD *)(v15 + 32) > 1u )
        {
          sub_10460(&v39, *(char **)(v15 + 24));
          *(_QWORD *)(v24 + 72) = (unsigned __int64)(v39 + 7) >> 3;
        }
      }
    }
  }
  return v40 - __readfsqword(0x28u);
}

