__int64 __fastcall sub_20A520(__int64 a1, unsigned __int64 a2, double a3)
{
  _QWORD **v4; // rdi
  __int64 *v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  int *v8; // rdi

  v4 = *(_QWORD ***)(*(_QWORD *)(a1 + 8) + 800LL);
  if ( v4 )
  {
    v5 = sub_1FBD10(v4, a2);
  }
  else
  {
    if ( *(_BYTE *)a2 != 9 )
      return 0;
    v5 = *(__int64 **)(a2 + 8);
  }
  if ( v5 )
  {
    v6 = *v5;
    v7 = *((int *)v5 + 4);
    if ( *(_QWORD *)(v6 + 440) < v7 )
      sub_20A4A0(a3);
    v8 = (int *)(*(_QWORD *)(v6 + 432) + 104 * v7);
    if ( v8 && !(unsigned int)sub_3307E0(v8, (int *)(a1 + 48)) )
      ++*(_DWORD *)(a1 + 108);
  }
  return 0;
}

