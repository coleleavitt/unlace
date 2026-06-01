__int64 __fastcall sub_5040(__int64 *a1, _QWORD *a2, __int64 a3, unsigned __int64 a4)
{
  struct _Unwind_Exception *v4; // r12
  int v5; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  char *v11; // r14
  char v12; // r13
  unsigned __int8 v13; // bp
  int v14; // ebx
  int v15; // r12d
  int v16; // eax
  __int64 v17; // rax
  int *v18; // rbx
  int v19; // eax
  char v20; // al
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rsi
  unsigned int v25; // ebp
  const char *v26; // rsi
  __int64 v27; // rcx
  unsigned __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r12
  __int64 v31; // rbx
  __int64 *v32; // rax
  __int64 v33; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // eax
  unsigned __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rsi
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  char *v43; // rax
  char *k; // rdx
  char v45; // cl
  char v46; // si
  __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rdx
  char *v50; // rax
  char *m; // rdx
  char v52; // cl
  char v53; // si
  __int64 v54; // rdx
  __int64 v55; // rdi
  __int64 v56; // rsi
  char *v57; // rax
  char *v58; // rdx
  char v59; // cl
  char v60; // di
  char *v61; // rdx
  char *j; // rax
  char v63; // cl
  char v64; // si
  char *nptr; // [rsp+0h] [rbp-D8h]
  char v66; // [rsp+8h] [rbp-D0h]
  char v67; // [rsp+Ch] [rbp-CCh]
  void *v68; // [rsp+10h] [rbp-C8h]
  int v69; // [rsp+18h] [rbp-C0h]
  unsigned int v70; // [rsp+1Ch] [rbp-BCh]
  int base; // [rsp+20h] [rbp-B8h]
  __int64 i; // [rsp+28h] [rbp-B0h]
  __int64 v73; // [rsp+38h] [rbp-A0h]
  __int64 v74; // [rsp+40h] [rbp-98h]
  unsigned __int64 v76; // [rsp+50h] [rbp-88h]
  char v77; // [rsp+67h] [rbp-71h] BYREF
  char *endptr; // [rsp+68h] [rbp-70h] BYREF
  __int64 v79; // [rsp+70h] [rbp-68h] BYREF
  __int128 v80; // [rsp+78h] [rbp-60h]
  char s[2]; // [rsp+96h] [rbp-42h] BYREF
  unsigned __int64 v82; // [rsp+98h] [rbp-40h]

  v82 = __readfsqword(0x28u);
  v79 = 0;
  v80 = 0;
  sub_4070(a2, &v79, " ", 1);
  v74 = a1[1];
  v8 = 3 * v80;
  v9 = a4 >> 3;
  if ( a4 == -1 )
    v9 = -1;
  v76 = v9;
  v73 = v79 + 24 * v80;
  if ( v79 != v73 )
  {
    for ( i = v79; v73 != i; i += 24 )
    {
      v10 = *(_QWORD *)(i + 8);
      if ( !v10 )
        goto LABEL_37;
      v11 = *(char **)i;
      v12 = **(_BYTE **)i;
      if ( v12 == 48 )
      {
        if ( v11[1] != 120 )
        {
          if ( v10 == 1 || (((_BYTE)v10 - 1) & 7) != 0 )
            goto LABEL_37;
          v8 = 0;
          base = 2;
          *(_WORD *)s = 0;
          v69 = 8;
          v67 = 1;
LABEL_11:
          v13 = 0;
          LOBYTE(v14) = 0;
          v15 = 0;
          do
          {
            while ( 1 )
            {
              v16 = v13 << v67;
              v14 = (unsigned __int8)v14 << v67;
              v66 = v14;
              v13 = v16;
              if ( v12 != 46 )
              {
                s[0] = v12;
                v13 = base - 1 + v16;
                if ( strlen(s) )
                {
                  v17 = std::string::_Rep::_S_create(1, 0, &v77);
                  *(_BYTE *)(v17 + 24) = v12;
                  v68 = (void *)v17;
                  nptr = (char *)(v17 + 24);
                  if ( (_UNKNOWN *)v17 != &std::string::_Rep::_S_empty_rep_storage )
                  {
                    *(_DWORD *)(v17 + 16) = 0;
                    *(_QWORD *)v17 = 1;
                    *(_BYTE *)(v17 + 25) = 0;
                  }
                }
                else
                {
                  v68 = &std::string::_Rep::_S_empty_rep_storage;
                  nptr = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
                }
                v18 = __errno_location();
                v19 = *v18;
                *v18 = 0;
                v70 = v19;
                v20 = strtoul(nptr, &endptr, base);
                if ( nptr == endptr )
                {
                  v4 = (struct _Unwind_Exception *)std::__throw_invalid_argument("stoul");
                  if ( !*v18 )
                    *v18 = v70;
                  if ( v68 != &std::string::_Rep::_S_empty_rep_storage )
                  {
                    if ( &_pthread_key_create )
                    {
                      v5 = _InterlockedExchangeAdd((volatile signed __int32 *)nptr - 2, 0xFFFFFFFF);
                    }
                    else
                    {
                      v5 = *((_DWORD *)nptr - 2);
                      *((_DWORD *)nptr - 2) = v5 - 1;
                    }
                    if ( v5 <= 0 )
                      std::string::_Rep::_M_destroy(v68, &endptr);
                  }
                  sub_4FC0(&v79);
                  _Unwind_Resume(v4);
                }
                v8 = (unsigned int)*v18;
                if ( (_DWORD)v8 == 34 )
                  std::__throw_out_of_range("stoul");
                if ( !(_DWORD)v8 )
                {
                  v8 = v70;
                  *v18 = v70;
                }
                LOBYTE(v14) = v20 + v66;
                if ( v68 != &std::string::_Rep::_S_empty_rep_storage )
                {
                  if ( &_pthread_key_create )
                  {
                    v37 = _InterlockedExchangeAdd((volatile signed __int32 *)nptr - 2, 0xFFFFFFFF);
                  }
                  else
                  {
                    v37 = *((_DWORD *)nptr - 2);
                    v8 = (unsigned int)(v37 - 1);
                    *((_DWORD *)nptr - 2) = v8;
                  }
                  if ( v37 <= 0 )
                    std::string::_Rep::_M_destroy(v68, &endptr);
                }
              }
              if ( ++v15 == v69 )
                break;
              v12 = *++v11;
              if ( !v12 )
                goto LABEL_28;
            }
            v21 = a1[4];
            v22 = a1[3];
            if ( a1[5] < (unsigned __int64)(v21 + 1) )
            {
              v36 = qvector_reserve(a1 + 3, v22, v21 + 1, 1);
              a1[3] = v36;
              v22 = v36;
              v21 = a1[4];
            }
            *(_BYTE *)(v22 + v21) = v13;
            v23 = a1[1];
            ++a1[4];
            v24 = *a1;
            v8 = v23 + 1;
            if ( a1[2] < (unsigned __int64)(v23 + 1) )
            {
              v35 = qvector_reserve(a1, v24, v8, 1);
              *a1 = v35;
              v24 = v35;
              v23 = a1[1];
            }
            ++v11;
            *(_BYTE *)(v24 + v23) = v14;
            v13 = 0;
            LOBYTE(v14) = 0;
            ++a1[1];
            v12 = *v11;
            v15 = 0;
          }
          while ( *v11 );
          continue;
        }
        v8 = (__int64)(v11 + 2);
        if ( v10 == 1 || (v10 & 1) == 0 )
          goto LABEL_37;
        v12 = v11[2];
        base = 16;
        v11 += 2;
        *(_WORD *)s = 0;
        v69 = 2;
        v67 = 4;
      }
      else
      {
        if ( v10 == 1 || (((_BYTE)v10 - 1) & 7) != 0 )
          goto LABEL_37;
        base = 2;
        *(_WORD *)s = 0;
        v69 = 8;
        v67 = 1;
      }
      if ( v12 )
        goto LABEL_11;
LABEL_28:
      ;
    }
  }
  if ( *(_QWORD *)(a3 + 8) <= 1u )
    goto LABEL_30;
  v26 = "be";
  if ( !(unsigned __int8)getinf_flag(3, 32, v8) )
    v26 = "le";
  if ( *(_QWORD *)(a3 + 8) && !strcmp(*(const char **)a3, v26) )
    goto LABEL_30;
  v27 = a1[1];
  v28 = v27 - v74;
  if ( v76 == -1 )
  {
    v54 = a1[4];
    v55 = a1[3];
    v56 = v74 - v27;
    v57 = (char *)(v55 + v74 - v27 + v54);
    if ( v74 != v27 )
    {
      v58 = (char *)(v55 + v54 - 1);
      if ( v57 < v58 )
      {
        do
        {
          v59 = *v57;
          v60 = *v58;
          ++v57;
          --v58;
          *(v57 - 1) = v60;
          v58[1] = v59;
        }
        while ( v57 < v58 );
        v27 = a1[1];
        v74 = v56 + v27;
      }
      v61 = (char *)(*a1 + v74);
      for ( j = (char *)(*a1 + v27 - 1); v61 < j; j[1] = v63 )
      {
        v63 = *v61;
        v64 = *j;
        ++v61;
        --j;
        *(v61 - 1) = v64;
      }
    }
    goto LABEL_30;
  }
  if ( !(v28 % v76) )
  {
    if ( v28 )
    {
      v38 = v76 + v74 - v27;
      do
      {
        v39 = a1[4];
        v40 = a1[3];
        v41 = v38 + v39;
        v42 = v39 - v28;
        v43 = (char *)(v40 + v42);
        if ( v42 != v41 )
        {
          for ( k = (char *)(v40 + v41 - 1); v43 < k; k[1] = v45 )
          {
            v45 = *v43;
            v46 = *k;
            ++v43;
            --k;
            *(v43 - 1) = v46;
          }
        }
        v47 = a1[1];
        v48 = v38 + v47;
        v49 = v47 - v28;
        v50 = (char *)(*a1 + v49);
        if ( v49 != v48 )
        {
          for ( m = (char *)(*a1 + v48 - 1); v50 < m; m[1] = v52 )
          {
            v52 = *v50;
            v53 = *m;
            ++v50;
            --m;
            *(v50 - 1) = v53;
          }
        }
        v38 += v76;
        v28 -= v76;
      }
      while ( v28 );
    }
LABEL_30:
    v25 = 1;
    goto LABEL_38;
  }
LABEL_37:
  v25 = 0;
LABEL_38:
  v29 = v79;
  if ( v79 )
  {
    v30 = v80;
    if ( (_QWORD)v80 )
    {
      v31 = 0;
      do
      {
        v32 = (__int64 *)(v29 + 24 * v31);
        v33 = *v32;
        if ( *v32 )
        {
          v32[1] = 0;
          qfree(v33);
          v29 = v79;
        }
        ++v31;
      }
      while ( v30 != v31 );
    }
    *(_QWORD *)&v80 = 0;
    qfree(v29);
  }
  return v25;
}

