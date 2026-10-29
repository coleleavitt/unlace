__int64 __fastcall sub_36500(__int64 a1, __int64 *a2, const char *a3, __int64 a4)
{
  const char *v4; // rbx
  _QWORD *v7; // r13
  bool (__fastcall *v8)(__int64); // rax
  char **p_s2; // r13
  void (*v10)(void); // rax
  __int64 v12; // r12
  __int64 tinfo_property; // rax
  __int64 v14; // r15
  __int64 v15; // r8
  unsigned __int64 v16; // r14
  __int64 v17; // r15
  char *v18; // rsi
  unsigned __int64 v19; // r14
  size_t v20; // r8
  __int64 v21; // r15
  char *v22; // r9
  char *v23; // rsi
  char *v24; // r14
  __int64 v25; // r15
  size_t v26; // rax
  size_t v27; // r15
  size_t v28; // r13
  char *v29; // rax
  char *v30; // r8
  char *v31; // r15
  char *v32; // rax
  int v33; // r14d
  const char *v34; // r14
  size_t v35; // r10
  __int64 v36; // r8
  signed __int64 v37; // r11
  unsigned __int64 v38; // r9
  char *v39; // rax
  char *v40; // rax
  signed __int64 v41; // rax
  char *v42; // r14
  size_t v43; // r15
  char *v44; // rax
  __int128 v45; // kr00_16
  size_t v46; // rax
  size_t v47; // r13
  size_t v48; // r15
  void *v49; // rax
  char *sb; // [rsp+8h] [rbp-100h]
  char *s; // [rsp+8h] [rbp-100h]
  char *sa; // [rsp+8h] [rbp-100h]
  char *sc; // [rsp+8h] [rbp-100h]
  char *v54; // [rsp+10h] [rbp-F8h]
  size_t v55; // [rsp+10h] [rbp-F8h]
  char *v56; // [rsp+18h] [rbp-F0h]
  void *v57; // [rsp+40h] [rbp-C8h]
  __int64 v58; // [rsp+48h] [rbp-C0h] BYREF
  void *v59; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v60; // [rsp+58h] [rbp-B0h]
  void *src; // [rsp+70h] [rbp-98h] BYREF
  __int128 v62; // [rsp+78h] [rbp-90h]
  char *v63; // [rsp+90h] [rbp-78h] BYREF
  __int128 v64; // [rsp+98h] [rbp-70h]
  char *s2; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v66; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v67; // [rsp+C8h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  if ( !a3 || (v4 = a3, !*a3) )
  {
    LODWORD(p_s2) = 0;
    return (unsigned int)p_s2;
  }
  v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 320) + 128LL))(
                   *(_QWORD *)(a1 + 320),
                   0,
                   0);
  v57 = v7;
  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a4 + 240LL))(a4, v7) )
    goto LABEL_7;
  v8 = *(bool (__fastcall **)(__int64))(*v7 + 280LL);
  if ( v8 != sub_23F00 )
  {
    if ( !v8((__int64)v7) )
      goto LABEL_6;
LABEL_7:
    LODWORD(p_s2) = 0;
    goto LABEL_8;
  }
  if ( !v7[2] )
    goto LABEL_7;
LABEL_6:
  if ( !a2[1] )
    goto LABEL_7;
  if ( (get_tinfo_property(a2[4], 2) & 0x3F) != 1 )
    goto LABEL_7;
  v12 = *a2;
  if ( (get_tinfo_property(*(_QWORD *)(*a2 + 64), 2) & 0xF) != 0xA )
    goto LABEL_7;
  tinfo_property = get_tinfo_property(*(_QWORD *)(v12 + 64), 9);
  v58 = tinfo_property;
  LODWORD(p_s2) = 0;
  v59 = nullptr;
  v60 = 0;
  if ( (tinfo_property & 0x100) != 0 )
  {
    if ( !get_tinfo_pdata(&v59, tinfo_property, 0) )
    {
      LODWORD(p_s2) = 0;
LABEL_22:
      if ( v59 )
      {
        *(_QWORD *)&v60 = 0;
        qfree(v59);
      }
      goto LABEL_16;
    }
    v14 = v60;
    src = nullptr;
    v62 = 0;
    if ( !(_QWORD)v60 )
    {
      v66 = 0;
      p_s2 = &s2;
      s2 = nullptr;
      goto LABEL_26;
    }
    s = (char *)v59;
    if ( v59 )
    {
      if ( *(_BYTE *)v59 )
      {
        if ( strpbrk((const char *)v59, ":<>") )
        {
          v64 = 0;
          v63 = nullptr;
          v26 = strlen(s);
          v27 = v26 + 1;
          v28 = v26;
          v29 = (char *)qvector_reserve(&v63, 0, v26 + 1, 1);
          *(_QWORD *)&v64 = v27;
          v63 = v29;
          memmove(v29, s, v28);
          v30 = nullptr;
          v63[v28] = 0;
          v56 = (char *)::src;
          v31 = v63;
          if ( (_QWORD)v64 )
          {
            v56 = v63;
            v30 = strchr(v63, 60);
          }
          while ( v30 )
          {
            v54 = v30;
            v32 = v30 + 1;
            v33 = 1;
            do
            {
              v32 = strpbrk(v32 + 1, "<>");
              if ( !v32 )
              {
                p_s2 = &s2;
                goto LABEL_55;
              }
              v33 = v33 + 2 * (*v32 == 60) - 1;
            }
            while ( v33 );
            v34 = v32 + 1;
            v35 = v32 + 1 - v54;
            v36 = v54 - v56;
            v37 = v32 + 1 - v56;
            v38 = v37 + 1;
            if ( (unsigned __int64)v64 < v37 + 1 )
            {
              if ( *((_QWORD *)&v64 + 1) < v38 )
              {
                v63 = (char *)qvector_reserve(&v63, v31, v34 - v56 + 1, 1);
                v37 = v34 - v56;
                v31 = v63;
                v36 = v54 - v56;
                v35 = v34 - v54;
                v38 = v34 - v56 + 1;
              }
              *(_QWORD *)&v64 = v38;
              v31[v37] = 0;
              v31 = v63;
            }
            memset(&v31[v36], 95, v35);
            v39 = strchr(v34, 60);
            v31 = v63;
            v30 = v39;
          }
          v40 = strrchr(v31, 58);
          if ( v40 )
          {
            s2 = nullptr;
            v41 = v40 + 1 - v31;
            v66 = 0;
            v42 = &s[v41];
            if ( !&s[v41] )
            {
              p_s2 = &s2;
              v45 = 0u;
LABEL_73:
              s2 = nullptr;
              v66 = 0;
              if ( src )
              {
                *(_QWORD *)&v62 = 0;
                qfree(src);
                src = v42;
                v62 = v45;
                if ( s2 )
                {
                  *(_QWORD *)&v66 = 0;
                  qfree(s2);
                }
              }
              else
              {
                src = v42;
                v62 = v45;
              }
              v31 = v63;
LABEL_55:
              if ( v31 )
              {
                *(_QWORD *)&v64 = 0;
                qfree(v31);
              }
              v14 = v60;
LABEL_58:
              s2 = nullptr;
              v66 = 0;
              if ( !v14 )
                goto LABEL_26;
              goto LABEL_59;
            }
            p_s2 = &s2;
            v43 = strlen(&s[v41]);
            sa = (char *)(v43 + 1);
            v44 = (char *)qvector_reserve(&s2, 0, v43 + 1, 1);
          }
          else
          {
            v42 = s;
            s2 = nullptr;
            p_s2 = &s2;
            v66 = 0;
            v43 = strlen(s);
            sa = (char *)(v43 + 1);
            v44 = (char *)qvector_reserve(&s2, 0, v43 + 1, 1);
          }
          s2 = v44;
          *(_QWORD *)&v66 = sa;
          memmove(v44, v42, v43);
          s2[v43] = 0;
          v42 = s2;
          v45 = v66;
          goto LABEL_73;
        }
        v46 = strlen(s);
        v47 = v46;
        if ( v46 )
        {
          v48 = v46 + 1;
          v49 = (void *)qvector_reserve(&src, 0, v46 + 1, 1);
          *(_QWORD *)&v62 = v48;
          src = v49;
          memmove(v49, s, v47);
          *((_BYTE *)src + v47) = 0;
          p_s2 = &s2;
          v14 = v60;
          goto LABEL_58;
        }
      }
      p_s2 = &s2;
      s2 = nullptr;
      v66 = 0;
    }
    else
    {
      v66 = 0;
      s2 = nullptr;
      p_s2 = &s2;
    }
LABEL_59:
    if ( v14 != 1 )
    {
      s2 = (char *)qvector_reserve(&s2, 0, v14, 1);
      *(_QWORD *)&v66 = v14;
      s2[v14 - 1] = 0;
      memcpy(s2, v59, v14 - 1);
      v18 = s2;
      if ( (_QWORD)v66 )
      {
        v17 = v66 - 1;
        v15 = v66 + 1;
        v16 = v66 + 2;
      }
      else
      {
        v17 = 0;
        v16 = 3;
        v15 = 2;
      }
      if ( *((_QWORD *)&v66 + 1) >= v16 )
      {
LABEL_28:
        *(_QWORD *)&v66 = v16;
        v18[v15] = 0;
        *(_WORD *)&s2[v17] = 14906;
        v19 = v62;
        if ( (_QWORD)v62 )
        {
          v20 = v62 - 1;
          if ( (_QWORD)v62 != 1 )
          {
            v21 = v66;
            v22 = (char *)(v62 - 1);
            if ( (_QWORD)v66 )
            {
              v21 = v66 - 1;
              v22 = (char *)(v20 + v66 - 1);
              v19 = v62 + v66 - 1;
            }
            v23 = s2;
            if ( *((_QWORD *)&v66 + 1) < v19 )
            {
              v55 = v62 - 1;
              sc = v22;
              s2 = (char *)qvector_reserve(&s2, s2, v19, 1);
              v20 = v55;
              v23 = s2;
              v22 = sc;
            }
            *(_QWORD *)&v66 = v19;
            v22[(_QWORD)v23] = 0;
            memcpy(&s2[v21], src, v20);
          }
        }
        if ( (_QWORD)v66 )
        {
          v24 = s2;
          v25 = v66 - 1;
          LODWORD(p_s2) = 0;
          if ( strncmp(v4, s2, v66 - 1) )
          {
LABEL_37:
            if ( v24 )
            {
              *(_QWORD *)&v66 = 0;
              qfree(v24);
            }
            if ( src )
            {
              *(_QWORD *)&v62 = 0;
              qfree(src);
            }
            goto LABEL_22;
          }
          v4 += v25;
        }
        LOBYTE(p_s2) = *v4 == 60 || *v4 == 0;
        if ( (_BYTE)p_s2 )
        {
          *((_DWORD *)a2 + 6) &= ~0x800u;
          copy_tinfo_t(a2 + 4, v12 + 64);
        }
        v24 = s2;
        goto LABEL_37;
      }
LABEL_27:
      sb = (char *)v15;
      s2 = (char *)qvector_reserve(&s2, v18, v16, 1);
      v15 = (__int64)sb;
      v18 = s2;
      goto LABEL_28;
    }
LABEL_26:
    v15 = 2;
    v16 = 3;
    v17 = 0;
    v18 = nullptr;
    goto LABEL_27;
  }
LABEL_16:
  clear_tinfo_t(&v58);
LABEL_8:
  if ( v57 )
  {
    v10 = *(void (**)(void))(*(_QWORD *)v57 + 296LL);
    if ( (char *)v10 == (char *)sub_243F0 )
      operator delete(v57, 0x18u);
    else
      v10();
  }
  return (unsigned int)p_s2;
}

