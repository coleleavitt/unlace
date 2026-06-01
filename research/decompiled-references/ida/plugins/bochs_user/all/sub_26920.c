__int64 __fastcall sub_26920(__int64 a1, __int64 a2, _DWORD *a3, char a4)
{
  unsigned int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // r13d
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  __int128 v14; // [rsp+8h] [rbp-40h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v13 = 0;
  v14 = 0;
  v6 = sub_266F0(a1, (__int64)"blist\n", 9);
  v7 = 0;
  v8 = v6;
  if ( !v6 )
  {
    v10 = sub_2B0C0(a1 + 16, *(_QWORD *)(a1 + 72), &v13);
    v7 = v13;
    v8 = v10;
    if ( !v10 )
    {
      v11 = v13 + 16 * v14;
      if ( 16LL * (_QWORD)v14 )
      {
        v12 = v13;
        while ( 1 )
        {
          if ( (a4 & 4) != 0 )
            goto LABEL_16;
LABEL_12:
          if ( (a4 & 1) != 0 )
          {
            while ( *(_BYTE *)(v12 + 14) != *(_BYTE *)(a2 + 14) )
            {
              v12 += 16;
              if ( v12 == v11 )
                goto LABEL_18;
              if ( (a4 & 4) != 0 )
              {
LABEL_16:
                while ( *(_QWORD *)v12 != *(_QWORD *)a2 )
                {
                  v12 += 16;
                  if ( v12 == v11 )
                    goto LABEL_18;
                }
                goto LABEL_12;
              }
            }
          }
          if ( (a4 & 2) == 0 || *(_WORD *)(v12 + 12) == *(_WORD *)(a2 + 12) )
            break;
          v12 += 16;
          if ( v12 == v11 )
            goto LABEL_18;
        }
        if ( a3 )
          *a3 = *(_DWORD *)(v12 + 8);
      }
      else
      {
LABEL_18:
        v8 = 5;
      }
    }
  }
  if ( v7 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  return v8;
}

