__int64 __fastcall sub_4FEA0(__int64 a1, const char *a2, __int64 *a3, _DWORD *a4, double a5, double a6)
{
  char *v8; // rax
  char *v9; // rbx
  __int64 result; // rax
  char v11[1032]; // [rsp+0h] [rbp-448h] BYREF
  unsigned __int64 v12; // [rsp+408h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  *a4 = 0;
  v8 = strchr(a2, 46);
  if ( !v8 )
    return 28;
  v9 = v8;
  qstrncpy();
  result = sub_4F2D0(a1, v11, a3, 0, nullptr, 0, a5, a6);
  if ( !(_DWORD)result )
    return sub_4F840(a1, *a3, v9 + 1, a4, a3, 0, a5, a6);
  return result;
}

