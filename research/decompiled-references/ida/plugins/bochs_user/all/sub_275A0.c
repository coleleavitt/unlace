__int64 __fastcall sub_275A0(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // ebp
  __int64 result; // rax

  v2 = *(_DWORD *)a2;
  *(_DWORD *)a2 = 0;
  if ( (v2 & 0x19) == 0 || (result = sub_27510(a1, a2, v2), !(_DWORD)result) )
  {
    if ( (v2 & 2) == 0
      || (result = sub_266F0(a1, (__int64)"sreg\n", 2), !(_DWORD)result)
      && (result = sub_2ACC0(a1 + 16, *(_QWORD *)(a1 + 72), a2), !(_DWORD)result) )
    {
      if ( (v2 & 4) != 0 )
      {
        result = sub_266F0(a1, (__int64)"creg\n", 3);
        if ( !(_DWORD)result )
          return sub_2AA60(a1 + 16, *(_QWORD *)(a1 + 72), a2);
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}

