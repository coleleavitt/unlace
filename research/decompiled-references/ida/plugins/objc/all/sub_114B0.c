__int64 __fastcall sub_114B0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  char v3; // al
  __int64 result; // rax
  int _32bit; // eax
  __int64 ea_name; // rdx
  char *v7; // rax
  signed __int64 v8; // rdx
  char *v9; // rax
  char *haystack; // [rsp+10h] [rbp-38h] BYREF
  __int128 v11; // [rsp+18h] [rbp-30h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v2 = *a1;
  v12 = __readfsqword(0x28u);
  v3 = (*(__int64 (__fastcall **)(__int64 *))(v2 + 424))(a1);
  haystack = 0;
  if ( v3 )
  {
    v11 = 0;
    ea_name = get_ea_name();
    result = 0;
    if ( ea_name )
    {
      if ( (_QWORD)v11 )
      {
        v7 = strstr(haystack, "_OBJC_METACLASS_$_");
        if ( !v7 || (v8 = v7 - haystack, result = 2, v8 == -1) )
        {
          v9 = strstr(haystack, "_OBJC_CLASS_$_");
          return v9 && v9 - haystack != -1;
        }
      }
    }
  }
  else
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, char **, __int64))(*a1 + 464))(a1, &haystack, a2) )
      return 0;
    _32bit = get_32bit();
    if ( _32bit == -1 )
      return 0;
    else
      return (_32bit & 1u) + 1;
  }
  return result;
}
