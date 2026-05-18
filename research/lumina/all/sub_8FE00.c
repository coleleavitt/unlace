__int64 __fastcall sub_8FE00(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  sub_169470(a1, a3[8]);
  (*(void (__fastcall **)(unsigned __int8 *, __int64, _QWORD))(*(_QWORD *)a3 + 16LL))(
    a3,
    a1,
    *(unsigned int *)(a2 + 108));
  if ( (unsigned __int8)sub_167DE0(a2) )
    nullsub_71(a2, a3, a1);
  return a1;
}
