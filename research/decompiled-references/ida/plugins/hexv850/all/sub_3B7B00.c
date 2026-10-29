__int64 __fastcall sub_3B7B00(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // r8
  char *v11; // rdi
  char *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v17; // eax
  __int64 *func; // r15
  char *v19; // r9
  char *v20; // r8
  char *v21; // rax
  size_t v22; // rdx
  int v23; // eax
  size_t v24; // rbx
  char *v25; // rdi
  __int64 v26; // r9
  __int64 v27; // rdx
  char *s2; // [rsp+0h] [rbp-A8h]
  char *s2b; // [rsp+0h] [rbp-A8h]
  char *s2a; // [rsp+0h] [rbp-A8h]
  char *s2c; // [rsp+0h] [rbp-A8h]
  char *s2e; // [rsp+0h] [rbp-A8h]
  char *s2d; // [rsp+0h] [rbp-A8h]
  char *v34; // [rsp+8h] [rbp-A0h]
  char *v35; // [rsp+8h] [rbp-A0h]
  __int64 v36; // [rsp+8h] [rbp-A0h]
  char *v37; // [rsp+8h] [rbp-A0h]
  __int64 v38; // [rsp+10h] [rbp-98h]
  __int64 v39; // [rsp+18h] [rbp-90h]
  __int64 v40; // [rsp+18h] [rbp-90h]
  char *v41; // [rsp+20h] [rbp-88h] BYREF
  __int128 v42; // [rsp+28h] [rbp-80h]
  char *s1; // [rsp+40h] [rbp-68h] BYREF
  __int128 v44; // [rsp+48h] [rbp-60h]
  __int64 v45; // [rsp+58h] [rbp-50h]
  unsigned __int64 v46; // [rsp+68h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  if ( a2 )
  {
    v8 = sub_3860B0(a2);
    v9 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 40LL);
  }
  else
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(11, &s1, &callui, a4, a5, a6);
    v8 = (unsigned __int64)s1;
    func = (__int64 *)get_func();
    if ( (~(unsigned __int16)get_flags_ex() & 0x600) != 0 || !func )
    {
      sub_2AFAB0((__int64)"Only instructions inside a function can be converted to calls", 4);
      return 1;
    }
    v9 = *func;
  }
  s1 = nullptr;
  v44 = 0;
  if ( !(_BYTE)a3 )
  {
    sub_3BFE50(&s1, a1, v9, v8);
    if ( !(_QWORD)v44 )
    {
      if ( !(unsigned __int8)sub_382440((__int64)&s1, 6u, (__int64)"Please enter the type declaration") )
      {
LABEL_25:
        v11 = s1;
        goto LABEL_26;
      }
      v10 = v44;
      v11 = s1;
      if ( !(_QWORD)v44 || (v12 = s1, !*s1) )
      {
LABEL_26:
        if ( v11 )
        {
          *(_QWORD *)&v44 = 0;
          qfree();
        }
        return a3;
      }
      s2 = nullptr;
      goto LABEL_9;
    }
    s2b = (char *)v44;
    v21 = (char *)qalloc_or_throw();
    v22 = (size_t)s2b;
    s2 = v21;
    memcpy(v21, s1, v22);
    if ( (unsigned __int8)sub_382440((__int64)&s1, 6u, (__int64)"Please enter the type declaration") )
    {
      if ( (_QWORD)v44 )
      {
        v39 = v44;
        v34 = s1;
        v17 = strcmp(s1, s2);
        v11 = v34;
        v10 = v39;
        v12 = v34;
        if ( v17 )
        {
LABEL_9:
          if ( v10 == 1 || v11[v10 - 2] == 59 )
          {
LABEL_11:
            if ( (unsigned __int8)sub_3C0350(a1, v9, v8, v12, 0) )
            {
              if ( s2 )
                qfree();
              if ( s1 )
              {
                *(_QWORD *)&v44 = 0;
                qfree();
              }
LABEL_16:
              if ( a2 )
                sub_38FC40(a2, 1u, v13, v14, v15, 0.0);
              return 1;
            }
            goto LABEL_23;
          }
          v26 = v10 - 1;
          v27 = v10 + 1;
          if ( *((_QWORD *)&v44 + 1) < (unsigned __int64)(v10 + 1) )
          {
            v40 = v10 - 1;
            v38 = v10;
            v36 = v10 + 1;
            s1 = (char *)qvector_reserve();
            v26 = v40;
            v12 = s1;
            v10 = v38;
            v27 = v36;
          }
          *(_QWORD *)&v44 = v27;
          v12[v26] = 59;
          s1[v10] = 0;
          if ( (_QWORD)v44 )
          {
            v12 = s1;
            goto LABEL_11;
          }
LABEL_43:
          v12 = (char *)::s1;
          goto LABEL_11;
        }
      }
      else if ( *s2 )
      {
        goto LABEL_43;
      }
    }
LABEL_23:
    if ( s2 )
      qfree();
    goto LABEL_25;
  }
  v45 = 0;
  a3 = sub_3BFBA0(&s1, a1, v9, v8);
  if ( (_BYTE)a3 )
  {
    v41 = nullptr;
    v42 = 0;
    if ( (_QWORD)v44 )
    {
      s2a = (char *)v44;
      v41 = (char *)qalloc_or_throw();
      *((_QWORD *)&v42 + 1) = s2a;
      memcpy(v41, s1, (size_t)s2a);
      *(_QWORD *)&v42 = s2a;
    }
    if ( (unsigned __int8)sub_3B7A30((__int64)&v41, (__int64)"Please enter new function name") )
    {
      v19 = (char *)v42;
      if ( (_QWORD)v42 )
      {
        v20 = v41;
        if ( (_QWORD)v44 )
        {
          v35 = (char *)v42;
          s2c = v41;
          v23 = strcmp(s1, v41);
          v20 = s2c;
          v19 = v35;
          if ( !v23 )
            goto LABEL_46;
        }
        else if ( !*v41 )
        {
LABEL_46:
          if ( v20 )
          {
            *(_QWORD *)&v42 = 0;
            qfree();
          }
          goto LABEL_19;
        }
        v24 = (size_t)(v19 - 1);
        if ( v19 != &byte_1 )
        {
          v25 = s1;
          if ( *((_QWORD *)&v44 + 1) < (unsigned __int64)v19 )
          {
            v37 = v20;
            s2d = v19;
            s1 = (char *)qvector_reserve();
            v20 = v37;
            v25 = s1;
            v19 = s2d;
          }
          *(_QWORD *)&v44 = v19;
          s2e = v19;
          memmove(v25, v20, v24);
          s2e[(_QWORD)s1 - 1] = 0;
          goto LABEL_50;
        }
LABEL_49:
        *(_QWORD *)&v44 = 0;
LABEL_50:
        sub_3BFF20(a1, v9, v8, &s1);
        if ( v41 )
        {
          *(_QWORD *)&v42 = 0;
          qfree();
        }
        clear_tinfo_t();
        if ( s1 )
        {
          *(_QWORD *)&v44 = 0;
          qfree();
        }
        goto LABEL_16;
      }
      if ( (_QWORD)v44 && *s1 )
        goto LABEL_49;
    }
    v20 = v41;
    goto LABEL_46;
  }
LABEL_19:
  clear_tinfo_t();
  if ( s1 )
  {
    *(_QWORD *)&v44 = 0;
    qfree();
  }
  return a3;
}

