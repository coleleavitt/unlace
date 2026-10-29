void __fastcall sub_DF980(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // rbp
  int v4; // eax
  __int64 i; // rbx
  unsigned __int8 v6; // bp
  __int64 v7; // [rsp-10h] [rbp-10h]

  while ( a2 )
  {
    v7 = v3;
    v4 = *(_DWORD *)(a2 + 4);
    for ( i = a2; (v4 & 0x41000) != 0; v4 = *(_DWORD *)(i + 4) )
    {
      if ( (v4 & 0x40000) != 0 )
      {
        i = *(_QWORD *)(*(_QWORD *)(i + 32) + 8LL);
        if ( !i )
          goto LABEL_8;
      }
      else
      {
        i = *(_QWORD *)(i + 16);
        if ( !i )
        {
LABEL_8:
          *(_BYTE *)(a1 + 16) = a3;
          return;
        }
      }
    }
    *(_BYTE *)(a1 + 16) = a3;
    if ( *(_BYTE *)i != a3 )
    {
      sub_DF750(a1, a2, 0);
      return;
    }
    v6 = a3;
    sub_DF980(a1, *(_QWORD *)(i + 16), a3);
    a2 = *(_QWORD *)(i + 24);
    a3 = v6;
    v3 = v7;
  }
  *(_BYTE *)(a1 + 16) = a3;
}
