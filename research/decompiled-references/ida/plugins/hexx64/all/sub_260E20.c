__int64 __fastcall sub_260E20(_QWORD *a1, unsigned int a2, __int64 a3, char a4, double a5)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  unsigned int v10; // r15d
  int v11; // ecx

  v7 = a1[55];
  v8 = a1[54];
  if ( 104 * v7 )
  {
    v9 = a1[54];
    v10 = 0;
    do
    {
      if ( a4 )
      {
        while ( 1 )
        {
          v11 = *(_DWORD *)(v9 + 24);
          if ( (v11 & 0x100) == 0 && (v11 & 1) != 0 )
            break;
          v9 += 104;
          if ( v9 == v8 + 104 * v7 )
            return v10;
        }
      }
      sub_260CA0(a1, v9, a2, a3, a5);
      v7 = a1[55];
      v9 += 104;
      ++v10;
      v8 = a1[54];
    }
    while ( v9 != v8 + 104 * v7 );
  }
  else
  {
    return 0;
  }
  return v10;
}

