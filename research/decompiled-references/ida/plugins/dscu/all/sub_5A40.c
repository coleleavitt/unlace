__int64 __fastcall sub_5A40(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx

  v6 = a2;
  if ( a1[4] > a2 )
    v6 = a1[5] + a2;
  if ( v6 == qlseek(a1[3], v6, 0) )
    return qlread(a1[3], a3, a4);
  else
    return -1;
}

