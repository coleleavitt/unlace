unsigned __int8 *__fastcall sub_E60E0(__int64 *a1, __int64 a2, int a3, int *a4, _DWORD *a5)
{
  __int64 v6; // rax

  if ( *(_QWORD *)(a2 + 88) )
  {
    if ( *((_BYTE *)a1 + 215) )
      goto LABEL_3;
    return sub_E5F00(a1, a2, a3, a4, a5);
  }
  v6 = *(_QWORD *)(*(_QWORD *)(*a1 + 32) + 56LL);
  if ( v6 && *(_QWORD *)(v6 + 64) && !*((_BYTE *)a1 + 215) )
    return sub_E5F00(a1, a2, a3, a4, a5);
LABEL_3:
  if ( a5 )
    *a5 = 0;
  return nullptr;
}
