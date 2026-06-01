__int64 __fastcall sub_7D00(__int64 a1, unsigned int a2)
{
  unsigned __int64 *v2; // rax
  __int64 result; // rax
  __int64 v4; // rbp
  char v5; // al
  bool v6; // dl
  int v7; // [rsp+0h] [rbp-194h] BYREF
  __int64 v8; // [rsp+4h] [rbp-190h] BYREF
  __int128 v9; // [rsp+Ch] [rbp-188h] BYREF
  __int64 v10; // [rsp+1Ch] [rbp-178h]
  __int64 v11; // [rsp+24h] [rbp-170h]
  __int64 v12; // [rsp+2Ch] [rbp-168h]
  char v13; // [rsp+34h] [rbp-160h] BYREF
  unsigned __int16 v14; // [rsp+3Ah] [rbp-15Ah]
  __int64 v15; // [rsp+44h] [rbp-150h]
  unsigned __int16 v16; // [rsp+62h] [rbp-132h]
  __int64 v17; // [rsp+6Ch] [rbp-128h]
  __int64 v18; // [rsp+94h] [rbp-100h]
  unsigned __int64 v19; // [rsp+174h] [rbp-20h] BYREF

  v19 = __readfsqword(0x28u);
  v2 = (unsigned __int64 *)&v13;
  v9 = -1;
  v10 = -1;
  v11 = 0;
  v12 = 0;
  do
  {
    *(_WORD *)v2 = 0;
    v2 += 5;
    *((_WORD *)v2 - 19) = 0;
    *((_WORD *)v2 - 18) = 0;
    *((_DWORD *)v2 - 2) = 0;
    *((_WORD *)v2 - 17) = 0;
    *((_OWORD *)v2 - 2) = 0;
    *(v2 - 2) = 0;
  }
  while ( &v19 != v2 );
  if ( (int)decode_insn(&v9, a1) > 0 )
  {
    if ( (unsigned __int16)(v11 - 41) <= 2u )
      return v15;
    if ( dbg )
    {
      if ( *(_DWORD *)(dbg + 16) == 15 && (unsigned int)sub_7280(dbg, 32, &v8, 0.0) == 1 )
      {
        v4 = v8;
        if ( v8 )
        {
          if ( (unsigned __int16)v11 <= 0x38u )
          {
            if ( (unsigned __int16)v11 > 0x32u
              && (*(unsigned __int8 (__fastcall **)(int *, _QWORD, _QWORD))(v8 + 40))(&v7, a2, (unsigned int)v14 - 2)
              && (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v4 + 40))(
                   &v8,
                   a2,
                   (unsigned int)v16 - 2) )
            {
              result = v18;
              goto LABEL_20;
            }
          }
          else if ( (unsigned __int16)(v11 - 57) <= 5u )
          {
            v5 = (*(__int64 (__fastcall **)(int *, _QWORD, _QWORD))(v8 + 40))(&v7, a2, (unsigned int)v14 - 2);
            LODWORD(v8) = 0;
            if ( v5 )
            {
              result = v17;
LABEL_20:
              switch ( (__int16)v11 )
              {
                case '3':
                case '9':
                  v6 = v7 == (_DWORD)v8;
                  goto LABEL_22;
                case '4':
                case ':':
                  v6 = v7 != (_DWORD)v8;
                  goto LABEL_22;
                case '5':
                case ';':
                  v6 = v7 < (int)v8;
                  goto LABEL_22;
                case '6':
                case '<':
                  v6 = v7 >= (int)v8;
                  goto LABEL_22;
                case '7':
                case '=':
                  v6 = v7 > (int)v8;
                  goto LABEL_22;
                case '8':
                case '>':
                  v6 = v7 <= (int)v8;
LABEL_22:
                  if ( !v6 )
                    return -1;
                  return result;
                default:
                  return result;
              }
            }
          }
        }
      }
    }
  }
  return -1;
}

