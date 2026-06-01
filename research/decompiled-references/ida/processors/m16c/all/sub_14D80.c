unsigned __int64 __fastcall sub_14D80(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  int v3; // edx
  unsigned __int64 v4; // rbp
  unsigned int v5; // ecx
  int v6; // esi
  int v7; // edi
  unsigned int v8; // eax
  int v9; // edx
  __int16 v10; // cx
  unsigned int v11; // eax
  char v12; // dl
  unsigned __int8 v13; // cl
  unsigned int *v14; // rsi

  result = get_func();
  if ( result )
  {
    v3 = *(unsigned __int16 *)(a2 + 24);
    v4 = result;
    if ( (_WORD)v3 != 4 )
    {
      switch ( (__int16)v3 )
      {
        case '-':
          add_auto_stkpnt();
          add_frame();
          *(_QWORD *)(v4 + 16) |= 0x10uLL;
          return update_func();
        case '[':
        case '^':
          v14 = (unsigned int *)sub_CCA0(a1, *(_BYTE *)(a2 + 28));
          if ( v14[1] == 1 )
            sub_E7E0(a1, v14);
          return add_auto_stkpnt();
        case '\\':
        case '`':
          result = *(unsigned int *)(a1 + 4328);
          v10 = *(_WORD *)(a2 + 46);
          if ( (unsigned int)result > 5 )
          {
            if ( (_DWORD)result == 6 )
              return add_auto_stkpnt();
          }
          else if ( (unsigned int)result > 3 )
          {
            if ( v10 == 30 )
              return result;
            return add_auto_stkpnt();
          }
          if ( v10 != 30 )
            return add_auto_stkpnt();
          return result;
        case ']':
        case 'a':
          v5 = *(_DWORD *)(a1 + 4328);
          v6 = *(unsigned __int16 *)(a2 + 48);
          if ( v5 > 5 )
          {
            v11 = 0;
            v12 = 0;
            if ( v5 == 6 )
            {
              do
              {
                v13 = _bittest(&v6, v11++);
                v12 += 4 * v13;
              }
              while ( v11 != 9 );
              return add_auto_stkpnt();
            }
            v7 = 2;
          }
          else
          {
            v7 = v5 < 4 ? 2 : 4;
          }
          v8 = 0;
          v9 = 0;
          do
          {
            for ( LOBYTE(v5) = _bittest(&v6, v8); !(v8 >> 2); LOBYTE(v5) = _bittest(&v6, v8) )
            {
              ++v8;
              v5 = v7 & -v5;
              v9 += v5;
            }
            ++v8;
            v9 += 2 * v5;
          }
          while ( v8 != 8 );
          break;
        case '_':
          return add_auto_stkpnt();
        default:
          return (unsigned int)(v3 - 45);
      }
      return add_auto_stkpnt();
    }
    result = *(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL;
    if ( result == 0x1E000000000100LL )
      return add_auto_stkpnt();
  }
  return result;
}

