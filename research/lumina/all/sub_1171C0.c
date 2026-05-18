__int64 __fastcall sub_1171C0(__int64 a1)
{
  bool v1; // zf
  unsigned int v2; // ebp
  char *v3; // rsi
  int v5; // eax
  int v6; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v1 = *(_BYTE *)a1 == 4;
  v6 = 0;
  if ( v1 )
  {
    return *(unsigned int *)(a1 + 4);
  }
  else
  {
    *(_BYTE *)a1 = 1;
    if ( !qword_241610 || (v2 = 10, !(unsigned int)qword_241610(410)) )
    {
      v3 = *(char **)(a1 + 24);
      v2 = sub_1170D0(a1, v3, *(_QWORD *)(a1 + 72), 0, &v6);
      if ( !v2 )
      {
        sub_C91C0(*(_QWORD *)(a1 + 24), (__int64)v3);
        v5 = v6;
        *(_QWORD *)(a1 + 24) = 0;
        if ( v5 )
        {
          *(_DWORD *)(a1 + 4) = v5;
        }
        else if ( !*(_DWORD *)(a1 + 4) )
        {
          return v2;
        }
        if ( !*(_BYTE *)a1 )
          *(_BYTE *)a1 = 2;
      }
    }
  }
  return v2;
}
