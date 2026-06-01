__int64 __fastcall sub_B4F0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  _BYTE *v4; // rax

  result = (unsigned int)dword_21868;
  if ( dword_21868 > 0 )
  {
    v3 = 0;
    do
    {
      while ( 1 )
      {
        v4 = (_BYTE *)(*a2 + 2 * v3);
        if ( !*v4 )
          break;
        ++v3;
        result = sub_B430(a1, (__int64)"%02X", (unsigned __int8)v4[1]);
        if ( dword_21868 <= (int)v3 )
          return result;
      }
      ++v3;
      result = sub_B430(a1, (__int64)"..");
    }
    while ( dword_21868 > (int)v3 );
  }
  return result;
}

