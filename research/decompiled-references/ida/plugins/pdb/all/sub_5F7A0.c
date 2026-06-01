__int64 __fastcall sub_5F7A0(__int64 a1, int *a2)
{
  int v2; // edx
  unsigned __int16 v3; // ax
  int v5; // edx

  v2 = 22;
  v3 = *(_WORD *)(*(_QWORD *)(a1 + 8) + 544LL);
  if ( v3 == 0xFFFF )
    goto LABEL_9;
  if ( (unsigned int)v3 - 3 <= 4 )
    goto LABEL_9;
  v2 = 334;
  if ( v3 == 208 )
    goto LABEL_9;
  if ( v3 == 104 )
  {
    v2 = 21;
    goto LABEL_9;
  }
  if ( v3 <= 0x68u )
  {
    v2 = 21;
    if ( (unsigned __int16)(v3 - 96) > 6u && v3 != 103 )
      v2 = 0;
    goto LABEL_9;
  }
  v2 = 21;
  if ( v3 == 244 || v3 == 240 )
  {
LABEL_9:
    *a2 = v2;
    return 0;
  }
  v5 = 79;
  if ( v3 != 246 )
    v5 = 0;
  *a2 = v5;
  return 0;
}

