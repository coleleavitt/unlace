__int64 __fastcall sub_82350(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v4; // r12
  __int64 (__fastcall *v7)(__int64, __int64); // rax

  v4 = *(_QWORD **)(a1 + 616);
  if ( v4 )
  {
    if ( a4 == -1 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64))(*v4 + 48LL))(
             *(_QWORD *)(a1 + 616),
             a3,
             0xFFFFFFFFLL) == -1 )
        return 0;
    }
    else if ( a4 - 129 > 0x1E && a4 > 0xF && a4 - 160 > 1 )
    {
      return 0;
    }
    v7 = *(__int64 (__fastcall **)(__int64, __int64))(*v4 + 16LL);
    if ( v7 != sub_80020 )
      ((void (__fastcall *)(_QWORD *, __int64, _QWORD, __int64))v7)(
        v4,
        a3 & *(_QWORD *)(*(_QWORD *)(v4[1] + 32LL) + 16LL),
        0,
        -1);
    reg_finder_find();
  }
  return 0;
}
