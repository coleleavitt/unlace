__int64 __fastcall sub_D4F0(__int64 a1, __int64 a2, int *a3)
{
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rsi
  _DWORD *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // [rsp+10h] [rbp-58h] BYREF
  __int64 v12; // [rsp+18h] [rbp-50h]
  unsigned __int64 v13; // [rsp+28h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  if ( !a2 )
  {
    v11 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 154LL);
    netnode_supset();
    return 0;
  }
  if ( a2 == 30 )
  {
    v5 = *a3;
    if ( (unsigned int)*a3 > 0x2F )
    {
      v9 = *((_QWORD *)a3 + 1) + 8LL;
      *((_QWORD *)a3 + 1) = v9;
    }
    else
    {
      v6 = *((_QWORD *)a3 + 2);
      *a3 = v5 + 8;
      if ( (unsigned int)(v5 + 8) <= 0x2F )
      {
        *a3 = v5 + 16;
        if ( (unsigned int)(v5 + 16) <= 0x2F )
        {
          v7 = (unsigned int)(v5 + 24);
          *a3 = v7;
          if ( (unsigned int)v7 <= 0x2F )
          {
            v8 = (_DWORD *)(v7 + v6);
            *a3 = v5 + 32;
LABEL_9:
            if ( !*v8 )
            {
              ea2node();
              ea2node();
              netnode_altshift();
              if ( netnode_supfirst() != -1 )
              {
                do
                {
                  node2ea();
                  v12 = 0;
                  sub_D400((__int64)&v11);
                  if ( (unsigned int)v11 <= 1 )
                  {
                    v12 = correct_address();
                    sub_D280(&v11);
                  }
                }
                while ( netnode_supnext() != -1 );
              }
            }
            return 0;
          }
          v8 = *((_DWORD **)a3 + 1);
LABEL_19:
          *((_QWORD *)a3 + 1) = v8 + 2;
          goto LABEL_9;
        }
        v10 = *((_QWORD *)a3 + 1);
LABEL_18:
        v8 = (_DWORD *)(v10 + 8);
        *((_QWORD *)a3 + 1) = v10 + 8;
        goto LABEL_19;
      }
      v9 = *((_QWORD *)a3 + 1);
    }
    v10 = v9 + 8;
    *((_QWORD *)a3 + 1) = v9 + 8;
    goto LABEL_18;
  }
  return 0;
}

