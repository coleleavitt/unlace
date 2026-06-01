unsigned __int8 __fastcall sub_19690(__int64 a1, _BYTE *a2)
{
  unsigned __int8 result; // al
  int v3; // edx
  unsigned __int64 v4; // rdx
  __int64 v5; // rax

  result = 0;
  if ( a2 )
  {
    if ( *a2 == 36 )
    {
      v3 = (unsigned __int8)a2[1];
      if ( (_BYTE)v3 )
      {
        result = a2[2] == 46 || a2[2] == 0;
        if ( result )
        {
          v4 = (unsigned int)(v3 - 97);
          result = 0;
          if ( (unsigned __int8)v4 <= 0x17u )
          {
            v5 = 8945707;
            return _bittest64(&v5, v4);
          }
        }
      }
    }
  }
  return result;
}
