unsigned __int64 __fastcall sub_9DE0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r14d
  const char *v4; // r15
  int v5; // ebx
  size_t v6; // rax
  __int64 v8; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 v9; // [rsp+88h] [rbp-40h]

  v3 = 43;
  v9 = __readfsqword(0x28u);
  if ( a3 < 0 )
    v3 = 45;
  btoa64();
  v4 = s;
  v5 = (unsigned __int8)getinf() - 1;
  if ( *(_QWORD *)(a2 + 24) )
    v4 = *(const char **)(a2 + 16);
  (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v4, 25);
  if ( v5 != -1 )
  {
    if ( v4 )
    {
      v6 = strlen(v4);
      if ( v6 < v5 )
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, 32, (unsigned int)(v5 - v6));
    }
  }
  sub_7550(a1, (__int64)&word_D21E, v3, &v8);
  return v9 - __readfsqword(0x28u);
}

