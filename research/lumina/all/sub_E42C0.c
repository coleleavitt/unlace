void __fastcall sub_E42C0(__int64 a1)
{
  const void *v1; // rsi
  _BYTE *v2; // rax

  v1 = *(const void **)(a1 + 368);
  if ( v1 )
  {
    if ( *(_QWORD *)(a1 + 336) )
    {
      v2 = sub_DCB40(*(_QWORD *)a1, v1, *(int *)(a1 + 376));
      sub_E4210(a1, *(_QWORD *)(a1 + 336), v2);
    }
  }
}
