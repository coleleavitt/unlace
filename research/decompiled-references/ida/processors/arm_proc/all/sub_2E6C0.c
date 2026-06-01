__int64 __fastcall sub_2E6C0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // r13d
  __int64 v6; // rcx
  __int64 v7; // rdx
  char v8; // al
  _QWORD *v9; // r10
  __int64 v10; // rdx
  _QWORD *v11; // rax
  unsigned __int64 *v13; // rax
  __int64 v14; // rdi
  _QWORD *i; // rdx
  _QWORD *v16; // [rsp+0h] [rbp-1F0h]
  unsigned __int8 v17; // [rsp+0h] [rbp-1F0h]
  _QWORD *v19; // [rsp+10h] [rbp-1E0h] BYREF
  __int128 v20; // [rsp+18h] [rbp-1D8h]
  char v21; // [rsp+28h] [rbp-1C8h]
  __int64 v22; // [rsp+30h] [rbp-1C0h] BYREF
  __int128 v23; // [rsp+38h] [rbp-1B8h]
  char v24; // [rsp+48h] [rbp-1A8h]
  __int128 v25; // [rsp+50h] [rbp-1A0h]
  __int64 v26; // [rsp+60h] [rbp-190h]
  __int64 v27; // [rsp+68h] [rbp-188h]
  __int64 v28; // [rsp+70h] [rbp-180h]
  _BYTE v29[6]; // [rsp+78h] [rbp-178h] BYREF
  unsigned __int16 v30; // [rsp+7Eh] [rbp-172h]
  char v31; // [rsp+A1h] [rbp-14Fh]
  unsigned __int16 v32; // [rsp+A6h] [rbp-14Ah]
  char v33; // [rsp+C9h] [rbp-127h]
  __int64 v34; // [rsp+E0h] [rbp-110h]
  char v35; // [rsp+E9h] [rbp-107h]
  unsigned __int64 v36; // [rsp+1B8h] [rbp-38h] BYREF

  v36 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a4 + 33) )
    return 0;
  if ( *(_QWORD *)(a4 + 24) )
    return 0;
  v6 = a3;
  LOBYTE(v4) = a3 == 13 || a3 == 161;
  if ( (_BYTE)v4 )
  {
    return 0;
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 16);
    v19 = nullptr;
    v21 = 0;
    v20 = 0;
    v8 = sub_81F70(a1, &v19, v7, v6, 0, 0);
    v9 = v19;
    if ( v8 )
    {
      if ( (unsigned __int8)(v21 - 10) <= 1u )
      {
        v10 = *v19;
        if ( (_QWORD)v20 == 1 || (v11 = v19 + 3, 24LL * (_QWORD)v20 == 24) )
        {
LABEL_10:
          if ( v10 != -1 )
          {
            v16 = v19;
            v4 = sub_22260(a1, (__int64)v19);
            if ( (_BYTE)v4 )
            {
              sub_2D9A0(a1, a2, 0, 0, *(_QWORD *)(a4 + 8), (__int64)&v19, 1, 0);
              sub_22A80(a1, a2, (__int64)&v19, *(_QWORD *)(a4 + 8));
            }
            else if ( *((_WORD *)v16 + 8) == 14 )
            {
              v13 = (unsigned __int64 *)v29;
              v26 = -1;
              v27 = 0;
              v28 = 0;
              v25 = -1;
              do
              {
                *(_WORD *)v13 = 0;
                v13 += 5;
                *((_WORD *)v13 - 19) = 0;
                *((_WORD *)v13 - 18) = 0;
                *((_DWORD *)v13 - 2) = 0;
                *((_WORD *)v13 - 17) = 0;
                *((_OWORD *)v13 - 2) = 0;
                *(v13 - 2) = 0;
              }
              while ( v13 != &v36 );
              if ( (unsigned int)decode_insn()
                && (_WORD)v27 == 14
                && v29[1] == 1
                && a3 == v30
                && v31 == 1
                && v33 == 5
                && !v35
                && v34 == 12 )
              {
                v22 = 0;
                v24 = 0;
                v23 = 0;
                v17 = sub_81F70(a1, &v22, v26, v32, 0, 0);
                if ( v17 )
                {
                  v14 = v22;
                  if ( (unsigned __int8)(v24 - 10) <= 1u )
                  {
                    if ( (_QWORD)v23 != 1 )
                    {
                      for ( i = (_QWORD *)(v22 + 24); i != (_QWORD *)(v22 + 24 * v23); i += 3 )
                      {
                        if ( *(_QWORD *)v22 != *i )
                          goto LABEL_43;
                      }
                    }
                    if ( (*(_BYTE *)(v22 + 18) & 0x20) != 0 )
                    {
                      get_flags_ex();
                      if ( !(unsigned __int8)is_defarg() )
                        op_offset();
                      get_flags_ex();
                      if ( !(unsigned __int8)is_defarg() )
                        op_offset();
                      v4 = v17;
                      v14 = v22;
                    }
                  }
                }
                else
                {
                  v14 = v22;
                  v4 = 0;
                }
LABEL_43:
                if ( v14 )
                {
                  *(_QWORD *)&v23 = 0;
                  qfree();
                }
              }
            }
            v9 = v19;
          }
        }
        else
        {
          while ( *v11 == v10 )
          {
            v11 += 3;
            if ( v11 == &v19[3 * (_QWORD)v20] )
              goto LABEL_10;
          }
        }
      }
    }
    else
    {
      v4 = 0;
    }
    if ( v9 )
    {
      *(_QWORD *)&v20 = 0;
      qfree();
    }
  }
  return v4;
}

