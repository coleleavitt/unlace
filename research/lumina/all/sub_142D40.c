__int64 __fastcall sub_142D40(__int64 *a1, __int64 a2, double a3)
{
  unsigned int v3; // ebp
  __int64 (__fastcall *v4)(__int64, _QWORD *, _QWORD, _QWORD); // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // eax
  __int64 (__fastcall *v9)(__int64, _QWORD *, _QWORD, _QWORD); // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v3 = 0;
  ++a1[2];
  if ( (unsigned int)sub_141DB0((__m128i *)a1[1], a2, a3) != 100 )
  {
    v8 = sub_11E660(a1[1], a2, v4, v5, v6, v7);
    a1[1] = 0;
    v3 = v8;
    sub_11E730(a1, a2, v9, v10, v11, v12);
  }
  return v3;
}
