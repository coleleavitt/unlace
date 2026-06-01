__int64 __fastcall sub_7800(int a1, int a2, int a3)
{
  signed int v3; // r8d
  int v4; // r10d
  __int64 result; // rax
  __int64 v6; // rsi
  int v7; // esi
  bool v8; // cc
  signed int v9; // edx
  int v10; // edi
  int v11; // esi
  __int64 v12; // rdx

  v3 = a3;
  v4 = a1 + (a2 >> 3);
  LODWORD(result) = a2 & 7;
  if ( (a2 & 7) == 0 )
  {
    if ( a3 <= 7 )
    {
      LOBYTE(v3) = 5;
      return (byte_11320[v4] >> (8 - v3)) | (unsigned int)result;
    }
    goto LABEL_5;
  }
  v6 = v4++;
  v7 = byte_11320[v6];
  v8 = a3 <= 8 - (int)result;
  v9 = 8 - result;
  if ( v8 )
    v9 = v3;
  v3 -= v9;
  result = (v7 & (unsigned int)((1 << (8 - result)) - 1)) >> (8 - result - v9);
  if ( v3 > 7 )
  {
LABEL_5:
    v10 = v3;
    v11 = v4;
    do
    {
      v12 = v11;
      v10 -= 8;
      ++v11;
      result = (unsigned int)byte_11320[v12] | ((_DWORD)result << 8);
    }
    while ( v10 > 7 );
    v4 += (unsigned int)v3 >> 3;
    v3 = v3 + ((1 - ((unsigned int)v3 >> 3)) & 0xFFFFFFF8) - 8;
  }
  if ( v3 > 0 )
  {
    LODWORD(result) = (_DWORD)result << v3;
    return (byte_11320[v4] >> (8 - v3)) | (unsigned int)result;
  }
  return result;
}

