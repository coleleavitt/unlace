__int64 __fastcall sub_22860(__int64 a1, int a2, int a3, _DWORD *a4)
{
  __int64 v6; // rdi
  __int64 result; // rax
  char v8; // dl
  _DWORD v9[10]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( !a4 )
    return 0;
  *a4 = 0;
  if ( !a3 )
    return 0;
  v6 = *(_QWORD *)(a1 + 8);
  result = 1;
  if ( *(_BYTE *)(v6 + 312) )
  {
    v8 = sub_227B0(v6, v6 + 312, (a2 & 0xFFFFFFu) - 1, (__int64)v9);
    result = 2147942413LL;
    if ( v8 )
    {
      *a4 = a3 + v9[5] - 1;
      return 0;
    }
  }
  return result;
}
