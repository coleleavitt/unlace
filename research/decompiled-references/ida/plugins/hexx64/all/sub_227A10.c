char __fastcall sub_227A10(__int64 a1, unsigned __int64 *a2, int *a3, __int64 a4, double a5)
{
  char result; // al
  __int64 v10; // rdi
  signed __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rsi
  int v14; // r8d
  int v15; // r9d
  int v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  _QWORD *v20; // r10
  __int64 v21; // r10
  unsigned __int64 v22; // r11

  result = sub_227740(a1, *a2, *a3, a5);
  if ( result )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v11 = *(_QWORD *)(a4 + 144);
    v12 = *a2;
    if ( *(_QWORD *)(v10 + 24) < (unsigned __int64)v11 || (result = 0, v11 <= (__int64)v12) )
    {
      v13 = *(_QWORD **)(a1 + 16);
      v14 = *a3;
      v15 = v12;
      v16 = *a3 + v12;
      if ( (*v13 & 2) != 0 )
      {
        v17 = (_QWORD *)v13[2];
      }
      else
      {
        v20 = (_QWORD *)v13[1];
        if ( (*(_BYTE *)v20 & 2) != 0 )
        {
          v17 = (_QWORD *)(*v13 & 0xFFFFFFFFFFFFFFFCLL);
          v21 = *v17;
          if ( (*v17 & 2) == 0 )
          {
            while ( (_QWORD *)v17[1] == v13 )
            {
              v22 = v21 & 0xFFFFFFFFFFFFFFFCLL;
              v21 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v21 & 2) != 0 )
              {
                v17 = (_QWORD *)v22;
                break;
              }
              v13 = v17;
              v17 = (_QWORD *)v22;
            }
          }
        }
        else
        {
          do
          {
            v17 = v20;
            v20 = (_QWORD *)v20[2];
          }
          while ( (*(_BYTE *)v20 & 2) == 0 );
        }
      }
      v18 = v17[3] + v17[4];
      if ( v12 >= *(_QWORD *)(v10 + 24) )
      {
        v12 = *(_QWORD *)(v10 + 24);
        v15 = v12;
      }
      *a2 = v12;
      if ( v16 < v18 )
        v16 = v18;
      v19 = v16 - v15;
      *a3 = v19;
      return v14 < v19;
    }
  }
  return result;
}

