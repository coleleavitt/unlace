unsigned __int64 __fastcall sub_6410(__int64 a1, __int64 a2)
{
  const char *v2; // r12
  bool v3; // zf
  __int64 *v5; // rbx
  __int64 i; // rsi
  size_t v8; // rax
  size_t v9; // r15
  size_t v10; // r13
  void *v11; // [rsp+0h] [rbp-78h]
  char s[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-40h]

  v2 = (const char *)&dword_99AC;
  v3 = *(_QWORD *)(a1 + 192) == 0;
  v13 = __readfsqword(0x28u);
  if ( !v3 )
    v2 = *(const char **)(a1 + 184);
  if ( *(_QWORD *)(a1 + 144) <= 1u )
  {
    if ( !getinf_buf() )
      s[0] = 0;
    v8 = strlen(s);
    v9 = v8 + 1;
    v10 = v8;
    v11 = (void *)qvector_reserve();
    memmove(v11, s, v10);
    *((_BYTE *)v11 + v10) = 0;
    if ( v9 )
      sub_5D20(a2, (__int64)"Processor:       %s [%s]", (const char *)v11, v2);
    else
      sub_5D20(a2, (__int64)"Processor:       %s [%s]", (const char *)&dword_99AC, v2);
    if ( v11 )
      qfree();
  }
  else
  {
    sub_5D20(a2, (__int64)"Processor:       %s [%s]", *(const char **)(a1 + 136), v2);
  }
  sub_5D20(a2, (__int64)"Target assebler: %s", *(const char **)(*(_QWORD *)(a1 + 24) + 8LL));
  v5 = *(__int64 **)(*(_QWORD *)(a1 + 24) + 24LL);
  if ( v5 )
  {
    for ( i = *v5; *v5; i = *v5 )
    {
      ++v5;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 136LL))(a2, i, 0);
    }
  }
  return v13 - __readfsqword(0x28u);
}

