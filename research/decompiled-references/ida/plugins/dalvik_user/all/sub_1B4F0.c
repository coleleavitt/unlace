unsigned __int64 __fastcall sub_1B4F0(__int64 a1, __int64 *a2)
{
  const char *v4; // rsi
  size_t v5; // rbp
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbp
  char *v8; // rsi
  size_t v9; // r13
  size_t v10; // r14
  char *v11; // rsi
  char *v12; // rsi
  unsigned int v13; // edx
  int v14; // r8d
  int v15; // r9d
  bool v16; // zf
  int v17; // ecx
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  _QWORD *v23; // rbp
  unsigned int v24; // ebp
  __int64 v25; // rax
  __int64 v26; // r13
  _QWORD *v27; // rsi
  char *v28; // rdi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // r13
  __int64 v32; // r14
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  char *v35; // rsi
  char *v36; // rdi
  char *v37; // rdi
  unsigned int v38; // edx
  __int64 v39; // rax
  __int64 v40; // rax
  struct _Unwind_Exception *v41; // rbx
  char v42; // [rsp+13h] [rbp-175h]
  int v43; // [rsp+14h] [rbp-174h]
  unsigned int v44; // [rsp+18h] [rbp-170h]
  char *s1; // [rsp+20h] [rbp-168h] BYREF
  __int128 v46; // [rsp+28h] [rbp-160h]
  char *v47; // [rsp+40h] [rbp-148h] BYREF
  __int128 v48; // [rsp+48h] [rbp-140h]
  char *s2; // [rsp+60h] [rbp-128h] BYREF
  __int128 v50; // [rsp+68h] [rbp-120h]
  _QWORD v51[25]; // [rsp+80h] [rbp-108h] BYREF
  unsigned __int64 v52; // [rsp+148h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  if ( !a2 )
    return v52 - __readfsqword(0x28u);
  a2[1] = 0;
  if ( (_QWORD)xmmword_7FB78 )
  {
    v4 = src;
    if ( !*src )
      return v52 - __readfsqword(0x28u);
    s1 = nullptr;
    v46 = 0;
  }
  else
  {
    if ( !byte_7FAF1 )
      return v52 - __readfsqword(0x28u);
    s1 = nullptr;
    v4 = nptr;
    v46 = 0;
  }
  sub_1B300((__int64)&s1, v4);
  v5 = n;
  v47 = nullptr;
  s2 = nullptr;
  v48 = 0;
  v50 = 0;
  if ( n )
  {
    s2 = (char *)qalloc_or_throw();
    *((_QWORD *)&v50 + 1) = v5;
    memcpy(s2, haystack, v5);
    *(_QWORD *)&v50 = v5;
    if ( (_QWORD)xmmword_7FB78 )
    {
      if ( *src == 46 )
      {
        v9 = xmmword_7FB78 - 1;
        if ( (_QWORD)xmmword_7FB78 == 1 )
          goto LABEL_17;
LABEL_12:
        --v5;
        v10 = v9;
        v6 = v9 + v5 + 1;
        v9 += v5;
        goto LABEL_13;
      }
    }
    else if ( byte_7FAF1 == 46 )
    {
      goto LABEL_17;
    }
    v6 = v5 - 1;
    v7 = v5 + 1;
LABEL_8:
    v8 = s2;
    if ( *((_QWORD *)&v50 + 1) >= v7 )
      goto LABEL_9;
LABEL_32:
    s2 = (char *)qvector_reserve();
    v8 = s2;
    goto LABEL_9;
  }
  v6 = xmmword_7FB78;
  if ( !(_QWORD)xmmword_7FB78 )
  {
    v7 = 2;
    if ( byte_7FAF1 == 46 )
      goto LABEL_81;
    goto LABEL_8;
  }
  if ( *src == 46 )
  {
    v9 = xmmword_7FB78 - 1;
    v10 = xmmword_7FB78 - 1;
    if ( (_QWORD)xmmword_7FB78 == 1 )
      goto LABEL_81;
    goto LABEL_13;
  }
  v8 = s2;
  v6 = 0;
  v7 = 2;
  if ( *((_QWORD *)&v50 + 1) < 2u )
    goto LABEL_32;
LABEL_9:
  *(_QWORD *)&v50 = v7;
  v8[v6] = 46;
  s2[v6 + 1] = 0;
  v6 = xmmword_7FB78;
  v5 = v50;
  if ( !(_QWORD)xmmword_7FB78 )
    goto LABEL_16;
  v9 = xmmword_7FB78 - 1;
  if ( (_QWORD)xmmword_7FB78 == 1 )
    goto LABEL_16;
  v10 = xmmword_7FB78 - 1;
  if ( (_QWORD)v50 )
    goto LABEL_12;
LABEL_13:
  v11 = s2;
  if ( *((_QWORD *)&v50 + 1) < v6 )
  {
    s2 = (char *)qvector_reserve();
    v11 = s2;
  }
  *(_QWORD *)&v50 = v6;
  v11[v9] = 0;
  memcpy(&s2[v5], src, v10);
  v5 = v50;
LABEL_16:
  if ( v5 )
  {
LABEL_17:
    v12 = s2;
    goto LABEL_18;
  }
LABEL_81:
  v12 = (char *)nptr;
LABEL_18:
  sub_1B300((__int64)&v47, v12);
  if ( s2 )
  {
    *(_QWORD *)&v50 = 0;
    qfree();
  }
  v16 = *(_QWORD *)(a1 + 1664) == 0;
  memset(v51, 0, sizeof(v51));
  v17 = 0;
  if ( !v16 && netnode_supfirst() != -1 )
  {
    if ( !*(_QWORD *)(a1 + 1664) )
    {
LABEL_90:
      sub_16850();
LABEL_91:
      sub_16850();
LABEL_92:
      v41 = (struct _Unwind_Exception *)sub_16850();
      if ( s1 )
      {
        *(_QWORD *)&v46 = 0;
        qfree();
      }
      _Unwind_Resume(v41);
    }
    if ( netnode_supval() > 199 )
    {
      v42 = 0;
      v24 = 1;
      while ( 1 )
      {
        if ( (v51[20] & 0x100000000000LL) != 0 || (v51[0] & 2) == 0 )
          goto LABEL_51;
        s2 = nullptr;
        v50 = 0;
        if ( v42 )
        {
          if ( LODWORD(v51[2]) != v43 )
            goto LABEL_22;
          goto LABEL_46;
        }
        v34 = v24 - 1;
        if ( v34 >= *(_QWORD *)(a1 + 1664) )
        {
          sub_16850();
          goto LABEL_90;
        }
        if ( (unsigned __int8)sub_34510(&s2, *(_QWORD *)(*(_QWORD *)(a1 + 1656) + 8 * v34), LODWORD(v51[2]), 86) )
          break;
LABEL_74:
        if ( s2 )
        {
          *(_QWORD *)&v50 = 0;
          qfree();
        }
LABEL_51:
        v29 = *(_QWORD *)(a1 + 1664);
        v30 = v24;
        if ( v29 < v24 )
          goto LABEL_22;
        v31 = v24 - 1;
        if ( v31 >= v29 )
        {
          if ( under_debugger )
            BUG();
          interr();
LABEL_88:
          sub_16850();
        }
        v32 = netnode_supnext();
        v33 = *(_QWORD *)(a1 + 1664);
        if ( v32 == -1 )
        {
          if ( ++v24 == -1 )
          {
            if ( !v33 )
              goto LABEL_22;
            v38 = 0;
            v24 = 1;
            v30 = 0;
          }
          else
          {
            v13 = v24;
            if ( v33 < v24 )
              goto LABEL_22;
            if ( v30 >= v33 )
              goto LABEL_92;
            v38 = 8 * v30;
          }
          v44 = v38;
          v39 = netnode_supfirst();
          v13 = v44;
          if ( v39 == -1 )
            goto LABEL_22;
          if ( v30 >= *(_QWORD *)(a1 + 1664) )
            goto LABEL_91;
        }
        else if ( v31 >= v33 )
        {
          goto LABEL_88;
        }
        if ( netnode_supval() <= 199 )
          goto LABEL_22;
      }
      if ( (_QWORD)v50 )
      {
        v35 = s2;
        v36 = (char *)nptr;
        if ( !(_QWORD)v46 )
        {
LABEL_62:
          if ( !strcmp(v36, v35) )
            goto LABEL_66;
          v37 = (char *)nptr;
          if ( (_QWORD)v48 )
            v37 = v47;
          if ( !strcmp(v37, v35) )
          {
LABEL_66:
            v43 = v51[2];
LABEL_46:
            v25 = a2[1];
            v26 = v51[21];
            v27 = (_QWORD *)*a2;
            v13 = v25 + 1;
            if ( a2[2] < (unsigned __int64)(v25 + 1) )
            {
              v40 = qvector_reserve();
              *a2 = v40;
              v27 = (_QWORD *)v40;
              v25 = a2[1];
            }
            v27[v25] = v26;
            v28 = s2;
            ++a2[1];
            if ( v28 )
            {
              *(_QWORD *)&v50 = 0;
              qfree();
            }
            v42 = 1;
            goto LABEL_51;
          }
          goto LABEL_74;
        }
      }
      else
      {
        v35 = (char *)nptr;
        if ( !(_QWORD)v46 )
          goto LABEL_66;
      }
      v36 = s1;
      goto LABEL_62;
    }
  }
LABEL_22:
  if ( *(_BYTE *)(a1 + 792) )
  {
    sub_58110(a1, (unsigned int)"Activity methods: ", v13, v17, v14, v15);
    v23 = (_QWORD *)*a2;
    if ( 8 * a2[1] )
    {
      do
      {
        sub_58110(a1, (unsigned int)"%a,", *v23, v20, v21, v22);
        v19 = a2[1];
        ++v23;
      }
      while ( v23 != (_QWORD *)(*a2 + 8 * v19) );
    }
    sub_58110(a1, (unsigned int)"\n", v19, v20, v21, v22);
  }
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree();
  }
  if ( s1 )
  {
    *(_QWORD *)&v46 = 0;
    qfree();
  }
  return v52 - __readfsqword(0x28u);
}

