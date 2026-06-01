__int64 __fastcall sub_139B0(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *((unsigned __int16 *)qword_18B20 + a2);
  *(_WORD *)(a1 + 224) = result;
  if ( (unsigned __int16)result > 0xFFFu && (result & 0x100) == 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL) |= 4u;
    result = *(unsigned __int16 *)(a1 + 224);
  }
  if ( (result & 8) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL) = 48;
    result = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(result + 76) = 4;
  }
  return result;
}

