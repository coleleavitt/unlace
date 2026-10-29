__int64 __fastcall sub_84510(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rbp
  _QWORD *v4; // rdx
  __int64 result; // rax
  __int64 v6; // rdi

  v2 = *(_DWORD *)(a1 + 16) - 1;
  if ( v2 >= 0 )
  {
    v3 = 16LL * (unsigned int)v2;
    do
    {
      --v2;
      v4 = (_QWORD *)(v3 + *(_QWORD *)(a1 + 8));
      v3 -= 16;
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)a1 + 88LL) + 480LL))(
                 *(_QWORD *)(*(_QWORD *)a1 + 160LL),
                 *v4,
                 v4[1]);
    }
    while ( v2 != -1 );
  }
  v6 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = 0;
  if ( v6 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    return qfree(v6);
  }
  return result;
}
