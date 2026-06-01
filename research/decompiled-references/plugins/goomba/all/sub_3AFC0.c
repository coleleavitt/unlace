__int64 __fastcall sub_3AFC0(struct _Unwind_Exception *a1, __int64 a2, double a3, __m128 a4, __m128 a5, __m128 a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8

  if ( (unsigned __int64)(*(_QWORD *)&a1->private_1 - 1LL) > 2 )
    return 0;
  if ( (unsigned __int8)sub_38460((__int64)a1, a3, a4, a5)
    || (unsigned __int8)sub_39A20((__int64)a1, a3, a4, a5)
    || (unsigned __int8)sub_38780((__int64)a1, a3, a4, a5)
    || (unsigned __int8)sub_38C40((__int64)a1, a3, a4, a5, a6)
    || (unsigned __int8)sub_3A900((__int64)a1, a3, a4, a5, a6, a2, v7, v8, v9)
    || (unsigned __int8)sub_391E0((__int64)a1, a3, a4, a5) )
  {
    return 1;
  }
  return sub_3B040(a1);
}
