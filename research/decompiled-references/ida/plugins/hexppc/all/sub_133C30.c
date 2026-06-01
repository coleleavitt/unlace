__int64 __fastcall sub_133C30(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // r12
  unsigned __int64 v3; // rbx

  v2 = *(unsigned __int64 **)(a1 + 1344);
  if ( !*v2 )
    return 0;
  v3 = *(_QWORD *)*v2 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v3 )
    return *(unsigned int *)(v3 + 40);
  if ( (*(_BYTE *)v3 & 2) != 0 )
    return 0;
  do
  {
    if ( (int)sub_253FC0(a2) >= 0 )
    {
      if ( (int)sub_253FC0(v3 + 24) >= 0 )
        goto LABEL_8;
      v3 = *(_QWORD *)(v3 + 16);
    }
    else
    {
      v3 = *(_QWORD *)(v3 + 8);
    }
  }
  while ( (*(_BYTE *)v3 & 2) == 0 );
  v3 = *v2;
LABEL_8:
  if ( v3 == **(_QWORD **)(a1 + 1344) )
    return 0;
  else
    return *(unsigned int *)(v3 + 40);
}

