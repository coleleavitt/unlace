__int64 __fastcall sub_2EDD0(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 20) == 8 )
  {
    result = *(_QWORD *)a3;
    *a2 = *(_QWORD *)a3;
  }
  else
  {
    result = *a3;
    *a2 = result;
  }
  return result;
}

