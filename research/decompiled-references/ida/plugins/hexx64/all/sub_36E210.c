__int64 __fastcall sub_36E210(__int64 a1, unsigned int a2, double a3)
{
  __int64 v3; // rdi
  __int64 (*v4)(); // rdx
  __int64 result; // rax
  __int64 v6; // rax

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 148LL) == 1 )
  {
    v6 = *(int *)(a1 + 480);
    if ( (_DWORD)v6 != -1 )
    {
      if ( (unsigned __int8)sub_369E00(*(_QWORD *)(a1 + 432) + 104 * v6, a3) )
        return 0;
    }
  }
  if ( (unsigned __int8)sub_13B090(a1, a2, 0xFFFFFFFFFFFFFFFFLL) )
    return 0;
  v3 = *(_QWORD *)(a1 + 1504);
  v4 = *(__int64 (**)())(*(_QWORD *)v3 + 224LL);
  result = 1;
  if ( v4 != sub_3392A0 )
    return ((__int64 (__fastcall *)(__int64, _QWORD))v4)(v3, a2);
  return result;
}

