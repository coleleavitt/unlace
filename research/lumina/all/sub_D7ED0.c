void __fastcall sub_D7ED0(__int64 a1, _QWORD *a2)
{
  int v2; // ebx
  __int64 v3; // rax

  if ( *(int *)a2 > 0 )
  {
    v2 = 0;
    do
    {
      v3 = v2++;
      sub_D7E70(a1, (__int64)&a2[6 * v3 + 2]);
    }
    while ( v2 < *(_DWORD *)a2 );
  }
  sub_C9250(a1, a2);
}
