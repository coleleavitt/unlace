__int64 __fastcall sub_F340(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  char v4; // al
  unsigned __int16 v7; // r13
  unsigned __int64 *v8; // rax
  __int64 v9; // rax
  char v10; // dl
  char v12; // dl
  int v13; // edx
  __int128 v14; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v15; // [rsp+20h] [rbp-198h]
  __int64 v16; // [rsp+28h] [rbp-190h]
  __int64 v17; // [rsp+30h] [rbp-188h]
  _BYTE v18[8]; // [rsp+38h] [rbp-180h] BYREF
  __int64 v19; // [rsp+40h] [rbp-178h]
  char v20; // [rsp+61h] [rbp-157h]
  __int16 v21; // [rsp+66h] [rbp-152h]
  unsigned __int64 v22; // [rsp+178h] [rbp-40h] BYREF

  v4 = *(_BYTE *)(a4 + 1);
  v22 = __readfsqword(0x28u);
  if ( v4 != 5 )
  {
    switch ( v4 )
    {
      case 1:
        goto LABEL_6;
      case 4:
        if ( *(_BYTE *)(a4 + 32) <= 1u )
          goto LABEL_6;
        break;
      case 3:
      case 9:
LABEL_6:
        v7 = *(_WORD *)(a4 + 6);
        v15 = -1;
        v8 = (unsigned __int64 *)v18;
        v14 = -1;
        v16 = 0;
        v17 = 0;
        do
        {
          *(_WORD *)v8 = 0;
          v8 += 5;
          *((_WORD *)v8 - 19) = 0;
          *((_WORD *)v8 - 18) = 0;
          *((_DWORD *)v8 - 2) = 0;
          *((_WORD *)v8 - 17) = 0;
          *((_OWORD *)v8 - 2) = 0;
          *(v8 - 2) = 0;
        }
        while ( &v22 != v8 );
        while ( ((get_flags_ex() & 0x1000) == 0 || get_first_cref_to() == -1) && decode_prev_insn() != -1 )
        {
          if ( (_WORD)v16 == 54 && v18[1] == 5 && v20 == 1 && v21 == v7 )
          {
            v9 = v19;
            *a2 = v19;
            v10 = *(_BYTE *)(a4 + 1);
            if ( v10 == 3 )
            {
              v12 = *(_BYTE *)(a4 + 32);
              if ( v12 == 17 )
              {
                *a2 = v9 + 1;
              }
              else if ( v12 == 16 )
              {
                *a2 = v9 - 1;
              }
            }
            else if ( v10 == 4 )
            {
              if ( *(_BYTE *)(a4 + 32) == 1 )
              {
                v13 = *(_DWORD *)(a3 + 28);
                if ( v13 == 3 )
                {
                  v9 *= 4;
                  *a2 = v9;
                }
                else if ( v13 == 2 )
                {
                  v9 *= 2;
                  *a2 = v9;
                }
              }
              *a2 = *(_QWORD *)(a4 + 16) + v9;
            }
            return 1;
          }
          if ( (unsigned __int8)sub_ED60(a1, (__int64)&v14, v7) )
            return 0;
        }
        break;
    }
    return 0;
  }
  *a2 = *(_QWORD *)(a4 + 8);
  return 1;
}

