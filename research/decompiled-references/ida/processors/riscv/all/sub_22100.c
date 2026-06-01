bool __fastcall sub_22100(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  v2 = a2[1];
  if ( a1[1] == v2 )
    return *a1 < *a2;
  else
    return a1[1] > v2;
}

