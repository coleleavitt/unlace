__int64 __fastcall sub_B3C0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 *v4; // rax
  char v5; // [rsp+28h] [rbp-150h] BYREF
  unsigned __int64 v6; // [rsp+168h] [rbp-10h] BYREF

  v6 = __readfsqword(0x28u);
  result = 0;
  if ( *(_WORD *)(a1 + 40) == 15 && *(_BYTE *)(a1 + 57) == 7 )
  {
    v2 = *(_QWORD *)(a1 + 72) + 16LL * *(_QWORD *)(a1 + 16);
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 16LL);
    if ( v2 != v3 )
    {
      v3 &= v2;
      if ( v2 == -1 )
        v3 = -1;
    }
    result = 0;
    if ( *(_QWORD *)(a1 + 408) == v3 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 376) + 24LL) = *(_QWORD *)(a1 + 32) + *(unsigned __int16 *)(a1 + 42);
      v4 = (unsigned __int64 *)&v5;
      do
      {
        *(_WORD *)v4 = 0;
        v4 += 5;
        *((_WORD *)v4 - 19) = 0;
        *((_WORD *)v4 - 18) = 0;
        *((_DWORD *)v4 - 2) = 0;
        *((_WORD *)v4 - 17) = 0;
        *((_OWORD *)v4 - 2) = 0;
        *(v4 - 2) = 0;
      }
      while ( &v6 != v4 );
      decode_insn();
      return 1;
    }
  }
  return result;
}

