__int64 __fastcall sub_11D810(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r13d
  int v8; // ecx
  int v9; // edx
  int v11; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-30h]

  v6 = 0;
  v12 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_11D6F0(a2, (char *)a3, &v11, a4, a5, a6) )
  {
    v8 = *(_DWORD *)(a3 + 4);
    v9 = *(_DWORD *)(a2 + 4);
    if ( v11 )
    {
      if ( v8 + v11 == v9 )
      {
        v6 = 3;
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
          return 3 - (unsigned int)(unsigned __int8)sub_1176D0((unsigned __int8 *)a2);
      }
    }
    else
    {
      v6 = 1;
      if ( v8 != v9 )
      {
        v6 = 2;
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
          return (unsigned int)(unsigned __int8)sub_1176D0((unsigned __int8 *)a2) + 2;
      }
    }
  }
  return v6;
}

