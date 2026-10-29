__int64 __fastcall sub_67A10(__int64 a1, unsigned int *a2, const char *a3)
{
  unsigned int v5; // ecx
  size_t v8; // rax
  size_t v9; // r12
  __int64 v10; // rax
  __int64 v11; // r14
  char *v12; // rcx
  _QWORD *v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // esi
  _DWORD *v17; // rax
  _DWORD *v18; // r15
  unsigned int *v19; // r12
  unsigned int v20; // r14d
  unsigned __int8 v21; // al
  char *v22; // rdi
  size_t v23; // rbp
  char *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 *v27; // rdx
  char *v28; // rax
  int v29; // edx
  int v30; // edx
  size_t v31; // rax
  unsigned __int8 v32; // cl
  size_t v33; // rbp
  __int64 v34; // rax
  __int64 v35; // r12
  unsigned __int64 *v36; // rdi
  unsigned __int64 *v37; // rax
  __int64 *v38; // rdx
  volatile signed __int32 *v39; // rax
  char *v40; // rdi
  size_t v41; // rbp
  unsigned __int64 *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // r12
  __int64 *v45; // rdx
  volatile signed __int32 *v46; // rax
  int v47; // edx
  int v48; // edx
  unsigned __int8 v49; // [rsp+0h] [rbp-98h]
  unsigned __int8 v50; // [rsp+0h] [rbp-98h]
  unsigned __int8 v51; // [rsp+8h] [rbp-90h]
  _QWORD *v52; // [rsp+8h] [rbp-90h]
  __int64 *v53; // [rsp+18h] [rbp-80h]
  char v54; // [rsp+2Fh] [rbp-69h] BYREF
  unsigned __int64 *v55; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 *v56; // [rsp+38h] [rbp-60h] BYREF
  char *s1; // [rsp+40h] [rbp-58h] BYREF
  __int128 v58; // [rsp+48h] [rbp-50h]
  unsigned __int64 v59; // [rsp+58h] [rbp-40h]

  v59 = __readfsqword(0x28u);
  if ( !a3 || !*a3 || !*(_QWORD *)(a1 + 440) )
    return 0;
  v8 = strlen(a3);
  v9 = v8;
  if ( !v8 )
  {
    s1 = (char *)&std::string::_Rep::_S_empty_rep_storage[3];
    goto LABEL_11;
  }
  v10 = std::string::_Rep::_S_create(v8, 0, &v55);
  v11 = v10;
  v12 = (char *)(v10 + 24);
  if ( v9 == 1 )
    *(_BYTE *)(v10 + 24) = *a3;
  else
    v12 = (char *)memcpy((void *)(v10 + 24), a3, v9);
  if ( (unsigned __int64 *)v11 == std::string::_Rep::_S_empty_rep_storage )
  {
    s1 = v12;
LABEL_11:
    v53 = (__int64 *)(a1 + 472);
    v13 = sub_67660((__int64 *)(a1 + 472), (const void **)&s1);
    goto LABEL_12;
  }
  *(_QWORD *)v11 = v9;
  *(_DWORD *)(v11 + 16) = 0;
  *(_BYTE *)(v11 + v9 + 24) = 0;
  v53 = (__int64 *)(a1 + 472);
  s1 = v12;
  v13 = sub_67660((__int64 *)(a1 + 472), (const void **)&s1);
  if ( &_pthread_key_create )
  {
    v30 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 16), 0xFFFFFFFF);
  }
  else
  {
    v30 = *(_DWORD *)(v11 + 16);
    v5 = v30 - 1;
    *(_DWORD *)(v11 + 16) = v30 - 1;
  }
  if ( v30 <= 0 )
  {
    v52 = v13;
    std::string::_Rep::_M_destroy(v11, &v56);
    v13 = v52;
  }
LABEL_12:
  if ( v13 )
  {
    v14 = *((_DWORD *)v13 + 4);
    *a2 = v14;
    LOBYTE(v5) = v14 != 0;
    return v5;
  }
  v15 = sub_73B20(a3, *(unsigned int *)(a1 + 528));
  v16 = v15;
  if ( *(_DWORD *)(a1 + 532) != 4 )
    v16 = (unsigned __int16)v15;
  v17 = sub_5FD60((_QWORD *)(a1 + 416), v16);
  v18 = v17;
  if ( !v17 )
  {
    v41 = strlen(a3);
    v42 = &std::string::_Rep::_S_empty_rep_storage[3];
    if ( v41 )
    {
      v43 = std::string::_Rep::_S_create(v41, 0, &v56);
      v44 = v43;
      v42 = (unsigned __int64 *)(v43 + 24);
      if ( v41 == 1 )
        *(_BYTE *)(v43 + 24) = *a3;
      else
        v42 = (unsigned __int64 *)memcpy((void *)(v43 + 24), a3, v41);
      if ( (unsigned __int64 *)v44 != std::string::_Rep::_S_empty_rep_storage )
      {
        *(_QWORD *)v44 = v41;
        *(_DWORD *)(v44 + 16) = 0;
        *(_BYTE *)(v44 + v41 + 24) = 0;
      }
    }
    v55 = v42;
    v45 = sub_67730(v53, (const void **)&v55);
    v46 = (volatile signed __int32 *)v55;
    *(_DWORD *)v45 = 0;
    if ( v46 - 6 != (volatile signed __int32 *)std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v47 = _InterlockedExchangeAdd(v46 - 2, 0xFFFFFFFF);
      }
      else
      {
        v47 = *((_DWORD *)v46 - 2);
        *((_DWORD *)v46 - 2) = v47 - 1;
      }
      if ( v47 <= 0 )
        std::string::_Rep::_M_destroy(v46 - 6, &s1);
    }
    return 0;
  }
  v19 = *((unsigned int **)v17 + 2);
  if ( !(4LL * *((_QWORD *)v17 + 3)) )
  {
LABEL_26:
    v23 = strlen(a3);
    v24 = (char *)&std::string::_Rep::_S_empty_rep_storage[3];
    if ( v23 )
    {
      v25 = std::string::_Rep::_S_create(v23, 0, &v55);
      v26 = v25;
      v24 = (char *)(v25 + 24);
      if ( v23 == 1 )
        *(_BYTE *)(v25 + 24) = *a3;
      else
        v24 = (char *)memcpy((void *)(v25 + 24), a3, v23);
      if ( (unsigned __int64 *)v26 != std::string::_Rep::_S_empty_rep_storage )
      {
        *(_DWORD *)(v26 + 16) = 0;
        *(_QWORD *)v26 = v23;
        *(_BYTE *)(v26 + v23 + 24) = 0;
      }
    }
    s1 = v24;
    v27 = sub_67730(v53, (const void **)&s1);
    v28 = s1;
    *(_DWORD *)v27 = 0;
    if ( v28 - 24 != (char *)std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v29 = _InterlockedExchangeAdd((volatile signed __int32 *)v28 - 2, 0xFFFFFFFF);
      }
      else
      {
        v29 = *((_DWORD *)v28 - 2);
        *((_DWORD *)v28 - 2) = v29 - 1;
      }
      if ( v29 <= 0 )
        std::string::_Rep::_M_destroy(v28 - 24, &v56);
    }
    return 0;
  }
  while ( 1 )
  {
    v20 = *v19;
    s1 = nullptr;
    v58 = 0;
    v21 = sub_671F0(a1, (__int64)&s1, v20);
    if ( v21 )
    {
      v22 = (char *)src;
      if ( (_QWORD)v58 )
        v22 = s1;
      v51 = v21;
      if ( !strcmp(v22, a3) )
        break;
    }
    if ( s1 )
    {
      *(_QWORD *)&v58 = 0;
      qfree(s1);
    }
    if ( ++v19 == (unsigned int *)(*((_QWORD *)v18 + 2) + 4LL * *((_QWORD *)v18 + 3)) )
      goto LABEL_26;
  }
  v31 = strlen(a3);
  v32 = v51;
  v33 = v31;
  if ( v31 )
  {
    v34 = std::string::_Rep::_S_create(v31, 0, &v54);
    v32 = v51;
    v35 = v34;
    v36 = (unsigned __int64 *)(v34 + 24);
    if ( v33 == 1 )
    {
      *(_BYTE *)(v34 + 24) = *a3;
    }
    else
    {
      v37 = (unsigned __int64 *)memcpy(v36, a3, v33);
      v32 = v51;
      v36 = v37;
    }
    if ( (unsigned __int64 *)v35 != std::string::_Rep::_S_empty_rep_storage )
    {
      *(_DWORD *)(v35 + 16) = 0;
      *(_QWORD *)v35 = v33;
      *(_BYTE *)(v35 + v33 + 24) = 0;
    }
  }
  else
  {
    v36 = &std::string::_Rep::_S_empty_rep_storage[3];
  }
  v56 = v36;
  v49 = v32;
  v38 = sub_67730(v53, (const void **)&v56);
  v39 = (volatile signed __int32 *)v56;
  *(_DWORD *)v38 = v20;
  v5 = v49;
  if ( v39 - 6 != (volatile signed __int32 *)std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v48 = _InterlockedExchangeAdd(v39 - 2, 0xFFFFFFFF);
    }
    else
    {
      v48 = *((_DWORD *)v39 - 2);
      *((_DWORD *)v39 - 2) = v48 - 1;
    }
    if ( v48 <= 0 )
    {
      std::string::_Rep::_M_destroy(v39 - 6, &v55);
      v5 = v49;
    }
  }
  v40 = s1;
  *a2 = v20;
  if ( v40 )
  {
    v50 = v5;
    *(_QWORD *)&v58 = 0;
    qfree(v40);
    return v50;
  }
  return v5;
}
