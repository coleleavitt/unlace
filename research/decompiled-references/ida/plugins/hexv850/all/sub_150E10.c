void __fastcall sub_150E10(__int64 a1, char a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  void *v4; // r12
  __int64 v5; // r12
  __int64 v6; // rdx
  int v7; // eax

  v2 = (unsigned int)(*(_DWORD *)(a1 + 8) - 1);
  v3 = 8 * v2;
  if ( (int)v2 >= 0 )
  {
    do
    {
      if ( !a2 )
      {
        v5 = *(_QWORD *)(*(_QWORD *)a1 + v3);
        if ( *(_DWORD *)v5 == 1 )
        {
          if ( *(_QWORD *)(v5 + 32) )
          {
            sub_1181E0(*(_QWORD *)(v5 + 32));
            j__qfree();
          }
        }
        else if ( *(_DWORD *)v5 == 2 )
        {
          v6 = *(_QWORD *)(v5 + 16);
          v7 = *(_DWORD *)(v6 + 24);
          BYTE1(v7) &= ~2u;
          LOBYTE(v7) = v7 | 0x80;
          *(_DWORD *)(v6 + 24) = v7;
        }
        *(_DWORD *)v5 = 0;
      }
      v4 = *(void **)(*(_QWORD *)a1 + v3);
      if ( v4 )
      {
        sub_150C40(*(unsigned int **)(*(_QWORD *)a1 + v3));
        operator delete(v4, 0x28u);
      }
      LODWORD(v2) = v2 - 1;
      v3 -= 8;
    }
    while ( (_DWORD)v2 != -1 );
  }
  *(_QWORD *)(a1 + 8) = 0;
}

