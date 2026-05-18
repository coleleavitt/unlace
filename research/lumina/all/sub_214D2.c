__int64 __fastcall sub_214D2(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebp

  if ( *(_BYTE *)(a1 + 17) )
    sub_CC740();
  v1 = *(_QWORD *)(a1 + 8);
  v2 = 0;
  if ( *(_BYTE *)(v1 + 33) )
    v2 = 2 - (*(_BYTE *)(v1 + 34) == 0);
  if ( *(_BYTE *)(a1 + 17) )
    sub_CCDE0(a1);
  return v2;
}
