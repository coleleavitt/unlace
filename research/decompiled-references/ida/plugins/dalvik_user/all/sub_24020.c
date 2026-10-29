__int64 __fastcall sub_24020(_QWORD *a1)
{
  __int64 v1; // rdx
  int *v2; // rbp
  char v4; // r12
  const char *v5; // r13
  __int64 v6; // r15
  _QWORD *v7; // rax
  _QWORD *v8; // r14
  __int64 v9; // rdx
  char *v10; // rsi
  __int64 v11; // rdi
  char *v12; // rax
  const char *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r14
  int v16; // ecx
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rcx
  void *v22; // rdi
  __int64 v23; // rax
  int v24; // r13d
  int v25; // r12d
  __int64 v26; // rsi
  _DWORD *v27; // rax
  char *v28; // rax
  void *v29; // rax
  __int64 v30; // rax
  unsigned int v31; // ebx
  char n; // [rsp+0h] [rbp-A8h]
  int v34; // [rsp+8h] [rbp-A0h]
  __int64 v35; // [rsp+10h] [rbp-98h]
  _QWORD *v36; // [rsp+18h] [rbp-90h]
  int v37; // [rsp+24h] [rbp-84h] BYREF
  int *v38; // [rsp+28h] [rbp-80h] BYREF
  void *src; // [rsp+30h] [rbp-78h] BYREF
  __int128 v40; // [rsp+38h] [rbp-70h]
  __int64 v41; // [rsp+50h] [rbp-58h] BYREF
  __int128 v42; // [rsp+58h] [rbp-50h]
  unsigned __int64 v43; // [rsp+68h] [rbp-40h]

  v1 = a1[7];
  v2 = (int *)a1[6];
  v43 = __readfsqword(0x28u);
  v36 = a1 + 212;
  v40 = 0;
  src = nullptr;
  if ( 56 * v1 )
  {
LABEL_2:
    v4 = v2[1] & 1;
    if ( *((_QWORD *)v2 + 2) )
    {
LABEL_3:
      v5 = *((const char **)v2 + 1);
      if ( strcmp(v5, "java.lang.Throwable") )
        goto LABEL_30;
      n = 1;
    }
    else
    {
      while ( 1 )
      {
        v5 = nptr;
LABEL_30:
        if ( v4 )
          break;
LABEL_26:
        v2 += 14;
        v22 = src;
        if ( v2 == (int *)(a1[6] + 56LL * a1[7]) )
        {
          v31 = 1;
          goto LABEL_38;
        }
        if ( !src )
          goto LABEL_2;
        *(_QWORD *)&v40 = 0;
        qfree();
        src = nullptr;
        *((_QWORD *)&v40 + 1) = 0;
        v4 = v2[1] & 1;
        if ( *((_QWORD *)v2 + 2) )
          goto LABEL_3;
      }
      n = 0;
    }
    v41 = 0;
    v42 = 0;
    sub_1B300((__int64)&v41, v5);
    v6 = v41;
    qmutex_lock();
    v7 = sub_23D40((__int64)(a1 + 138), (__int64)&v41);
    v8 = v7;
    if ( v7 != a1 + 139 )
      v35 = *(_QWORD *)(a1[135] + 72LL * *((int *)v7 + 14) + 8);
    qmutex_unlock();
    v9 = v40;
    v10 = (char *)src;
    v11 = v40 + 1;
    if ( *((_QWORD *)&v40 + 1) < (unsigned __int64)(v40 + 1) )
    {
      v28 = (char *)qvector_reserve();
      v9 = v40;
      src = v28;
      v10 = v28;
      v11 = v40 + 1;
    }
    v12 = &v10[40 * v9];
    *((_QWORD *)v12 + 1) = v35;
    *v12 = 8;
    v12[16] = v4;
    v12[17] = n;
    *(_QWORD *)&v40 = v11;
    if ( v8 == a1 + 139 )
    {
      v13 = nptr;
      if ( *((_QWORD *)v2 + 2) )
        v13 = *((const char **)v2 + 1);
      if ( (unsigned __int8)sub_1AC90((__int64)a1, (__int64)&v37, (__int64)v13) )
      {
        v14 = operator new(0x38u);
        v15 = v40;
        v16 = *v2;
        v17 = v14;
        *(_BYTE *)(v14 + 8) = 1;
        *(_QWORD *)(v14 + 16) = a1;
        *(_QWORD *)v14 = &off_7D440;
        *(_QWORD *)(v14 + 24) = 0;
        *(_OWORD *)(v14 + 32) = 0;
        if ( v15 )
        {
          v34 = v16;
          v29 = (void *)qalloc_or_throw();
          *(_QWORD *)(v17 + 24) = v29;
          *(_QWORD *)(v17 + 40) = v15;
          memcpy(v29, src, 40 * v15);
          *(_QWORD *)(v17 + 32) = v15;
          v16 = v34;
        }
        v18 = a1[213];
        *(_DWORD *)(v17 + 48) = v16;
        if ( v18 )
        {
          v19 = (__int64)v36;
          do
          {
            while ( 1 )
            {
              v20 = *(_QWORD *)(v18 + 16);
              v21 = *(_QWORD *)(v18 + 24);
              if ( *(_DWORD *)(v18 + 32) < v37 )
                break;
              v19 = v18;
              v18 = *(_QWORD *)(v18 + 16);
              if ( !v20 )
                goto LABEL_20;
            }
            v18 = *(_QWORD *)(v18 + 24);
          }
          while ( v21 );
LABEL_20:
          if ( (_QWORD *)v19 != v36 && v37 >= *(_DWORD *)(v19 + 32) )
            goto LABEL_23;
        }
        else
        {
          v19 = (__int64)v36;
        }
        v38 = &v37;
        v19 = sub_16FF0(a1 + 211, v19, &v38);
LABEL_23:
        *(_QWORD *)(v19 + 40) = v17;
LABEL_24:
        if ( v6 )
          qfree();
        goto LABEL_26;
      }
    }
    else if ( (unsigned __int8)sub_50D40(a1 + 108, &v37, 4, 2, &src) )
    {
      v23 = a1[218];
      v24 = *v2;
      v25 = v37;
      v26 = a1[217];
      if ( a1[219] < (unsigned __int64)(v23 + 1) )
      {
        v30 = qvector_reserve();
        a1[217] = v30;
        v26 = v30;
        v23 = a1[218];
      }
      v27 = (_DWORD *)(v26 + 8 * v23);
      *v27 = v24;
      v27[1] = v25;
      ++a1[218];
      goto LABEL_24;
    }
    if ( v6 )
      qfree();
    v22 = src;
    v31 = 0;
LABEL_38:
    if ( v22 )
    {
      *(_QWORD *)&v40 = 0;
      qfree();
    }
  }
  else
  {
    return 1;
  }
  return v31;
}

