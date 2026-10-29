unsigned __int64 __fastcall sub_6F90(__int64 a1, __int64 a2)
{
  size_t v3; // rax
  size_t v4; // r14
  size_t v5; // r12
  const char *v6; // rcx
  __int64 *v7; // rbx
  __int64 i; // rsi
  void *v10; // [rsp+0h] [rbp-68h]
  char s[24]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( !getinf_buf() )
    s[0] = 0;
  v3 = strlen(s);
  v4 = v3 + 1;
  v5 = v3;
  v10 = (void *)qvector_reserve();
  memmove(v10, s, v5);
  v6 = (const char *)&dword_D9CC;
  *((_BYTE *)v10 + v5) = 0;
  if ( v4 )
    v6 = (const char *)v10;
  sub_5850(a2, (__int64)"%s Processor:        %s", *(const char **)(*(_QWORD *)(a1 + 24) + 48LL), v6);
  if ( v10 )
    qfree();
  sub_5850(
    a2,
    (__int64)"%s Target assembler: %s",
    *(const char **)(*(_QWORD *)(a1 + 24) + 48LL),
    *(const char **)(*(_QWORD *)(a1 + 24) + 8LL));
  v7 = *(__int64 **)(*(_QWORD *)(a1 + 24) + 24LL);
  if ( v7 )
  {
    for ( i = *v7; *v7; i = *v7 )
    {
      ++v7;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 136LL))(a2, i, 0);
    }
  }
  return v12 - __readfsqword(0x28u);
}

