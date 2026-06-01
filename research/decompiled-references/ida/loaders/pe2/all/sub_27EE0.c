__int64 __fastcall sub_27EE0(__int64 a1, int a2, char *a3, int a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  __int64 v12; // rdi
  unsigned int v13; // edx
  _DWORD v15[10]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  if ( a3 )
    *(_WORD *)a3 = 0;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0;
  if ( a7 )
    *a7 = 0;
  v12 = *(_QWORD *)(a1 + 8);
  v13 = 1;
  if ( *(_BYTE *)(v12 + 152) )
  {
    if ( (unsigned __int8)sub_23850(v12, v12 + 152, (a2 & 0xFFFFFFu) - 1, (__int64)v15) )
    {
      sub_27DA0(a1, a3, a4, a5, v15[1], v15[2]);
      if ( a6 )
        *a6 = v15[0];
      if ( a7 )
        *a7 = sub_23D20(*(_QWORD *)(a1 + 8), 0x6Bu, v15[3]);
      return 0;
    }
    else
    {
      return (unsigned int)-2147024883;
    }
  }
  return v13;
}

