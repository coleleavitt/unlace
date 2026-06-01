__int64 __fastcall sub_6D2B0(__int64 *a1, __int64 a2, double a3)
{
  int i; // eax
  int v4; // ebx
  __int64 result; // rax

  *a1 = 0;
  a1[1] = 0;
  for ( i = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 160LL))(a2, 0);
        ;
        i = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 160LL))(a2, (unsigned int)(v4 + 1)) )
  {
    v4 = i;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
    if ( (_DWORD)result == v4 )
      break;
    sub_64190(a1, v4, a3);
  }
  return result;
}

