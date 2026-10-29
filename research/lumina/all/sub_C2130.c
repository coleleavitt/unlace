void __fastcall sub_C2130(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  if ( a1 )
  {
    v1 = qword_2424D0;
    if ( qword_2424D0 == a1 )
    {
      qword_2424D0 = *(_QWORD *)(qword_2424D0 + 16);
    }
    else if ( qword_2424D0 )
    {
      while ( 1 )
      {
        v2 = *(_QWORD *)(v1 + 16);
        if ( !v2 )
          break;
        if ( v2 == a1 )
        {
          *(_QWORD *)(v1 + 16) = *(_QWORD *)(a1 + 16);
          return;
        }
        v1 = *(_QWORD *)(v1 + 16);
      }
    }
  }
}
