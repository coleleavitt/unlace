bool __fastcall sub_37CC50(__int64 a1, int *a2)
{
  int *v3; // rsi
  int **v4; // r13
  int *v5; // rbx

  v3 = *(int **)(a1 + 224);
  if ( v3 != a2 )
  {
    v4 = *(int ***)(a1 + 216);
    if ( *v4 )
    {
      v5 = (int *)(*(_QWORD *)*v4 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !v5 )
        return (unsigned int)sub_329190(v5 + 12, v3) == 0;
      if ( (*(_BYTE *)v5 & 2) == 0 )
      {
        do
        {
          if ( (int)sub_329190(a2, v5 + 6) >= 0 )
          {
            if ( (int)sub_329190(v5 + 6, a2) >= 0 )
              goto LABEL_9;
            v5 = *((int **)v5 + 2);
          }
          else
          {
            v5 = *((int **)v5 + 1);
          }
        }
        while ( (*(_BYTE *)v5 & 2) == 0 );
        v5 = *v4;
LABEL_9:
        if ( v5 != **(int ***)(a1 + 216) )
        {
          v3 = *(int **)(a1 + 224);
          return (unsigned int)sub_329190(v5 + 12, v3) == 0;
        }
      }
    }
  }
  return 0;
}

