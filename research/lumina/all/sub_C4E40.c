void __fastcall __spoils<> sub_C4E40(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax

  if ( *(_QWORD *)(*(_QWORD *)a1 + 392LL) && !a2[10] )
  {
    while ( a2[11] )
      a2 = (_QWORD *)a2[11];
    v2 = a2[13];
    if ( v2 )
      *(_QWORD *)(*(_QWORD *)a1 + 392LL) = *(_QWORD *)(v2 + 8);
  }
}
