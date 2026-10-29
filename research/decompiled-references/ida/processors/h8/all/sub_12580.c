unsigned __int64 __fastcall sub_12580(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  const char *v6; // rdx
  const char *v8; // r15
  unsigned __int8 v9; // r12
  size_t v10; // rax
  _BYTE v11[136]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 v12; // [rsp+88h] [rbp-40h]

  v4 = 32;
  v12 = __readfsqword(0x28u);
  if ( a4 < 0 )
    v4 = 45;
  btoa64();
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) != 0 )
  {
    v6 = s;
    if ( *(_QWORD *)(a3 + 24) )
      v6 = *(const char **)(a3 + 16);
    sub_11570(a2, (__int64)qword_18940, v6, v4, v11);
  }
  else
  {
    v8 = s;
    v9 = getinf();
    if ( *(_QWORD *)(a3 + 24) )
      v8 = *(const char **)(a3 + 16);
    (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a2 + 56LL))(a2, v8, 25);
    if ( v8 )
    {
      v10 = strlen(v8);
      if ( v10 < v9 )
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, 32, v9 - (unsigned int)v10);
    }
    sub_11570(a2, (__int64)&qword_185B8, v4, v11);
  }
  return v12 - __readfsqword(0x28u);
}

