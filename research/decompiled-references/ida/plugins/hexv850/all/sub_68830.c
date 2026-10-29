__int64 __fastcall sub_68830(__int64 *a1, __int64 a2)
{
  int i; // eax
  int v3; // ebx
  __int64 result; // rax

  *a1 = 0;
  a1[1] = 0;
  for ( i = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 160LL))(a2, 0);
        ;
        i = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 160LL))(a2, (unsigned int)(v3 + 1)) )
  {
    v3 = i;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
    if ( (_DWORD)result == v3 )
      break;
    sub_5F710(a1, v3);
  }
  return result;
}

