// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_9EFC0(__int64 a1, __int64 *a2)
{
  int v3; // ebp
  __int64 v4; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r15
  char **p_s; // rsi
  unsigned int v10; // eax
  __int64 v11; // rdx
  bool v12; // r15
  _DWORD *v13; // rbp
  int v14; // eax
  bool v15; // zf
  void (__fastcall *v16)(_QWORD *); // rdx
  void (__fastcall *v17)(_QWORD *); // rax
  _QWORD *v18; // r13
  __int64 v19; // rbx
  void *v20; // rdi
  __int64 v21; // rbx
  _QWORD *v22; // r13
  __int64 v23; // rdi
  __int64 v24; // rdi
  _DWORD *v25; // rbx
  int v26; // eax
  void (__fastcall *v27)(_QWORD *); // rdx
  void (__fastcall *v28)(_QWORD *); // rax
  _QWORD *v29; // r12
  __int64 v30; // rbp
  void *v31; // rdi
  __int64 v32; // rbp
  _QWORD *v33; // r12
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v37; // rax
  int v38; // r15d
  _DWORD *v39; // r14
  int v40; // r9d
  char v41; // dl
  __int16 v42; // ax
  int v43; // r9d
  char v44; // al
  unsigned int v45; // eax
  void (__fastcall *v46)(_QWORD *); // rdx
  void (__fastcall *v47)(_QWORD *); // rax
  _QWORD *v48; // rax
  __int64 v49; // r15
  void *v50; // rdi
  __int64 v51; // r15
  _QWORD *v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rdi
  __int64 v55; // rax
  int v56; // eax
  __int16 v57; // ax
  unsigned __int64 v58; // rax
  __int64 v59; // rdx
  __int16 v60; // ax
  __int16 v61; // ax
  __int16 v62; // ax
  __int16 v63; // ax
  int v64; // eax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rax
  int v69; // eax
  char v70; // al
  _BYTE *v71; // rcx
  int i; // edx
  int n; // [rsp+8h] [rbp-A0h]
  int ne; // [rsp+8h] [rbp-A0h]
  int na; // [rsp+8h] [rbp-A0h]
  void *nb; // [rsp+8h] [rbp-A0h]
  size_t ng; // [rsp+8h] [rbp-A0h]
  int nh; // [rsp+8h] [rbp-A0h]
  char *nc; // [rsp+8h] [rbp-A0h]
  int nd; // [rsp+8h] [rbp-A0h]
  int nf; // [rsp+8h] [rbp-A0h]
  size_t ni; // [rsp+8h] [rbp-A0h]
  char *src; // [rsp+18h] [rbp-90h]
  int v84; // [rsp+2Ch] [rbp-7Ch] BYREF
  char *s; // [rsp+30h] [rbp-78h] BYREF
  __int64 v86; // [rsp+38h] [rbp-70h] BYREF
  _DWORD *v87; // [rsp+40h] [rbp-68h] BYREF
  _DWORD *v88; // [rsp+48h] [rbp-60h] BYREF
  char *v89; // [rsp+50h] [rbp-58h] BYREF
  __int128 v90; // [rsp+58h] [rbp-50h]
  unsigned __int64 v91; // [rsp+68h] [rbp-40h]

  v3 = 0;
  v4 = *a2;
  v91 = __readfsqword(0x28u);
  LODWORD(v88) = 0;
  v89 = nullptr;
  if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, _DWORD **, char **))(a2[32] + 112))(
          *(_QWORD *)(v4 + 24),
          71,
          &v88,
          &v89) )
    v3 = 2 * ((_DWORD)v88 != 0);
  if ( (unsigned __int16)sub_97BF0((__int64)a2) == 22 )
    v3 |= 4u;
  v6 = sub_97BF0((__int64)a2);
  if ( (unsigned __int16)v6 <= 0x17u )
  {
    v7 = 8912900;
    v3 |= 8 * _bittest64(&v7, v6);
  }
  s = nullptr;
  v8 = a2[32];
  v86 = 0;
  if ( (unsigned __int16)sub_94680(a2, 3) == 7969 )
  {
    p_s = (char **)(&dword_0 + 3);
    s = (char *)sub_956A0(a2, 3u);
    if ( !s )
      goto LABEL_10;
    goto LABEL_86;
  }
  p_s = &s;
  v10 = (*(__int64 (__fastcall **)(_QWORD, char **, __int64 *))(v8 + 96))(*(_QWORD *)(*a2 + 24), &s, &v86);
  v11 = v10;
  if ( v10 != -1 )
  {
    if ( v10 )
    {
LABEL_10:
      sub_1D740((__int64)"Cannot retrieve DIE name.\n", p_s, v11);
      goto LABEL_11;
    }
LABEL_86:
    v37 = a2[31];
    LODWORD(v11) = 0;
    v38 = 1;
    if ( v37 )
      goto LABEL_49;
    goto LABEL_87;
  }
  v37 = a2[31];
  v38 = 0;
  if ( v37 )
    goto LABEL_49;
LABEL_87:
  nh = v11;
  v37 = sub_87C20(*(_QWORD **)(*a2 + 16), *(_QWORD *)(*a2 + 24));
  LODWORD(v11) = nh;
  a2[31] = v37;
LABEL_49:
  v39 = *(_DWORD **)(v37 + 216);
  v87 = v39;
  if ( !v39 )
  {
    v40 = 5;
    if ( (_DWORD)v11 )
    {
      v3 |= v38;
      goto LABEL_11;
    }
    goto LABEL_54;
  }
  v40 = v39[31];
  ++v39[2];
  if ( v40 == 1 )
  {
    v45 = v39[30];
    if ( v45 )
    {
      if ( v45 > 0xFA9 )
      {
        if ( v45 > 0xFBD )
        {
          if ( (_DWORD)v11 )
            goto LABEL_69;
          v64 = strncmp(s, "<anonymous", 0xAu);
          v40 = 1;
          v41 = *s;
          LOBYTE(v38) = (v64 != 0) & v38;
        }
        else
        {
          if ( (_DWORD)v11 )
            goto LABEL_69;
          nc = s;
          v56 = strlen(s);
          v40 = 1;
          v41 = *nc;
          if ( v56 > 2 && v41 == 46 )
          {
            if ( nc[1] == 95 )
            {
              v71 = nc + 2;
              for ( i = 2; i != v56; ++i )
              {
                if ( (unsigned __int8)(*v71 - 48) > 9u )
                  break;
                ++v71;
              }
              LOBYTE(v38) = (v56 != i) & v38;
            }
            v40 = 1;
LABEL_57:
            n = v40;
            v42 = sub_97BF0((__int64)a2);
            v43 = n;
            if ( v42 != 36
              && (v57 = sub_97BF0((__int64)a2), v43 = n, v57 != 22)
              && ((v58 = sub_97BF0((__int64)a2), v43 = n, (unsigned __int16)v58 > 0x17u)
               || (v59 = 8912900, !_bittest64(&v59, v58)))
              && (v60 = sub_97BF0((__int64)a2), v43 = n, v60 != 4)
              && ((v61 = sub_97BF0((__int64)a2), v43 = n, v61 != 36)
               || (v66 = *a2,
                   LOBYTE(v90) = 0,
                   v89 = nullptr,
                   v88 = nullptr,
                   v67 = *(_QWORD *)(v66 + 24),
                   v68 = a2[32],
                   v84 = 0,
                   v69 = (*(__int64 (__fastcall **)(__int64, __int64, int *, _DWORD **))(v68 + 112))(
                           v67,
                           62,
                           &v84,
                           &v88),
                   v43 = n,
                   v69)
               || !v84
               || (v70 = sub_96EC0(a2, (__int64)&v89, 0x3Eu), v43 = n, !v70)
               || v89 != (_BYTE *)&dword_0 + 3)
              && (nd = v43, v62 = sub_97BF0((__int64)a2), v43 = nd, v62 != 30)
              && (v63 = sub_97BF0((__int64)a2), v43 = nd, v63 != 57)
              || (ne = v43, v44 = sub_97CA0(0, s, a2), v43 = ne, v44) )
            {
              na = v43;
              if ( (unsigned __int16)sub_97BF0((__int64)a2) == 13 || (unsigned __int16)sub_97BF0((__int64)a2) == 40 )
              {
                v89 = nullptr;
                v90 = 0;
                if ( s )
                {
                  src = s;
                  ni = strlen(s);
                  v89 = (char *)qvector_reserve(&v89, 0, ni + 1, 1);
                  *(_QWORD *)&v90 = ni + 1;
                  memmove(v89, src, ni);
                  v89[ni] = 0;
                }
                LOBYTE(v38) = validate_name(&v89, 2, 1) & v38;
                if ( v89 )
                {
                  *(_QWORD *)&v90 = 0;
                  qfree(v89);
                }
              }
              else if ( *s == 95
                     && na == 1
                     && (unsigned __int16)sub_97BF0((__int64)a2) == 36
                     && sub_9EAC0((__int64)a2, 3) )
              {
                v3 |= (unsigned __int8)v38 & (strcmp(s, "__unknown__") != 0);
                goto LABEL_70;
              }
              v38 = (unsigned __int8)v38;
LABEL_69:
              v3 |= v38;
            }
LABEL_70:
            if ( !v39 )
              goto LABEL_11;
            goto LABEL_71;
          }
        }
      }
      else
      {
        if ( (_DWORD)v11 == -1 )
        {
          v65 = *a2;
          v89 = nullptr;
          LODWORD(v88) = 0;
          if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, _DWORD **, char **))(a2[32] + 112))(
                  *(_QWORD *)(v65 + 24),
                  71,
                  &v88,
                  &v89)
            && (_DWORD)v88 )
          {
            goto LABEL_69;
          }
          goto LABEL_70;
        }
        v40 = 1;
        v41 = *s;
      }
LABEL_55:
      if ( v41 == 36 || !v41 )
        goto LABEL_70;
      goto LABEL_57;
    }
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a2 + 16) + 128LL) + 2799LL) )
    {
      nf = v11;
      sub_1D740((__int64)"Impossible to parse GCC/G++ version. The 'anonymous' pattern is unknown.\n");
      LODWORD(v11) = nf;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a2 + 16) + 128LL) + 2799LL) = 1;
    }
    if ( (_DWORD)v11 )
      goto LABEL_69;
    v40 = 1;
LABEL_54:
    v41 = *s;
    goto LABEL_55;
  }
  if ( !(_DWORD)v11 )
    goto LABEL_54;
  v3 |= v38;
LABEL_71:
  v15 = v39[2]-- == 1;
  if ( v15 )
  {
    v46 = **(void (__fastcall ***)(_QWORD *))v39;
    if ( v46 == sub_15E30 )
    {
      v47 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v39 + 16LL);
      if ( v47 == sub_15D70 )
      {
        *(_QWORD *)v39 = &off_C71D8;
        v48 = *((_QWORD **)v39 + 16);
        nb = v48;
        if ( v48 )
        {
          v49 = v48[2];
          while ( v49 )
          {
            sub_80300(*(_QWORD **)(v49 + 24));
            v50 = (void *)v49;
            v49 = *(_QWORD *)(v49 + 16);
            operator delete(v50, 0x30u);
          }
          operator delete(nb, 0x30u);
        }
        v51 = *((_QWORD *)v39 + 19);
        while ( v51 )
        {
          sub_80A30(*(_QWORD **)(v51 + 24));
          v52 = (_QWORD *)v51;
          v51 = *(_QWORD *)(v51 + 16);
          v53 = v52[4];
          if ( v53 )
          {
            v52[5] = 0;
            ng = (size_t)v52;
            qfree(v53);
            v52 = (_QWORD *)ng;
          }
          operator delete(v52, 0x48u);
        }
        v54 = *((_QWORD *)v39 + 12);
        if ( v54 )
        {
          *((_QWORD *)v39 + 13) = 0;
          qfree(v54);
        }
        operator delete(v39, 0xC0u);
      }
      else
      {
        v47(v39);
      }
    }
    else
    {
      v46(v39);
    }
  }
LABEL_11:
  v12 = a2[28] != -1 && (a2[28] & 0x7FFFFFFFFFFFFFFFLL) != 0;
  if ( !v12 )
  {
    if ( under_debugger )
      BUG();
    interr(30478);
  }
  sub_95380(
    *(const __m128i ***)(a1 + 24),
    a2 + 28,
    v3,
    *(_DWORD *)(*(_QWORD *)(a1 + 40) + 4LL * *(_QWORD *)(a1 + 48) - 4));
  v13 = *(_DWORD **)(*(_QWORD *)(a1 + 32) + 216LL);
  v88 = v13;
  if ( v13 )
  {
    v14 = v13[2];
    v15 = *((_BYTE *)v13 + 184) == 0;
    v13[2] = v14 + 1;
    if ( !v15 )
    {
      v13[2] = v14;
      if ( v14 )
        return 0;
LABEL_17:
      v12 = 0;
      goto LABEL_18;
    }
  }
  v55 = *a2;
  v89 = nullptr;
  LODWORD(v87) = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, _DWORD **, char **))(a2[32] + 112))(
         *(_QWORD *)(v55 + 24),
         70,
         &v87,
         &v89)
    || !(_DWORD)v87 )
  {
    if ( !v13 )
      return 0;
    v15 = v13[2]-- == 1;
    if ( !v15 )
      return 0;
    goto LABEL_17;
  }
  if ( !v13 || (v15 = v13[2] == 1, --v13[2], !v15) )
  {
LABEL_32:
    v25 = *(_DWORD **)(*(_QWORD *)(a1 + 32) + 216LL);
    if ( v25 )
    {
      v26 = v25[2];
      *((_BYTE *)v25 + 184) = 1;
      if ( !v26 )
      {
        v27 = **(void (__fastcall ***)(_QWORD *))v25;
        if ( v27 == sub_15E30 )
        {
          v28 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v25 + 16LL);
          if ( v28 == sub_15D70 )
          {
            v29 = *((_QWORD **)v25 + 16);
            *(_QWORD *)v25 = &off_C71D8;
            if ( v29 )
            {
              v30 = v29[2];
              while ( v30 )
              {
                sub_80300(*(_QWORD **)(v30 + 24));
                v31 = (void *)v30;
                v30 = *(_QWORD *)(v30 + 16);
                operator delete(v31, 0x30u);
              }
              operator delete(v29, 0x30u);
            }
            v32 = *((_QWORD *)v25 + 19);
            while ( v32 )
            {
              v33 = (_QWORD *)v32;
              sub_80A30(*(_QWORD **)(v32 + 24));
              v34 = *(_QWORD *)(v32 + 32);
              v32 = *(_QWORD *)(v32 + 16);
              if ( v34 )
              {
                v33[5] = 0;
                qfree(v34);
              }
              operator delete(v33, 0x48u);
            }
            v35 = *((_QWORD *)v25 + 12);
            if ( v35 )
            {
              *((_QWORD *)v25 + 13) = 0;
              qfree(v35);
            }
            operator delete(v25, 0xC0u);
          }
          else
          {
            v28(v25);
          }
        }
        else
        {
          v27(v25);
        }
      }
    }
    else
    {
      LOBYTE(qword_B8) = 1;
    }
    return 0;
  }
LABEL_18:
  v16 = **(void (__fastcall ***)(_QWORD *))v13;
  if ( v16 == sub_15E30 )
  {
    v17 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v13 + 16LL);
    if ( v17 == sub_15D70 )
    {
      v18 = *((_QWORD **)v13 + 16);
      *(_QWORD *)v13 = &off_C71D8;
      if ( v18 )
      {
        v19 = v18[2];
        while ( v19 )
        {
          sub_80300(*(_QWORD **)(v19 + 24));
          v20 = (void *)v19;
          v19 = *(_QWORD *)(v19 + 16);
          operator delete(v20, 0x30u);
        }
        operator delete(v18, 0x30u);
      }
      v21 = *((_QWORD *)v13 + 19);
      while ( v21 )
      {
        v22 = (_QWORD *)v21;
        sub_80A30(*(_QWORD **)(v21 + 24));
        v23 = *(_QWORD *)(v21 + 32);
        v21 = *(_QWORD *)(v21 + 16);
        if ( v23 )
        {
          v22[5] = 0;
          qfree(v23);
        }
        operator delete(v22, 0x48u);
      }
      v24 = *((_QWORD *)v13 + 12);
      if ( v24 )
      {
        *((_QWORD *)v13 + 13) = 0;
        qfree(v24);
      }
      operator delete(v13, 0xC0u);
    }
    else
    {
      v17(v13);
    }
  }
  else
  {
    v16(v13);
  }
  if ( v12 )
    goto LABEL_32;
  return 0;
}
