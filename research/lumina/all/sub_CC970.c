__int64 __fastcall sub_CC970(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int16 v4; // ax
  unsigned int v6; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( !a1 )
    return result;
  if ( !*(_BYTE *)(a1 + 17) )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_WORD *)(v3 + 40);
    if ( (int)a2 < 0 )
      goto LABEL_5;
    goto LABEL_4;
  }
  sub_CC740(a1);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_WORD *)(v3 + 40);
  if ( (int)a2 >= 0 )
  {
LABEL_4:
    *(_WORD *)(v3 + 40) = v4 & 0xFFF3;
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 40LL) |= 4 * (_WORD)a2;
    v4 = *(_WORD *)(*(_QWORD *)(a1 + 8) + 40LL);
  }
LABEL_5:
  result = (v4 & 0xC) >> 2;
  if ( *(_BYTE *)(a1 + 17) )
  {
    if ( (*(_DWORD *)(a1 + 20))-- == 1 )
    {
      v6 = result;
      sub_CC7D0(a1, a2, v3);
      return v6;
    }
  }
  return result;
}
