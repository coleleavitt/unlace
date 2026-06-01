bool __fastcall sub_384550(__int64 a1, int *a2, double a3)
{
  int *v4; // rsi
  int **v5; // r13
  int *v6; // rbx

  v4 = *(int **)(a1 + 224);
  if ( v4 != a2 )
  {
    v5 = *(int ***)(a1 + 216);
    if ( *v5 )
    {
      v6 = (int *)(*(_QWORD *)*v5 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !v6 )
        return (unsigned int)sub_3307E0(v6 + 12, v4, a3) == 0;
      if ( (*(_BYTE *)v6 & 2) == 0 )
      {
        do
        {
          if ( (int)sub_3307E0(a2, v6 + 6, a3) >= 0 )
          {
            if ( (int)sub_3307E0(v6 + 6, a2, a3) >= 0 )
              goto LABEL_9;
            v6 = *((int **)v6 + 2);
          }
          else
          {
            v6 = *((int **)v6 + 1);
          }
        }
        while ( (*(_BYTE *)v6 & 2) == 0 );
        v6 = *v5;
LABEL_9:
        if ( v6 != **(int ***)(a1 + 216) )
        {
          v4 = *(int **)(a1 + 224);
          return (unsigned int)sub_3307E0(v6 + 12, v4, a3) == 0;
        }
      }
    }
  }
  return 0;
}

