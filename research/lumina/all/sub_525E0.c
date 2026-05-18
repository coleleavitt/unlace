__int64 __fastcall sub_525E0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  char *v5; // r14
  size_t v6; // rax
  size_t v7; // r15
  size_t v8; // r13
  char *v9; // r14
  const char *v10; // r13
  const char *v11; // rsi
  unsigned int v12; // ebx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  char *v17; // rsi
  char *s2; // [rsp+10h] [rbp-70h] BYREF
  __int128 v19; // [rsp+18h] [rbp-68h]
  void *ptr; // [rsp+30h] [rbp-50h] BYREF
  __int128 v21; // [rsp+38h] [rbp-48h]
  unsigned __int64 v22; // [rsp+48h] [rbp-38h]

  v2 = a1[1];
  v22 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_4F890(a2, "machine id", a2 + 32, v2 + 512) )
    return 0;
  v3 = a1[2];
  s2 = nullptr;
  v4 = *(int *)(v3 + 8);
  v19 = 0;
  if ( (int)v4 >= 7 )
    v4 = 0;
  v5 = off_23E8C0[v4];
  if ( v5
    && (v6 = strlen(off_23E8C0[v4]),
        v7 = v6 + 1,
        v8 = v6,
        s2 = (char *)sub_1987B0(&s2, 0, v6 + 1, 1),
        *(_QWORD *)&v19 = v7,
        memmove(s2, v5, v8),
        s2[v8] = 0,
        (_QWORD)v19) )
  {
    v9 = s2;
    v10 = s1;
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_7;
  }
  else
  {
    v9 = (char *)s1;
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_18;
  }
  v10 = *(const char **)(a2 + 8);
LABEL_7:
  if ( !strcmp(v10, v9) )
  {
LABEL_18:
    sub_4DC10(a1[1], a2);
    v14 = a1[2];
    *(_DWORD *)v14 = *(_DWORD *)(a2 + 2);
    *(_WORD *)(v14 + 4) = *(_WORD *)(a2 + 6);
    v15 = *(_QWORD *)(a2 + 80);
    if ( v15
      && (v16 = a1[3], v16 >= v15 - 2592000)
      && v16 >= v15 - 1296000
      && v16 >= v15
      && v16 >= v15 + 1296000
      && v16 >= v15 + 2592000 )
    {
      if ( (word_2439A4 & 0x200) != 0 )
      {
        v17 = (char *)s1;
        if ( (_QWORD)v19 )
          v17 = s2;
        sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"Borrowed license %s is beyond grace\n", v17);
      }
      v12 = 2;
    }
    else
    {
      v12 = 1;
    }
    goto LABEL_14;
  }
  if ( (word_2439A4 & 0x200) != 0 )
  {
    ptr = nullptr;
    v21 = 0;
    sub_299F0((char **)&ptr);
    v11 = s1;
    if ( (_QWORD)v21 )
      v11 = (const char *)ptr;
    sub_4BAA0(
      (__int64 (__fastcall ***)(_QWORD))"Skip borrowed license %s: product %s does not match '%s')\n",
      v11,
      v10,
      v9);
    if ( ptr )
    {
      *(_QWORD *)&v21 = 0;
      j__free(ptr);
    }
  }
  v12 = 0;
LABEL_14:
  if ( s2 )
  {
    *(_QWORD *)&v19 = 0;
    j__free(s2);
  }
  return v12;
}
