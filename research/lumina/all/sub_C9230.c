void __fastcall sub_C9230(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)a1 )
  {
    (*(void (**)(void))(*(_QWORD *)a1 + 8LL))();
    *(_QWORD *)a1 = 0;
  }
  sub_C91C0(a1, a2);
}
