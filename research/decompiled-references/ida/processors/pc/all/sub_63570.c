__int64 __fastcall sub_63570(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 result; // rax
  char v6; // si
  __int64 v7; // rdx

  v4 = *(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26);
  result = *(unsigned int *)(a1 + 5244);
  if ( (int)result > 0 )
  {
    for ( result = 0; *(_DWORD *)(a1 + 5244) > (int)result; ++result )
    {
      while ( 1 )
      {
        v6 = *(_BYTE *)(a1 + 2 * result + 5226);
        v7 = *(unsigned __int8 *)(a1 + 2 * result + 5225);
        if ( v6 != 1 )
          break;
        *(_QWORD *)(a2 + 40 * v7 + 56) = (unsigned int)(*(_DWORD *)(a2 + 40 * v7 + 56) + v4);
LABEL_5:
        if ( *(_DWORD *)(a1 + 5244) <= (int)++result )
          return result;
      }
      if ( v6 != 2 )
      {
        if ( !v6 )
          *(_QWORD *)(a2 + 40 * v7 + 56) = (unsigned __int16)(v4 + *(_WORD *)(a2 + 40 * v7 + 56));
        goto LABEL_5;
      }
      *(_QWORD *)(a2 + 40 * v7 + 56) += v4;
    }
  }
  return result;
}
