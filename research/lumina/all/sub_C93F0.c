__int64 __fastcall sub_C93F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int16 v6; // ax

  v6 = *(_WORD *)(a1 + 20);
  if ( v6 < 0 )
  {
    sub_C9320(a1, *(_QWORD *)a1, a3, a4, a5, a6);
    v6 = *(_WORD *)(a1 + 20);
  }
  if ( (v6 & 0x1000) != 0 )
    (*(void (__fastcall **)(_QWORD))(a1 + 48))(*(_QWORD *)(a1 + 8));
  *(_WORD *)(a1 + 20) = 1;
  return 1;
}
