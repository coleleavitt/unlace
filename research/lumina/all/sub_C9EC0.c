__int64 __fastcall sub_C9EC0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // ebp
  __int64 v4; // r12

  result = *(unsigned __int8 *)(a1 + 63);
  if ( (_BYTE)result != 2 && !*(_BYTE *)(a1 + 70) )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 128LL))(
             *(_QWORD *)(a1 + 8),
             (unsigned int)a2);
  v3 = 0;
  if ( *(int *)(a1 + 40) > 0 )
  {
    do
    {
      v4 = v3++;
      sub_C91C0(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v4), a2);
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v4) = 0;
    }
    while ( *(_DWORD *)(a1 + 40) > v3 );
    result = *(unsigned __int8 *)(a1 + 63);
  }
  if ( (_BYTE)result != 2 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 128LL))(
             *(_QWORD *)(a1 + 8),
             (unsigned int)a2);
  return result;
}
