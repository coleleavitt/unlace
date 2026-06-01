__int64 __fastcall sub_3B490(__int64 a1, const char *a2)
{
  unsigned __int64 v4; // r14
  size_t v5; // r8
  __int64 v6; // r15
  size_t v7; // r9
  char *v8; // rsi
  size_t v9; // rax
  size_t v10; // r15
  size_t v11; // r14
  unsigned __int64 v12; // rbp
  size_t v13; // r14
  __int64 v14; // r13
  size_t v15; // r15
  char *v16; // rsi
  unsigned int v17; // ebx
  int v19; // eax
  size_t v20; // rbp
  const void *v21; // r12
  unsigned __int64 v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rax
  unsigned __int64 i; // rdx
  char v26; // al
  char *v27; // r12
  __int64 v28; // rbp
  __int64 v29; // r14
  __int64 v30; // r15
  size_t v31; // r13
  void *v32; // r13
  __int64 v33; // rbp
  char v34; // r13
  int v35; // r13d
  const char *v36; // r14
  __int64 v37; // rbp
  int v38; // r15d
  int v39; // eax
  void *v40; // rdi
  size_t v41; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v42; // [rsp+18h] [rbp-C0h] BYREF
  char *v43; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v44; // [rsp+28h] [rbp-B0h]
  __int64 v45; // [rsp+40h] [rbp-98h] BYREF
  __int128 v46; // [rsp+48h] [rbp-90h]
  char *s1; // [rsp+60h] [rbp-78h] BYREF
  __int128 v48; // [rsp+68h] [rbp-70h]
  void *src; // [rsp+80h] [rbp-58h]
  __int128 v50; // [rsp+88h] [rbp-50h]
  unsigned __int64 v51; // [rsp+98h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 124) = 0;
  v44 = 0;
  v43 = (char *)qvector_reserve();
  *(_QWORD *)&v44 = 11;
  strcpy(v43, "qSupported");
  if ( a2 )
  {
    v50 = 0;
    src = (void *)qvector_reserve();
    *(_QWORD *)&v50 = 2;
    *(_BYTE *)src = 58;
    *((_BYTE *)src + 1) = 0;
    v4 = v50;
    if ( (_QWORD)v50 )
    {
      v5 = v50 - 1;
      if ( (_QWORD)v50 != 1 )
      {
        v6 = v44;
        v7 = v50 - 1;
        if ( (_QWORD)v44 )
        {
          v6 = v44 - 1;
          v7 = v5 + v44 - 1;
          v4 = v50 + v44 - 1;
        }
        v8 = v43;
        if ( *((_QWORD *)&v44 + 1) < v4 )
        {
          v41 = v7;
          v43 = (char *)qvector_reserve();
          v7 = v41;
          v8 = v43;
          v5 = v50 - 1;
        }
        *(_QWORD *)&v44 = v4;
        v8[v7] = 0;
        memcpy(&v43[v6], src, v5);
      }
    }
    if ( src )
    {
      *(_QWORD *)&v50 = 0;
      qfree();
      src = nullptr;
    }
    v50 = 0;
    v9 = strlen(a2);
    v10 = v9 + 1;
    v11 = v9;
    src = (void *)qvector_reserve();
    *(_QWORD *)&v50 = v10;
    memmove(src, a2, v11);
    *((_BYTE *)src + v11) = 0;
    v12 = v50;
    if ( (_QWORD)v50 )
    {
      v13 = v50 - 1;
      if ( (_QWORD)v50 != 1 )
      {
        v14 = v44;
        v15 = v50 - 1;
        if ( (_QWORD)v44 )
        {
          v14 = v44 - 1;
          v15 = v13 + v44 - 1;
          v12 = v50 + v44 - 1;
        }
        v16 = v43;
        if ( *((_QWORD *)&v44 + 1) < v12 )
        {
          v43 = (char *)qvector_reserve();
          v16 = v43;
        }
        *(_QWORD *)&v44 = v12;
        v16[v15] = 0;
        memcpy(&v43[v14], src, v13);
      }
    }
    if ( src )
    {
      *(_QWORD *)&v50 = 0;
      qfree();
    }
  }
  if ( (unsigned int)sub_39C70(a1, &v43) != 1 || (v19 = sub_39BC0(a1), *(_BYTE *)(a1 + 16) = 0, v19 != 1) )
  {
    v17 = 0;
    goto LABEL_22;
  }
  v20 = *(_QWORD *)(a1 + 32);
  v21 = *(const void **)(a1 + 24);
  v45 = 0;
  v46 = 0;
  if ( v20 )
  {
    v40 = nullptr;
    if ( v20 != -1 )
    {
      v45 = qvector_reserve();
      v40 = (void *)v45;
    }
    *(_QWORD *)&v46 = v20 + 1;
    memmove(v40, v21, v20);
    v42 = 0;
    *(_BYTE *)(v45 + v20) = 0;
    v23 = v45;
    v20 = v46 - 1;
    v22 = v46 + 1;
    if ( !(_QWORD)v46 )
    {
      v20 = 0;
      v22 = 2;
    }
    if ( *((_QWORD *)&v46 + 1) >= v22 )
      goto LABEL_29;
  }
  else
  {
    v42 = 0;
    v22 = 2;
  }
  v45 = qvector_reserve();
  v23 = v45;
LABEL_29:
  *(_QWORD *)&v46 = v22;
  *(_BYTE *)(v23 + v20) = 59;
  *(_BYTE *)(v45 + v20 + 1) = 0;
  v24 = v46;
  if ( (_QWORD)v46 )
  {
    for ( i = 0; i < v24 - 1; i = v42 )
    {
      v48 = 0;
      s1 = nullptr;
      v26 = sub_38470((__int64 *)&s1, &v45, &v42, 59);
      v27 = s1;
      if ( !v26 || (v28 = v48, (unsigned __int64)v48 <= 1) )
      {
        if ( s1 )
          qfree();
        break;
      }
      v29 = v48 - 1;
      src = nullptr;
      v50 = 0;
      if ( (unsigned __int64)(v48 - 1) <= 0xA )
      {
        v30 = v48;
        v31 = v48 - 1;
      }
      else
      {
        v30 = 12;
        v31 = 11;
      }
      src = (void *)qvector_reserve();
      *(_QWORD *)&v50 = v30;
      memmove(src, v27, v31);
      *((_BYTE *)src + v31) = 0;
      v32 = src;
      if ( (_QWORD)v50 )
      {
        v38 = strcmp((const char *)src, "PacketSize=");
        if ( v32 )
        {
          *(_QWORD *)&v50 = 0;
          qfree();
        }
        if ( !v38 )
        {
          v39 = strtol(v27 + 11, nullptr, 16);
          if ( v39 > 0 )
            *(_QWORD *)(a1 + 200) = v39;
          goto LABEL_51;
        }
      }
      else if ( src )
      {
        qfree();
      }
      v33 = v28 - 2;
      v34 = v27[v33];
      if ( !v33 )
      {
        if ( v27 )
        {
          *(_QWORD *)&v48 = 0;
          qfree();
          s1 = nullptr;
          *((_QWORD *)&v48 + 1) = 0;
        }
        switch ( v34 )
        {
          case '-':
            v27 = s1;
LABEL_81:
            v35 = 2;
            break;
          case '?':
            v27 = s1;
LABEL_79:
            v35 = 0;
            break;
          case '+':
            v27 = s1;
            v35 = 1;
            break;
          default:
            goto LABEL_53;
        }
LABEL_46:
        v36 = s;
        if ( (_QWORD)v48 )
          v36 = v27;
        v37 = 0;
        while ( strcmp(v36, off_68C40[v37]) )
        {
          if ( ++v37 == 15 )
            goto LABEL_51;
        }
        *(_DWORD *)(a1 + 4LL * (int)v37 + 80) = v35;
LABEL_51:
        if ( !v27 )
          goto LABEL_53;
LABEL_52:
        qfree();
        goto LABEL_53;
      }
      *(_QWORD *)&v48 = v29;
      v27[v33] = 0;
      switch ( v34 )
      {
        case '-':
          goto LABEL_81;
        case '?':
          goto LABEL_79;
        case '+':
          v35 = 1;
          goto LABEL_46;
      }
      if ( v27 )
        goto LABEL_52;
LABEL_53:
      v24 = v46;
      if ( !(_QWORD)v46 )
        break;
    }
  }
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree();
  }
  v17 = 1;
LABEL_22:
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree();
  }
  return v17;
}

