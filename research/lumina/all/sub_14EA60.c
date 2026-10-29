void __fastcall sub_14EA60(
        __int64 a1,
        __int64 a2,
        int a3,
        int *a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        int a8,
        unsigned int a9)
{
  __int64 v12; // rbx
  _DWORD *v15; // rdi

  if ( a2 )
  {
    v12 = a2;
    do
    {
      if ( (*(unsigned __int8 *)(v12 + 16) == a3 || *(_BYTE *)(v12 + 16) == 127
                                                 && *(_BYTE *)(v12 + 18) != 0
                                                 && a3 == 129)
        && *(unsigned __int8 *)(v12 + 17) == a5 )
      {
        v15 = *(_DWORD **)(v12 + 32);
        if ( !v15 || !a4 || (unsigned int)sub_CFFF0(v15, a4) )
        {
          if ( *(_BYTE *)(v12 + 18) )
          {
            if ( !*(_QWORD *)(a1 + 160) )
              sub_127D40(a1, (char *)(v12 + 16), a6, a7);
          }
          else
          {
            sub_14DFF0(a1, (_QWORD *)v12, a6, a7, a8, a9);
          }
        }
      }
      v12 = *(_QWORD *)(v12 + 64);
    }
    while ( v12 );
  }
}
