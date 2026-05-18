_BYTE *__fastcall sub_199780(_BYTE *a1, __int64 a2)
{
  _BYTE *result; // rax
  char *v3; // rcx
  char *v4; // rdx
  char *v5; // rsi
  char v6; // r9
  char v7; // r8

  result = a1;
  if ( a2 > 1 )
  {
    v3 = &a1[a2 - 1];
    v4 = a1;
    v5 = &a1[(unsigned __int64)a2 >> 1];
    do
    {
      v6 = *v3;
      v7 = *v4++;
      --v3;
      *(v4 - 1) = v6;
      v3[1] = v7;
    }
    while ( v4 != v5 );
  }
  return result;
}
