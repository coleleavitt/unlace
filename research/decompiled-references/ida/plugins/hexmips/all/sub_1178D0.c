char __fastcall sub_1178D0(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char result; // al
  unsigned __int8 v6; // dl
  __int64 v7; // rsi
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  __int64 v9; // [rsp+8h] [rbp-20h]
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  result = 0;
  if ( *(_DWORD *)(a3 + 4) == a1 || (a4 &= 1u, (_DWORD)a4) )
  {
    v8 = -1;
    v9 = 0;
    result = sub_1BED50(a2, &v8, a1, a4, a1);
    if ( result )
    {
      v6 = *(_BYTE *)a3;
      if ( *(_BYTE *)a3 == 1 )
      {
        v7 = *(int *)(a3 + 8);
      }
      else
      {
        if ( v6 != 5 )
        {
          result = 0;
          v7 = -1;
          if ( (_BYTE)v9 )
            return result;
          return v8 == v7;
        }
        v7 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
      }
      result = 0;
      if ( v6 < (unsigned __int8)v9 || (unsigned __int8)v9 < v6 )
        return result;
      return v8 == v7;
    }
  }
  return result;
}

