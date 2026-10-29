__int64 __fastcall sub_36A090(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 (*v3)(); // rdx
  __int64 result; // rax
  __int64 v5; // rax

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 148LL) == 1 )
  {
    v5 = *(int *)(a1 + 480);
    if ( (_DWORD)v5 != -1 )
    {
      if ( (unsigned __int8)sub_365C80(*(_QWORD *)(a1 + 432) + 104 * v5) )
        return 0;
    }
  }
  if ( (unsigned __int8)sub_137650(a1, a2) )
    return 0;
  v2 = *(_QWORD *)(a1 + 1504);
  v3 = *(__int64 (**)())(*(_QWORD *)v2 + 224LL);
  result = 1;
  if ( v3 != sub_334CA0 )
    return ((__int64 (__fastcall *)(__int64, _QWORD))v3)(v2, a2);
  return result;
}

