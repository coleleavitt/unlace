bool __fastcall sub_47410(__int64 a1, __int64 *a2, _DWORD *a3, const char *a4, int a5)
{
  const char *v7; // rbp
  size_t v9; // rax
  size_t v10; // r15
  size_t v11; // r14
  _BYTE *v12; // rax
  _BYTE *v13; // rsi
  __int64 v14; // r14
  __int64 v15; // r15
  unsigned __int64 v16; // rdx
  __int64 v17; // r15
  _BYTE *v18; // r14
  const char *v19; // rax
  __int64 v20; // rdi
  int type_ordinal; // r8d
  bool result; // al
  __int64 v23; // rdi
  _QWORD *v24; // rdx
  size_t v25; // r15
  __int64 v26; // r15
  unsigned __int64 v27; // rdx
  __int64 v28; // r8
  char *v29; // r15
  _BYTE *v30; // rbp
  _QWORD *v31; // rax
  __int64 v32; // [rsp+0h] [rbp-A0h]
  bool v33; // [rsp+0h] [rbp-A0h]
  unsigned __int64 v34; // [rsp+0h] [rbp-A0h]
  __int64 v35; // [rsp+8h] [rbp-98h]
  char *s; // [rsp+10h] [rbp-90h]
  char *sa; // [rsp+10h] [rbp-90h]
  char *sb; // [rsp+10h] [rbp-90h]
  __int64 v40; // [rsp+18h] [rbp-88h]
  _QWORD *v41; // [rsp+20h] [rbp-80h]
  size_t n; // [rsp+28h] [rbp-78h]
  size_t na; // [rsp+28h] [rbp-78h]
  bool v44; // [rsp+30h] [rbp-70h]
  _BYTE *v45; // [rsp+48h] [rbp-58h] BYREF
  __int128 v46; // [rsp+50h] [rbp-50h]
  unsigned __int64 v47; // [rsp+60h] [rbp-40h]

  v7 = a4;
  v47 = __readfsqword(0x28u);
  v46 = 0;
  v45 = nullptr;
  if ( !a4 )
  {
    v13 = nullptr;
    v15 = 4;
    v14 = 0;
    v16 = 5;
LABEL_14:
    v34 = v16;
    v45 = (_BYTE *)qvector_reserve(&v45, v13, v16, 1);
    v16 = v34;
    v13 = v45;
    goto LABEL_5;
  }
  v9 = strlen(a4);
  v10 = v9 + 1;
  v11 = v9;
  v12 = (_BYTE *)qvector_reserve(&v45, 0, v9 + 1, 1);
  *(_QWORD *)&v46 = v10;
  v45 = v12;
  memmove(v12, v7, v11);
  v45[v11] = 0;
  v13 = v45;
  v14 = v46 - 1;
  v15 = v46 + 3;
  v16 = v46 + 4;
  if ( !(_QWORD)v46 )
  {
    v14 = 0;
    v16 = 5;
    v15 = 4;
  }
  if ( *((_QWORD *)&v46 + 1) < v16 )
    goto LABEL_14;
LABEL_5:
  *(_QWORD *)&v46 = v16;
  v13[v15] = 0;
  *(_DWORD *)&v45[v14] = 1818391638;
  v17 = v46;
  v18 = v45;
  v32 = *((_QWORD *)&v46 + 1);
  v19 = src;
  v20 = *(_QWORD *)(a1 + 312);
  if ( (_QWORD)v46 )
    v19 = v45;
  s = (char *)v19;
  type_ordinal = get_type_ordinal(v20);
  result = 0;
  if ( !type_ordinal )
  {
    v41 = (_QWORD *)(a1 + 168);
    v45 = nullptr;
    v46 = 0;
    if ( s )
    {
      n = strlen(s);
      v45 = (_BYTE *)qvector_reserve(&v45, 0, n + 1, 1);
      *(_QWORD *)&v46 = n + 1;
      memmove(v45, s, n);
      v45[n] = 0;
      sa = v45;
      v24 = sub_47300(a1 + 160, (__int64)&v45);
      result = v41 != v24;
      type_ordinal = 0;
      if ( sa )
      {
        v44 = v41 != v24;
        na = (size_t)v24;
        *(_QWORD *)&v46 = 0;
        qfree(sa);
        result = v44;
        v24 = (_QWORD *)na;
        type_ordinal = 0;
      }
    }
    else
    {
      v31 = sub_47300(a1 + 160, (__int64)&v45);
      type_ordinal = 0;
      v24 = v31;
      result = v41 != v31;
    }
    if ( v41 == v24 )
    {
      v45 = nullptr;
      v46 = 0;
      if ( v7 )
      {
        v25 = strlen(v7);
        v45 = (_BYTE *)qvector_reserve(&v45, 0, v25 + 1, 1);
        *(_QWORD *)&v46 = v25 + 1;
        memmove(v45, v7, v25);
        v45[v25] = 0;
        if ( !a5 )
          goto LABEL_22;
      }
      else if ( !a5 )
      {
        v26 = 0;
        v28 = 5;
        v27 = 6;
LABEL_31:
        v40 = v28;
        sb = (char *)v27;
        v45 = (_BYTE *)qvector_reserve(&v45, v7, v27, 1);
        v28 = v40;
        v7 = v45;
        v27 = (unsigned __int64)sb;
LABEL_25:
        *(_QWORD *)&v46 = v27;
        v7[v28] = 0;
        v29 = &v45[v26];
        *(_DWORD *)v29 = 1651799647;
        v29[4] = 108;
        v30 = v45;
        v17 = v46;
        v45 = v18;
        v35 = *((_QWORD *)&v46 + 1);
        *((_QWORD *)&v46 + 1) = v32;
        if ( v18 )
        {
          *(_QWORD *)&v46 = 0;
          qfree(v18);
        }
        type_ordinal = get_type_ordinal(*(_QWORD *)(a1 + 312));
        v18 = v30;
        v32 = v35;
        result = 0;
        goto LABEL_8;
      }
      sub_47240((__int64 *)&v45, (__int64)"_%04X", a5);
LABEL_22:
      v26 = v46;
      v27 = 6;
      v28 = 5;
      v7 = v45;
      if ( (_QWORD)v46 )
      {
        v28 = v46 + 4;
        v27 = v46 + 5;
        v26 = v46 - 1;
      }
      if ( *((_QWORD *)&v46 + 1) >= v27 )
        goto LABEL_25;
      goto LABEL_31;
    }
  }
LABEL_8:
  v23 = *a2;
  a2[1] = v17;
  *a2 = (__int64)v18;
  a2[2] = v32;
  if ( a3 )
    *a3 = type_ordinal;
  if ( v23 )
  {
    v33 = result;
    qfree(v23);
    return v33;
  }
  return result;
}

