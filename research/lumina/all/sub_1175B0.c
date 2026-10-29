__int64 __fastcall sub_1175B0(__int64 a1)
{
  bool v1; // zf
  __int16 v2; // cx
  __int64 v3; // rdx

  *(_BYTE *)(a1 + 1) &= 0xF9u;
  v1 = *(_BYTE *)a1 == 0;
  *(_WORD *)(a1 + 70) = 0;
  if ( !v1 )
    return sub_117440(a1);
  v2 = *(_WORD *)(a1 + 86);
  v3 = *(_QWORD *)(a1 + 136);
  *(_WORD *)(a1 + 86) = v2 + 1;
  if ( (unsigned __int16)(v2 + 1) >= *(_WORD *)(v3 + 24) )
  {
    *(_WORD *)(a1 + 86) = v2;
    return sub_117440(a1);
  }
  if ( *(_BYTE *)(v3 + 8) )
    return 0;
  else
    return sub_EBF90(a1);
}
