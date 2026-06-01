char __fastcall sub_7BA0(int *a1, __int64 *a2, char a3)
{
  int v3; // r15d
  int v5; // ebp
  int v6; // ebx
  __int64 v7; // r14
  __int64 v8; // rdi
  char byte; // dl
  char v10; // cl
  char result; // al
  int v12; // eax
  int v13; // ebp

  v3 = 0;
  v5 = -1;
  v6 = 0;
  v7 = *a2;
  do
  {
    v8 = v7;
    v5 <<= 7;
    ++v7;
    byte = get_byte(v8);
    v10 = 7 * v3++;
    v6 |= (byte & 0x7F) << v10;
    result = (v3 != 5) & ((unsigned __int8)byte >> 7);
  }
  while ( result );
  if ( byte >= 0 )
  {
    if ( a3 )
    {
      v12 = v5;
      v13 = v6 | v5;
      if ( (v6 & (v12 >> 1)) != 0 )
        v6 = v13;
    }
    if ( a1 )
      *a1 = v6;
    *a2 = v7;
    return 1;
  }
  return result;
}
