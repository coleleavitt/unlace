__int64 __fastcall sub_1A18A0(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rdi
  __int64 v3; // rax

  result = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1);
  if ( (_BYTE)result )
  {
    v2 = a1[2];
    result = *(_QWORD *)(v2 + 280);
    if ( !*(_BYTE *)(result + 320) )
    {
      v3 = v2 + 8;
      if ( (*(_BYTE *)(v2 + 288) & 2) != 0 )
        v3 = v2 + 144;
      result = (unsigned int)(*(_DWORD *)(v3 + 72) - 208);
      if ( (unsigned int)result <= 0x2F )
        return sub_1A1380(v2, 1, 1);
    }
  }
  return result;
}

