__int64 __fastcall sub_521F0(__int64 a1, __int64 a2, int a3, int a4, char **a5)
{
  __int64 v9; // r14
  unsigned int v11; // ebx
  time_t v13; // rax
  __int64 v14; // rdi
  time_t v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdi
  int v19; // r9d
  __int64 v20; // rcx
  __int64 v21; // rax
  time_t v22; // rax
  unsigned __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rdx
  const char *v27; // rsi
  const char *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // [rsp+8h] [rbp-80h]
  int v32; // [rsp+8h] [rbp-80h]
  int v33; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __int64 v35; // [rsp+18h] [rbp-70h]
  int v36; // [rsp+36h] [rbp-52h]
  __int16 v37; // [rsp+3Ah] [rbp-4Eh]
  int v38; // [rsp+3Ch] [rbp-4Ch]
  __int16 v39; // [rsp+40h] [rbp-48h]
  int v40; // [rsp+42h] [rbp-46h]
  __int16 v41; // [rsp+46h] [rbp-42h]
  unsigned __int64 v42; // [rsp+48h] [rbp-40h]

  v9 = *(_QWORD *)(a1 + 424);
  v42 = __readfsqword(0x28u);
  sub_19A520(v9);
  if ( sub_4CAE0(a1, a2) )
  {
LABEL_2:
    v11 = 0;
    goto LABEL_3;
  }
  v31 = sub_4CB80(a1, a2);
  if ( v31 )
  {
    v13 = time(nullptr);
    v14 = *(_QWORD *)(v31 + 104);
    if ( v14 != -1 && v14 > v13 )
    {
      sub_4E680(v14, a5);
      v11 = 1;
      goto LABEL_3;
    }
  }
  v15 = time(nullptr);
  v32 = sub_4FEE0(a1, a2, v15);
  if ( v32 )
  {
    v16 = sub_4CB80(a1, a2);
    sub_503C0(a1, v16, 1, a4, a2);
    v17 = *(_QWORD *)(a1 + 472);
    v18 = *(_QWORD *)(a1 + 464);
    v19 = v32;
    v20 = v18 + 6 * v17;
    if ( v18 == v20 )
      goto LABEL_19;
    v21 = *(_QWORD *)(a1 + 464);
    while ( *(_DWORD *)a2 != *(_DWORD *)v21 || *(_WORD *)(a2 + 4) != *(_WORD *)(v21 + 4) )
    {
      v21 += 6;
      if ( v20 == v21 )
        goto LABEL_19;
    }
    if ( v21 == v20 )
    {
LABEL_19:
      v23 = v17 + 1;
      v40 = *(_DWORD *)a2;
      v41 = *(_WORD *)(a2 + 4);
      if ( *(_QWORD *)(a1 + 480) < v23 )
      {
        v29 = sub_1987B0(a1 + 464, v18, v23, 6);
        v30 = *(_QWORD *)(a1 + 472);
        *(_QWORD *)(a1 + 464) = v29;
        v19 = v32;
        v20 = v29 + 6 * v30;
      }
      *(_DWORD *)v20 = v40;
      *(_WORD *)(v20 + 4) = v41;
      ++*(_QWORD *)(a1 + 472);
    }
    if ( (word_2439A4 & 0x200) != 0 )
    {
      v33 = v19;
      sub_4EA40((__int64)&ptr, (int *)a2);
      v28 = s1;
      if ( v35 )
        v28 = (const char *)ptr;
      sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"Using borrowed license %s\n", v28);
      v19 = v33;
      if ( ptr )
      {
        v35 = 0;
        j__free(ptr);
        v19 = v33;
      }
    }
    if ( v19 == 2 )
    {
      v22 = time(nullptr);
      *(_BYTE *)(a1 + 504) = 1;
      *(_QWORD *)(a1 + 488) = v22;
      if ( (word_2439A4 & 0x200) != 0 )
        sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"Borrowed license is already beyond grace, entering locked mode\n");
    }
    goto LABEL_2;
  }
  v24 = *(_DWORD *)a2;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v36 = 0;
  v37 = 0;
  if ( v24 || *(_WORD *)(a2 + 4) )
  {
    v25 = *(_QWORD *)(a1 + 464);
    v26 = v25 + 6LL * *(_QWORD *)(a1 + 472);
    if ( v25 != v26 )
    {
      while ( v24 != *(_DWORD *)v25 || *(_WORD *)(a2 + 4) != *(_WORD *)(v25 + 4) )
      {
        v25 += 6;
        if ( v26 == v25 )
          goto LABEL_30;
      }
      if ( v25 != v26 )
      {
        memmove((void *)v25, (const void *)(v25 + 6), v26 - v25 - 6);
        --*(_QWORD *)(a1 + 472);
      }
    }
  }
LABEL_30:
  if ( (word_2439A4 & 0x200) != 0 )
  {
    sub_4EA40((__int64)&ptr, (int *)a2);
    v27 = s1;
    if ( v35 )
      v27 = (const char *)ptr;
    sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"No license borrowed for %s, checking out from the server...\n", v27);
    if ( ptr )
    {
      v35 = 0;
      j__free(ptr);
    }
  }
  v11 = (unsigned __int8)sub_51F40((_QWORD *)a1, a2, a3, a4, (__int64)a5) ^ 1;
LABEL_3:
  sub_19A570(v9);
  return v11;
}
