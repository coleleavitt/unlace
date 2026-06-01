__int64 __fastcall sub_23D90(__int64 a1, int a2, int *a3, _DWORD *a4)
{
  __int64 v7; // rdi
  __int64 result; // rax
  _DWORD v9[10]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  v7 = *(_QWORD *)(a1 + 8);
  result = 1;
  if ( *(_BYTE *)(v7 + 432) )
  {
    if ( (unsigned __int8)sub_23850(v7, v7 + 432, (a2 & 0xFFFFFFu) - 1, (__int64)v9) )
    {
      if ( a3 )
        *a3 = v9[0] | 0x2000000;
      if ( a4 )
        *a4 = sub_23D20(*(_QWORD *)(a1 + 8), 0x6Bu, v9[1]);
      return 0;
    }
    else
    {
      return 2147942413LL;
    }
  }
  return result;
}

