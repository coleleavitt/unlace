__int64 __fastcall sub_121CD0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  unsigned int v4; // r13d
  int v7; // ecx
  int v8; // edx
  __int64 v9; // rsi
  __int64 v11; // rsi
  int v12; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]

  v4 = 0;
  v13 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_121BB0(a2, (char *)a3, &v12) )
  {
    v7 = *(_DWORD *)(a3 + 4);
    v8 = *(_DWORD *)(a2 + 4);
    if ( v12 )
    {
      if ( v7 + v12 == v8 )
      {
        v11 = *(_QWORD *)(a1 + 96);
        v4 = 3;
        if ( *(_BYTE *)(v11 + 145) )
          return 3 - (unsigned int)(unsigned __int8)sub_11BB90((unsigned __int8 *)a2, v11, 0, a4);
      }
    }
    else
    {
      v4 = 1;
      if ( v7 != v8 )
      {
        v9 = *(_QWORD *)(a1 + 96);
        v4 = 2;
        if ( *(_BYTE *)(v9 + 145) )
          return (unsigned int)(unsigned __int8)sub_11BB90((unsigned __int8 *)a2, v9, 0, a4) + 2;
      }
    }
  }
  return v4;
}

