__int64 __fastcall sub_26D50(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 result; // rax
  __int64 v8; // rbx
  char v9; // [rsp+8h] [rbp-150h]
  _BYTE v10[264]; // [rsp+10h] [rbp-148h] BYREF
  unsigned __int64 v11; // [rsp+118h] [rbp-40h]

  v5 = a2;
  v9 = a4;
  v11 = __readfsqword(0x28u);
  if ( a4 >> 2 )
  {
    v6 = a2 + 4 * (a4 >> 2);
    while ( 1 )
    {
      qsnprintf();
      result = sub_266F0(a1, (__int64)v10, 12);
      if ( (_DWORD)result )
        break;
      result = sub_2B430(a1 + 16, *(_QWORD *)(a1 + 72));
      if ( (_DWORD)result )
        break;
      v5 += 4;
      a3 += 4;
      if ( v5 == v6 )
        goto LABEL_8;
    }
  }
  else
  {
    v6 = a2;
LABEL_8:
    v8 = (v9 & 3) + v6;
    if ( (v9 & 3) != 0 )
    {
      while ( 1 )
      {
        qsnprintf();
        result = sub_266F0(a1, (__int64)v10, 12);
        if ( (_DWORD)result )
          break;
        result = sub_2B430(a1 + 16, *(_QWORD *)(a1 + 72));
        if ( (_DWORD)result )
          break;
        if ( ++v6 == v8 )
          return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}

