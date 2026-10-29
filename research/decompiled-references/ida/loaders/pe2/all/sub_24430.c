__int64 __fastcall sub_24430(__int64 a1, int a2, _DWORD *a3, _DWORD *a4, __int64 *a5, unsigned __int64 a6)
{
  __int64 v11; // rdi
  unsigned int v12; // edx
  unsigned int v14[10]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *(_DWORD *)a6 = 0;
  v11 = *(_QWORD *)(a1 + 8);
  v12 = 1;
  if ( *(_BYTE *)(v11 + 552) )
  {
    if ( (unsigned __int8)sub_23850(v11, v11 + 552, (a2 & 0xFFFFFFu) - 1, (__int64)v14) )
    {
      if ( a3 )
        *a3 = sub_23D20(*(_QWORD *)(a1 + 8), 0x62u, v14[0]);
      if ( a4 )
        *a4 = sub_23D20(*(_QWORD *)(a1 + 8), 0x60u, v14[1]);
      if ( !((unsigned __int64)a5 | a6)
        || (unsigned __int8)sub_24380(*(_QWORD *)(a1 + 8), v14[2], a5, (_DWORD *)a6, nullptr) )
      {
        return 0;
      }
      else
      {
        return (unsigned int)-2147467259;
      }
    }
    else
    {
      return (unsigned int)-2147024883;
    }
  }
  return v12;
}

