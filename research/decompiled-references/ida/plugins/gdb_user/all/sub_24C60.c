bool __fastcall sub_24C60(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int *v6; // rdx
  bool result; // al

  if ( *(_BYTE *)(*(_QWORD *)(a2 + 80) + a4) == 0xFF )
  {
    if ( *(int *)a3 >= -1 && *(_QWORD *)(a3 + 8) )
    {
      *(_QWORD *)(a3 + 16) = 0;
      qfree();
    }
    *(_QWORD *)(a3 + 8) = 0;
    *(_DWORD *)a3 = -3;
  }
  else
  {
    v6 = (int *)(**(_QWORD **)(a2 + 48) + 48LL * a4);
    result = sub_249F0(a1, a3, (const void *)(*(_QWORD *)(a2 + 56) + *v6), v6[1], a4);
    if ( !result )
      return result;
    if ( *(_DWORD *)(a1 + 784) == a4 )
      sub_24980(a1, a3);
  }
  return 1;
}

