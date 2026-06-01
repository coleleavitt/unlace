__int64 __fastcall sub_3C4A70(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  void (*v5)(); // rax

  result = 0;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1[5] + 528LL) + 8LL * (int)a3) + 400LL) > 1u )
  {
    sub_62740();
    v5 = *(void (**)())(*a1 + 48LL);
    if ( v5 != nullsub_1 )
      ((void (__fastcall *)(_QWORD *, __int64, _QWORD))v5)(a1, a2, a3);
    sub_62740();
    return 1;
  }
  return result;
}

