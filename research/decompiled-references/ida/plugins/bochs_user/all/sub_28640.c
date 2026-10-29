__int64 __fastcall sub_28640(__int64 a1, _DWORD *a2, unsigned __int8 a3)
{
  __int64 v3; // rbp
  _QWORD *v4; // rbx
  __int64 result; // rax

  v3 = a3;
  v4 = &unk_716D0;
  while ( 1 )
  {
    if ( (*a2 & (_DWORD)v4[1]) != 0 )
    {
      if ( v4[v3 - 2] )
      {
        result = sub_283A0(a1);
        if ( (_DWORD)result )
          break;
      }
    }
    v4 += 4;
    if ( v4 == (_QWORD *)&unk_718F0 )
      return 0;
  }
  return result;
}

