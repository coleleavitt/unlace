__int64 __fastcall sub_570D0(__int64 a1, const char *a2)
{
  size_t v3; // rbp
  size_t v4; // r12
  char *v5; // rax
  size_t v6; // rbp
  __int64 v7; // rbx
  const char *v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rbp
  unsigned __int64 v12; // r13
  char *v13; // rsi
  size_t v14; // rbp
  char *v15; // rax
  size_t v16; // r15
  const char *v17; // rsi
  int v18; // eax
  const char *v19; // rsi
  int v20; // eax
  const char *v21; // rsi
  int v22; // eax
  const char *v23; // rsi
  int v24; // eax
  const char *v25; // rsi
  int v26; // eax
  const char *v27; // rsi
  int v28; // eax
  const char *v29; // rsi
  const char *v30; // rsi
  int v31; // eax
  void (__fastcall ***v32)(void *); // rbp
  const char *v33; // rsi
  bool v34; // zf
  void (__fastcall *v35)(void *); // rdx
  void (__fastcall *v36)(void *); // rax
  bool v38; // cc
  void (__fastcall *v39)(void *); // rax
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // rax
  size_t v42; // r8
  char *v43; // rdi
  size_t v44; // rdx
  const char *v45; // rdi
  void (__fastcall *v46)(void *); // rax
  unsigned __int8 v47; // [rsp+1h] [rbp-F1h]
  char *src; // [rsp+2h] [rbp-F0h]
  size_t v49; // [rsp+Ah] [rbp-E8h]
  size_t v50; // [rsp+Ah] [rbp-E8h]
  size_t v51; // [rsp+12h] [rbp-E0h]
  char *s; // [rsp+2Ah] [rbp-C8h]
  __int64 v53; // [rsp+32h] [rbp-C0h]
  char *v54; // [rsp+4Ah] [rbp-A8h]
  size_t v55; // [rsp+52h] [rbp-A0h]
  char *nptr; // [rsp+6Ah] [rbp-88h]
  __m128i *nptra; // [rsp+6Ah] [rbp-88h]
  char *nptrb; // [rsp+6Ah] [rbp-88h]
  size_t v59; // [rsp+72h] [rbp-80h]
  unsigned __int64 v60; // [rsp+9Ah] [rbp-58h]
  unsigned __int64 v61; // [rsp+A2h] [rbp-50h]

  v53 = 0;
  s = nullptr;
  if ( !a2 || (v3 = strlen(a2), v53 = v3 + 1, s = (char *)qvector_reserve(), memmove(s, a2, v3), s[v3] = 0, v3 == -1) )
  {
    nptr = nullptr;
    v7 = -1;
    goto LABEL_9;
  }
  v4 = v3;
  v5 = strchr(s, 59);
  if ( !v5 )
  {
    v7 = -1;
    goto LABEL_81;
  }
  v6 = v5 - s;
  v7 = v5 - s;
  if ( v4 < v5 - s )
LABEL_81:
    v6 = v53 - 1;
  nptr = nullptr;
  if ( v6 )
  {
    nptr = (char *)qvector_reserve();
    memmove(nptr, s, v6);
    nptr[v6] = 0;
    if ( v6 != -1 )
    {
      v8 = nptr;
      goto LABEL_10;
    }
  }
LABEL_9:
  v8 = &s1;
LABEL_10:
  v47 = sub_56980(a1, v8);
  if ( nptr )
    qfree();
  if ( v47 )
  {
    while ( 1 )
    {
      if ( v7 == -1 )
        goto LABEL_61;
      if ( !v53 )
      {
LABEL_64:
        v7 = -1;
        v54 = nullptr;
        v55 = 0;
LABEL_24:
        v17 = &s1;
        goto LABEL_25;
      }
      v9 = v53 - 1;
      if ( v53 == 1 )
      {
        v11 = 1;
      }
      else
      {
        v10 = v7 + 1;
        v11 = 1;
        v12 = 0;
        if ( v10 < v9 )
        {
          v12 = v9 - v10;
          v11 = v53 - v10;
          memmove(s, &s[v10], v9 - v10);
        }
        v13 = s;
        if ( v11 )
        {
          s = (char *)qvector_reserve();
          v13 = s;
        }
        v53 = v11;
        v13[v12] = 0;
        if ( !v11 )
          goto LABEL_64;
      }
      v14 = v11 - 1;
      v15 = strchr(s, 59);
      if ( v15 )
      {
        v16 = v15 - s;
        v7 = v15 - s;
        if ( v14 >= v15 - s )
          goto LABEL_23;
      }
      else
      {
        v7 = -1;
      }
      v16 = v14;
LABEL_23:
      v54 = nullptr;
      v55 = 0;
      if ( !v16 )
        goto LABEL_24;
      v54 = (char *)qvector_reserve();
      v55 = v16 + 1;
      memmove(v54, s, v16);
      v54[v16] = 0;
      if ( v16 == -1 )
        v17 = &s1;
      else
        v17 = v54;
LABEL_25:
      v18 = sub_56640((const char **)off_A1BA0, v17);
      if ( v18 >= 0 )
      {
        *(_DWORD *)(a1 + 8) = v18;
        goto LABEL_66;
      }
      v19 = &s1;
      if ( v55 )
        v19 = v54;
      v20 = sub_56640((const char **)&off_A1B80, v19);
      if ( v20 >= 0 )
      {
        *(_DWORD *)(a1 + 24) = v20;
        goto LABEL_66;
      }
      v21 = &s1;
      if ( v55 )
        v21 = v54;
      v22 = sub_56640((const char **)&off_A1B50, v21);
      if ( v22 >= 0 )
      {
        *(_DWORD *)(a1 + 20) = v22;
        goto LABEL_66;
      }
      v23 = &s1;
      if ( v55 )
        v23 = v54;
      v24 = sub_56640((const char **)&off_A1B20, v23);
      if ( v24 >= 0 )
      {
        *(_DWORD *)(a1 + 12) = v24;
        goto LABEL_66;
      }
      v25 = &s1;
      if ( v55 )
        v25 = v54;
      v26 = sub_56640((const char **)off_A1B00, v25);
      if ( v26 >= 0 )
      {
        *(_DWORD *)(a1 + 16) = v26;
        goto LABEL_66;
      }
      v27 = &s1;
      if ( v55 )
        v27 = v54;
      v28 = sub_56640((const char **)off_A1AB0, v27);
      if ( v28 >= 0 )
      {
        *(_BYTE *)(a1 + 96) = v28 == 0;
        goto LABEL_66;
      }
      v29 = &s1;
      if ( v55 )
        v29 = v54;
      if ( (int)sub_56640((const char **)&off_A1AD0, v29) < 0 )
      {
        v30 = &s1;
        if ( v55 )
          v30 = v54;
        v31 = sub_56640((const char **)off_A1AE0, v30);
        if ( v31 < 0 )
        {
          nptra = (__m128i *)qvector_reserve();
          *nptra = _mm_load_si128((const __m128i *)&xmmword_896F0);
          nptra[1] = _mm_load_si128((const __m128i *)&xmmword_89700);
          nptra[2].m128i_i8[0] = 0;
          v32 = (void (__fastcall ***)(void *))operator new(0x30u);
          *((_DWORD *)v32 + 2) = 1;
          *v32 = (void (__fastcall **)(void *))&off_A0628;
          *((_OWORD *)v32 + 1) = 0;
          *((_OWORD *)v32 + 2) = 0;
          if ( (unsigned int)qregcomp() )
          {
            if ( v32 )
            {
              v39 = (*v32)[2];
              if ( (char *)v39 == (char *)sub_38540 )
              {
                *v32 = (void (__fastcall **)(void *))&off_A0628;
                qregfree();
                operator delete(v32, 0x30u);
                if ( !nptra )
                  goto LABEL_58;
LABEL_83:
                qfree();
                goto LABEL_58;
              }
              ((void (__fastcall *)(void (__fastcall ***)(void *), __m128i *))v39)(v32, nptra);
              if ( nptra )
                goto LABEL_83;
            }
            else if ( nptra )
            {
              goto LABEL_83;
            }
LABEL_58:
            if ( v54 )
              qfree();
            break;
          }
          if ( nptra )
            qfree();
          if ( !v32 )
            goto LABEL_58;
          v33 = &s1;
          if ( v55 )
            v33 = v54;
          if ( (unsigned int)qregexec() )
          {
            v34 = (*((_DWORD *)v32 + 2))-- == 1;
            if ( v34 )
            {
              v35 = **v32;
              if ( v35 == sub_387B0 )
              {
                v36 = (*v32)[2];
                if ( (char *)v36 == (char *)sub_38540 )
                {
                  *v32 = (void (__fastcall **)(void *))&off_A0628;
                  qregfree();
                  operator delete(v32, 0x30u);
                }
                else
                {
                  ((void (__fastcall *)(void (__fastcall ***)(void *), const char *))v36)(v32, v33);
                }
              }
              else
              {
                ((void (__fastcall *)(void (__fastcall ***)(void *), const char *))v35)(v32, v33);
              }
            }
            goto LABEL_58;
          }
          if ( v55 )
          {
            v40 = v55 - 1;
            v41 = v60;
            if ( v55 - 1 < v61 )
            {
              if ( v60 > v40 )
                v41 = v55 - 1;
              v42 = v40 - v41;
            }
            else
            {
              if ( v61 <= v60 )
                v41 = v61;
              v42 = v61 - v41;
            }
            nptrb = nullptr;
            src = &v54[v41];
            if ( v42 )
            {
              v43 = nullptr;
              v44 = v42 + 1;
              if ( v42 != -1 )
              {
                v51 = v42;
                v50 = v42 + 1;
                nptrb = (char *)qvector_reserve();
                v42 = v51;
                v43 = nptrb;
                v44 = v50;
              }
              v59 = v44;
              v49 = v42;
              memmove(v43, src, v42);
              nptrb[v49] = 0;
              if ( v59 )
              {
                v45 = nptrb;
LABEL_98:
                *(_BYTE *)(a1 + 97) = strtoul(v45, nullptr, 16);
                if ( nptrb )
                  qfree();
                v34 = (*((_DWORD *)v32 + 2))-- == 1;
                if ( v34 )
                {
                  v46 = **v32;
                  if ( v46 == sub_387B0 && (v46 = (*v32)[2], (char *)v46 == (char *)sub_38540) )
                  {
                    *v32 = (void (__fastcall **)(void *))&off_A0628;
                    qregfree();
                    operator delete(v32, 0x30u);
                  }
                  else
                  {
                    v46(v32);
                  }
                }
                goto LABEL_66;
              }
            }
          }
          else
          {
            nptrb = nullptr;
          }
          v45 = &s1;
          goto LABEL_98;
        }
        *(_DWORD *)(a1 + 32) = v31;
      }
      v38 = *(_DWORD *)a1 <= 3;
      *(_DWORD *)(a1 + 28) = 1;
      if ( v38 )
        *(_DWORD *)a1 = 4;
LABEL_66:
      if ( v54 )
        qfree();
    }
  }
  v47 = 0;
LABEL_61:
  if ( s )
    qfree();
  return v47;
}

