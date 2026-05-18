__int64 __fastcall sub_179DC0(__int64 a1, unsigned __int8 *a2, __int64 a3, signed __int64 a4, char a5, int a6)
{
  unsigned __int8 *v7; // r13
  unsigned __int8 v11; // al
  unsigned int v12; // eax
  __int64 v13; // r14
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // r13
  _QWORD *v17; // r14
  __int64 v18; // r15
  const char *v19; // rax
  const char *v20; // rsi
  const char *v21; // rdi
  int v22; // eax
  _QWORD *v23; // rcx
  __int64 v24; // rax
  unsigned __int8 *v26; // rdi
  __int64 v27; // rax
  void *v28; // rax
  __m128i v29; // xmm0
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  const void *v32; // rbp
  __int64 v33; // r13
  void *v34; // rdi
  char *v35; // rdi
  int v36; // eax
  char v37; // al
  __int64 v38; // rdx
  char v39; // r8
  int v40; // r9d
  __int64 v41; // r12
  _QWORD *v42; // [rsp+0h] [rbp-D8h]
  unsigned int v43; // [rsp+0h] [rbp-D8h]
  __int64 v44; // [rsp+8h] [rbp-D0h]
  const char *v45; // [rsp+20h] [rbp-B8h]
  char *s2; // [rsp+28h] [rbp-B0h]
  void *ptr; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v48; // [rsp+38h] [rbp-A0h] BYREF
  char v49; // [rsp+50h] [rbp-88h] BYREF
  __int128 v50; // [rsp+58h] [rbp-80h]
  __int64 v51; // [rsp+68h] [rbp-70h]
  char v52[40]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v53; // [rsp+98h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  if ( !a1 )
    return sub_18FA40(1568);
  v7 = a2;
  if ( !a2 )
    return sub_18FA40(1568);
  while ( 1 )
  {
    v11 = *v7;
    if ( *v7 == 7 )
    {
      v27 = *((_QWORD *)v7 + 2);
      if ( !v27 )
      {
LABEL_26:
        ptr = nullptr;
        v48 = 0;
LABEL_27:
        sub_176520(a1);
        v28 = ptr;
        v29 = _mm_loadu_si128(&v48);
        *(_BYTE *)a1 = 7;
        *(_QWORD *)(a1 + 8) = v28;
        *(__m128i *)(a1 + 16) = v29;
        return 0;
      }
      v30 = v27 - 1;
      if ( a3 >= 0 || (a3 += v30, a3 >= 0) )
      {
        if ( v30 <= a3 )
          a3 = v30;
        if ( (a5 & 1) != 0 )
        {
          if ( a3 + 1 < 0 )
            goto LABEL_26;
          if ( v30 >= a3 + 1 )
          {
            v32 = (const void *)(*((_QWORD *)v7 + 1) + a3);
            a4 = 1;
            ptr = nullptr;
            v48 = 0;
            goto LABEL_38;
          }
        }
        else
        {
          if ( a4 < 0 )
          {
            a4 += v30;
            if ( a4 < 0 )
              goto LABEL_26;
          }
          if ( v30 > a4 )
            v30 = a4;
        }
        if ( v30 < a3 )
          goto LABEL_26;
      }
      else
      {
        if ( (a5 & 1) != 0 )
        {
          if ( !v30 )
            goto LABEL_26;
          v32 = *((const void **)v7 + 1);
          v33 = 2;
          ptr = nullptr;
          v48 = 0;
          a4 = 1;
          goto LABEL_73;
        }
        if ( a4 >= 0 )
        {
          v32 = *((const void **)v7 + 1);
          ptr = nullptr;
          if ( v30 <= a4 )
            a4 = v30;
          v48 = 0;
          v33 = a4 + 1;
          if ( !a4 )
            goto LABEL_27;
          goto LABEL_73;
        }
        v41 = v30 + a4;
        if ( v41 < 0 )
          goto LABEL_26;
        if ( v30 > v41 )
          v30 = v41;
        a3 = 0;
      }
      v31 = *((_QWORD *)v7 + 1);
      ptr = nullptr;
      v48 = 0;
      a4 = v30 - a3;
      if ( v30 == a3 )
        goto LABEL_27;
      v32 = (const void *)(v31 + a3);
LABEL_38:
      v33 = a4 + 1;
      if ( a4 == -1 )
      {
        v34 = nullptr;
        a4 = -1;
LABEL_40:
        v48.m128i_i64[0] = v33;
        memmove(v34, v32, a4);
        *((_BYTE *)ptr + a4) = 0;
        goto LABEL_27;
      }
LABEL_73:
      ptr = (void *)sub_1987B0(&ptr, 0, v33, 1);
      v34 = ptr;
      goto LABEL_40;
    }
    if ( v11 != 10 )
      break;
    v26 = v7;
    v7 = sub_176840(v7, 0);
    if ( !v7 )
      return sub_18FA20(v26, 0);
  }
  if ( v11 != 5 )
    return sub_18FA40(1568);
  if ( (a5 & 1) != 0 )
  {
    sub_19D9D0((unsigned int)v52, 32, (unsigned int)"%llu", a3, a5, a6);
    return sub_179860((unsigned __int8 *)a1, (__int64)v7, v52, 0);
  }
  v49 = 2;
  v51 = 0;
  v50 = 0;
  v12 = sub_177890((__int64)&v49, 0);
  if ( v12 )
  {
LABEL_42:
    v43 = v12;
    sub_176520((__int64)&v49);
    return v43;
  }
  v13 = *((_QWORD *)v7 + 1);
  ptr = nullptr;
  v48 = 0;
  ptr = (void *)sub_1987B0(&ptr, 0, 3, 1);
  v16 = v13 + 8;
  v48.m128i_i64[0] = 3;
  *(_WORD *)ptr = -209;
  *((_BYTE *)ptr + 2) = 0;
  v17 = *(_QWORD **)(v13 + 16);
  s2 = (char *)ptr;
  if ( !v17 )
  {
    if ( ptr )
    {
      v48.m128i_i64[0] = 0;
      j__free(ptr);
    }
    goto LABEL_48;
  }
  v18 = v16;
  v44 = v48.m128i_i64[0];
  v19 = s1;
  if ( v48.m128i_i64[0] )
    v19 = (const char *)ptr;
  v45 = v19;
  while ( 2 )
  {
    v24 = v17[5];
    if ( v44 )
    {
      if ( !v24 )
      {
        v42 = v17;
        v20 = s2;
        v21 = s1;
        goto LABEL_14;
      }
LABEL_21:
      v21 = (const char *)v17[4];
      v20 = v45;
      v42 = v17;
LABEL_14:
      v22 = strcmp(v21, v20);
      v23 = (_QWORD *)v17[2];
      v17 = (_QWORD *)v17[3];
      if ( v22 >= 0 )
      {
        v18 = (__int64)v42;
        v17 = v23;
      }
      if ( !v17 )
        goto LABEL_50;
      continue;
    }
    break;
  }
  if ( v24 )
    goto LABEL_21;
  while ( 1 )
  {
    v23 = (_QWORD *)v17[2];
    if ( !v23 )
      break;
    v18 = (__int64)v17;
    v17 = (_QWORD *)v17[2];
    if ( v23[5] )
      goto LABEL_21;
  }
  v18 = (__int64)v17;
LABEL_50:
  if ( s2 )
  {
    v48.m128i_i64[0] = 0;
    j__free(s2);
  }
  for ( ; v18 != v16; v18 = std::_Rb_tree_increment(v18) )
  {
    if ( *(_QWORD *)(v18 + 40) )
    {
      v35 = *(char **)(v18 + 32);
      v36 = (unsigned __int8)*v35 - 58;
      if ( *v35 == 58 )
        v36 = (unsigned __int8)v35[1];
      if ( v36 >= 0 )
        break;
      v37 = *v35;
      if ( *v35 )
      {
        v38 = *(_QWORD *)(v18 + 32);
        if ( v37 == 48 )
        {
          if ( !v35[1] )
          {
LABEL_61:
            sub_19DA80((_DWORD)v35, (unsigned int)"%llu", (unsigned int)&ptr, (_DWORD)v23, v14, v15);
            if ( (unsigned __int64)ptr >= a3 && ((unsigned __int64)ptr < a4 || a4 == 0x7FFFFFFF) )
            {
              sub_19D9D0((unsigned int)v52, 32, (unsigned int)"%llu", (_DWORD)ptr - a3, v39, v40);
              v12 = sub_178DB0((__int64)&v49, v52, (unsigned __int8 *)(v18 + 56), 0);
              if ( v12 )
                goto LABEL_42;
            }
          }
        }
        else
        {
          while ( (unsigned __int8)(v37 - 48) <= 9u )
          {
            v37 = *(_BYTE *)++v38;
            if ( !v37 )
              goto LABEL_61;
          }
        }
      }
    }
  }
LABEL_48:
  sub_1723F0((__m128i *)a1, (__m128i *)&v49);
  sub_176520((__int64)&v49);
  return 0;
}
