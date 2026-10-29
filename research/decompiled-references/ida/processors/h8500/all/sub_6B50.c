__int64 __fastcall sub_6B50(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char *v3; // rbp
  __int64 ash; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 328LL))(a1);
  if ( *(_QWORD *)(a1 + 592) > 1u )
  {
    v3 = "near";
    if ( (*(_BYTE *)(a2 + 16) & 2) != 0 )
      v3 = byte_8A89;
    ash = get_ash();
    result = sub_55A0(a1, 0, (__int64)word_8A92, *(_QWORD *)(a1 + 584), *(_QWORD *)(ash + 48), v3);
    *(_DWORD *)(a1 + 144) |= 0x2000u;
  }
  return result;
}

