unsigned __int64 __fastcall sub_62F0(__int64 a1, __int64 a2, __int64 a3)
{
  char *v4; // rbp
  const char *v5; // rdi
  __int64 v6; // rbx
  size_t v7; // rax
  size_t v8; // r12
  size_t v9; // r13
  _BYTE *v10; // rsi
  __int16 *v11; // rsi
  const char *v12; // rax
  const char *v13; // r13
  size_t v14; // rax
  void *v15; // rdi
  size_t v16; // r14
  size_t v18; // rdx
  __int16 *v19; // rdi
  const char *v20; // rsi
  size_t v23; // [rsp+10h] [rbp-60h]
  void *dest; // [rsp+18h] [rbp-58h] BYREF
  __int128 v25; // [rsp+20h] [rbp-50h]
  unsigned __int64 v26; // [rsp+30h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v25 = 0;
  dest = nullptr;
  if ( get_ea_name() <= 0 )
    sub_60A0((__int64 *)&dest);
  v4 = off_A8E0[7 * a3 + 1];
  if ( v4 )
  {
    v5 = off_A8E0[7 * a3 + 1];
    v6 = v25;
    v7 = strlen(v5);
    v8 = v7;
    v9 = v7;
    if ( v6 )
    {
      --v6;
      v9 = v7 + v6;
    }
    v10 = dest;
    if ( *((_QWORD *)&v25 + 1) < v9 + 1 )
    {
      dest = (void *)qvector_reserve();
      v10 = dest;
    }
    *(_QWORD *)&v25 = v9 + 1;
    v10[v9] = 0;
    memmove((char *)dest + v6, v4, v8);
  }
  do
  {
    v11 = word_88EA;
    if ( (_QWORD)v25 )
      v11 = (__int16 *)dest;
    v12 = (const char *)sub_5010(1u, (__int64)v11, (__int64)"Save picture to file");
    v13 = v12;
    if ( !v12 )
      goto LABEL_24;
    v14 = strlen(v12);
    v15 = dest;
    v16 = v14;
    if ( v14 )
    {
      v18 = v14 + 1;
      if ( *((_QWORD *)&v25 + 1) < v14 + 1 )
      {
        v23 = v14 + 1;
        dest = (void *)qvector_reserve();
        v18 = v23;
        v15 = dest;
      }
      *(_QWORD *)&v25 = v18;
      memmove(v15, v13, v16);
      *((_BYTE *)dest + v16) = 0;
      v15 = dest;
      if ( (unsigned __int64)v25 > 1 )
        continue;
    }
    goto LABEL_13;
  }
  while ( (unsigned __int8)qfileexist() && (unsigned int)sub_4F30() != 1 );
  v19 = word_88EA;
  if ( (_QWORD)v25 )
    v19 = (__int16 *)dest;
  if ( !(unsigned __int8)sub_49D0(v19, a1, a2) )
  {
LABEL_24:
    v15 = dest;
LABEL_13:
    if ( !v15 )
      return v26 - __readfsqword(0x28u);
LABEL_14:
    *(_QWORD *)&v25 = 0;
    qfree();
    return v26 - __readfsqword(0x28u);
  }
  v20 = (const char *)word_88EA;
  if ( (_QWORD)v25 )
    v20 = (const char *)dest;
  sub_5470((__int64)"wrote picture to %s\n", v20);
  if ( dest )
    goto LABEL_14;
  return v26 - __readfsqword(0x28u);
}

