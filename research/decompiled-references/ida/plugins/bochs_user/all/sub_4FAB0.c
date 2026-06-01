__int64 __fastcall sub_4FAB0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, double a5, double a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r9
  const char *v9; // rbx
  size_t v10; // rax
  size_t v11; // rbp
  __int64 v12; // rax
  __int64 *v13; // r9
  __int64 *v14; // rbp
  __int64 *v15; // r14
  __int64 v16; // rbp
  const char *v17; // rbx
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 *i; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  __int64 *v24; // r10
  const char *v25; // r15
  size_t v26; // rax
  size_t v27; // rbx
  size_t v28; // r15
  void *v29; // rdi
  __int64 v30; // rax
  void *v31; // rdi
  size_t v32; // rbp
  __int64 v33; // rax
  __int64 *v35; // [rsp+8h] [rbp-B0h]
  __int64 v36; // [rsp+10h] [rbp-A8h]
  __int64 *v37; // [rsp+10h] [rbp-A8h]
  __int64 *v38; // [rsp+10h] [rbp-A8h]
  __int64 v39; // [rsp+10h] [rbp-A8h]
  __int64 v40; // [rsp+10h] [rbp-A8h]
  __int64 v41; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v42; // [rsp+30h] [rbp-88h]
  unsigned __int64 v44; // [rsp+40h] [rbp-78h]
  __int64 *v45; // [rsp+48h] [rbp-70h]
  unsigned int v47; // [rsp+6Ch] [rbp-4Ch] BYREF
  _QWORD v48[9]; // [rsp+70h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(a2 + 612);
  v48[1] = __readfsqword(0x28u);
  v44 = v6;
  v42 = *(_QWORD *)(a2 + 620) + v6;
  if ( *(_WORD *)(a2 + 104) == 523 )
    v7 = *(_QWORD *)(a2 + 128);
  else
    v7 = *(unsigned int *)(a2 + 132);
  v8 = *(_QWORD *)(a2 + 636);
  if ( a2 + 636 == v8 )
    return 0;
  while ( 1 )
  {
    v9 = s1;
    if ( *(_QWORD *)(v8 + 24) )
      v9 = *(const char **)(v8 + 16);
    if ( a3 )
    {
      if ( v9 && (v36 = v8, v10 = strlen(v9), v8 = v36, (v11 = v10) != 0) )
      {
        v28 = v10 + 1;
        v29 = *(void **)a3;
        if ( *(_QWORD *)(a3 + 16) < v10 + 1 )
        {
          v30 = qvector_reserve();
          v8 = v36;
          v29 = (void *)v30;
          *(_QWORD *)a3 = v30;
        }
        v40 = v8;
        *(_QWORD *)(a3 + 8) = v28;
        memmove(v29, v9, v11);
        v8 = v40;
        *(_BYTE *)(*(_QWORD *)a3 + v11) = 0;
      }
      else
      {
        *(_QWORD *)(a3 + 8) = 0;
      }
    }
    if ( (debug[2] & 1) != 0 )
    {
      v39 = v8;
      sub_E960((__int64)"resolve_imports: referenced library is: <%s> ; IATSTART @ %08a\n", v9, a5);
      v8 = v39;
    }
    v37 = (__int64 *)v8;
    v12 = sub_4B8A0((_QWORD *)a1, v9, 0);
    if ( !v12 )
      return 28;
    v13 = v37;
    v14 = (__int64 *)v37[7];
    if ( v14 != v37 + 7 )
      break;
LABEL_34:
    v8 = *v13;
    if ( a2 + 636 == v8 )
      return 0;
  }
  v45 = v37;
  v38 = v37 + 7;
  v41 = v7;
  v15 = v14;
  v16 = v12;
  while ( 1 )
  {
    while ( !v15[5] )
    {
LABEL_32:
      v15 = (__int64 *)*v15;
      if ( v15 == v38 )
        goto LABEL_33;
    }
    v17 = s1;
    if ( v15[3] )
      v17 = (const char *)v15[2];
    if ( (unsigned int)sub_4F840(a1, *(_QWORD *)(v16 + 820), v17, &v47, v48, 0, a5, a6) )
      break;
    if ( (debug[2] & 1) != 0 )
      sub_E960((__int64)"%a -> resolve_imports: IMP %a %s resolved\n", a5, a6, (const char *)(v48[0] + v47));
    v18 = v15[5] - v41;
    v19 = *(_QWORD *)(a2 + 24) - 1LL;
    if ( v19 < 0 )
      return 32;
    for ( i = (unsigned __int64 *)(*(_QWORD *)(a2 + 16) + 32LL * *(_QWORD *)(a2 + 24) - 32); v18 < *i || v18 >= i[1]; i -= 4 )
    {
      if ( --v19 == -1 )
        return 32;
    }
    v22 = i[2] + v18 - *i;
    v23 = (_QWORD *)(v44 + v22);
    if ( v22 == -1 || (unsigned __int64)v23 < v44 || (unsigned __int64)v23 >= v42 )
      return 32;
    if ( *(_BYTE *)(a1 + 57) )
    {
      *v23 = v48[0] + v47;
      goto LABEL_32;
    }
    *(_DWORD *)v23 = LODWORD(v48[0]) + v47;
    v15 = (__int64 *)*v15;
    if ( v15 == v38 )
    {
LABEL_33:
      v7 = v41;
      v13 = v45;
      goto LABEL_34;
    }
  }
  v24 = a4;
  v25 = v17;
  if ( a4 )
  {
    if ( v17 && (v26 = strlen(v17), v24 = a4, (v27 = v26) != 0) )
    {
      v31 = (void *)*a4;
      v32 = v26 + 1;
      if ( a4[2] < v26 + 1 )
      {
        v33 = qvector_reserve();
        v24 = a4;
        v31 = (void *)v33;
        *a4 = v33;
      }
      v24[1] = v32;
      v35 = v24;
      memmove(v31, v25, v27);
      *(_BYTE *)(*v35 + v27) = 0;
    }
    else
    {
      v24[1] = 0;
    }
  }
  return 29;
}

