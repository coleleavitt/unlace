__int64 __fastcall sub_CF240(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rdx
  __int64 v4; // rdx
  _QWORD **v5; // rcx
  _QWORD *v6; // rax

  if ( (*a2 & 0x40000000FFLL) == 0x4000000075LL )
  {
    if ( a2 )
    {
      v3 = *(_QWORD **)(*a1 + 400LL);
      if ( v3 )
      {
        if ( a2 == (_QWORD *)*v3 )
        {
          v5 = (_QWORD **)(*a1 + 400LL);
          v6 = *v5;
LABEL_11:
          v4 = a1[5];
          if ( v4 )
          {
            *v5 = (_QWORD *)v6[3];
            v6[3] = *(_QWORD *)v4;
            *(_QWORD *)v4 = v6;
            ++*(_DWORD *)(v4 + 8);
          }
        }
        else
        {
          while ( 1 )
          {
            v6 = (_QWORD *)v3[3];
            if ( !v6 )
              break;
            if ( a2 == (_QWORD *)*v6 )
            {
              v5 = (_QWORD **)(v3 + 3);
              goto LABEL_11;
            }
            v3 = (_QWORD *)v3[3];
          }
        }
      }
    }
  }
  return 0;
}
