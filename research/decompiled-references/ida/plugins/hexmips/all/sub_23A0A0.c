__int64 __fastcall sub_23A0A0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbp
  const char *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rax
  _QWORD **v8; // r13
  _QWORD *v9; // rbx
  __int64 v10; // [rsp+0h] [rbp-58h] BYREF
  int v11; // [rsp+8h] [rbp-50h]
  unsigned __int64 v12; // [rsp+18h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  if ( *((_DWORD *)a2 + 2) == 61 )
  {
    v3 = a2[3];
    if ( (unsigned __int8)is_stroff() )
    {
      v5 = s1;
      if ( *(_QWORD *)(v3 + 24) )
        v5 = *(const char **)(v3 + 16);
      if ( (unsigned __int8)sub_260F90(0, v5, *(_QWORD *)v3) )
      {
        v6 = *a2;
        v11 = *(char *)(v3 + 12);
        v7 = *(_QWORD *)(a1 + 64);
        v10 = v6;
        v8 = *(_QWORD ***)(v7 + 1328);
        if ( *v8 )
        {
          v9 = (_QWORD *)(**v8 & 0xFFFFFFFFFFFFFFFCLL);
          if ( !v9 )
            goto LABEL_15;
          if ( (*(_BYTE *)v9 & 2) == 0 )
          {
            do
            {
              if ( (int)sub_2533C0(&v10) >= 0 )
              {
                if ( (int)sub_2533C0(v9 + 3) >= 0 )
                  goto LABEL_14;
                v9 = (_QWORD *)v9[2];
              }
              else
              {
                v9 = (_QWORD *)v9[1];
              }
            }
            while ( (*(_BYTE *)v9 & 2) == 0 );
            v9 = *v8;
LABEL_14:
            if ( v9 != **(_QWORD ***)(*(_QWORD *)(a1 + 64) + 1328LL) )
LABEL_15:
              *((_BYTE *)v9 + 45) |= 0x20u;
          }
        }
        *(_BYTE *)(v3 + 13) |= 0x20u;
      }
      else
      {
        if ( *(_QWORD *)(v3 + 16) )
        {
          *(_QWORD *)(v3 + 24) = 0;
          qfree();
          *(_QWORD *)(v3 + 16) = 0;
          *(_QWORD *)(v3 + 32) = 0;
        }
        sub_324F00(v3 + 8, *(_QWORD *)(v3 + 40) & 0xFF000000F009FFFFLL);
      }
    }
  }
  return 0;
}

