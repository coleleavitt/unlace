void __fastcall sub_1559D0(__int64 a1, char a2, double a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  void *v5; // r12
  __int64 v6; // r12
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // r15

  v3 = (unsigned int)(*(_DWORD *)(a1 + 8) - 1);
  v4 = 8 * v3;
  if ( (int)v3 >= 0 )
  {
    do
    {
      if ( !a2 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)a1 + v4);
        if ( *(_DWORD *)v6 == 1 )
        {
          v9 = *(_QWORD *)(v6 + 32);
          if ( v9 )
          {
            sub_11CDA0(*(_QWORD *)(v6 + 32));
            j__qfree(v9);
          }
        }
        else if ( *(_DWORD *)v6 == 2 )
        {
          v7 = *(_QWORD *)(v6 + 16);
          v8 = *(_DWORD *)(v7 + 24);
          BYTE1(v8) &= ~2u;
          LOBYTE(v8) = v8 | 0x80;
          *(_DWORD *)(v7 + 24) = v8;
        }
        *(_DWORD *)v6 = 0;
      }
      v5 = *(void **)(*(_QWORD *)a1 + v4);
      if ( v5 )
      {
        sub_155800(*(unsigned int **)(*(_QWORD *)a1 + v4), a3);
        operator delete(v5, 0x28u);
      }
      LODWORD(v3) = v3 - 1;
      v4 -= 8;
    }
    while ( (_DWORD)v3 != -1 );
  }
  *(_QWORD *)(a1 + 8) = 0;
}

