__int64 __fastcall sub_241310(int a1)
{
  __int64 v1; // rax

  v1 = 0;
  while ( *((_DWORD *)&unk_418C80 + v1) != a1 )
  {
    v1 += 2;
    if ( v1 == 26 )
      return 0;
  }
  return *((unsigned int *)&unk_418C80 + (int)v1 + 1);
}

