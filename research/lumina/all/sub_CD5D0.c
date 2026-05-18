__int64 __fastcall sub_CD5D0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  v2 = a1[1];
  if ( v2 < a2 )
  {
    a1[2] += a2;
    return 0;
  }
  else
  {
    v3 = v2 - a2;
    a1[1] = v3;
    return *a1 + v3;
  }
}
