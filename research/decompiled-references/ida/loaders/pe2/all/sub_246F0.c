__int64 __fastcall sub_246F0(__int64 a1, int a2, _DWORD *a3, __int64 *a4, _DWORD *a5)
{
  __int64 v9; // rdi
  __int64 result; // rax
  unsigned int v11[10]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  v9 = *(_QWORD *)(a1 + 8);
  result = 1;
  if ( *(_BYTE *)(v9 + 1792) )
  {
    if ( (unsigned __int8)sub_23850(v9, v9 + 1792, (a2 & 0xFFFFFFu) - 1, (__int64)v11) )
    {
      if ( a3 )
        *a3 = sub_23D20(*(_QWORD *)(a1 + 8), 0x69u, v11[0]);
      if ( (unsigned __int8)sub_24380(*(_QWORD *)(a1 + 8), v11[1], a4, a5, nullptr) )
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

