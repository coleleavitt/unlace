__int64 __fastcall sub_13EF0(__int64 a1, unsigned __int16 a2, unsigned int a3, const char *a4)
{
  unsigned int v5; // r12d
  int v7; // ebx
  unsigned __int8 v8; // r14

  v5 = 34;
  *a4 = 0;
  if ( sub_13D40(a1, 1, a2, 0x61u, nullptr) )
  {
    v5 = 33;
    if ( (unsigned __int8)sub_1B440(a1, a2, a4, 128, 13) )
    {
      if ( a3 > 3 )
      {
        v8 = 22;
        v7 = 0;
      }
      else
      {
        v7 = byte_25CA8[a3];
        v8 = byte_25CA4[a3];
      }
      while ( 1 )
      {
        v5 = v7;
        if ( !strcmp(off_2C8E0[v7], a4) )
          break;
        if ( (unsigned __int8)++v7 >= v8 )
        {
          v7 = 16;
          v8 = 21;
          if ( (unsigned __int8)(v5 + 1) > 0x14u || !a3 )
            return 32;
        }
      }
    }
  }
  return v5;
}

