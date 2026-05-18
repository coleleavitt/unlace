__int64 __fastcall sub_4F890(__int64 a1, const char *a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  __int64 v5; // rax
  const char *v7; // r13
  const char *v8; // r12
  const char *v9; // rsi
  void *ptr; // [rsp+0h] [rbp-40h] BYREF
  __int128 v12; // [rsp+8h] [rbp-38h]
  unsigned __int64 v13; // [rsp+18h] [rbp-28h]

  v4 = *(_QWORD *)(a4 + 8) == 0;
  v5 = *(_QWORD *)(a3 + 8);
  v13 = __readfsqword(0x28u);
  if ( v4 )
  {
    v7 = s1;
    if ( !v5 )
      return 1;
    goto LABEL_12;
  }
  v7 = *(const char **)a4;
  v8 = s1;
  if ( v5 )
  {
LABEL_12:
    v8 = *(const char **)a3;
    if ( strcmp(*(const char **)a3, v7) )
      goto LABEL_4;
    return 1;
  }
  if ( !strcmp(s1, *(const char **)a4) )
    return 1;
LABEL_4:
  if ( (word_2439A4 & 0x200) != 0 )
  {
    ptr = nullptr;
    v12 = 0;
    sub_299F0((char **)&ptr);
    v9 = s1;
    if ( (_QWORD)v12 )
      v9 = (const char *)ptr;
    sub_4BAA0(
      (__int64 (__fastcall ***)(_QWORD))"Ignored borrowed license %s: wrong %s name '%s' (expected '%s')\n",
      v9,
      a2,
      v8,
      v7);
    if ( ptr )
    {
      *(_QWORD *)&v12 = 0;
      j__free(ptr);
    }
  }
  return 0;
}
