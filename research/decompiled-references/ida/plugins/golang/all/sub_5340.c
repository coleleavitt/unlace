__int64 __fastcall sub_5340(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  if ( a5 == 0xFFFFFFFFLL )
    return 0;
  *a2 = *(_QWORD *)(a4 + 8);
  *a1 = *(_QWORD *)(get_eah() + 16) & (*a2 + 4 * a5);
  return 1;
}
