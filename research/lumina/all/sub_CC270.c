__int64 __fastcall sub_CC270(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rax

  v2 = (__int64 *)(*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD))&xmmword_241558 + 1))(
                    *(_QWORD *)(*a1 + 64),
                    a2,
                    0);
  if ( v2 )
    return sub_C6370(*a1, a2, v2);
  else
    return 0;
}
