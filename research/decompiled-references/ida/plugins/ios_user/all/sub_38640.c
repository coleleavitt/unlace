bool __fastcall sub_38640(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  const char *v10; // r12
  __int64 v11; // rbp
  size_t v12; // rax
  size_t v13; // r13
  size_t v14; // rbx
  int v15; // ebx
  __int64 v16; // rax
  void (*v17)(); // rcx
  unsigned __int64 (__fastcall *v18)(__int64, __int64); // rax
  int v19; // eax
  unsigned __int64 v21; // r13
  char *v22; // r12
  int v23; // eax
  char *v24; // r8
  int v25; // eax
  __int64 v26; // r12
  size_t v27; // r9
  char *v28; // rdi
  int v29; // eax
  __int64 v30; // r12
  size_t v31; // r8
  char *v32; // rsi
  __int64 v33; // r12
  size_t v34; // r9
  char *v35; // r9
  void *v36; // rdi
  char *v37; // rsi
  char *v38; // rsi
  char *v39; // rdi
  void *v40; // rdi
  __int64 v41; // rax
  int v42; // [rsp+Ch] [rbp-1BCh]
  char *src; // [rsp+20h] [rbp-1A8h]
  void *srca; // [rsp+20h] [rbp-1A8h]
  void *srcb; // [rsp+20h] [rbp-1A8h]
  void *srcc; // [rsp+20h] [rbp-1A8h]
  int v48; // [rsp+30h] [rbp-198h]
  bool v49; // [rsp+37h] [rbp-191h]
  __int64 v50; // [rsp+38h] [rbp-190h]
  char *v52; // [rsp+48h] [rbp-180h]
  char *v53; // [rsp+48h] [rbp-180h]
  char *v54; // [rsp+48h] [rbp-180h]
  unsigned __int64 v55; // [rsp+58h] [rbp-170h] BYREF
  const char *v56; // [rsp+60h] [rbp-168h] BYREF
  __int128 v57; // [rsp+68h] [rbp-160h]
  __int64 v58; // [rsp+80h] [rbp-148h] BYREF
  __int128 v59; // [rsp+88h] [rbp-140h]
  void *v60; // [rsp+A0h] [rbp-128h]
  __int128 v61; // [rsp+A8h] [rbp-120h]
  char *s1; // [rsp+C0h] [rbp-108h] BYREF
  __int128 v63; // [rsp+C8h] [rbp-100h]
  char *nptr; // [rsp+E0h] [rbp-E8h] BYREF
  __int128 v65; // [rsp+E8h] [rbp-E0h]
  void *dest; // [rsp+100h] [rbp-C8h] BYREF
  __int128 v67; // [rsp+108h] [rbp-C0h]
  __int64 v68; // [rsp+118h] [rbp-B0h]
  __int64 v69; // [rsp+120h] [rbp-A8h]
  __int64 v70; // [rsp+128h] [rbp-A0h]
  __int128 v71; // [rsp+130h] [rbp-98h]
  char *v72; // [rsp+140h] [rbp-88h]
  __int128 v73; // [rsp+148h] [rbp-80h]
  char *v74; // [rsp+158h] [rbp-70h]
  __int128 v75; // [rsp+160h] [rbp-68h]
  __int64 v76; // [rsp+170h] [rbp-58h]
  __int128 v77; // [rsp+178h] [rbp-50h]
  unsigned __int64 v78; // [rsp+188h] [rbp-40h]

  v78 = __readfsqword(0x28u);
  v3 = a2[10];
  v4 = a2[9];
  if ( a2[11] < (unsigned __int64)(v3 + 1) )
  {
    v41 = qvector_reserve();
    v3 = a2[10];
    a2[9] = v41;
    v4 = v41;
  }
  v49 = 0;
  v48 = 0;
  v5 = v4 + 144 * v3;
  v42 = 0;
  *(_OWORD *)(v5 + 80) = 0;
  v50 = v5;
  *(_QWORD *)v5 = 0;
  *(_QWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 48) = 0;
  *(_QWORD *)(v5 + 72) = 0;
  *(_QWORD *)(v5 + 96) = 0;
  *(_QWORD *)(v5 + 120) = 0;
  *(_OWORD *)(v5 + 8) = 0;
  *(_OWORD *)(v5 + 32) = 0;
  *(_OWORD *)(v5 + 56) = 0;
  *(_OWORD *)(v5 + 104) = 0;
  *(_OWORD *)(v5 + 128) = 0;
  ++a2[10];
  while ( 1 )
  {
    v57 = 0;
    v56 = nullptr;
    sub_15620((__int64 *)&v56);
    v10 = s;
    v11 = *(_QWORD *)(a1 + 864);
    if ( (_QWORD)v57 )
      v10 = v56;
    dest = nullptr;
    v67 = 0;
    if ( v10 )
    {
      v12 = strlen(v10);
      v13 = v12 + 1;
      v14 = v12;
      dest = (void *)qvector_reserve();
      *(_QWORD *)&v67 = v13;
      memmove(dest, v10, v14);
      *((_BYTE *)dest + v14) = 0;
    }
    v15 = sub_5ABF0(v11, (unsigned int)&dest, v6, v7, v8, v9);
    if ( dest )
    {
      *(_QWORD *)&v67 = 0;
      qfree();
    }
    if ( v15 <= 0 )
      break;
    v58 = 0;
    v59 = 0;
    if ( !(unsigned __int8)sub_5ABB0(*(_QWORD *)(a1 + 864), &v58) || (unsigned int)sub_59CB0(&v58, 0) != 1 )
      goto LABEL_24;
    dest = nullptr;
    v70 = 0;
    v68 = -1;
    v69 = 0xFFFFFFFFLL;
    v72 = nullptr;
    v74 = nullptr;
    v76 = 0;
    v60 = nullptr;
    v55 = 0;
    v67 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v61 = 0;
    if ( !(_QWORD)v59 )
      goto LABEL_14;
    v21 = v59 - 1;
    if ( (_QWORD)v59 == 1 )
      goto LABEL_14;
    while ( 1 )
    {
      v63 = 0;
      s1 = nullptr;
      if ( !(unsigned __int8)sub_593F0(&s1, &v58, &v55, 58) )
        break;
      v65 = 0;
      nptr = nullptr;
      if ( !(unsigned __int8)sub_593F0(&nptr, &v58, &v55, 59) )
      {
        if ( nptr )
        {
          *(_QWORD *)&v65 = 0;
          qfree();
        }
        break;
      }
      if ( (_QWORD)v63 )
      {
        v22 = s1;
        if ( !strcmp(s1, "name") )
        {
          v30 = v65;
          if ( (_QWORD)v65 && (v31 = v65 - 1, (_QWORD)v65 != 1) )
          {
            v35 = nptr;
            v36 = dest;
            if ( *((_QWORD *)&v67 + 1) < (unsigned __int64)v65 )
            {
              v52 = nptr;
              srca = (void *)(v65 - 1);
              dest = (void *)qvector_reserve();
              v35 = v52;
              v36 = dest;
              v31 = (size_t)srca;
            }
            *(_QWORD *)&v67 = v30;
            memmove(v36, v35, v31);
            *((char *)dest + v30 - 1) = 0;
            v24 = nptr;
          }
          else
          {
            *(_QWORD *)&v67 = 0;
            v24 = nptr;
          }
        }
        else if ( !strcmp(v22, "bitsize") )
        {
          v28 = (char *)s;
          if ( (_QWORD)v65 )
            v28 = nptr;
          v29 = strtol(v28, nullptr, 10);
          v24 = nptr;
          LODWORD(v68) = v29;
        }
        else
        {
          v23 = strcmp(v22, "encoding");
          v24 = nptr;
          if ( v23 )
          {
            src = nptr;
            v25 = strcmp(v22, "set");
            v24 = src;
            if ( !v25 )
            {
              v26 = v65;
              if ( (_QWORD)v65 && (v27 = v65 - 1, (_QWORD)v65 != 1) )
              {
                v40 = v60;
                if ( *((_QWORD *)&v61 + 1) < (unsigned __int64)v65 )
                {
                  v54 = src;
                  srcc = (void *)(v65 - 1);
                  v60 = (void *)qvector_reserve();
                  v24 = v54;
                  v40 = v60;
                  v27 = (size_t)srcc;
                }
                *(_QWORD *)&v61 = v26;
                memmove(v40, v24, v27);
                *((char *)v60 + v26 - 1) = 0;
                v24 = nptr;
              }
              else
              {
                *(_QWORD *)&v61 = 0;
              }
            }
          }
          else
          {
            v33 = v65;
            if ( (_QWORD)v65 && (v34 = v65 - 1, (_QWORD)v65 != 1) )
            {
              v39 = v74;
              if ( *((_QWORD *)&v75 + 1) < (unsigned __int64)v65 )
              {
                v53 = nptr;
                srcb = (void *)(v65 - 1);
                v74 = (char *)qvector_reserve();
                v24 = v53;
                v39 = v74;
                v34 = (size_t)srcb;
              }
              *(_QWORD *)&v75 = v33;
              memmove(v39, v24, v34);
              v74[v33 - 1] = 0;
              v24 = nptr;
            }
            else
            {
              *(_QWORD *)&v75 = 0;
            }
          }
        }
      }
      else
      {
        v24 = nptr;
      }
      if ( v24 )
      {
        *(_QWORD *)&v65 = 0;
        qfree();
      }
      if ( s1 )
      {
        *(_QWORD *)&v63 = 0;
        qfree();
      }
      if ( v55 >= v21 )
        goto LABEL_64;
    }
    if ( s1 )
    {
      *(_QWORD *)&v63 = 0;
      qfree();
    }
LABEL_64:
    if ( (int)v68 <= 0 )
    {
      if ( v60 )
      {
        *(_QWORD *)&v61 = 0;
        qfree();
      }
LABEL_14:
      if ( v76 )
      {
        *(_QWORD *)&v77 = 0;
        qfree();
      }
      if ( v74 )
      {
        *(_QWORD *)&v75 = 0;
        qfree();
      }
      if ( v72 )
      {
        *(_QWORD *)&v73 = 0;
        qfree();
      }
      if ( v70 )
      {
        *(_QWORD *)&v71 = 0;
        qfree();
      }
      if ( dest )
      {
        *(_QWORD *)&v67 = 0;
        qfree();
      }
LABEL_24:
      if ( v58 )
      {
        *(_QWORD *)&v59 = 0;
        qfree();
      }
      break;
    }
    HIDWORD(v68) = v42;
    LODWORD(v69) = v48;
    v48 += (int)v68 >> 3;
    if ( (_DWORD)v68 == 96 )
    {
      if ( v60 )
      {
        *(_QWORD *)&v61 = 0;
        qfree();
      }
      if ( v76 )
      {
        *(_QWORD *)&v77 = 0;
        qfree();
      }
      if ( v74 )
      {
        *(_QWORD *)&v75 = 0;
        qfree();
      }
      if ( v72 )
      {
        *(_QWORD *)&v73 = 0;
        qfree();
      }
      if ( v70 )
      {
        *(_QWORD *)&v71 = 0;
        qfree();
      }
      if ( dest )
      {
        *(_QWORD *)&v67 = 0;
        qfree();
      }
      if ( v58 )
      {
        *(_QWORD *)&v59 = 0;
        qfree();
      }
      if ( v56 )
      {
LABEL_87:
        *(_QWORD *)&v57 = 0;
        qfree();
      }
    }
    else
    {
      if ( stristr() )
      {
        v32 = v72;
        if ( *((_QWORD *)&v73 + 1) <= 7u )
        {
          v72 = (char *)qvector_reserve();
          v32 = v72;
        }
        *(_QWORD *)&v73 = 8;
        *(_DWORD *)v32 = 1701733735;
        *(_DWORD *)(v32 + 3) = 1818325605;
        v72[7] = 0;
      }
      else if ( stristr() && (_QWORD)v75 && !strcmp(v74, "ieee754") )
      {
        v37 = v72;
        if ( *((_QWORD *)&v73 + 1) <= 5u )
        {
          v72 = (char *)qvector_reserve();
          v37 = v72;
        }
        *(_QWORD *)&v73 = 6;
        *(_DWORD *)v37 = 1634692198;
        v37[4] = 116;
        v72[5] = 0;
      }
      else if ( (_DWORD)v68 == 128 )
      {
        v38 = v72;
        if ( *((_QWORD *)&v73 + 1) <= 6u )
        {
          v72 = (char *)qvector_reserve();
          v38 = v72;
        }
        *(_QWORD *)&v73 = 7;
        *(_DWORD *)v38 = 1952671094;
        *((_WORD *)v38 + 2) = 29295;
        v72[6] = 0;
      }
      if ( !v49 && (_DWORD)v68 == 64 && (_QWORD)v73 )
        v49 = strcmp(v72, "general") == 0;
      sub_31620((__int64 *)(v50 + 24), (__int64)&dest);
      if ( v60 )
      {
        *(_QWORD *)&v61 = 0;
        qfree();
      }
      if ( v76 )
      {
        *(_QWORD *)&v77 = 0;
        qfree();
      }
      if ( v74 )
      {
        *(_QWORD *)&v75 = 0;
        qfree();
      }
      if ( v72 )
      {
        *(_QWORD *)&v73 = 0;
        qfree();
      }
      if ( v70 )
      {
        *(_QWORD *)&v71 = 0;
        qfree();
      }
      if ( dest )
      {
        *(_QWORD *)&v67 = 0;
        qfree();
      }
      if ( v58 )
      {
        *(_QWORD *)&v59 = 0;
        qfree();
      }
      if ( v56 )
        goto LABEL_87;
    }
    ++v42;
  }
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    qfree();
  }
  v16 = *(_QWORD *)a1;
  v17 = *(void (**)())(*(_QWORD *)a1 + 824LL);
  if ( v17 != nullsub_26 )
  {
    ((void (__fastcall *)(__int64, __int64, bool))v17)(a1, v50, v49);
    v16 = *(_QWORD *)a1;
  }
  v18 = *(unsigned __int64 (__fastcall **)(__int64, __int64))(v16 + 792);
  if ( v18 == sub_38600 )
  {
    v19 = *(_DWORD *)(qword_8FB50 + 144LL * *(int *)(a1 + 1176) + 120);
    if ( v19 )
    {
      if ( v19 == 13 )
        sub_34540(a1, (__int64)a2);
    }
    else
    {
      sub_36B00(a1, (__int64)a2);
    }
  }
  else
  {
    v18(a1, (__int64)a2);
  }
  return a2[10] != 0;
}

