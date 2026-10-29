__int64 __fastcall sub_3F1B50(__int64 a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rax
  unsigned int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi

  v4 = a2;
  if ( *(_DWORD *)(a1 + 80) == 8 || a2 <= 44 || (int)a3 <= 44 )
  {
    LOBYTE(a4) = a2 == (_DWORD)a3;
    return a4;
  }
  v5 = a3 - 93;
  if ( (unsigned int)(v4 - 93) > 0x1F )
  {
    if ( (unsigned int)(v4 - 61) > 0x1F )
    {
      a4 = 0;
      if ( (unsigned int)(v4 - 45) > 0xF )
        return a4;
      LODWORD(v4) = 4 * v4 - 87;
      if ( v5 > 0x1F )
      {
        if ( (unsigned int)(a3 - 61) > 0x1F )
        {
          v6 = 4;
          goto LABEL_20;
        }
        v4 = (int)v4;
        v6 = 4;
        v7 = 2;
        a3 = 2 * (int)a3 - 29;
      }
      else
      {
        a3 = (int)a3;
        v4 = (int)v4;
        v6 = 4;
        v7 = 1;
      }
    }
    else
    {
      LODWORD(v4) = 2 * v4 - 29;
      if ( v5 <= 0x1F )
      {
        a3 = (int)a3;
        v4 = (int)v4;
        v6 = 2;
        v7 = 1;
      }
      else
      {
        if ( (unsigned int)(a3 - 61) > 0x1F )
        {
          v6 = 2;
          goto LABEL_20;
        }
        v4 = (int)v4;
        v6 = 2;
        v7 = 2;
        a3 = 2 * (int)a3 - 29;
      }
    }
  }
  else
  {
    if ( v5 <= 0x1F )
    {
      a3 = (int)a3;
      v6 = 1;
      v7 = 1;
      goto LABEL_7;
    }
    if ( (unsigned int)(a3 - 61) > 0x1F )
    {
      v6 = 1;
LABEL_20:
      if ( (unsigned int)(a3 - 45) > 0xF )
        return 0;
      v4 = (int)v4;
      v7 = 4;
      a3 = 4 * (int)a3 - 87;
      goto LABEL_7;
    }
    v6 = 1;
    v7 = 2;
    a3 = 2 * (int)a3 - 29;
  }
LABEL_7:
  v8 = v4 + v6 - 1;
  a4 = 0;
  if ( v8 >= a3 )
    LOBYTE(a4) = a3 + v7 - 1 >= v4;
  return a4;
}

