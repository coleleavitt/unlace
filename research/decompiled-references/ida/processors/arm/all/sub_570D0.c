__int64 __fastcall sub_570D0(__int64 a1, const char *a2)
{
  size_t v3; // rax
  size_t v4; // r12
  size_t v5; // rbp
  char *v6; // rax
  char *v7; // r13
  size_t v8; // r12
  char *v9; // rax
  size_t v10; // rbp
  __int64 v11; // rbx
  char *v12; // rsi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // r13
  char *v17; // rsi
  __int64 v18; // rbp
  char *v19; // r13
  size_t v20; // rbp
  char *v21; // rax
  size_t v22; // r15
  const char *v23; // rsi
  int v24; // eax
  const char *v25; // rsi
  int v26; // eax
  const char *v27; // rsi
  int v28; // eax
  const char *v29; // rsi
  int v30; // eax
  const char *v31; // rsi
  int v32; // eax
  const char *v33; // rsi
  int v34; // eax
  const char *v35; // rsi
  const char *v36; // rsi
  int v37; // eax
  __m128i *v38; // rax
  char *v39; // rdi
  void (__fastcall ***v40)(void *); // rbp
  char *v41; // rsi
  const char *v42; // rsi
  bool v43; // zf
  void (__fastcall *v44)(void *); // rdx
  void (__fastcall *v45)(void *); // rax
  bool v47; // cc
  void (__fastcall *v48)(void *); // rax
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // rax
  size_t v51; // r8
  char *v52; // rdi
  __int64 v53; // rdx
  char *v54; // rdi
  char v55; // al
  char *v56; // rdi
  void (__fastcall *v57)(void *); // rax
  unsigned __int8 v58; // [rsp+1h] [rbp-F1h]
  char *src; // [rsp+2h] [rbp-F0h]
  size_t v60; // [rsp+Ah] [rbp-E8h]
  __int64 v61; // [rsp+Ah] [rbp-E8h]
  size_t v62; // [rsp+12h] [rbp-E0h]
  char *s; // [rsp+2Ah] [rbp-C8h] BYREF
  __int128 v64; // [rsp+32h] [rbp-C0h]
  char *v65; // [rsp+4Ah] [rbp-A8h] BYREF
  __int128 v66; // [rsp+52h] [rbp-A0h]
  char *nptr; // [rsp+6Ah] [rbp-88h] BYREF
  __int128 v68; // [rsp+72h] [rbp-80h]
  unsigned __int64 v69; // [rsp+9Ah] [rbp-58h]
  unsigned __int64 v70; // [rsp+A2h] [rbp-50h]
  unsigned __int64 v71; // [rsp+B2h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  v64 = 0;
  s = 0;
  if ( !a2 )
    goto LABEL_8;
  v3 = strlen(a2);
  v4 = v3 + 1;
  v5 = v3;
  v6 = (char *)qvector_reserve((__int64)&s, 0, v3 + 1, 1);
  *(_QWORD *)&v64 = v4;
  s = v6;
  memmove(v6, a2, v5);
  s[v5] = 0;
  if ( !(_QWORD)v64 )
  {
LABEL_8:
    nptr = 0;
    v11 = -1;
    v68 = 0;
    goto LABEL_9;
  }
  v7 = s;
  v8 = v64 - 1;
  v9 = strchr(s, 59);
  if ( !v9 )
  {
    v11 = -1;
    goto LABEL_82;
  }
  v10 = v9 - v7;
  v11 = v9 - v7;
  if ( v8 < v9 - v7 )
LABEL_82:
    v10 = v8;
  nptr = 0;
  v68 = 0;
  if ( v10 )
  {
    nptr = (char *)qvector_reserve((__int64)&nptr, 0, v10 + 1, 1);
    *(_QWORD *)&v68 = v10 + 1;
    memmove(nptr, v7, v10);
    nptr[v10] = 0;
    if ( (_QWORD)v68 )
    {
      v12 = nptr;
      goto LABEL_10;
    }
  }
LABEL_9:
  v12 = (char *)&s1;
LABEL_10:
  v58 = sub_56980(a1, v12);
  if ( nptr )
  {
    *(_QWORD *)&v68 = 0;
    qfree((__int64)nptr);
  }
  if ( v58 )
  {
    while ( 1 )
    {
      if ( v11 == -1 )
        goto LABEL_62;
      if ( !(_QWORD)v64 )
      {
LABEL_65:
        v11 = -1;
        v65 = 0;
        v66 = 0;
LABEL_24:
        v23 = &s1;
        goto LABEL_25;
      }
      v13 = v64 - 1;
      if ( (_QWORD)v64 == 1 )
      {
        v18 = 1;
      }
      else
      {
        v14 = v11 + 1;
        v15 = 1;
        v16 = 0;
        if ( v14 < v13 )
        {
          v16 = v13 - v14;
          v15 = v64 - v14;
          memmove(s, &s[v14], v13 - v14);
        }
        v17 = s;
        if ( *((_QWORD *)&v64 + 1) < v15 )
        {
          s = (char *)qvector_reserve((__int64)&s, (__int64)s, v15, 1);
          v17 = s;
        }
        *(_QWORD *)&v64 = v15;
        v17[v16] = 0;
        v18 = v64;
        if ( !(_QWORD)v64 )
          goto LABEL_65;
      }
      v19 = s;
      v20 = v18 - 1;
      v21 = strchr(s, 59);
      if ( v21 )
      {
        v22 = v21 - v19;
        v11 = v21 - v19;
        if ( v20 >= v21 - v19 )
          goto LABEL_23;
      }
      else
      {
        v11 = -1;
      }
      v22 = v20;
LABEL_23:
      v65 = 0;
      v66 = 0;
      if ( !v22 )
        goto LABEL_24;
      v65 = (char *)qvector_reserve((__int64)&v65, 0, v22 + 1, 1);
      *(_QWORD *)&v66 = v22 + 1;
      memmove(v65, v19, v22);
      v65[v22] = 0;
      if ( (_QWORD)v66 )
        v23 = v65;
      else
        v23 = &s1;
LABEL_25:
      v24 = sub_56640((const char **)off_A1BA0, v23);
      if ( v24 >= 0 )
      {
        *(_DWORD *)(a1 + 8) = v24;
        goto LABEL_67;
      }
      v25 = &s1;
      if ( (_QWORD)v66 )
        v25 = v65;
      v26 = sub_56640((const char **)&off_A1B80, v25);
      if ( v26 >= 0 )
      {
        *(_DWORD *)(a1 + 24) = v26;
        goto LABEL_67;
      }
      v27 = &s1;
      if ( (_QWORD)v66 )
        v27 = v65;
      v28 = sub_56640((const char **)&off_A1B50, v27);
      if ( v28 >= 0 )
      {
        *(_DWORD *)(a1 + 20) = v28;
        goto LABEL_67;
      }
      v29 = &s1;
      if ( (_QWORD)v66 )
        v29 = v65;
      v30 = sub_56640((const char **)&off_A1B20, v29);
      if ( v30 >= 0 )
      {
        *(_DWORD *)(a1 + 12) = v30;
        goto LABEL_67;
      }
      v31 = &s1;
      if ( (_QWORD)v66 )
        v31 = v65;
      v32 = sub_56640((const char **)off_A1B00, v31);
      if ( v32 >= 0 )
      {
        *(_DWORD *)(a1 + 16) = v32;
        goto LABEL_67;
      }
      v33 = &s1;
      if ( (_QWORD)v66 )
        v33 = v65;
      v34 = sub_56640((const char **)off_A1AB0, v33);
      if ( v34 >= 0 )
      {
        *(_BYTE *)(a1 + 96) = v34 == 0;
        goto LABEL_67;
      }
      v35 = &s1;
      if ( (_QWORD)v66 )
        v35 = v65;
      if ( (int)sub_56640((const char **)&off_A1AD0, v35) < 0 )
      {
        v36 = &s1;
        if ( (_QWORD)v66 )
          v36 = v65;
        v37 = sub_56640((const char **)off_A1AE0, v36);
        if ( v37 < 0 )
        {
          v68 = 0;
          nptr = 0;
          v38 = (__m128i *)qvector_reserve((__int64)&nptr, 0, 33, 1);
          nptr = (char *)v38;
          *(_QWORD *)&v68 = 33;
          *v38 = _mm_load_si128((const __m128i *)&xmmword_896F0);
          v38[1] = _mm_load_si128((const __m128i *)&xmmword_89700);
          v39 = nptr;
          nptr[32] = 0;
          if ( (unsigned __int64)v68 <= 1 )
          {
            if ( !v39 )
              goto LABEL_59;
            goto LABEL_85;
          }
          v40 = (void (__fastcall ***)(void *))operator new(0x30u);
          *((_DWORD *)v40 + 2) = 1;
          *v40 = (void (__fastcall **)(void *))&off_A0628;
          v41 = nptr;
          *((_OWORD *)v40 + 1) = 0;
          *((_OWORD *)v40 + 2) = 0;
          if ( (unsigned int)qregcomp() )
          {
            if ( v40 )
            {
              v48 = (*v40)[2];
              if ( (char *)v48 == (char *)sub_38540 )
              {
                *v40 = (void (__fastcall **)(void *))&off_A0628;
                qregfree();
                operator delete(v40, 0x30u);
                v39 = nptr;
                if ( !nptr )
                  goto LABEL_59;
LABEL_85:
                *(_QWORD *)&v68 = 0;
                qfree((__int64)v39);
                goto LABEL_59;
              }
              ((void (__fastcall *)(void (__fastcall ***)(void *), char *))v48)(v40, v41);
              v39 = nptr;
              if ( nptr )
                goto LABEL_85;
            }
            else
            {
              v39 = nptr;
              if ( nptr )
                goto LABEL_85;
            }
LABEL_59:
            if ( v65 )
            {
              *(_QWORD *)&v66 = 0;
              qfree((__int64)v65);
            }
            break;
          }
          if ( nptr )
          {
            *(_QWORD *)&v68 = 0;
            qfree((__int64)nptr);
          }
          if ( !v40 )
            goto LABEL_59;
          v42 = &s1;
          if ( (_QWORD)v66 )
            v42 = v65;
          if ( (unsigned int)qregexec() )
          {
            v43 = (*((_DWORD *)v40 + 2))-- == 1;
            if ( v43 )
            {
              v44 = **v40;
              if ( v44 == sub_387B0 )
              {
                v45 = (*v40)[2];
                if ( (char *)v45 == (char *)sub_38540 )
                {
                  *v40 = (void (__fastcall **)(void *))&off_A0628;
                  qregfree();
                  operator delete(v40, 0x30u);
                }
                else
                {
                  ((void (__fastcall *)(void (__fastcall ***)(void *), const char *))v45)(v40, v42);
                }
              }
              else
              {
                ((void (__fastcall *)(void (__fastcall ***)(void *), const char *))v44)(v40, v42);
              }
            }
            goto LABEL_59;
          }
          if ( (_QWORD)v66 )
          {
            v49 = v66 - 1;
            v50 = v69;
            if ( (__int64)v66 - 1 < v70 )
            {
              if ( v69 > v49 )
                v50 = v66 - 1;
              v51 = v49 - v50;
            }
            else
            {
              if ( v70 <= v69 )
                v50 = v70;
              v51 = v70 - v50;
            }
            nptr = 0;
            src = &v65[v50];
            v68 = 0;
            if ( v51 )
            {
              v52 = 0;
              v53 = v51 + 1;
              if ( v51 != -1 )
              {
                v62 = v51;
                v61 = v51 + 1;
                nptr = (char *)qvector_reserve((__int64)&nptr, 0, v53, 1);
                v51 = v62;
                v52 = nptr;
                v53 = v61;
              }
              *(_QWORD *)&v68 = v53;
              v60 = v51;
              memmove(v52, src, v51);
              nptr[v60] = 0;
              if ( (_QWORD)v68 )
              {
                v54 = nptr;
LABEL_100:
                v55 = strtoul(v54, 0, 16);
                v56 = nptr;
                *(_BYTE *)(a1 + 97) = v55;
                if ( v56 )
                {
                  *(_QWORD *)&v68 = 0;
                  qfree((__int64)v56);
                }
                v43 = (*((_DWORD *)v40 + 2))-- == 1;
                if ( v43 )
                {
                  v57 = **v40;
                  if ( v57 == sub_387B0 && (v57 = (*v40)[2], (char *)v57 == (char *)sub_38540) )
                  {
                    *v40 = (void (__fastcall **)(void *))&off_A0628;
                    qregfree();
                    operator delete(v40, 0x30u);
                  }
                  else
                  {
                    v57(v40);
                  }
                }
                goto LABEL_67;
              }
            }
          }
          else
          {
            nptr = 0;
            v68 = 0;
          }
          v54 = (char *)&s1;
          goto LABEL_100;
        }
        *(_DWORD *)(a1 + 32) = v37;
      }
      v47 = *(_DWORD *)a1 <= 3;
      *(_DWORD *)(a1 + 28) = 1;
      if ( v47 )
        *(_DWORD *)a1 = 4;
LABEL_67:
      if ( v65 )
      {
        *(_QWORD *)&v66 = 0;
        qfree((__int64)v65);
      }
    }
  }
  v58 = 0;
LABEL_62:
  if ( s )
  {
    *(_QWORD *)&v64 = 0;
    qfree((__int64)s);
  }
  return v58;
}
