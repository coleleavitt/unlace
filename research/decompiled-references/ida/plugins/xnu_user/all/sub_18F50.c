unsigned __int64 __fastcall sub_18F50(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  _BOOL4 v4; // ebp
  char *v5; // r12
  char *v6; // rax
  unsigned int v7; // [rsp+Ch] [rbp-3Ch] BYREF
  char *haystack; // [rsp+10h] [rbp-38h] BYREF
  __int64 v9; // [rsp+18h] [rbp-30h]
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v7 = -1;
  v1 = sub_15850();
  if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, unsigned int *))a1)(a1, 9, &v7) )
  {
    v3 = v1;
    v4 = 0;
    sub_544B0(&haystack, v3, v7);
    if ( v9 )
    {
      v5 = haystack;
      v6 = strstr(haystack, "VMWare");
      if ( v6 )
        v4 = v6 - v5 != -1;
    }
    (*(void (__fastcall **)(__int64, __int64, _BOOL4))(*(_QWORD *)a1 + 16LL))(a1, 7, v4);
    (*(void (__fastcall **)(__int64, __int64, _BOOL4))(*(_QWORD *)a1 + 16LL))(a1, 6, v4);
    if ( haystack )
    {
      v9 = 0;
      qfree();
    }
  }
  return v10 - __readfsqword(0x28u);
}

