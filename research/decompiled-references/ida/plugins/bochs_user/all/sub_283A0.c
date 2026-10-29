__int64 __fastcall sub_283A0(__int64 a1)
{
  _QWORD *v1; // r14
  size_t v2; // rax
  size_t v3; // rbp
  size_t v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // r14
  _QWORD *v7; // rbx
  char *v8; // r13
  char *v9; // r15
  _QWORD *v10; // r12
  char *v11; // rsi
  const char *v12; // rdi
  int v13; // eax
  _QWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  const char *v17; // rsi
  char *v18; // rdi
  __int64 v19; // rax
  __int64 result; // rax
  _QWORD *v21; // [rsp+0h] [rbp-2A8h]
  _QWORD *v23; // [rsp+18h] [rbp-290h]
  char **p_s2; // [rsp+38h] [rbp-270h] BYREF
  char *s2; // [rsp+40h] [rbp-268h] BYREF
  __int128 v26; // [rsp+48h] [rbp-260h]
  char s[256]; // [rsp+60h] [rbp-248h] BYREF
  _BYTE v28[264]; // [rsp+160h] [rbp-148h] BYREF
  unsigned __int64 v29; // [rsp+268h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  qstrncpy();
  qstrlwr();
  v1 = qword_753E8;
  v23 = qword_753E8;
  v26 = 0;
  v2 = strlen(s);
  v3 = v2 + 1;
  v4 = v2;
  s2 = (char *)qvector_reserve();
  *(_QWORD *)&v26 = v3;
  memmove(s2, s, v4);
  s2[v4] = 0;
  v5 = v1 + 1;
  v6 = (_QWORD *)v1[2];
  v21 = v5;
  v7 = v5;
  if ( !v6 )
    goto LABEL_21;
  v8 = s2;
  v9 = (char *)s1;
  v7 = v5;
  if ( (_QWORD)v26 )
    v9 = s2;
  while ( 1 )
  {
    v15 = v6[5];
    if ( !(_QWORD)v26 )
      break;
    v10 = v6;
    v11 = s2;
    v12 = s1;
    if ( v15 )
      goto LABEL_6;
LABEL_7:
    v13 = strcmp(v12, v11);
    v14 = (_QWORD *)v6[2];
    v6 = (_QWORD *)v6[3];
    if ( v13 >= 0 )
    {
      v7 = v10;
      v6 = v14;
    }
    if ( !v6 )
      goto LABEL_16;
  }
  if ( v15 )
  {
LABEL_14:
    v10 = v6;
LABEL_6:
    v12 = (const char *)v6[4];
    v11 = v9;
    goto LABEL_7;
  }
  while ( 1 )
  {
    v16 = v6[2];
    if ( !v16 )
      break;
    v7 = v6;
    v6 = (_QWORD *)v6[2];
    if ( *(_QWORD *)(v16 + 40) )
      goto LABEL_14;
  }
  v7 = v6;
LABEL_16:
  if ( v21 == v7 )
    goto LABEL_21;
  if ( v7[5] )
  {
    v17 = (const char *)v7[4];
    v18 = (char *)s1;
    if ( (_QWORD)v26 )
      goto LABEL_19;
LABEL_20:
    if ( strcmp(v18, v17) < 0 )
    {
LABEL_21:
      p_s2 = &s2;
      v19 = sub_28280(v23, v7, (__int64 **)&p_s2);
      v8 = s2;
      v7 = (_QWORD *)v19;
    }
  }
  else
  {
    v17 = s1;
    if ( (_QWORD)v26 )
    {
LABEL_19:
      v18 = s2;
      goto LABEL_20;
    }
  }
  if ( v7[8] )
  {
    if ( v8 )
      goto LABEL_24;
  }
  else if ( v8 )
  {
LABEL_24:
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  qsnprintf();
  result = sub_266F0(a1, (__int64)v28, 16);
  if ( !(_DWORD)result )
    return sub_2B450(a1 + 16, *(_QWORD *)(a1 + 72));
  return result;
}

