__int64 __fastcall sub_E0350(__int64 a1)
{
  __int16 v1; // ax
  __int64 result; // rax
  int v3; // edx

  v1 = *(_WORD *)(a1 + 20);
  if ( (v1 & 0x12) == 0 )
    goto LABEL_7;
  if ( (v1 & 0x400) == 0 || (v3 = sub_E01A0((int *)a1), result = 7, !v3) )
  {
    if ( *(_DWORD *)(a1 + 32) && *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 40)
      || (result = sub_E02F0(a1), !(_DWORD)result) )
    {
      v1 = *(_WORD *)(a1 + 20);
LABEL_7:
      HIBYTE(v1) &= ~0x40u;
      *(_WORD *)(a1 + 20) = v1;
      return 0;
    }
  }
  return result;
}
