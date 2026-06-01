__int64 __fastcall sub_5D40(int *a1, unsigned int *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v7; // ebx
  unsigned int v8; // eax
  int v9; // edx
  int v10; // eax

  v7 = 0;
  do
  {
    a2 = (unsigned int *)((char *)a2 + HIWORD(v7));
    if ( (unsigned __int64)a2 < a3 || (unsigned __int64)a2 >= a4 )
      sub_5960();
    v7 = *a2;
    if ( *a1 > 0 )
    {
      v8 = a1[1];
      --*a1;
      v9 = 2 * v8;
      v10 = v8 >> 31;
      a1[1] = v9;
    }
    else
    {
      v10 = sub_5B30((__int64)a1, 1);
    }
    if ( !v10 )
      v7 <<= 16;
  }
  while ( (v7 & 0x10000) == 0 );
  return v7 >> 17;
}
