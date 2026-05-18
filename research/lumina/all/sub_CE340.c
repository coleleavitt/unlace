__int64 __fastcall sub_CE340(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rbp

  result = 0;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_QWORD **)(v3 + 32);
  if ( v4 != a2 )
  {
    *(_QWORD *)(v3 + 32) = a2;
    if ( a2 )
    {
      if ( *(_QWORD *)(a1 + 16) )
        sub_CDAF0(a1, a2);
    }
    *(_QWORD *)(v3 + 32) = v4;
    return 1;
  }
  return result;
}
