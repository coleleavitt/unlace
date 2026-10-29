__int64 __fastcall sub_1EA20(__int64 *a1)
{
  int v1; // eax
  unsigned __int64 v3; // rcx
  __int64 i; // rax
  __int64 v5; // rsi
  __int64 v6; // rax

  v1 = getinf(5);
  if ( v1 != 18 && v1 != 25 )
    return 0;
  v3 = a1[1];
  if ( v3 <= 0x2E )
  {
    v5 = *a1;
    if ( (unsigned __int64)a1[2] <= 0x2E )
    {
      v6 = qvector_reserve(a1, v5, 47, 8);
      v3 = a1[1];
      *a1 = v6;
      v5 = v6;
    }
    memset((void *)(v5 + 8 * v3), 0, 8 * (47 - v3));
  }
  else if ( v3 == 47 )
  {
    goto LABEL_7;
  }
  a1[1] = 47;
LABEL_7:
  for ( i = 0; i != 376; i += 8 )
    *(_QWORD *)(*a1 + i) = *(_QWORD *)((char *)&unk_21A40 + i);
  return 1;
}

