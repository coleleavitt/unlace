__int64 __fastcall sub_32CE0(__int64 a1, _QWORD *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdi
  __int64 (*v6)(); // rax

  v3 = sub_323C0(a1, a2, a3);
  if ( v3 == 100 )
  {
    v5 = *(_QWORD *)(a1 + 168);
    if ( v5 )
    {
      v6 = *(__int64 (**)())(*(_QWORD *)v5 + 40LL);
      if ( v6 != sub_21B20 )
      {
        if ( ((unsigned __int8 (__fastcall *)(__int64, _QWORD))v6)(v5, a2[2]) )
          return 1;
      }
    }
  }
  return v3;
}

