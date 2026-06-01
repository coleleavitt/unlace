__int64 __fastcall sub_4E860(__int64 a1, __int64 a2, __int64 *a3)
{
  size_t v5; // rax
  size_t v6; // r14
  size_t v7; // r13
  _QWORD *v8; // r15
  _QWORD *v9; // r12
  const char *v10; // rax
  const char *v11; // r14
  const char *v12; // rdi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rsi
  const char *v16; // rsi
  const char *v17; // rdi
  void *v18; // rbx
  unsigned int v20; // [rsp+4h] [rbp-4A4h]
  char *s1; // [rsp+8h] [rbp-4A0h]
  __int64 v22; // [rsp+10h] [rbp-498h]
  _QWORD *v23; // [rsp+18h] [rbp-490h]
  __int64 v24; // [rsp+20h] [rbp-488h]
  __int64 v25; // [rsp+30h] [rbp-478h] BYREF
  void **v26; // [rsp+38h] [rbp-470h] BYREF
  void *v27; // [rsp+40h] [rbp-468h] BYREF
  __int128 v28; // [rsp+48h] [rbp-460h]
  char s[1032]; // [rsp+60h] [rbp-448h] BYREF
  unsigned __int64 v30; // [rsp+468h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  if ( (unsigned int)sub_4C8B0(a1, a2, (__int64)s, 1024, nullptr, nullptr, a3) )
  {
    sub_4D220(a1);
    return 1;
  }
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
    sub_E960((__int64)"imitating: %s\n", s);
  v20 = sub_4C990(a1, *a3, &v25);
  if ( v20 )
  {
    sub_4D220(a1);
    return 1;
  }
  v27 = nullptr;
  v28 = 0;
  v22 = v25;
  v5 = strlen(s);
  v6 = v5 + 1;
  v7 = v5;
  v27 = (void *)qvector_reserve();
  *(_QWORD *)&v28 = v6;
  memmove(v27, s, v7);
  *((_BYTE *)v27 + v7) = 0;
  v8 = *(_QWORD **)(a1 + 104);
  v23 = (_QWORD *)(a1 + 96);
  v9 = (_QWORD *)(a1 + 96);
  if ( !v8 )
    goto LABEL_20;
  v10 = (const char *)v27;
  v9 = (_QWORD *)(a1 + 96);
  s1 = (char *)v27;
  if ( !(_QWORD)v28 )
    v10 = ::s1;
  v24 = v28;
  v11 = v10;
  do
  {
    while ( 1 )
    {
      v12 = ::s1;
      if ( v8[5] )
        v12 = (const char *)v8[4];
      v13 = strcasecmp(v12, v11);
      v14 = v8[2];
      v15 = v8[3];
      if ( v13 >= 0 )
        break;
      v8 = (_QWORD *)v8[3];
      if ( !v15 )
        goto LABEL_14;
    }
    v9 = v8;
    v8 = (_QWORD *)v8[2];
  }
  while ( v14 );
LABEL_14:
  if ( v9 == v23 )
    goto LABEL_20;
  v16 = ::s1;
  if ( v9[5] )
    v16 = (const char *)v9[4];
  v17 = ::s1;
  if ( v24 )
    v17 = s1;
  if ( strcasecmp(v17, v16) < 0 )
  {
LABEL_20:
    v26 = &v27;
    v9 = (_QWORD *)sub_4E740((_QWORD *)(a1 + 88), v9, (__int64 **)&v26);
    s1 = (char *)v27;
  }
  v9[7] = v22;
  if ( s1 )
  {
    *(_QWORD *)&v28 = 0;
    qfree();
  }
  v18 = (void *)*a3;
  if ( *a3 )
  {
    sub_37960(*a3);
    operator delete(v18, 0x39Cu);
  }
  *a3 = v22;
  return v20;
}

