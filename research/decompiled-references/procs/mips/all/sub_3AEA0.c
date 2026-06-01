__int64 __fastcall sub_3AEA0(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 328LL))(a1);
  if ( *(_QWORD *)(a1 + 592) > 1u )
  {
    result = sub_37E50(a1, 0, (__int64)&unk_51478, *(_QWORD *)(a1 + 584));
    *(_DWORD *)(a1 + 144) |= 0x2000u;
  }
  return result;
}
