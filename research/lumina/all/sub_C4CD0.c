void __fastcall sub_C4CD0(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v3; // eax
  int *v4; // rax
  int v5; // r12d
  __int64 v6; // rdx

  if ( a1 )
  {
    v2 = a1;
    do
    {
      v3 = *(_DWORD *)(v2 + 4);
      if ( (v3 & 1) != 0 && (a2 < 0 || *(_DWORD *)(v2 + 52) == a2) )
        *(_DWORD *)(v2 + 4) = v3 & 0xFFBFFFFE | 0x400000;
      if ( *(_BYTE *)v2 == 0xA7 )
      {
        if ( *(_DWORD *)(v2 + 44) == a2 )
          *(_DWORD *)(v2 + 4) &= ~0x100000u;
      }
      else if ( *(_BYTE *)v2 == 0xAC )
      {
        v4 = *(int **)(v2 + 32);
        if ( v4 )
        {
          if ( *v4 > 0 )
          {
            v5 = 0;
            do
            {
              v6 = v5++;
              sub_C4CD0(*(_QWORD *)&v4[6 * v6 + 2], (unsigned int)a2);
              v4 = *(int **)(v2 + 32);
            }
            while ( *v4 > v5 );
          }
        }
      }
      sub_C4CD0(*(_QWORD *)(v2 + 16), (unsigned int)a2);
      v2 = *(_QWORD *)(v2 + 24);
    }
    while ( v2 );
  }
}
