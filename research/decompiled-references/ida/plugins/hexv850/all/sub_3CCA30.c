__int64 __fastcall sub_3CCA30(_QWORD *a1, int a2, int a3, double a4)
{
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx

  if ( a2 < 0 )
    return a1[1];
  if ( (unsigned __int64)a2 < a1[15] && a3 >= 0 )
  {
    v5 = (_QWORD *)(a1[14] + 24LL * a2);
    if ( (unsigned __int64)a3 < v5[1] )
    {
      v6 = *(_QWORD *)(*v5 + 8LL * a3);
      if ( v6 )
        return *(_QWORD *)(v6 + 24);
    }
  }
  v8 = a1[8];
  if ( a2 >= *(_DWORD *)(v8 + 64) )
    return a1[1];
  if ( (unsigned int)a2 >= *(_DWORD *)(v8 + 64) )
    sub_3C8F80(a4);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 528) + 8LL * a2);
  if ( v9 )
    return *(_QWORD *)(v9 + 32);
  else
    return a1[1];
}

