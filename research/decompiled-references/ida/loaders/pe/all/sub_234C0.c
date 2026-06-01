__int64 __fastcall sub_234C0(__int64 a1, int a2, __int64 *a3, _DWORD *a4)
{
  __int64 v7; // rdi
  __int64 result; // rax
  unsigned int v9; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  v7 = *(_QWORD *)(a1 + 8);
  result = 1;
  if ( *(_BYTE *)(v7 + 752) )
  {
    if ( (unsigned __int8)sub_22900(v7, &v9, v7 + 752, (a2 & 0xFFFFFFu) - 1, 0) )
    {
      if ( (unsigned __int8)sub_232E0(*(_QWORD *)(a1 + 8), v9, a3, a4, 0) )
        return 0;
      else
        return 2147500037LL;
    }
    else
    {
      return 2147942413LL;
    }
  }
  return result;
}
