__int64 __fastcall sub_576C0(__int64 *a1, __int64 *a2)
{
  int v2; // eax
  __int64 *v3; // r12
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  __int64 *v9; // rbp
  __int64 (__fastcall *v10)(__int64, __int64 *, _QWORD); // rax
  unsigned int i; // ebp
  __int64 v12; // r14
  void (__fastcall *v13)(__int64, _QWORD *, _QWORD); // rax
  void (__fastcall *v14)(__int64, _QWORD *, _QWORD); // rax
  _QWORD *v15; // rsi
  unsigned int v16; // ebx
  unsigned __int8 (__fastcall *v17)(__int64, _QWORD *, _QWORD); // rax
  unsigned int v18; // ecx
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rbx
  char *v22; // rdi
  char *v23; // rdx
  _QWORD *v24; // rbx
  __int64 v25; // rdx
  unsigned int *v26; // rcx
  unsigned int *v27; // rax
  __int64 v28; // rdi
  __int64 (__fastcall *v29)(__int64, __int64 *, _QWORD); // rax
  __int64 (__fastcall *v30)(__int64, __int64 *, _QWORD); // rax
  __int64 *v31; // rdi
  unsigned int v32; // r15d
  __int64 v33; // rax
  char *v34; // rsi
  __int64 (__fastcall *v35)(__int64, __int64 *, _QWORD); // rax
  unsigned int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // r14
  unsigned int v39; // r13d
  size_t v40; // rbx
  size_t v41; // rbx
  unsigned int *v42; // rax
  unsigned int *v43; // rbp
  unsigned int *v44; // r11
  _QWORD *v45; // r9
  unsigned int v46; // ebx
  __int64 v47; // rax
  __int64 *v48; // rdx
  __int64 v49; // rdx
  char *v50; // rcx
  char *v51; // rax
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rdi
  void (__fastcall *hexdsp)(__int64, __int64 *, _QWORD); // rax
  __int64 *v61; // r13
  void (__fastcall *v62)(__int64, __int64 *); // rax
  void (__fastcall *v63)(__int64, __int64 *); // rax
  unsigned int v64; // [rsp+0h] [rbp-C8h]
  _QWORD *v65; // [rsp+0h] [rbp-C8h]
  _QWORD *v66; // [rsp+0h] [rbp-C8h]
  _QWORD *v67; // [rsp+0h] [rbp-C8h]
  unsigned int *v68; // [rsp+8h] [rbp-C0h]
  unsigned int *v69; // [rsp+8h] [rbp-C0h]
  unsigned int v70; // [rsp+14h] [rbp-B4h]
  __int64 *v71; // [rsp+18h] [rbp-B0h]
  __int64 *v72; // [rsp+28h] [rbp-A0h]
  __int64 v73; // [rsp+30h] [rbp-98h] BYREF
  __int64 v74; // [rsp+38h] [rbp-90h]
  _QWORD v75[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v76; // [rsp+50h] [rbp-78h] BYREF
  __int128 v77; // [rsp+58h] [rbp-70h]
  __int64 v78; // [rsp+70h] [rbp-58h] BYREF
  __int128 v79; // [rsp+78h] [rbp-50h]
  unsigned __int64 v80; // [rsp+88h] [rbp-40h]

  v2 = *((_DWORD *)a1 + 16);
  v80 = __readfsqword(0x28u);
  v3 = a1;
  v77 = 0;
  v76 = 0;
  v4 = v2 + 1;
  if ( v2 == -1 )
  {
    v73 = 0;
    v74 = 0;
  }
  else
  {
    a1 = &v76;
    v76 = qvector_reserve(&v76, 0, v2 + 1, 4);
    v5 = v76;
    v6 = v77;
    if ( (unsigned __int64)v77 < v4 )
    {
      *(_DWORD *)(v76 + 4 * v77) = -1;
      v7 = v6 + 1;
      if ( v7 < v4 )
      {
        do
        {
          v5 = v76;
          *(_DWORD *)(v76 + 4 * v7++) = -1;
        }
        while ( v4 != v7 );
      }
    }
    a2 = (__int64 *)*((unsigned int *)v3 + 16);
    *(_QWORD *)&v77 = v4;
    v8 = 0;
    v73 = 0;
    v9 = (__int64 *)v3[65];
    v74 = 0;
    if ( (int)a2 > 0 )
    {
      do
      {
        v61 = v9;
        v9 = (__int64 *)v9[1];
        a1 = v61;
        if ( (unsigned __int8)sub_6E220(v61, a2, v5) )
        {
          *(_DWORD *)(v76 + 4 * v8) = *(_DWORD *)(v61[7] + 40);
          hexdsp = (void (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(v61, a2);
          a2 = &v73;
          a1 = &qword_C8 + 5;
          hexdsp(205, &v73, (unsigned int)v8);
        }
        ++v8;
      }
      while ( *((_DWORD *)v3 + 16) > (int)v8 );
    }
  }
  v10 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(a1, a2);
  for ( i = v10(227, &v73, 0); (_DWORD)v74 != i; i = v29(227, &v73, i + 1) )
  {
    v75[0] = 0;
    v75[1] = 0;
    v12 = *(unsigned int *)(v76 + 4LL * (int)i);
    v13 = (void (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(227, &v73);
    v13(205, v75, i);
    v14 = (void (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(205, v75);
    v15 = v75;
    v14(205, v75, (unsigned int)v12);
    v16 = v12;
    while ( 1 )
    {
      v18 = v16;
      v16 = *(_DWORD *)(v76 + 4LL * (int)v16);
      if ( v16 == -1 )
        break;
      v17 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(205, v75);
      v15 = v75;
      if ( !v17(205, v75, v16) )
      {
        v18 = i;
        break;
      }
    }
    if ( v18 != (_DWORD)v12 )
    {
      *(_DWORD *)(v76 + 4LL * (int)i) = v18;
      if ( i >= *((_DWORD *)v3 + 16) )
      {
        if ( !under_debugger )
        {
          interr(52719);
LABEL_85:
          if ( !under_debugger )
            interr(52719);
        }
        goto LABEL_89;
      }
      v19 = *(_QWORD *)(v3[66] + 8LL * i);
      **(_DWORD **)(v19 + 368) = v18;
      *(_DWORD *)(*(_QWORD *)(v19 + 56) + 40LL) = v18;
      v20 = *((_DWORD *)v3 + 16);
      if ( (unsigned int)v12 >= v20 )
        goto LABEL_81;
      v21 = *(_QWORD *)(v3[66] + 8 * v12);
      v22 = *(char **)(v21 + 344);
      v23 = &v22[4 * *(_QWORD *)(v21 + 352)];
      if ( v22 != v23 )
      {
        while ( i != *(_DWORD *)v22 )
        {
          v22 += 4;
          if ( v23 == v22 )
            goto LABEL_21;
        }
        if ( v22 != v23 )
        {
          v64 = v18;
          memmove(v22, v22 + 4, v23 - v22 - 4);
          --*(_QWORD *)(v21 + 352);
          v18 = v64;
          v20 = *((_DWORD *)v3 + 16);
        }
      }
LABEL_21:
      if ( v18 >= v20 )
      {
        if ( !under_debugger )
        {
          interr(52719);
LABEL_81:
          if ( !under_debugger )
            interr(52719);
        }
LABEL_89:
        BUG();
      }
      v24 = *(_QWORD **)(v3[66] + 8LL * v18);
      v15 = (_QWORD *)v24[43];
      v25 = v24[44];
      v26 = (unsigned int *)v15 + v25;
      if ( v15 == (_QWORD *)v26 )
        goto LABEL_63;
      v27 = (unsigned int *)v24[43];
      while ( i != *v27 )
      {
        if ( v26 == ++v27 )
          goto LABEL_63;
      }
      if ( v27 == v26 )
      {
LABEL_63:
        v53 = v25 + 1;
        if ( v24[45] < v53 )
        {
          v56 = qvector_reserve(v24 + 43, v15, v53, 4);
          v57 = v24[44];
          v24[43] = v56;
          v26 = (unsigned int *)(v56 + 4 * v57);
        }
        *v26 = i;
        ++v24[44];
      }
    }
    v28 = v75[0];
    qfree(v75[0]);
    v29 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(v28, v15);
  }
  v78 = 0;
  v79 = 0;
  v30 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(227, &v73);
  v31 = &qword_E0 + 3;
  v70 = 0;
  v32 = v30(227, &v73, 0);
  if ( (_DWORD)v74 == v32 )
  {
LABEL_67:
    v58 = v78;
    if ( !v78 )
      goto LABEL_69;
    goto LABEL_68;
  }
  do
  {
    v36 = *((_DWORD *)v3 + 16);
    if ( v32 >= v36 )
    {
      if ( !under_debugger )
        interr(52719);
      goto LABEL_89;
    }
    v37 = v3[66];
    v38 = *(_QWORD *)(v37 + 8LL * v32);
    v39 = *(_DWORD *)(v76 + 4LL * (int)v32);
    if ( v39 >= v36 )
      goto LABEL_85;
    v40 = *(_QWORD *)(v38 + 352);
    v71 = nullptr;
    if ( !v40 )
      goto LABEL_30;
    v41 = v40;
    v65 = *(_QWORD **)(v37 + 8LL * v39);
    v42 = (unsigned int *)qalloc_or_throw(v41 * 4);
    v34 = *(char **)(v38 + 344);
    v43 = v42;
    v31 = (__int64 *)v42;
    v71 = (__int64 *)v42;
    memcpy(v42, v34, v41 * 4);
    v44 = &v43[v41];
    if ( &v43[v41] != v43 )
    {
      v45 = v65;
      v72 = v65 + 43;
      while ( 1 )
      {
        v46 = *v43;
        if ( *v43 >= *((_DWORD *)v3 + 16) )
          break;
        v47 = *(_QWORD *)(v3[66] + 8LL * v46);
        if ( *(_DWORD *)(v47 + 76) != 4 || v46 + 1 == v32 )
        {
          if ( v44 == ++v43 )
            goto LABEL_57;
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)(v47 + 368) + 4LL) = v39;
          *(_DWORD *)(*(_QWORD *)(v47 + 56) + 72LL) = v39;
          v31 = *(__int64 **)(v38 + 344);
          v48 = (__int64 *)((char *)v31 + 4 * *(_QWORD *)(v38 + 352));
          if ( v31 != v48 )
          {
            while ( v46 != *(_DWORD *)v31 )
            {
              v31 = (__int64 *)((char *)v31 + 4);
              if ( v48 == v31 )
                goto LABEL_51;
            }
            if ( v31 != v48 )
            {
              v68 = v44;
              v66 = v45;
              memmove(v31, (char *)v31 + 4, (char *)v48 - (char *)v31 - 4);
              v44 = v68;
              v45 = v66;
              --*(_QWORD *)(v38 + 352);
            }
          }
LABEL_51:
          v34 = (char *)v45[43];
          v49 = v45[44];
          v50 = &v34[4 * v49];
          if ( v34 == v50 )
            goto LABEL_59;
          v51 = (char *)v45[43];
          while ( v46 != *(_DWORD *)v51 )
          {
            v51 += 4;
            if ( v50 == v51 )
              goto LABEL_59;
          }
          if ( v51 == v50 )
          {
LABEL_59:
            v52 = v49 + 1;
            if ( v45[45] < v52 )
            {
              v31 = v72;
              v69 = v44;
              v67 = v45;
              v54 = qvector_reserve(v72, v34, v52, 4);
              v45 = v67;
              v44 = v69;
              v55 = v67[44];
              v67[43] = v54;
              v50 = (char *)(v54 + 4 * v55);
            }
            *(_DWORD *)v50 = v46;
            ++v45[44];
          }
          ++v43;
          ++v70;
          if ( v44 == v43 )
            goto LABEL_57;
        }
      }
      if ( !under_debugger )
        interr(52719);
      goto LABEL_89;
    }
LABEL_57:
    if ( !*(_QWORD *)(v38 + 352) )
    {
LABEL_30:
      v33 = v79;
      v34 = (char *)v78;
      if ( *((_QWORD *)&v79 + 1) < (unsigned __int64)(v79 + 1) )
      {
        v31 = &v78;
        v78 = qvector_reserve(&v78, v78, v79 + 1, 4);
        v34 = (char *)v78;
        v33 = v79;
      }
      *(_DWORD *)&v34[4 * v33] = v32;
      *(_QWORD *)&v79 = v79 + 1;
    }
    if ( v71 )
    {
      v31 = v71;
      qfree(v71);
    }
    v35 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(v31, v34);
    v31 = &qword_E0 + 3;
    v32 = v35(227, &v73, v32 + 1);
  }
  while ( (_DWORD)v74 != v32 );
  if ( !v70 )
    goto LABEL_67;
  v62 = (void (__fastcall *)(__int64, __int64 *))get_hexdsp(227, &v73);
  v62(404, v3);
  v63 = (void (__fastcall *)(__int64, __int64 *))get_hexdsp(404, v3);
  v63(408, v3);
  v58 = v78;
  if ( v78 )
  {
LABEL_68:
    *(_QWORD *)&v79 = 0;
    qfree(v58);
  }
LABEL_69:
  qfree(v73);
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    qfree(v76);
  }
  return v70;
}
