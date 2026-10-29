__int64 __fastcall sub_40F00(__int64 a1)
{
  unsigned __int64 v1; // r8
  __int64 v2; // rax
  void *v4; // rbp
  unsigned __int64 v5; // r14
  char v6; // bl
  ssize_t i; // rax
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rbx
  __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  char v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  const char *v17; // r12
  __int64 v18; // rax
  char *v19; // rax
  char *v20; // r13
  char *v21; // rcx
  char v22; // al
  char v23; // al
  __int64 v24; // rdx
  void (__fastcall *v25)(_QWORD, _QWORD); // rax
  char v26; // dl
  __int64 v28; // rax
  size_t v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+0h] [rbp-68h]
  int fd; // [rsp+8h] [rbp-60h]
  bool v34; // [rsp+Fh] [rbp-59h]
  unsigned __int64 v35; // [rsp+10h] [rbp-58h]
  __int64 v36; // [rsp+10h] [rbp-58h]
  char *v37; // [rsp+10h] [rbp-58h]
  unsigned __int64 v38; // [rsp+10h] [rbp-58h]
  size_t na; // [rsp+18h] [rbp-50h]
  size_t n; // [rsp+18h] [rbp-50h]
  char v41; // [rsp+27h] [rbp-41h] BYREF
  unsigned __int64 v42; // [rsp+28h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 96);
  v2 = *(_QWORD *)(a1 + 64);
  v42 = __readfsqword(0x28u);
  v4 = *(void **)(a1 + 56);
  v32 = v2;
  v5 = v1;
  v34 = v1 != 0;
  v6 = 0;
  fd = *(_DWORD *)(a1 + 20);
  for ( i = read(fd, v4, 0x2800u); ; i = read(fd, v4, 0x2800u) )
  {
    v29 = i;
    if ( !i )
      break;
    v12 = *(_BYTE *)(a1 + 16);
    if ( v12 )
      break;
    if ( v6 )
    {
      *(_QWORD *)(a1 + 80) = 0;
      v8 = i;
      v9 = 0;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 80);
      v8 = v9 + i;
      if ( __CFADD__(v9, i) )
      {
        if ( v9 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( v9 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)(a1 + 80) = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_6;
        }
        v8 = 0x7FFFFFFFFFFFFFFFLL;
      }
    }
    v10 = *(_QWORD *)(a1 + 72);
    if ( *(_QWORD *)(a1 + 88) < v8 )
    {
      n = i;
      v38 = v8;
      v28 = qvector_reserve();
      v29 = n;
      v8 = v38;
      *(_QWORD *)(a1 + 72) = v28;
      v10 = v28;
    }
    na = v29;
    v35 = v8;
    memset((void *)(v10 + *(_QWORD *)(a1 + 80)), 0, v8 - *(_QWORD *)(a1 + 80));
    v29 = na;
    *(_QWORD *)(a1 + 80) = v35;
LABEL_6:
    memcpy((void *)(v9 + *(_QWORD *)(a1 + 72)), v4, v29);
    v11 = *(_QWORD *)(a1 + 80);
    if ( (unsigned int)sub_2BAE0(v32, *(_QWORD *)(a1 + 72), v11, *(_DWORD *)(a1 + 32)) )
      goto LABEL_7;
    v13 = *(_QWORD *)(a1 + 80);
    v14 = *(_QWORD *)(a1 + 72);
    v41 = 0;
    v15 = *(_QWORD *)(a1 + 88);
    v16 = v13 + 1;
    if ( (unsigned __int64)&v41 < v14 || (unsigned __int64)&v41 >= v14 + v15 )
    {
      if ( v15 < v16 )
      {
        v30 = qvector_reserve();
        v26 = v41;
        *(_QWORD *)(a1 + 72) = v30;
        v14 = v30;
        v13 = *(_QWORD *)(a1 + 80);
      }
      else
      {
        v26 = 0;
      }
      *(_BYTE *)(v14 + v13) = v26;
    }
    else
    {
      if ( v15 < v16 )
      {
        v31 = qvector_reserve();
        *(_QWORD *)(a1 + 72) = v31;
        v14 = v31;
        v13 = *(_QWORD *)(a1 + 80);
      }
      *(_BYTE *)(v14 + v13) = 0;
    }
    v17 = *(const char **)(a1 + 72);
    v18 = *(_QWORD *)(a1 + 80) + 1LL;
    *(_QWORD *)(a1 + 80) = v18;
    v36 = v18;
    v19 = strstr(v17, " ips = ");
    v20 = v19;
    if ( v19 )
    {
      v21 = &v19[strcspn(v19 + 7, "\r\n") + 7];
      if ( *v21 != 10 && *v21 != 13 )
        goto LABEL_32;
      do
      {
        do
          v22 = *++v21;
        while ( v22 == 13 );
      }
      while ( v22 == 10 );
      while ( v17 != v20 )
      {
        v23 = *(v20 - 1);
        if ( v23 == 10 || v23 == 13 )
          break;
        --v20;
LABEL_32:
        ;
      }
      v24 = v36;
      v37 = v21;
      memmove(v20, v21, &v17[v24] - v21);
      *(_QWORD *)(a1 + 80) -= v37 - v20;
    }
    v25 = *(void (__fastcall **)(_QWORD, _QWORD))(a1 + 40);
    if ( v25 )
      v25(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 72));
    ++*(_DWORD *)(a1 + 32);
    v12 = 1;
LABEL_7:
    if ( v5 < v11 && v34 )
      *(_QWORD *)(a1 + 80) = 0;
    v6 = v12;
  }
  return 0;
}

