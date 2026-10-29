__int64 __fastcall sub_9A190(__int64 a1, __int64 *a2, _QWORD *a3)
{
  int v5; // [rsp+Ch] [rbp-2Ch] BYREF
  _QWORD v6[5]; // [rsp+10h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  v5 = 0;
  v6[0] = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, int *, _QWORD *))(a3[32] + 112LL))(
         *(_QWORD *)(*a3 + 24LL),
         17,
         &v5,
         v6)
    || !v5 )
  {
    return 0;
  }
  *a2 = sub_9A0A0((__int64)a3);
  return 1;
}
