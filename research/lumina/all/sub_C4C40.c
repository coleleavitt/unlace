void __fastcall sub_C4C40(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rbx
  bool v5; // zf
  int *v6; // rax
  int v7; // r13d
  __int64 v8; // rdx

  if ( a1 )
  {
    v4 = a1;
    do
    {
      *(_DWORD *)(v4 + 4) |= a3;
      v5 = *(_BYTE *)v4 == 0xAC;
      *(_DWORD *)(v4 + 52) = a2;
      if ( v5 )
      {
        v6 = *(int **)(v4 + 32);
        if ( v6 )
        {
          if ( *v6 > 0 )
          {
            v7 = 0;
            do
            {
              v8 = v7++;
              sub_C4C40(*(_QWORD *)&v6[6 * v8 + 2], a2, a3);
              v6 = *(int **)(v4 + 32);
            }
            while ( *v6 > v7 );
          }
        }
      }
      sub_C4C40(*(_QWORD *)(v4 + 16), a2, a3);
      v4 = *(_QWORD *)(v4 + 24);
    }
    while ( v4 );
  }
}
