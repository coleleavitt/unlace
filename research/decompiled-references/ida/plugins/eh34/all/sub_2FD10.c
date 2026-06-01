__int64 __fastcall sub_2FD10(__int64 a1)
{
  char v1; // dl
  __int64 result; // rax
  int v3; // eax

  v1 = sub_1EAE0(a1);
  result = 0;
  if ( v1 != -1 )
  {
    LOBYTE(v3) = sub_1EB10(a1);
    return v3 ^ 1u;
  }
  return result;
}

