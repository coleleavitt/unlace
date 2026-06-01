_QWORD *__fastcall sub_61780(_QWORD *a1, _QWORD *a2, __int64 a3, unsigned int a4, void *a5, void ***a6, _QWORD *a7)
{
  unsigned __int64 v13; // rsi
  int *v14; // rdi
  __int64 v15; // r13
  size_t v16; // rbx
  void (__fastcall *hexdsp)(__int64, __int64 *, __int64, __int64); // rax
  __int64 v18; // r14
  __int64 v19; // r13
  _QWORD *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // r14
  void (__fastcall *v23)(__int64, __int64, __int64, _QWORD); // rax
  const char *v24; // rsi
  __int64 *v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // r8
  __int64 v28; // r14
  __int64 v29; // r14
  void (__fastcall *v30)(__int64, __int64 *, __int64, __int64); // rax
  int *v31; // rax
  unsigned __int64 v32; // r9
  int *v33; // r14
  int *v34; // r11
  size_t v35; // r8
  int *v36; // rax
  __int64 v37; // rdi
  __int64 v38; // r13
  __int64 v39; // rbp
  __int64 v40; // rbx
  __int64 v41; // rdi
  unsigned __int64 v43; // rdi
  _QWORD *v44; // r8
  _QWORD *v45; // rax
  _QWORD *v46; // rsi
  _QWORD *v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  char *v51; // r13
  unsigned __int64 v52; // r8
  __int64 v53; // r8
  int ***v54; // rax
  _QWORD *v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  size_t v61; // r9
  _QWORD *v62; // rsi
  size_t v63; // rdi
  _QWORD *v64; // rcx
  size_t v65; // rdx
  char *v66; // rax
  __int64 v67; // rdx
  void **v68; // [rsp+8h] [rbp-D0h]
  size_t n; // [rsp+20h] [rbp-B8h]
  size_t na; // [rsp+20h] [rbp-B8h]
  __int64 nb; // [rsp+20h] [rbp-B8h]
  size_t nc; // [rsp+20h] [rbp-B8h]
  __int64 v73; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v74; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v75; // [rsp+38h] [rbp-A0h]
  int **v76; // [rsp+40h] [rbp-98h]
  char *v77; // [rsp+48h] [rbp-90h]
  __int64 v78; // [rsp+58h] [rbp-80h] BYREF
  __int64 v79; // [rsp+60h] [rbp-78h] BYREF
  __int64 v80; // [rsp+68h] [rbp-70h]
  int v81; // [rsp+70h] [rbp-68h] BYREF
  __int64 v82; // [rsp+78h] [rbp-60h]
  __int64 v83; // [rsp+80h] [rbp-58h]
  unsigned __int64 v84; // [rsp+98h] [rbp-40h]

  v84 = __readfsqword(0x28u);
  a1[1] = 1;
  a1[2] = 0;
  a1[3] = 0;
  *((_DWORD *)a1 + 8) = 1065353216;
  a1[5] = 0;
  a1[6] = 0;
  *a1 = a1 + 6;
  v77 = (char *)(a1 + 6);
  sub_4BEC0((__int64)&v81, 21);
  v13 = a4;
  v14 = &v81;
  sub_4D130((__int64)&v81, a4);
  if ( a5 != (void *)-1LL )
  {
    v13 = (unsigned __int64)a5;
    v14 = &v81;
    sub_4D1C0((__int64)&v81, a5);
  }
  v73 = (__int64)&(*a6)[(_QWORD)a6[1]];
  if ( (void **)v73 != *a6 )
  {
    v68 = *a6;
    v76 = (int **)(a1 + 2);
    do
    {
      v15 = a2[22];
      v16 = (size_t)*v68;
      hexdsp = (void (__fastcall *)(__int64, __int64 *, __int64, __int64))get_hexdsp(v14, (const char *)v13);
      hexdsp(417, &v79, a3, v15);
      v18 = v79;
      v19 = sub_6DCB0(a3, *(unsigned int *)(a3 + 64));
      if ( a7[3] )
      {
        v43 = a7[1];
        v44 = *(_QWORD **)(*a7 + 8 * (v16 % v43));
        if ( v44 )
        {
          v45 = (_QWORD *)*v44;
          if ( v16 == *(_QWORD *)(*v44 + 8LL) )
          {
LABEL_37:
            if ( v44 )
            {
              v20 = (_QWORD *)*v44;
              if ( *v44 )
                goto LABEL_10;
            }
          }
          else
          {
            while ( 1 )
            {
              v46 = (_QWORD *)*v45;
              if ( !*v45 )
                break;
              v44 = v45;
              if ( v16 % v43 != v46[1] % v43 )
                break;
              v45 = (_QWORD *)*v45;
              if ( v16 == v46[1] )
                goto LABEL_37;
            }
          }
        }
      }
      else
      {
        v20 = (_QWORD *)a7[2];
        if ( v20 )
        {
          while ( v16 != v20[1] )
          {
            v20 = (_QWORD *)*v20;
            if ( !v20 )
              goto LABEL_39;
          }
LABEL_10:
          n = v20[2];
          goto LABEL_11;
        }
      }
LABEL_39:
      n = v16;
LABEL_11:
      sub_4D1C0((__int64)&v81, (void *)v16);
      v21 = v18;
      v22 = sub_49E20(v18, &v81);
      v23 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD))get_hexdsp(v21, (const char *)&v81);
      v24 = (const char *)v19;
      v25 = (_QWORD *)(off_168 + 4);
      v23(364, v19, v22, 0);
      if ( v83 )
      {
        --v83;
        v25 = (__int64 *)(v82 + 56 * v83);
        sub_4BE70((__int64)v25);
      }
      v26 = a2[25];
      v27 = a2[26];
      v79 = 0;
      v80 = 0;
      if ( v27 < v26 + 1 )
      {
        v74 = v27;
        v28 = qvector_reserve(a2 + 24, 0, v26 + 1, 8);
        v56 = a2[25];
        v24 = (const char *)a2[26];
        v25 = (__int64 *)a2[24];
        a2[26] = v74;
        v57 = v56 - 1;
        if ( v57 >= 0 )
        {
          v58 = v28;
          do
          {
            v59 = *v25;
            v58 += 8;
            ++v25;
            *(_QWORD *)(v58 - 8) = v59;
          }
          while ( v57-- != 0 );
          v25 = (__int64 *)a2[24];
        }
        qfree(v25);
        a2[24] = v28;
        v26 = a2[25];
        a2[26] = v24;
      }
      else
      {
        v28 = a2[24];
      }
      *(_QWORD *)(v28 + 8 * v26) = v80;
      v29 = a2[22];
      ++a2[25];
      v30 = (void (__fastcall *)(__int64, __int64 *, __int64, __int64))get_hexdsp(v25, v24);
      v30(417, &v78, a3, v29);
      v13 = a3;
      sub_60140(a2, a3, v78, n, &v79);
      v14 = (int *)&qword_18;
      v31 = (int *)operator new(0x18u);
      v32 = a1[3];
      *(_QWORD *)v31 = 0;
      v33 = v31;
      *((_QWORD *)v31 + 1) = v16;
      *((_QWORD *)v31 + 2) = v19;
      if ( v32 )
      {
        v13 = a1[1];
        v34 = *(int **)(*a1 + 8 * (v16 % v13));
        v35 = v16 % v13;
        if ( !v34 )
          goto LABEL_44;
        v36 = *(int **)v34;
        if ( v16 != *(_QWORD *)(*(_QWORD *)v34 + 8LL) )
        {
          do
          {
            v14 = *(int **)v36;
            if ( !*(_QWORD *)v36 )
              goto LABEL_44;
            v34 = v36;
            if ( v16 % v13 != *((_QWORD *)v14 + 1) % v13 )
              goto LABEL_44;
            v36 = *(int **)v36;
          }
          while ( v16 != *((_QWORD *)v14 + 1) );
        }
        if ( !v34 || !*(_QWORD *)v34 )
          goto LABEL_44;
      }
      else
      {
        v47 = (_QWORD *)a1[2];
        if ( !v47 )
        {
LABEL_43:
          v13 = a1[1];
          v35 = v16 % v13;
LABEL_44:
          v14 = (int *)(a1 + 4);
          na = v35;
          if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                                  (std::__detail::_Prime_rehash_policy *)(a1 + 4),
                                  v13,
                                  v32,
                                  1u) )
          {
            v61 = v48;
            if ( v48 == 1 )
            {
              a1[6] = 0;
              v51 = v77;
            }
            else
            {
              if ( v48 > 0xFFFFFFFFFFFFFFFLL )
              {
                if ( v48 >> 61 )
                  sub_B371(v14, v13, v48, v49, v50);
                std::__throw_bad_alloc();
              }
              v75 = v48;
              nb = 8 * v48;
              v51 = (char *)operator new(8 * v48);
              memset(v51, 0, nb);
              v61 = v75;
            }
            v62 = (_QWORD *)a1[2];
            v63 = 0;
            for ( a1[2] = 0; v62; v63 = v65 )
            {
              while ( 1 )
              {
                v64 = v62;
                v62 = (_QWORD *)*v62;
                v65 = v64[1] % v61;
                v66 = &v51[8 * v65];
                if ( !*(_QWORD *)v66 )
                  break;
                *v64 = **(_QWORD **)v66;
                **(_QWORD **)v66 = v64;
                if ( !v62 )
                  goto LABEL_64;
              }
              *v64 = a1[2];
              a1[2] = v64;
              *(_QWORD *)v66 = v76;
              if ( *v64 )
                *(_QWORD *)&v51[8 * v63] = v64;
            }
LABEL_64:
            v13 = a1[1];
            v14 = (int *)*a1;
            if ( v77 != (char *)*a1 )
            {
              v13 *= 8LL;
              nc = v61;
              operator delete(v14, v13);
              v61 = nc;
            }
            a1[1] = v61;
            *a1 = v51;
            v52 = v16 % v61;
          }
          else
          {
            v51 = (char *)*a1;
            v52 = na;
          }
          v53 = 8 * v52;
          v54 = (int ***)&v51[v53];
          v55 = *(_QWORD **)&v51[v53];
          if ( v55 )
          {
            *(_QWORD *)v33 = *v55;
            **v54 = v33;
          }
          else
          {
            v67 = a1[2];
            a1[2] = v33;
            *(_QWORD *)v33 = v67;
            if ( v67 )
            {
              *(_QWORD *)&v51[8 * (*(_QWORD *)(v67 + 8) % a1[1])] = v33;
              v54 = (int ***)(v53 + *a1);
            }
            *v54 = v76;
          }
          ++a1[3];
          goto LABEL_25;
        }
        while ( v16 != v47[1] )
        {
          v47 = (_QWORD *)*v47;
          if ( !v47 )
            goto LABEL_43;
        }
      }
      if ( v33 )
      {
        v13 = 24;
        v14 = v33;
        operator delete(v33, 0x18u);
      }
LABEL_25:
      ++v68;
    }
    while ( (void **)v73 != v68 );
  }
  v37 = v82;
  if ( v82 )
  {
    v38 = v83;
    if ( v83 )
    {
      v39 = 0;
      v40 = 0;
      do
      {
        v41 = v39 + v37;
        ++v40;
        v39 += 56;
        sub_4BE70(v41);
        v37 = v82;
      }
      while ( v38 != v40 );
    }
    v83 = 0;
    qfree(v37);
  }
  return a1;
}
