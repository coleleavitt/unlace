__int64 __fastcall sub_20820(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r13
  _BYTE *v5; // r14
  _BYTE *v6; // rax
  int v7; // edx
  const char *v8; // rdx
  char v9; // cl

  v4 = a2 + a3;
  sub_EE20();
  v5 = (_BYTE *)(a2 + (int)qsnprintf());
  switch ( *(_DWORD *)(a1 + 20) & 0xFFFFFFF )
  {
    case 1:
    case 7:
    case 8:
    case 0xB:
      qsnprintf();
      goto LABEL_15;
    case 2:
    case 4:
    case 5:
      qsnprintf();
      goto LABEL_15;
    case 3:
    case 9:
    case 0xA:
      if ( (unsigned __int64)v5 >= v4 )
      {
        if ( under_debugger )
          goto LABEL_22;
        interr();
LABEL_20:
        if ( !under_debugger )
        {
          interr();
          return sub_20BD0(3297, a3);
        }
LABEL_22:
        BUG();
      }
      v6 = v5 + 1;
      *v5 = 32;
      if ( (unsigned __int64)(v5 + 1) >= v4 )
      {
        *(_BYTE *)(v4 - 1) = 0;
        v6 = (_BYTE *)(v4 - 1);
      }
      v7 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
      if ( (unsigned int)(v7 - 9) > 1 && v7 != 3 )
        goto LABEL_20;
      v8 = s1;
      if ( *(_QWORD *)(a1 + 32) )
        v8 = *(const char **)(a1 + 24);
      if ( (_BYTE *)(v4 - 1) == v6 )
      {
LABEL_17:
        *(_BYTE *)(v4 - 1) = 0;
      }
      else
      {
        while ( 1 )
        {
          v9 = *v8++;
          *v6 = v9;
          if ( !v9 )
            break;
          if ( ++v6 == (_BYTE *)(v4 - 1) )
            goto LABEL_17;
        }
      }
LABEL_15:
      qsnprintf();
      return a2;
    default:
      goto LABEL_15;
  }
}

