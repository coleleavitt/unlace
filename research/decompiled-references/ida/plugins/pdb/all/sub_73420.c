__int64 __fastcall sub_73420(int *a1, _BYTE *a2, unsigned int a3)
{
  int v3; // eax
  int v4; // edx
  char v6; // cl
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  bool v10; // zf
  char v11; // al

  v3 = (a3 >> 8) & 7;
  if ( v3 )
  {
    LOBYTE(v3) = byte_95380[v3 & 7];
    v4 = 0;
  }
  else
  {
    v6 = a3 & 0xF;
    if ( (a3 & 0x80u) != 0 )
    {
      v4 = 0;
    }
    else
    {
      switch ( (unsigned __int8)a3 >> 4 )
      {
        case 0:
          v9 = a3 & 0xF;
          v4 = dword_95340[a3 & 0xF];
          LOBYTE(v3) = byte_95330[v9];
          break;
        case 1:
          v10 = a3 == 18;
          v4 = 13;
          if ( !v10 )
            v4 = 6;
          v3 = 1 << v6;
          break;
        case 2:
          v10 = a3 == 34;
          v4 = 14;
          if ( !v10 )
            v4 = 7;
          v3 = 1 << v6;
          break;
        case 3:
          v4 = 10;
          v3 = 1 << v6;
          break;
        case 4:
          LOBYTE(v3) = byte_95320[a3 & 7];
          v4 = 8;
          break;
        case 5:
          v11 = byte_95320[a3 & 7];
          v4 = 28;
          LOBYTE(v3) = 2 * v11;
          break;
        case 6:
          v7 = a3 & 0xF;
          v4 = dword_952E0[a3 & 0xF];
          LOBYTE(v3) = *((_BYTE *)&off_952C0 + v7);
          break;
        case 7:
          v8 = a3 & 0xF;
          v4 = dword_95280[a3 & 0xF];
          LOBYTE(v3) = byte_95260[v8];
          break;
      }
    }
  }
  if ( a1 )
    *a1 = v4;
  if ( a2 )
    *a2 = v3;
  return 1;
}

