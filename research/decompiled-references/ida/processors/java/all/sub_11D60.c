__int64 __fastcall sub_11D60(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 24);
  if ( (*(_BYTE *)(result + 4) & 1) == 0 )
    return (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)a2 + 136LL))(a2, &unk_22DA1, 0);
  return result;
}

