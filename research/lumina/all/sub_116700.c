__int64 __fastcall sub_116700(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r14d
  int v4; // ebp
  __int64 v5; // rbx
  char v6; // al

  v3 = 0;
  if ( a1 )
  {
    v4 = a3;
    if ( *(_BYTE *)(a1 + 17) )
    {
      sub_CC740(a1);
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
      if ( v5 )
        goto LABEL_11;
LABEL_15:
      v3 = 0;
      goto LABEL_16;
    }
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
    if ( v5 )
    {
      while ( 1 )
      {
LABEL_11:
        if ( v4 && (v6 = *(_BYTE *)(v5 + 1), (v6 & 1) == 0) )
        {
          if ( (*(_BYTE *)v5 & 0xFD) == 0 )
          {
            if ( (v6 & 0x40) != 0 )
            {
              v3 = 2835;
LABEL_21:
              a2 = v3;
              sub_116700(a1, v3, 0);
LABEL_16:
              if ( *(_BYTE *)(a1 + 17) )
              {
                if ( (*(_DWORD *)(a1 + 20))-- == 1 )
                  sub_CC7D0(a1, a2, a3);
              }
              return v3;
            }
            v3 = sub_115EC0(v5, a2);
            if ( v3 )
              goto LABEL_21;
          }
        }
        else
        {
          sub_C91C0(*(_QWORD *)(v5 + 24), a2);
          *(_QWORD *)(v5 + 24) = 0;
          *(_BYTE *)v5 = 4;
          *(_DWORD *)(v5 + 4) = a2;
        }
        if ( *(char *)(v5 + 84) >= 0 )
          sub_CCD80(v5);
        v5 = *(_QWORD *)(v5 + 40);
        if ( !v5 )
          goto LABEL_15;
      }
    }
  }
  return v3;
}
