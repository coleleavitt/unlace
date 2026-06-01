__int64 __fastcall sub_32F770(__int64 *a1, _DWORD *a2, double a3)
{
  char v3; // al
  __int64 result; // rax

  v3 = *((_BYTE *)a1 + 8);
  if ( v3 == 1 )
  {
    result = *a1;
    *a2 = 3;
    a2[2] = result;
  }
  else
  {
    if ( v3 != 5 )
      sub_328990(a3);
    result = *a1;
    *a2 = 1;
    *((_QWORD *)a2 + 1) = result;
  }
  return result;
}

