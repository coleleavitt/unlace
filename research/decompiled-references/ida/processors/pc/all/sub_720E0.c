__int64 __fastcall sub_720E0(int a1, int a2)
{
  __int64 result; // rax
  int v3; // ecx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  int v8; // edx

  result = 1;
  if ( a1 != a2 )
  {
    sub_71FC0(a1, 1);
    v4 = sub_71FC0(v3, 1);
    result = 0;
    if ( v7 == v4 )
    {
      v8 = v7 - 133;
      result = 1;
      if ( (unsigned int)(v7 - 133) > 0x1F )
      {
        LOBYTE(result) = v6 == v7;
        LOBYTE(v8) = v5 == v7;
        return v8 | (unsigned int)result;
      }
    }
  }
  return result;
}
