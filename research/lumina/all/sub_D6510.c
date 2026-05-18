void __fastcall sub_D6510(__int64 a1, __int64 *a2)
{
  int v2; // ebx
  __int64 v3; // rax

  if ( a1 && *(int *)a1 > 0 )
  {
    v2 = 0;
    do
    {
      v3 = v2++;
      sub_D64C0(*(_QWORD *)(a1 + 24) + 80 * v3, a2);
    }
    while ( *(_DWORD *)a1 > v2 );
  }
  sub_C91C0(a1, (__int64)a2);
}
