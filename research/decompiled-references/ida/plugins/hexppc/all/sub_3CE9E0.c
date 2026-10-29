__int64 __fastcall sub_3CE9E0(__int64 a1, int a2, int a3)
{
  _QWORD *v3; // rax

  if ( a2 < 0 )
    return 0;
  if ( (unsigned __int64)a2 >= *(_QWORD *)(a1 + 120) )
    return 0;
  if ( a3 < 0 )
    return 0;
  v3 = (_QWORD *)(*(_QWORD *)(a1 + 112) + 24LL * a2);
  if ( (unsigned __int64)a3 >= v3[1] )
    return 0;
  else
    return *(_QWORD *)(*v3 + 8LL * a3);
}

