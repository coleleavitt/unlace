__int64 __fastcall sub_52820(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  _QWORD *v4; // rdi
  __int64 (__fastcall *v5)(__int64); // rax

  v2 = sub_97BF0(a2);
  if ( v2 == 24 )
  {
    v4 = *(_QWORD **)(a1 + 24);
    v5 = *(__int64 (__fastcall **)(__int64))(*v4 + 16LL);
    if ( v5 == sub_28030 )
      *(_BYTE *)(*(_QWORD *)(v4[3] + 384LL) + 72LL) |= 4u;
    else
      ((void (__fastcall *)(_QWORD *, __int64))v5)(v4, a2);
    return 0;
  }
  if ( v2 != 5 )
    return 0;
  return (unsigned __int8)sub_52400(*(_QWORD **)(a1 + 24), a2, 0) ^ 1u;
}

