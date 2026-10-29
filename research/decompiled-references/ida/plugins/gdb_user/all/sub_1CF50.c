void __fastcall sub_1CF50(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  _DWORD *v4; // rbp
  __int64 *v5; // r8
  const char *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rbx
  const char *v9; // r14
  __int64 v10; // r15
  const char *v11; // rdi
  const char **v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rbp
  const char *v15; // rdi
  int v16; // eax
  void (__fastcall *v17)(__int64, __int64); // rdx
  __int64 *v18; // r8
  const char *v19; // rdi
  unsigned __int64 v20; // rbx
  const void *v21; // r15
  void *v22; // rdi
  unsigned __int64 v23; // r9
  size_t v24; // r10
  const void *v25; // r11
  void *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  _DWORD *v29; // [rsp+8h] [rbp-60h]
  __int64 *v30; // [rsp+8h] [rbp-60h]
  __int64 *v31; // [rsp+8h] [rbp-60h]
  __int64 *v32; // [rsp+8h] [rbp-60h]
  __int64 *v33; // [rsp+8h] [rbp-60h]
  unsigned __int64 v34; // [rsp+18h] [rbp-50h]
  unsigned __int64 v35; // [rsp+18h] [rbp-50h]
  size_t v36; // [rsp+20h] [rbp-48h]
  const void *v37; // [rsp+28h] [rbp-40h]

  v4 = a3;
  if ( *a3 != 3 )
  {
    while ( 2 )
    {
      while ( 1 )
      {
        v7 = a2[9];
        v8 = v7 + 48LL * a2[10];
        if ( v7 != v8 )
          break;
LABEL_8:
        v4 += 6;
        if ( *v4 == 3 )
          goto LABEL_16;
      }
      v9 = *((const char **)v4 + 1);
      v10 = a2[9];
      do
      {
        v11 = s;
        if ( *(_QWORD *)(v10 + 8) )
          v11 = *(const char **)v10;
        if ( !strcmp(v11, v9) )
        {
          v5 = (__int64 *)(a1 + *((_QWORD *)v4 + 2));
          if ( !*v4 )
          {
            if ( v5 != (__int64 *)(v10 + 24) )
            {
              v20 = *(_QWORD *)(v10 + 32);
              if ( v20 > 1 )
              {
                v21 = *(const void **)(v10 + 24);
                v22 = (void *)*v5;
                if ( v5[2] < v20 )
                {
                  v32 = (__int64 *)(a1 + *((_QWORD *)v4 + 2));
                  v27 = qvector_reserve();
                  v5 = v32;
                  v22 = (void *)v27;
                  *v32 = v27;
                }
                v5[1] = v20;
                v30 = v5;
                memmove(v22, v21, v20 - 1);
                *(_BYTE *)(*v30 + v20 - 1) = 0;
              }
              else
              {
                v5[1] = 0;
              }
            }
            goto LABEL_8;
          }
          if ( *v4 == 1 )
          {
            v6 = s;
            if ( *(_QWORD *)(v10 + 32) )
              v6 = *(const char **)(v10 + 24);
            v29 = (_DWORD *)(a1 + *((_QWORD *)v4 + 2));
            *v29 = strtol(v6, nullptr, 10);
            goto LABEL_8;
          }
        }
        v10 += 48;
      }
      while ( v8 != v10 );
      v4 += 6;
      if ( *v4 != 3 )
        continue;
      break;
    }
  }
LABEL_16:
  v12 = (const char **)(v4 + 6);
  if ( v4[6] != 3 )
  {
    while ( 1 )
    {
      v13 = a2[6];
      v14 = v13 + 96LL * a2[7];
      if ( v13 != v14 )
        break;
LABEL_30:
      v12 += 3;
      if ( *(_DWORD *)v12 == 3 )
        return;
    }
    while ( 1 )
    {
      v15 = s;
      if ( *(_QWORD *)(v13 + 8) )
        v15 = *(const char **)v13;
      if ( strcmp(v15, v12[1]) )
        goto LABEL_20;
      v16 = *(_DWORD *)v12;
      v17 = (void (__fastcall *)(__int64, __int64))v12[2];
      if ( *(_DWORD *)v12 == 2 )
        break;
      v18 = (__int64 *)((char *)v17 + a1);
      if ( !v16 )
      {
        if ( v18 != (__int64 *)(v13 + 24) )
        {
          v23 = *(_QWORD *)(v13 + 32);
          if ( v23 && (v24 = v23 - 1, v23 != 1) )
          {
            v25 = *(const void **)(v13 + 24);
            v26 = (void *)*v18;
            if ( v18[2] < v23 )
            {
              v37 = *(const void **)(v13 + 24);
              v36 = v23 - 1;
              v35 = *(_QWORD *)(v13 + 32);
              v33 = (__int64 *)((char *)v17 + a1);
              v28 = qvector_reserve();
              v18 = v33;
              v25 = v37;
              v24 = v36;
              v23 = v35;
              v26 = (void *)v28;
              *v33 = v28;
            }
            v18[1] = v23;
            v34 = v23;
            v31 = v18;
            memmove(v26, v25, v24);
            *(_BYTE *)(*v31 + v34 - 1) = 0;
          }
          else
          {
            v18[1] = 0;
          }
        }
        goto LABEL_20;
      }
      if ( v16 == 1 )
      {
        v19 = s;
        if ( *(_QWORD *)(v13 + 32) )
          v19 = *(const char **)(v13 + 24);
        v13 += 96;
        *(_DWORD *)v18 = strtol(v19, nullptr, 10);
        if ( v14 == v13 )
          goto LABEL_30;
      }
      else
      {
LABEL_20:
        v13 += 96;
        if ( v14 == v13 )
          goto LABEL_30;
      }
    }
    v17(a1, v13);
    goto LABEL_20;
  }
}

