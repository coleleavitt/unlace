__int64 __fastcall sub_C46E0(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rsi
  _QWORD *v5; // rdx
  _QWORD **v6; // rsi
  _QWORD *v7; // rax

  if ( (*a2 & 0x3000000000000FFLL) == 0xA7 )
  {
    v3 = a1[5];
    if ( *(_QWORD *)(v3 + 16) == a2[8] )
    {
      v4 = a2 + 8;
      if ( v4 )
      {
        v5 = *(_QWORD **)(*a1 + 400LL);
        if ( v5 )
        {
          if ( v4 == (_QWORD *)*v5 )
          {
            v6 = (_QWORD **)(*a1 + 400LL);
            v7 = *v6;
LABEL_12:
            if ( v3 )
            {
              *v6 = (_QWORD *)v7[3];
              v7[3] = *(_QWORD *)v3;
              *(_QWORD *)v3 = v7;
              ++*(_DWORD *)(v3 + 8);
            }
          }
          else
          {
            while ( 1 )
            {
              v7 = (_QWORD *)v5[3];
              if ( !v7 )
                break;
              if ( v4 == (_QWORD *)*v7 )
              {
                v6 = (_QWORD **)(v5 + 3);
                goto LABEL_12;
              }
              v5 = (_QWORD *)v5[3];
            }
          }
        }
      }
    }
  }
  return 0;
}
