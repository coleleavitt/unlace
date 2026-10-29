unsigned __int64 __fastcall sub_48400(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r13d
  const char *v4; // rdx
  _BYTE v6[136]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 v7; // [rsp+88h] [rbp-30h]

  v3 = 32;
  v7 = __readfsqword(0x28u);
  if ( a3 < 0 )
  {
    a3 = -a3;
    v3 = 45;
  }
  btoa64(v6, 136, a3, 0);
  v4 = s1;
  if ( *(_QWORD *)(a2 + 24) )
    v4 = *(const char **)(a2 + 16);
  sub_481D0(a1, (__int64)&unk_79070, v4, v3, v6);
  return v7 - __readfsqword(0x28u);
}

