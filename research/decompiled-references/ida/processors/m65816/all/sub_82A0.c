unsigned __int64 __fastcall sub_82A0(__int64 a1)
{
  int v1; // eax
  _BOOL4 v2; // eax
  int v3; // eax
  int v4; // eax
  _BYTE v6[22]; // [rsp+0h] [rbp-428h]
  unsigned __int64 v7; // [rsp+408h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  *(_DWORD *)a1 = netnode_hashval_long();
  *(_DWORD *)(a1 + 4) = netnode_hashval_long();
  *(_BYTE *)(a1 + 8) = netnode_hashval_long() != 0;
  *(_DWORD *)(a1 + 12) = netnode_hashval_long();
  if ( netnode_hashstr() >= 0 )
  {
    if ( *(_QWORD *)v6 == 0x6D726F4E65707954LL )
    {
      v1 = 0;
      if ( *(_DWORD *)&v6[7] == 7102829 )
      {
LABEL_12:
        *(_DWORD *)(a1 + 16) = v1;
        goto LABEL_13;
      }
    }
    else if ( *(_QWORD *)v6 == 0x5378734265707954LL && *(_QWORD *)&v6[7] == 0x646574746F6C53LL )
    {
      v1 = 1;
      goto LABEL_12;
    }
    if ( *(_QWORD *)v6 != 0x4278734265707954LL || (v1 = 2, *(_DWORD *)&v6[8] != 7565161) )
    {
      if ( *(_QWORD *)v6 == 0x78734265707954LL )
      {
        v1 = 3;
      }
      else if ( *(_QWORD *)&v6[8] ^ 0x426F62727554696DLL | *(_QWORD *)v6 ^ 0x6166755365707954LL
             || (v1 = 4, *(_DWORD *)&v6[16] != 7565161) )
      {
        v1 = 5;
        if ( *(_QWORD *)&v6[8] ^ 0x6F62727554696DLL | *(_QWORD *)v6 ^ 0x6166755365707954LL )
        {
          if ( *(_QWORD *)&v6[8] ^ 0x796F42656D614772LL | *(_QWORD *)v6 ^ 0x6570755365707954LL
            || *(_QWORD *)&v6[14] != 0x736F694231796FLL )
          {
            if ( *(_QWORD *)&v6[8] ^ 0x796F42656D614772LL | *(_QWORD *)v6 ^ 0x6570755365707954LL
              || *(_QWORD *)&v6[14] != 0x736F694232796FLL )
            {
              if ( *(_QWORD *)v6 != 0x656D614765707954LL || (v1 = 8, *(_DWORD *)&v6[8] != 7958338) )
                v1 = 9;
            }
            else
            {
              v1 = 7;
            }
          }
          else
          {
            v1 = 6;
          }
        }
      }
    }
    goto LABEL_12;
  }
LABEL_13:
  if ( netnode_hashstr() >= 0 )
  {
    if ( *(_DWORD *)v6 != 1129534542 || (v2 = 0, v6[4]) )
      v2 = *(_DWORD *)v6 == 4997456;
    *(_DWORD *)(a1 + 20) = v2;
  }
  if ( netnode_hashstr() >= 0 )
  {
    if ( *(_DWORD *)v6 == 1330802508 )
    {
      if ( *(_WORD *)&v6[4] == 77 )
        goto LABEL_30;
    }
    else if ( *(_DWORD *)v6 == 1330800968 )
    {
      v3 = 1;
      if ( *(_WORD *)&v6[4] == 77 )
        goto LABEL_31;
    }
    switch ( *(_QWORD *)v6 )
    {
      case 0x4D4F526F4C7845LL:
        v3 = 2;
        goto LABEL_31;
      case 0x4D4F5269487845LL:
        v3 = 3;
        goto LABEL_31;
      case 0x5258467265707553LL:
        v3 = 4;
        if ( *(_DWORD *)&v6[7] == 5066578 )
          goto LABEL_31;
        break;
    }
    if ( *(_DWORD *)v6 == 1378959699 )
    {
      v3 = 5;
      if ( *(_DWORD *)&v6[3] == 5066578 )
        goto LABEL_31;
    }
    if ( *(_QWORD *)v6 == 0x5230313137435053LL )
    {
      v3 = 6;
      if ( *(_DWORD *)&v6[7] == 5066578 )
        goto LABEL_31;
    }
    if ( *(_QWORD *)v6 == 0x4D4F526F4C435342LL )
    {
      v3 = 7;
      if ( !v6[8] )
        goto LABEL_31;
    }
    if ( *(_QWORD *)v6 == 0x4D4F526948435342LL )
    {
      v3 = 8;
      if ( !v6[8] )
        goto LABEL_31;
    }
    if ( *(_DWORD *)v6 == 1381520194 )
    {
      v3 = 9;
      if ( *(_DWORD *)&v6[3] == 5066578 )
        goto LABEL_31;
    }
    if ( *(_DWORD *)v6 == 1330795603 )
    {
      v3 = 10;
      if ( *(_WORD *)&v6[4] == 77 )
        goto LABEL_31;
    }
LABEL_30:
    v3 = 0;
LABEL_31:
    *(_DWORD *)(a1 + 24) = v3;
  }
  if ( netnode_hashstr() >= 0 )
  {
    if ( *(_QWORD *)v6 == 0x616D6E5531505344LL )
    {
      if ( *(_QWORD *)&v6[5] == 0x64657070616D6ELL )
      {
LABEL_37:
        v4 = 0;
LABEL_38:
        *(_DWORD *)(a1 + 28) = v4;
        goto LABEL_39;
      }
    }
    else if ( *(_QWORD *)v6 == 0x4F526F4C31505344LL && *(_QWORD *)&v6[5] == 0x424D314D4F526FLL )
    {
      v4 = 1;
      goto LABEL_38;
    }
    if ( *(_QWORD *)v6 == 0x4F526F4C31505344LL && *(_QWORD *)&v6[5] == 0x424D324D4F526FLL )
    {
      v4 = 2;
      goto LABEL_38;
    }
    if ( *(_QWORD *)v6 == 0x4F52694831505344LL )
    {
      v4 = 3;
      if ( *(_WORD *)&v6[8] == 77 )
        goto LABEL_38;
    }
    goto LABEL_37;
  }
LABEL_39:
  *(_BYTE *)(a1 + 32) = netnode_hashval_long() != 0;
  *(_BYTE *)(a1 + 33) = netnode_hashval_long() != 0;
  *(_BYTE *)(a1 + 34) = netnode_hashval_long() != 0;
  *(_BYTE *)(a1 + 35) = netnode_hashval_long() != 0;
  *(_BYTE *)(a1 + 36) = netnode_hashval_long() != 0;
  *(_BYTE *)(a1 + 37) = netnode_hashval_long() != 0;
  *(_BYTE *)(a1 + 38) = netnode_hashval_long() != 0;
  *(_BYTE *)(a1 + 39) = netnode_hashval_long() != 0;
  *(_BYTE *)(a1 + 40) = netnode_hashval_long() != 0;
  *(_BYTE *)(a1 + 41) = netnode_hashval_long() != 0;
  *(_BYTE *)(a1 + 42) = netnode_hashval_long() != 0;
  *(_BYTE *)(a1 + 43) = netnode_hashval_long() != 0;
  *(_BYTE *)(a1 + 44) = netnode_hashval_long() != 0;
  *(_BYTE *)(a1 + 45) = netnode_hashval_long() != 0;
  *(_BYTE *)(a1 + 46) = netnode_hashval_long() != 0;
  *(_BYTE *)(a1 + 47) = netnode_hashval_long() != 0;
  return v7 - __readfsqword(0x28u);
}

