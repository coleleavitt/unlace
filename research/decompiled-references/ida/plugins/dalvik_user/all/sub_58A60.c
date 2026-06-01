__int64 __fastcall sub_58A60(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  _BYTE *v4; // r14
  _BYTE *v5; // rax
  int v6; // edx
  const char *v7; // rdx
  char v8; // cl

  v3 = a2 + a3;
  sub_13630();
  v4 = (_BYTE *)(a2 + (int)qsnprintf());
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
      if ( (unsigned __int64)v4 >= v3 )
      {
        if ( under_debugger )
          goto LABEL_22;
        interr();
LABEL_20:
        if ( !under_debugger )
        {
          interr();
          return sub_58E10(3297);
        }
LABEL_22:
        BUG();
      }
      v5 = v4 + 1;
      *v4 = 32;
      if ( (unsigned __int64)(v4 + 1) >= v3 )
      {
        *(_BYTE *)(v3 - 1) = 0;
        v5 = (_BYTE *)(v3 - 1);
      }
      v6 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
      if ( (unsigned int)(v6 - 9) > 1 && v6 != 3 )
        goto LABEL_20;
      v7 = nptr;
      if ( *(_QWORD *)(a1 + 32) )
        v7 = *(const char **)(a1 + 24);
      if ( (_BYTE *)(v3 - 1) == v5 )
      {
LABEL_17:
        *(_BYTE *)(v3 - 1) = 0;
      }
      else
      {
        while ( 1 )
        {
          v8 = *v7++;
          *v5 = v8;
          if ( !v8 )
            break;
          if ( ++v5 == (_BYTE *)(v3 - 1) )
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

