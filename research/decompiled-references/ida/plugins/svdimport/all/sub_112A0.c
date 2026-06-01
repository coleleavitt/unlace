unsigned __int64 __fastcall sub_112A0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v4; // rdx
  _QWORD *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r12
  unsigned __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // r13
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  unsigned __int64 v17; // r13
  const void *v18; // r15
  void *v19; // rdi
  unsigned __int64 v20; // r13
  const void *v21; // r15
  void *v22; // rdi
  const void *v23; // r15
  void *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  char *s1; // [rsp+0h] [rbp-58h]
  char v29; // [rsp+17h] [rbp-41h] BYREF
  unsigned __int64 v30; // [rsp+18h] [rbp-40h]

  v1 = a1[7];
  v2 = a1[6];
  v30 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(v2 + 160 * v1 - 160 + 136) + 224LL * *(_QWORD *)(v2 + 160 * v1 - 160 + 144) - 224;
  v5 = (_QWORD *)(*(_QWORD *)(v4 + 200) + 112LL * *(_QWORD *)(v4 + 208) - 112);
  v6 = v5[12];
  v7 = v5[11];
  if ( v5[13] < (unsigned __int64)(v6 + 1) )
  {
    v16 = qvector_reserve();
    v6 = v5[12];
    v5[11] = v16;
    v7 = v16;
  }
  v8 = v7 + 72 * v6;
  *(_QWORD *)v8 = 0;
  *(_QWORD *)(v8 + 24) = 0;
  *(_QWORD *)(v8 + 48) = 0;
  *(_OWORD *)(v8 + 8) = 0;
  *(_OWORD *)(v8 + 32) = 0;
  *(_OWORD *)(v8 + 56) = 0;
  ++v5[12];
  while ( (unsigned __int8)sub_10B00(a1, &v29) )
  {
    if ( !v29 )
    {
      v10 = a1[3];
      v11 = a1[2];
      v12 = v11 + 80 * v10 - 80;
      if ( *(_QWORD *)(v12 + 8) )
      {
        s1 = *(char **)v12;
        if ( !strcmp(*(const char **)v12, "enum") )
          return v30 - __readfsqword(0x28u);
      }
      else
      {
        s1 = (char *)::s1;
      }
      if ( v10 > 1 )
      {
        v13 = 16 * (5 * v10 - 10) + v11;
        if ( v13 )
        {
          if ( *(_QWORD *)(v13 + 8) && !strcmp(*(const char **)v13, "enum") )
          {
            v14 = v12 + 24;
            if ( !strcmp(s1, "name") )
            {
              if ( v8 != v14 )
              {
                v17 = *(_QWORD *)(v12 + 32);
                if ( v17 < 2 )
                {
                  *(_QWORD *)(v8 + 8) = 0;
                }
                else
                {
                  v18 = *(const void **)(v12 + 24);
                  v19 = *(void **)v8;
                  if ( *(_QWORD *)(v8 + 16) < v17 )
                  {
                    v25 = qvector_reserve();
                    *(_QWORD *)v8 = v25;
                    v19 = (void *)v25;
                  }
                  *(_QWORD *)(v8 + 8) = v17;
                  memmove(v19, v18, v17 - 1);
                  *(_BYTE *)(*(_QWORD *)v8 + v17 - 1) = 0;
                }
              }
            }
            else if ( !strcmp(s1, "description") )
            {
              if ( v8 + 24 != v14 )
              {
                v20 = *(_QWORD *)(v12 + 32);
                if ( v20 > 1 )
                {
                  v21 = *(const void **)(v12 + 24);
                  v22 = *(void **)(v8 + 24);
                  if ( *(_QWORD *)(v8 + 40) < v20 )
                  {
                    v26 = qvector_reserve();
                    *(_QWORD *)(v8 + 24) = v26;
                    v22 = (void *)v26;
                  }
                  *(_QWORD *)(v8 + 32) = v20;
                  memmove(v22, v21, v20 - 1);
                  *(_BYTE *)(*(_QWORD *)(v8 + 24) + v20 - 1) = 0;
                }
                else
                {
                  *(_QWORD *)(v8 + 32) = 0;
                }
              }
            }
            else if ( !strcmp(s1, "value") && v8 + 48 != v14 )
            {
              v15 = *(_QWORD *)(v12 + 32);
              if ( v15 > 1 )
              {
                v23 = *(const void **)(v12 + 24);
                v24 = *(void **)(v8 + 48);
                if ( *(_QWORD *)(v8 + 64) < v15 )
                {
                  v27 = qvector_reserve();
                  *(_QWORD *)(v8 + 48) = v27;
                  v24 = (void *)v27;
                }
                *(_QWORD *)(v8 + 56) = v15;
                memmove(v24, v23, v15 - 1);
                *(_BYTE *)(*(_QWORD *)(v8 + 48) + v15 - 1) = 0;
              }
              else
              {
                *(_QWORD *)(v8 + 56) = 0;
              }
            }
          }
        }
      }
    }
  }
  return v30 - __readfsqword(0x28u);
}

