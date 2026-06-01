__int64 __fastcall sub_3BDB80(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __m128i a9,
        double a10)
{
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r15
  double v14; // xmm0_8
  __int64 v15; // rcx
  __int64 v16; // r8
  char *v17; // rdi
  char *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  int v24; // eax
  double v25; // xmm0_8
  unsigned __int64 *func; // r15
  char v27; // al
  unsigned __int64 v28; // r9
  char *v29; // r8
  char *v30; // rax
  size_t v31; // rdx
  int v32; // eax
  size_t v33; // rbx
  char *v34; // rdi
  __int64 v35; // r9
  __int64 v36; // rdx
  char *s2; // [rsp+0h] [rbp-A8h]
  char *s2b; // [rsp+0h] [rbp-A8h]
  char *s2a; // [rsp+0h] [rbp-A8h]
  char *s2c; // [rsp+0h] [rbp-A8h]
  char *s2e; // [rsp+0h] [rbp-A8h]
  char *s2d; // [rsp+0h] [rbp-A8h]
  char *v43; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v44; // [rsp+8h] [rbp-A0h]
  __int64 v45; // [rsp+8h] [rbp-A0h]
  char *v46; // [rsp+8h] [rbp-A0h]
  __int64 v47; // [rsp+10h] [rbp-98h]
  __int64 v48; // [rsp+18h] [rbp-90h]
  __int64 v49; // [rsp+18h] [rbp-90h]
  char *v50; // [rsp+20h] [rbp-88h] BYREF
  __int128 v51; // [rsp+28h] [rbp-80h]
  char *s1; // [rsp+40h] [rbp-68h] BYREF
  __int128 v53; // [rsp+48h] [rbp-60h]
  __int64 v54; // [rsp+58h] [rbp-50h]
  unsigned __int64 v55; // [rsp+68h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  if ( a2 )
  {
    v12 = sub_38C130(a2);
    v13 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 40LL);
  }
  else
  {
    v25 = ((double (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(11, &s1, &callui, a4, a5, a6);
    v12 = (unsigned __int64)s1;
    func = (unsigned __int64 *)get_func();
    if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 || !func )
    {
      sub_2B4E70((__int64)"Only instructions inside a function can be converted to calls", 4, v25);
      return 1;
    }
    v13 = *func;
  }
  s1 = nullptr;
  v14 = 0.0;
  v53 = 0;
  if ( !(_BYTE)a3 )
  {
    sub_3C5ED0((__int64)&s1, a1, v13, v12);
    if ( !(_QWORD)v53 )
    {
      if ( !(unsigned __int8)sub_3884C0((__int64)&s1, 6u, (__int64)"Please enter the type declaration") )
      {
LABEL_25:
        v17 = s1;
        goto LABEL_26;
      }
      v16 = v53;
      v17 = s1;
      if ( !(_QWORD)v53 || (v18 = s1, !*s1) )
      {
LABEL_26:
        if ( v17 )
        {
          *(_QWORD *)&v53 = 0;
          qfree((__int64)v17);
        }
        return a3;
      }
      s2 = nullptr;
      goto LABEL_9;
    }
    s2b = (char *)v53;
    v30 = (char *)qalloc_or_throw(v53, a1, v53, v15);
    v31 = (size_t)s2b;
    s2 = v30;
    memcpy(v30, s1, v31);
    if ( (unsigned __int8)sub_3884C0((__int64)&s1, 6u, (__int64)"Please enter the type declaration") )
    {
      if ( (_QWORD)v53 )
      {
        v48 = v53;
        v43 = s1;
        v24 = strcmp(s1, s2);
        v17 = v43;
        v16 = v48;
        v18 = v43;
        if ( v24 )
        {
LABEL_9:
          if ( v16 == 1 || v17[v16 - 2] == 59 )
          {
LABEL_11:
            if ( (unsigned __int8)sub_3C63D0(a1, v13, v12, v18, 0) )
            {
              if ( s2 )
                qfree((__int64)s2);
              if ( s1 )
              {
                *(_QWORD *)&v53 = 0;
                qfree((__int64)s1);
              }
LABEL_16:
              if ( a2 )
                sub_395CC0(a2, 1u, v19, v20, v21, v14, a8, a9, a10);
              return 1;
            }
            goto LABEL_23;
          }
          v35 = v16 - 1;
          v36 = v16 + 1;
          if ( *((_QWORD *)&v53 + 1) < (unsigned __int64)(v16 + 1) )
          {
            v49 = v16 - 1;
            v47 = v16;
            v45 = v16 + 1;
            s1 = (char *)qvector_reserve((__int64)&s1, (__int64)v17, v36, 1);
            v35 = v49;
            v18 = s1;
            v16 = v47;
            v36 = v45;
          }
          *(_QWORD *)&v53 = v36;
          v18[v35] = 59;
          s1[v16] = 0;
          if ( (_QWORD)v53 )
          {
            v18 = s1;
            goto LABEL_11;
          }
LABEL_43:
          v18 = (char *)::s1;
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
      qfree((__int64)s2);
    goto LABEL_25;
  }
  v54 = 0;
  a3 = sub_3C5C20((__int64 *)&s1, a1, v13, v12);
  if ( (_BYTE)a3 )
  {
    v50 = nullptr;
    v51 = 0;
    if ( (_QWORD)v53 )
    {
      s2a = (char *)v53;
      v50 = (char *)qalloc_or_throw(v53, a1, v53, v22);
      *((_QWORD *)&v51 + 1) = s2a;
      memcpy(v50, s1, (size_t)s2a);
      *(_QWORD *)&v51 = s2a;
    }
    v14 = sub_3BDAB0((__int64)&v50, (__int64)"Please enter new function name");
    if ( v27 )
    {
      v28 = v51;
      if ( (_QWORD)v51 )
      {
        v29 = v50;
        if ( (_QWORD)v53 )
        {
          v44 = v51;
          s2c = v50;
          v32 = strcmp(s1, v50);
          v29 = s2c;
          v28 = v44;
          if ( !v32 )
            goto LABEL_46;
        }
        else if ( !*v50 )
        {
LABEL_46:
          if ( v29 )
          {
            *(_QWORD *)&v51 = 0;
            qfree((__int64)v29);
          }
          goto LABEL_19;
        }
        v33 = v28 - 1;
        if ( v28 != 1 )
        {
          v34 = s1;
          if ( *((_QWORD *)&v53 + 1) < v28 )
          {
            v46 = v29;
            s2d = (char *)v28;
            s1 = (char *)qvector_reserve((__int64)&s1, (__int64)s1, v28, 1);
            v29 = v46;
            v34 = s1;
            v28 = (unsigned __int64)s2d;
          }
          *(_QWORD *)&v53 = v28;
          s2e = (char *)v28;
          memmove(v34, v29, v33);
          s2e[(_QWORD)s1 - 1] = 0;
          goto LABEL_50;
        }
LABEL_49:
        *(_QWORD *)&v53 = 0;
LABEL_50:
        sub_3C5FA0(a1, v13, v12, (__int64)&s1);
        if ( v50 )
        {
          *(_QWORD *)&v51 = 0;
          qfree((__int64)v50);
        }
        clear_tinfo_t();
        if ( s1 )
        {
          *(_QWORD *)&v53 = 0;
          qfree((__int64)s1);
        }
        goto LABEL_16;
      }
      if ( (_QWORD)v53 && *s1 )
        goto LABEL_49;
    }
    v29 = v50;
    goto LABEL_46;
  }
LABEL_19:
  clear_tinfo_t();
  if ( s1 )
  {
    *(_QWORD *)&v53 = 0;
    qfree((__int64)s1);
  }
  return a3;
}

