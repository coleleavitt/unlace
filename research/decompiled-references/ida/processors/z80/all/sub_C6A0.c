__int64 __fastcall sub_C6A0(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 224) = byte_11391[a2];
  result = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 40) = &off_144A0;
  if ( (*(_BYTE *)(a1 + 224) & 0x3B) != 0 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL) = &off_14440;
    result = *(unsigned int *)(a1 + 224);
    if ( (result & 0x19) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL) = &off_14400;
      result = *(unsigned int *)(a1 + 224);
    }
    if ( (result & 0x20) != 0 )
    {
      result = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(result + 40) = &off_143E0;
    }
  }
  return result;
}

