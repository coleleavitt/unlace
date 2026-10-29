__int64 __fastcall sub_20A0C0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  const char *v4; // rbx
  char *v5; // rax
  unsigned int v6; // ebx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r14
  const char *v9; // r13
  int v10; // r12d
  unsigned __int64 v11; // rbx
  char v12; // di
  unsigned __int64 v13; // rbp
  size_t v14; // rbx
  char *v15; // rdi
  char *v16; // rbp
  unsigned __int64 v17; // r13
  __int64 v18; // rdx
  unsigned int v19; // edi
  unsigned __int64 v20; // r12
  unsigned int v21; // edx
  char tinfo_property; // al
  int v23; // ecx
  int v24; // eax
  bool v25; // cf
  int v26; // eax
  __int64 *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  char *v30; // rax
  unsigned __int64 v31; // r13
  const char *v32; // r14
  char *v33; // rax
  unsigned __int64 v34; // rax
  char *v35; // rax
  signed __int64 v36; // rax
  __int64 v38; // rbx
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // rbp
  size_t v42; // rbx
  const void *v43; // rbp
  char *v44; // rdi
  char *v45; // r12
  unsigned __int64 v46; // rcx
  __int64 v47; // rsi
  unsigned __int64 v48; // r12
  __int64 v49; // r13
  __int64 v50; // rbx
  char *v51; // rbp
  unsigned __int64 v52; // r15
  unsigned int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  void *v57; // rdi
  int v58; // eax
  __int64 v59; // rax
  int v60; // eax
  unsigned __int64 v62; // [rsp+8h] [rbp-C0h]
  unsigned int v63; // [rsp+10h] [rbp-B8h]
  __int64 v64; // [rsp+10h] [rbp-B8h]
  unsigned int v65; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v66; // [rsp+20h] [rbp-A8h]
  int v67; // [rsp+28h] [rbp-A0h]
  int v68; // [rsp+2Ch] [rbp-9Ch]
  unsigned __int64 v69; // [rsp+30h] [rbp-98h]
  char *v71; // [rsp+48h] [rbp-80h]
  unsigned __int64 v72; // [rsp+50h] [rbp-78h]
  unsigned __int64 v73; // [rsp+58h] [rbp-70h]
  int v74; // [rsp+63h] [rbp-65h]
  char *s1; // [rsp+70h] [rbp-58h]
  char *s1a; // [rsp+70h] [rbp-58h]
  __int128 v78; // [rsp+78h] [rbp-50h]
  size_t v79; // [rsp+78h] [rbp-50h]

  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v4 = *(const char **)a2;
    v69 = v3 - 1;
    v35 = strrchr(*(const char **)a2, 58);
    if ( v35 )
    {
      v36 = v35 - v4;
      LODWORD(v4) = v36 + 1;
      if ( v36 == -1 )
        LODWORD(v4) = 0;
    }
    else
    {
      LODWORD(v4) = 0;
    }
  }
  else
  {
    v69 = 0;
    LODWORD(v4) = 0;
  }
  v73 = 0;
  v62 = 0;
  v66 = v69;
  v71 = nullptr;
  v67 = 0;
  v68 = 0;
  v72 = -1;
  v74 = a3 != 0;
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_5;
    v7 = (int)v4;
    v8 = v3 - 1;
    v9 = *(const char **)a2;
    if ( (int)v4 >= v8 )
    {
      v10 = (_DWORD)v4 + 1;
      v11 = v10;
      if ( v10 < v8 )
        goto LABEL_19;
LABEL_43:
      v13 = v7;
      if ( v8 <= v7 )
        v13 = v8;
      v14 = v8 - v13;
      goto LABEL_24;
    }
    do
    {
      if ( v9[v7] != 95 )
        break;
      ++v7;
    }
    while ( v8 != v7 );
    v10 = v7 + 1;
    v11 = (int)v7 + 1;
    if ( v11 >= v8 )
      goto LABEL_43;
LABEL_19:
    while ( 1 )
    {
      v12 = v9[v11];
      if ( v12 == 95 )
        break;
      if ( (unsigned int)v12 <= 0x7F && isalpha(v12) && isupper(v12) )
      {
        v19 = v9[v10 - 1];
        if ( v19 > 0x7F || !isupper(v19) )
          break;
        v11 = ++v10;
        if ( v10 >= v8 )
          goto LABEL_43;
      }
      else
      {
        v11 = ++v10;
        if ( v10 >= v8 )
          goto LABEL_43;
      }
    }
    if ( v8 < v11 )
      goto LABEL_43;
    v13 = v7;
    if ( v11 <= v7 )
      v13 = v11;
    v14 = v11 - v13;
LABEL_24:
    s1 = nullptr;
    v78 = 0;
    if ( !v14 )
      goto LABEL_5;
    v15 = nullptr;
    if ( v14 != -1 )
    {
      s1 = (char *)qvector_reserve();
      v15 = s1;
    }
    *(_QWORD *)&v78 = v14 + 1;
    memmove(v15, &v9[v13], v14);
    s1[v14] = 0;
    v16 = s1;
    v17 = v14 + 1;
    if ( v7 == -1 || (unsigned __int64)v78 <= 1 )
      break;
    v4 = (const char *)(v14 + v7);
    *s1 = tolower((unsigned __int8)*s1);
    if ( !qword_4DB9C0 )
      goto LABEL_32;
    v18 = 24;
    if ( (*(_QWORD *)qword_4DB9C0 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      goto LABEL_47;
    if ( (*(_BYTE *)(*(_QWORD *)qword_4DB9C0 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_32:
      if ( v62 > 1 && v67 != v68 + 1 && v66 == v69 )
      {
        if ( (unsigned __int8)sub_32A200(s1) )
          v7 = v66;
        v66 = v7;
      }
      goto LABEL_35;
    }
    v64 = qword_4DB9C0;
    v31 = *(_QWORD *)qword_4DB9C0 & 0xFFFFFFFFFFFFFFFCLL;
    while ( 1 )
    {
      v32 = ::s1;
      if ( *(_QWORD *)(v31 + 32) )
        v32 = *(const char **)(v31 + 24);
      if ( strcmp(s1, v32) < 0 )
      {
        v31 = *(_QWORD *)(v31 + 8);
        goto LABEL_78;
      }
      if ( strcmp(v32, s1) >= 0 )
        break;
      v31 = *(_QWORD *)(v31 + 16);
LABEL_78:
      if ( (*(_BYTE *)v31 & 2) != 0 )
        goto LABEL_32;
    }
    v18 = v31 + 24;
    v20 = v31;
    v17 = v78;
    if ( v20 == v64 )
      goto LABEL_32;
LABEL_47:
    v21 = *(_DWORD *)(v18 + 24);
    if ( (v21 & 2) != 0 )
    {
      if ( s1 )
        qfree();
      goto LABEL_105;
    }
    if ( (v21 & 0x80u) == 0
      || !a3
      || (v63 = v21, tinfo_property = get_tinfo_property(), (tinfo_property & 0x3E) != 0)
      && (v21 = v63, (tinfo_property & 0xFu) <= 8) )
    {
      if ( v62 <= 1 )
      {
        if ( (v21 & 1) != 0 )
          goto LABEL_62;
        if ( v7 != 0 && (unsigned __int64)v4 < v69 && (v21 & 0x40) != 0 )
        {
          if ( (v21 & 0x10) == 0 || !a3 )
            goto LABEL_86;
LABEL_64:
          v27 = *(__int64 **)(a3 + 32);
          v28 = *v27;
          v29 = *v27 + 72 * v27[1];
          if ( v28 == v29 )
            goto LABEL_70;
          while ( 1 )
          {
            while ( *(_DWORD *)(v28 + 8) != 52 )
            {
              v28 += 72;
              if ( v29 == v28 )
                goto LABEL_70;
            }
            if ( *(_DWORD *)(*(_QWORD *)(v28 + 24) + 8LL) == 65 )
              break;
            v28 += 72;
            if ( v29 == v28 )
              goto LABEL_70;
          }
        }
LABEL_35:
        if ( v16 )
          goto LABEL_36;
        goto LABEL_37;
      }
      v23 = v67;
      v24 = v68 + 1;
      if ( v68 + 1 == v67 )
      {
        if ( (v21 & 4) != 0 )
        {
          v62 = 0;
          goto LABEL_52;
        }
        if ( (v21 & 1) != 0 )
          goto LABEL_61;
        LOBYTE(v24) = v7 != 0;
        v25 = (unsigned __int64)v4 < v69;
LABEL_59:
        LOBYTE(v23) = v25;
        v26 = (v21 >> 6) & v23 & v24;
      }
      else
      {
        v23 = v69;
        if ( v66 != v69 )
        {
          if ( (v21 & 1) == 0 )
          {
            LOBYTE(v24) = v7 != 0;
            v25 = (unsigned __int64)v4 < v69;
            goto LABEL_59;
          }
LABEL_61:
          if ( (v21 & 0x20) == 0 )
          {
LABEL_62:
            if ( (v21 & 0x10) != 0 && a3 )
              goto LABEL_64;
LABEL_70:
            if ( (v21 & 0x40) == 0 )
            {
              v62 = v17;
              BYTE2(v74) = BYTE1(v21);
              v73 = *((_QWORD *)&v78 + 1);
              v30 = v71;
              v71 = s1;
              v16 = v30;
              v72 = v78 + v7 - 1;
              v68 = v67;
              v66 = v69;
              goto LABEL_35;
            }
LABEL_86:
            v62 = v17;
            BYTE2(v74) = BYTE1(v21);
            v73 = 0;
            v33 = v71;
            v71 = s1;
            v16 = v33;
            v72 = v7;
            v68 = v67;
            v66 = v69;
          }
          goto LABEL_35;
        }
        if ( (v21 & 8) != 0 )
        {
          if ( (v21 & 1) == 0 )
          {
            v34 = v66;
            goto LABEL_93;
          }
LABEL_99:
          v66 = v7;
          goto LABEL_61;
        }
        v65 = v21;
        v58 = sub_32A200(s1);
        v21 = v65;
        v23 = v58;
        if ( (_BYTE)v58 )
        {
          if ( (v65 & 1) != 0 )
            goto LABEL_61;
          v60 = v69;
          LOBYTE(v60) = (unsigned __int64)v4 < v69;
          LOBYTE(v23) = v7 != 0;
          v26 = (v65 >> 6) & v23 & v60;
        }
        else
        {
          if ( (v65 & 1) != 0 )
            goto LABEL_99;
          v34 = v69;
LABEL_93:
          v66 = v7;
          LOBYTE(v34) = (unsigned __int64)v4 < v34;
          LOBYTE(v23) = v7 != 0;
          v26 = (v21 >> 6) & v23 & v34;
        }
      }
      if ( (_BYTE)v26 )
        goto LABEL_61;
      goto LABEL_35;
    }
LABEL_52:
    if ( s1 )
LABEL_36:
      qfree();
LABEL_37:
    ++v67;
    v3 = *(_QWORD *)(a2 + 8);
  }
  if ( s1 )
    qfree();
LABEL_5:
  if ( v62 <= 1 || v66 - v72 <= 1 )
  {
LABEL_105:
    v6 = 0;
  }
  else
  {
    if ( a1 )
    {
      if ( (v74 & 0x10000) != 0 )
      {
        v5 = (char *)*a1;
        *a1 = (__int64)v71;
        a1[1] = v62;
        a1[2] = v73;
        if ( (v74 & 0x20000) == 0 )
        {
          v71 = v5;
          v6 = 1;
          goto LABEL_106;
        }
        v47 = (__int64)v71;
        v71 = v5;
LABEL_141:
        v50 = 2;
        v51 = "ed";
        if ( *(_BYTE *)(v47 + v62 - 2) == 101 )
        {
          v50 = 1;
          v51 = "d";
        }
        goto LABEL_136;
      }
      v38 = *(_QWORD *)(a2 + 8);
      if ( !v38 )
        goto LABEL_125;
      v39 = v38 - 1;
      if ( v39 < v66 )
      {
        v56 = v72;
        if ( v72 > v39 )
          v56 = v39;
        v41 = v56;
        v42 = v39 - v56;
      }
      else
      {
        v40 = v72;
        if ( v72 > v66 )
          v40 = v66;
        v41 = v40;
        v42 = v66 - v40;
      }
      s1a = nullptr;
      v43 = (const void *)(*(_QWORD *)a2 + v41);
      if ( v42 )
      {
        v44 = nullptr;
        if ( v42 != -1 )
        {
          s1a = (char *)qvector_reserve();
          v44 = s1a;
        }
        v79 = v42 + 1;
        memmove(v44, v43, v42);
        s1a[v42] = 0;
        v45 = s1a;
        if ( v42 + 1 > 1 )
        {
          v57 = (void *)*a1;
          if ( a1[2] < v79 )
          {
            v59 = qvector_reserve();
            *a1 = v59;
            v57 = (void *)v59;
          }
          a1[1] = v79;
          memmove(v57, s1a, v42);
          *(_BYTE *)(*a1 + v42) = 0;
          v45 = s1a;
        }
        else
        {
          a1[1] = 0;
        }
        if ( v45 )
          qfree();
      }
      else
      {
LABEL_125:
        a1[1] = 0;
      }
      if ( (v74 & 0x20000) != 0 )
      {
        v46 = a1[1];
        v73 = a1[2];
        v47 = *a1;
        v62 = v46;
        if ( v46 )
        {
          if ( v46 != 1 )
            goto LABEL_141;
          v50 = 2;
          v51 = "ed";
LABEL_136:
          v49 = --v62 + v50;
          v48 = v62 + v50 + 1;
        }
        else
        {
          v48 = 3;
          v49 = 2;
          LODWORD(v50) = 2;
          v51 = "ed";
        }
        if ( v73 < v48 )
        {
          v55 = qvector_reserve();
          *a1 = v55;
          v47 = v55;
        }
        a1[1] = v48;
        *(_BYTE *)(v47 + v49) = 0;
        v52 = *a1 + v62;
        v53 = 0;
        do
        {
          v54 = v53++;
          *(_BYTE *)(v52 + v54) = v51[v54];
        }
        while ( v53 < (unsigned int)v50 );
      }
    }
    v6 = 1;
  }
LABEL_106:
  if ( v71 )
    qfree();
  return v6;
}

