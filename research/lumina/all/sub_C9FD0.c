__int64 __fastcall sub_C9FD0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx

  v2 = *(_QWORD **)(a1 + 16);
  if ( !v2 )
    return 0;
  do
  {
    v3 = (_QWORD *)*v2;
    sub_C91C0((__int64)v2, a2);
    v2 = v3;
  }
  while ( v3 );
  return 0;
}
