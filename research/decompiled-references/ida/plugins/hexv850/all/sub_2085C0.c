__int64 __fastcall sub_2085C0(_DWORD *a1, __int64 a2, int a3)
{
  const char *v3; // rbp
  char v4; // al
  _BYTE *v5; // rdx
  __int64 result; // rax
  size_t v7; // r13
  const char *v8; // rsi
  unsigned int v9; // edi
  _BYTE *v10; // rbx
  size_t v11; // r14
  char *v12; // rax
  const char *v13; // rsi
  unsigned int v14; // eax
  size_t v15; // r15
  int v16; // r14d
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  unsigned __int8 src; // [rsp+0h] [rbp-68h]
  __int64 v21; // [rsp+8h] [rbp-60h] BYREF
  char *v22; // [rsp+10h] [rbp-58h] BYREF
  __int128 v23; // [rsp+18h] [rbp-50h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  HIDWORD(v21) = a3;
  v24 = __readfsqword(0x28u);
  v3 = *(const char **)a2;
  if ( **(_BYTE **)a2 == 97 )
  {
    v4 = v3[1];
    if ( v4 )
    {
      v5 = v3 + 1;
      while ( (unsigned __int8)(v4 - 48) <= 9u )
      {
        v4 = *++v5;
        if ( !v4 )
          return 1;
      }
    }
  }
  if ( !strncmp(v3, "varg_", 5u) )
    return 1;
  v7 = *(_QWORD *)(a2 + 8);
  if ( !v7 )
  {
    if ( !HIDWORD(v21) )
      return 0;
    v22 = nullptr;
    v23 = 0;
    goto LABEL_12;
  }
  if ( !strcmp(v3, "this") )
    return 1;
  v11 = v7 - 1;
  if ( (int)v7 - 1 <= 2 )
  {
    if ( !HIDWORD(v21) )
      return 0;
    if ( v7 == 1 )
      goto LABEL_30;
LABEL_34:
    v14 = v3[v7 - 2];
    if ( v14 > 0x7F || v14 - 48 > 9 )
    {
LABEL_30:
      v22 = nullptr;
      v23 = 0;
      v12 = (char *)qalloc_or_throw();
      v13 = *(const char **)a2;
      *((_QWORD *)&v23 + 1) = v7;
      v22 = v12;
      memcpy(v12, v13, v7);
      *(_QWORD *)&v23 = v7;
LABEL_39:
      v8 = v22;
      goto LABEL_13;
    }
    v15 = (int)v7 - 2;
    if ( v11 >= v15 )
    {
      v22 = nullptr;
      v23 = 0;
      if ( (_DWORD)v7 == 2 )
        goto LABEL_12;
      v7 = v15 + 1;
      v11 = v15;
    }
    else
    {
      v22 = nullptr;
      v23 = 0;
    }
    v22 = (char *)qvector_reserve();
    *(_QWORD *)&v23 = v7;
    memmove(v22, v3, v11);
    v22[v11] = 0;
    if ( (_QWORD)v23 )
      goto LABEL_39;
LABEL_12:
    v8 = s1;
LABEL_13:
    if ( (unsigned int)sub_11DEA0(a1, (__int64)v8, (_DWORD *)&v21 + 1) != -1 )
    {
      if ( v22 )
      {
        *(_QWORD *)&v23 = 0;
        qfree();
      }
      return 1;
    }
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree();
      return 0;
    }
    return 0;
  }
  if ( *v3 != 112 || v3[1] != 95 )
  {
    if ( (_DWORD)v7 == 4 || *v3 != 97 || v3[1] != 114 || v3[2] != 103 || !strncmp(v3, "argc", 4u) )
    {
      if ( !HIDWORD(v21) )
        return 0;
      goto LABEL_34;
    }
    v9 = v3[3];
    v10 = v3 + 3;
    if ( v3[3] )
    {
      while ( v9 <= 0x7F && isxdigit(v9) )
      {
        v9 = (char)*++v10;
        if ( !(_BYTE)v9 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  v16 = HIDWORD(v21);
  v23 = 0;
  v22 = (char *)qvector_reserve();
  LODWORD(v23) = v7 - 2;
  memmove(v22, v3 + 2, v7 - 3);
  v22[v7 - 3] = 0;
  result = sub_2085C0(
             (_DWORD)a1,
             (unsigned int)&v22,
             v16,
             v17,
             v18,
             v19,
             (int)v3 + 2,
             v21,
             (__int64)v22,
             v23,
             *((__int64 *)&v23 + 1));
  if ( v22 )
  {
    src = result;
    *(_QWORD *)&v23 = 0;
    qfree();
    return src;
  }
  return result;
}

