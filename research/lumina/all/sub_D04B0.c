void __fastcall sub_D04B0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax

  if ( *(_BYTE *)(*(_QWORD *)a1 + 103LL) )
  {
    sub_D0130(*(_QWORD *)a1, a3, a2, a3, a5, a6);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 136) + 24LL * *(int *)(a1 + 144) - 24;
    *(_BYTE *)(v6 + 1) = a3;
    *(_QWORD *)(v6 + 16) = a2;
  }
}
