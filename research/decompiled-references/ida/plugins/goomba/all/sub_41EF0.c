__int64 __fastcall sub_41EF0(const char **a1)
{
  const char *v2; // rdi
  unsigned __int64 v3; // r12
  int v4; // eax
  const char *v5; // rdi
  int v6; // eax
  const char *v7; // rbp
  unsigned int v8; // ebp
  __int64 v9; // rcx
  int v10; // eax
  unsigned __int8 v11; // si
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 result; // rax
  int v16; // edx
  unsigned __int64 v17; // rax
  unsigned __int8 v18; // cl
  __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  const char *v21; // rax
  const char **v22; // r13
  __int16 **v23; // r14
  char *v24; // rsi
  __int128 v25; // rax
  unsigned __int64 v26; // rdi
  bool v27; // zf
  __int64 v28; // rax
  int v29; // eax
  unsigned __int8 v30; // al
  unsigned int v31; // [rsp+Ch] [rbp-8Ch]
  int v32; // [rsp+14h] [rbp-84h] BYREF
  int v33; // [rsp+18h] [rbp-80h] BYREF
  int v34; // [rsp+1Ch] [rbp-7Ch] BYREF
  unsigned int v35; // [rsp+20h] [rbp-78h] BYREF
  int v36; // [rsp+24h] [rbp-74h] BYREF
  int v37; // [rsp+28h] [rbp-70h] BYREF
  unsigned int v38; // [rsp+2Ch] [rbp-6Ch] BYREF
  int v39; // [rsp+30h] [rbp-68h] BYREF
  int v40; // [rsp+34h] [rbp-64h] BYREF
  unsigned __int64 v41; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 *v42; // [rsp+40h] [rbp-58h] BYREF
  __int128 v43; // [rsp+48h] [rbp-50h]
  char s2[3]; // [rsp+65h] [rbp-33h] BYREF
  unsigned __int64 v45; // [rsp+68h] [rbp-30h]

  v45 = __readfsqword(0x28u);
  v2 = *a1;
  if ( *v2 == 126 )
  {
    *a1 = v2 + 1;
    v20 = (unsigned int)sub_41EF0(a1);
    return sub_41D10((__int64 *)a1[1], v20, 2);
  }
  v3 = (unsigned __int64)&v41;
  v4 = qsscanf(v2, "ExprInt(%llu, %d)%n", &v41, &v33, &v32);
  v5 = *a1;
  if ( v4 == 2 )
  {
    v16 = v33;
    v17 = v41;
    *a1 = &v5[v32];
    if ( v16 != 32 )
    {
      if ( v16 > 32 )
      {
        if ( v16 == 64 )
        {
          v18 = 14;
          goto LABEL_19;
        }
      }
      else
      {
        if ( v16 == 8 )
        {
          v18 = 11;
          goto LABEL_19;
        }
        if ( v16 == 16 )
        {
          v18 = 12;
LABEL_19:
          v19 = v18;
          BYTE1(v19) = 0;
          return sub_41D10((__int64 *)a1[1], v17, v19);
        }
      }
LABEL_72:
      if ( under_debugger )
        goto LABEL_82;
      interr(30832);
      goto LABEL_74;
    }
    v18 = 13;
    goto LABEL_19;
  }
  v6 = qsscanf(v5, "ExprId(\"p%d\", %d)%n", &v35, &v36, &v34);
  v7 = *a1;
  if ( v6 == 2 )
  {
    v13 = v35;
    v29 = v36;
    *a1 = &v7[v34];
    if ( v29 == 32 )
    {
      v12 = 17;
    }
    else if ( v29 > 32 )
    {
      if ( v29 != 64 )
        goto LABEL_80;
      v12 = 18;
    }
    else if ( v29 == 8 )
    {
      v12 = 15;
    }
    else
    {
      if ( v29 != 16 )
        goto LABEL_80;
      v12 = 16;
    }
    v14 = 0;
    return sub_41D10((__int64 *)a1[1], v13 | v14, v12);
  }
  if ( strncmp(*a1, "ExprOp", 6u) )
  {
    if ( strncmp(v7, "ExprSlice", 9u) )
    {
LABEL_74:
      if ( under_debugger )
        goto LABEL_82;
      interr(30694);
      goto LABEL_76;
    }
    *a1 = v7 + 9;
    if ( v7[9] == 40 )
    {
      *a1 = v7 + 10;
      v8 = sub_41EF0(a1);
      if ( (unsigned int)qsscanf(*a1, ", %d, %d)%n", &v38, &v39, &v40) == 2 )
      {
        v9 = v38;
        *a1 += v40;
        v10 = v39 - v9;
        if ( v39 - (_DWORD)v9 == 16 )
        {
          v11 = 20;
          goto LABEL_12;
        }
        if ( v10 == 32 )
        {
          v11 = 21;
          goto LABEL_12;
        }
        if ( v10 == 8 )
        {
          v11 = 19;
LABEL_12:
          v12 = v11;
          v13 = v9 << 32;
          v14 = v8;
          return sub_41D10((__int64 *)a1[1], v13 | v14, v12);
        }
LABEL_70:
        if ( under_debugger )
          goto LABEL_82;
        interr(30834);
        goto LABEL_72;
      }
    }
    else
    {
      if ( under_debugger )
        goto LABEL_82;
      interr(30692);
    }
    if ( under_debugger )
      goto LABEL_82;
    interr(30693);
    goto LABEL_70;
  }
  *a1 = v7 + 6;
  if ( (unsigned int)qsscanf(v7 + 6, "(\"%2[^\"]\"%n", s2, &v37) != 1 )
  {
LABEL_76:
    if ( under_debugger )
      goto LABEL_82;
    interr(30688);
    goto LABEL_78;
  }
  v21 = &(*a1)[v37];
  v42 = nullptr;
  *a1 = v21;
  v43 = 0;
  if ( *v21 == 41 )
    goto LABEL_35;
  v22 = (const char **)&v42;
LABEL_27:
  if ( *v21 == 44 )
    goto LABEL_30;
  do
  {
    if ( under_debugger )
      goto LABEL_82;
    v21 = (const char *)interr(30689);
LABEL_30:
    ;
  }
  while ( v21[1] != 32 );
  *a1 = v21 + 2;
  LODWORD(v41) = sub_41EF0(a1);
  LODWORD(v23) = v41;
  v24 = (char *)v42;
  v25 = v43;
  v26 = v43 + 1;
  if ( v3 >= (unsigned __int64)v42 && v3 < (unsigned __int64)v42 + 4 * *((_QWORD *)&v43 + 1) )
  {
    if ( *((_QWORD *)&v43 + 1) < v26 )
    {
      v28 = qvector_reserve(&v42, v42, v43 + 1, 4);
LABEL_42:
      v42 = (unsigned __int64 *)v28;
      v24 = (char *)v28;
      *(_QWORD *)&v25 = v43;
    }
    goto LABEL_34;
  }
  while ( 1 )
  {
    if ( *((_QWORD *)&v25 + 1) < v26 )
    {
      v28 = qvector_reserve(v22, v24, v26, 4);
      goto LABEL_42;
    }
LABEL_34:
    *(_DWORD *)&v24[4 * v25] = (_DWORD)v23;
    v21 = *a1;
    *(_QWORD *)&v43 = v43 + 1;
    if ( *v21 != 41 )
      goto LABEL_27;
LABEL_35:
    v23 = &off_4DC60;
    v3 = 0;
    v27 = *(_WORD *)s2 == 45;
    *a1 = v21 + 1;
    v22 = (const char **)&off_4DC60;
    if ( v27 )
    {
      if ( (_QWORD)v43 == 1 )
      {
        result = sub_41D10((__int64 *)a1[1], *(unsigned int *)v42, 1);
        goto LABEL_53;
      }
      if ( (_QWORD)v43 == 2 )
      {
        result = sub_41D10((__int64 *)a1[1], *v42, 1);
        goto LABEL_53;
      }
LABEL_78:
      if ( under_debugger )
        goto LABEL_82;
      interr(30690);
LABEL_80:
      if ( !under_debugger )
        interr(30833);
LABEL_82:
      BUG();
    }
    while ( 1 )
    {
      v24 = s2;
      if ( !strcmp(*v22, s2) )
        break;
      ++v3;
      v22 += 2;
      if ( v3 == 7 )
        goto LABEL_38;
    }
    v3 *= 16LL;
    v30 = *((_BYTE *)&off_4DC60 + v3 + 8);
    if ( v30 )
      break;
LABEL_38:
    if ( under_debugger )
      goto LABEL_82;
    v26 = 30691;
    *(_QWORD *)&v25 = interr(30691);
  }
  result = sub_41D10((__int64 *)a1[1], *v42, v30);
LABEL_53:
  if ( v42 )
  {
    v31 = result;
    *(_QWORD *)&v43 = 0;
    qfree(v42);
    return v31;
  }
  return result;
}

