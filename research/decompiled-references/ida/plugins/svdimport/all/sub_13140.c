_BYTE *__fastcall sub_13140(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r14
  _BYTE *result; // rax
  __int64 v5; // r15
  const char *v6; // rbx
  _QWORD *v7; // r13
  _QWORD *v8; // r12
  const char *v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rsi
  const char *v13; // rsi
  __int64 v14; // r9
  const char *v15; // rdx
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  const void *v19; // r10
  void *v20; // rax
  unsigned __int64 v21; // rbx
  const void *v22; // r10
  void *v23; // rdi
  unsigned __int64 v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // [rsp+8h] [rbp-60h]
  _QWORD *v30; // [rsp+10h] [rbp-58h]
  __int64 v31; // [rsp+10h] [rbp-58h]
  __int64 v32; // [rsp+10h] [rbp-58h]
  __int64 v33; // [rsp+10h] [rbp-58h]
  __int64 v34; // [rsp+10h] [rbp-58h]
  __int64 v35; // [rsp+10h] [rbp-58h]
  __int64 v36; // [rsp+10h] [rbp-58h]
  const void *v39; // [rsp+28h] [rbp-40h]
  const void *v40; // [rsp+28h] [rbp-40h]

  v3 = (_QWORD *)(a3 + 8);
  result = *(_BYTE **)a2;
  v5 = *(_QWORD *)a2 + 104LL;
  v29 = *(_QWORD *)a2 + 224LL * *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 != v29 )
  {
    if ( *result )
      goto LABEL_36;
LABEL_3:
    if ( *(_QWORD *)(v5 - 40) > 1u )
    {
      v6 = *(const char **)(v5 - 48);
      v30 = v3;
      v7 = *(_QWORD **)(a3 + 16);
      if ( v7 )
      {
        v8 = v3;
        do
        {
          while ( 1 )
          {
            v9 = s1;
            if ( v7[5] )
              v9 = (const char *)v7[4];
            v10 = strcmp(v9, v6);
            v11 = v7[2];
            v12 = v7[3];
            if ( v10 < 0 )
              break;
            v8 = v7;
            v7 = (_QWORD *)v7[2];
            if ( !v11 )
              goto LABEL_11;
          }
          v7 = (_QWORD *)v7[3];
        }
        while ( v12 );
LABEL_11:
        if ( v8 != v3 )
        {
          v13 = s1;
          if ( v8[5] )
            v13 = (const char *)v8[4];
          if ( strcmp(v6, v13) >= 0 )
          {
            v14 = v8[7];
            if ( !*(_BYTE *)v14 )
              goto LABEL_20;
            v30 = v8;
          }
        }
      }
      v15 = s1;
      if ( *(_QWORD *)(v5 - 88) )
        v15 = *(const char **)(v5 - 96);
      sub_5990((__int64)"? Unknown derivedFrom %s in %s\n", v6, v15);
      v14 = v30[7];
LABEL_20:
      if ( *(_QWORD *)(v5 - 64) <= 1u && v5 - 72 != v14 + 32 )
      {
        v18 = *(_QWORD *)(v14 + 40);
        if ( v18 < 2 )
        {
          *(_QWORD *)(v5 - 64) = 0;
        }
        else
        {
          v19 = *(const void **)(v14 + 32);
          v20 = *(void **)(v5 - 72);
          if ( *(_QWORD *)(v5 - 56) < v18 )
          {
            v40 = *(const void **)(v14 + 32);
            v35 = v14;
            v20 = (void *)qvector_reserve();
            v19 = v40;
            v14 = v35;
            *(_QWORD *)(v5 - 72) = v20;
          }
          *(_QWORD *)(v5 - 64) = v18;
          v31 = v14;
          memmove(v20, v19, v18 - 1);
          v14 = v31;
          *(_BYTE *)(*(_QWORD *)(v5 - 72) + v18 - 1) = 0;
        }
      }
      if ( !*(_QWORD *)(v5 - 24) )
        *(_QWORD *)(v5 - 24) = *(_QWORD *)(v14 + 80);
      if ( !*(_QWORD *)(v5 - 16) )
        *(_QWORD *)(v5 - 16) = *(_QWORD *)(v14 + 88);
      if ( !*(_QWORD *)(v5 - 8) )
        *(_QWORD *)(v5 - 8) = *(_QWORD *)(v14 + 96);
      if ( *(_QWORD *)(v5 + 8) <= 1u && v5 != v14 + 104 )
      {
        v21 = *(_QWORD *)(v14 + 112);
        if ( v21 < 2 )
        {
          v16 = *(_QWORD *)(v5 + 32);
          *(_QWORD *)(v5 + 8) = 0;
          if ( v16 )
          {
LABEL_29:
            if ( !*(_QWORD *)(v5 + 80) )
            {
              v17 = *(_QWORD *)(v14 + 184);
              *(_QWORD *)(v5 + 80) = v17;
              if ( !v17 )
                *(_QWORD *)(v5 + 80) = *(_QWORD *)(v5 + 72);
            }
            if ( !*(_QWORD *)(v5 - 8) )
              *(_QWORD *)(v5 - 8) = *(_QWORD *)(v5 + 80);
            goto LABEL_34;
          }
LABEL_51:
          v24 = *(_QWORD *)(v14 + 136);
          if ( v24 )
          {
            v25 = *(_QWORD *)(v5 + 24);
            v26 = 0;
            if ( *(_QWORD *)(v5 + 40) < v24 )
            {
              v36 = v14;
              v28 = qvector_reserve();
              v14 = v36;
              *(_QWORD *)(v5 + 24) = v28;
              v25 = v28;
              v26 = *(_QWORD *)(v5 + 32);
            }
            v33 = v14;
            memset((void *)(v25 + 8 * v26), 0, 8 * (v24 - v26));
            v14 = v33;
            *(_QWORD *)(v5 + 32) = v24;
            if ( *(_QWORD *)(v33 + 136) )
            {
              do
              {
                *(_QWORD *)(*(_QWORD *)(v5 + 24) + 8 * v16) = *(_QWORD *)(*(_QWORD *)(v33 + 128) + 8 * v16);
                ++v16;
              }
              while ( v16 < *(_QWORD *)(v33 + 136) );
            }
          }
          goto LABEL_29;
        }
        v22 = *(const void **)(v14 + 104);
        v23 = *(void **)v5;
        if ( *(_QWORD *)(v5 + 16) < v21 )
        {
          v39 = *(const void **)(v14 + 104);
          v34 = v14;
          v27 = qvector_reserve();
          v22 = v39;
          v14 = v34;
          *(_QWORD *)v5 = v27;
          v23 = (void *)v27;
        }
        *(_QWORD *)(v5 + 8) = v21;
        v32 = v14;
        memmove(v23, v22, v21 - 1);
        v14 = v32;
        *(_BYTE *)(*(_QWORD *)v5 + v21 - 1) = 0;
      }
      v16 = *(_QWORD *)(v5 + 32);
      if ( v16 )
        goto LABEL_29;
      goto LABEL_51;
    }
    if ( !*(_QWORD *)(v5 + 80) )
      *(_QWORD *)(v5 + 80) = *(_QWORD *)(v5 + 72);
LABEL_34:
    while ( 1 )
    {
      result = (_BYTE *)(v5 + 224);
      if ( v29 == v5 + 120 )
        break;
      v5 += 224;
      if ( !*(result - 104) )
        goto LABEL_3;
LABEL_36:
      sub_13140(a1, v5 + 48, a3);
    }
  }
  return result;
}

