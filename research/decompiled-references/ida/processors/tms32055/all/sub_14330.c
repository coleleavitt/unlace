unsigned __int64 __fastcall sub_14330(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rbx
  const char *v6; // rcx
  const char *v8; // rcx
  char v9[136]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 v10; // [rsp+88h] [rbp-30h]

  v4 = a3;
  v10 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 84LL) == a3 )
    return v10 - __readfsqword(0x28u);
  btoa64();
  if ( (_DWORD)v4 != 135 )
  {
    if ( (_DWORD)v4 == 136 )
    {
      if ( a4 != -1 )
      {
        sub_12E30(a2, 0xFFFF, (__int64)byte_1870D, v9);
        return v10 - __readfsqword(0x28u);
      }
    }
    else if ( (_DWORD)v4 == 134 && a4 != -1 )
    {
      v6 = "off";
      if ( a4 )
        v6 = "on";
      sub_12E30(a2, 0xFFFF, (__int64)&dword_186F4, v6);
      return v10 - __readfsqword(0x28u);
    }
LABEL_10:
    sub_12EE0(a2, (__int64)"assume %s = %s", *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8 * v4), v9);
    return v10 - __readfsqword(0x28u);
  }
  if ( a4 == -1 )
    goto LABEL_10;
  v8 = "off";
  if ( a4 )
    v8 = "on";
  sub_12E30(a2, 0xFFFF, (__int64)byte_18701, v8);
  return v10 - __readfsqword(0x28u);
}

