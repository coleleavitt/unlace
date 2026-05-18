__int64 *__fastcall sub_C2FA0(__int64 a1, char a2)
{
  __int64 *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  bool v8; // zf

  result = *(__int64 **)(a1 + 24);
  if ( (a2 & 1) == 0 )
    goto LABEL_6;
  if ( result[2] == a1 )
  {
    result[2] = *(_QWORD *)(a1 + 64);
    v3 = *(_QWORD *)(a1 + 56);
    v4 = *(_QWORD *)(a1 + 64);
    if ( v3 )
    {
LABEL_4:
      *(_QWORD *)(v3 + 64) = v4;
      v5 = *(_QWORD *)(a1 + 64);
      v6 = *(_QWORD *)(a1 + 56);
      if ( v5 )
      {
LABEL_5:
        *(_QWORD *)(v5 + 56) = v6;
        goto LABEL_6;
      }
      goto LABEL_17;
    }
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 56);
    v4 = *(_QWORD *)(a1 + 64);
    if ( v3 )
      goto LABEL_4;
  }
  result[1] = v4;
  v5 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(a1 + 56);
  if ( v5 )
    goto LABEL_5;
LABEL_17:
  *result = v6;
  if ( !v6 )
    *((_BYTE *)result + 45) = 2;
LABEL_6:
  if ( (a2 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 64) = 0;
    v7 = *result;
    v8 = *result == 0;
    *(_QWORD *)(a1 + 56) = *result;
    if ( v8 )
    {
      v8 = *((_BYTE *)result + 44) == 0;
      result[1] = a1;
      if ( !v8 )
        *((_BYTE *)result + 45) = 1;
    }
    else
    {
      *(_QWORD *)(v7 + 64) = a1;
    }
    v8 = result[2] == 0;
    *result = a1;
    if ( v8 && (*(_BYTE *)(a1 + 52) & 8) == 0 )
      result[2] = a1;
  }
  return result;
}
