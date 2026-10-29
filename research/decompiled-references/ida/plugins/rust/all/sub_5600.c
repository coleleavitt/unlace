__int64 __fastcall sub_5600(_DWORD *a1, __int64 a2)
{
  char *v2; // rax
  __int64 (__fastcall *v3)(__int64, __int64); // rax
  unsigned __int16 v5; // r14
  __int64 v6; // rbx
  int i; // ebp
  __int64 v8; // rdx
  int v9; // edx
  int v10; // eax
  __int64 v11; // r15
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  int v15; // edx
  __int64 v16; // [rsp+0h] [rbp-1B8h]
  int v17; // [rsp+Ch] [rbp-1ACh]
  __int128 v18; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v19; // [rsp+20h] [rbp-198h]
  __int64 v20; // [rsp+28h] [rbp-190h]
  __int64 v21; // [rsp+30h] [rbp-188h]
  char v22; // [rsp+38h] [rbp-180h] BYREF
  char v23; // [rsp+39h] [rbp-17Fh]
  unsigned __int16 v24; // [rsp+3Eh] [rbp-17Ah]
  __int64 v25; // [rsp+48h] [rbp-170h]
  char v26; // [rsp+58h] [rbp-160h]
  char v27; // [rsp+59h] [rbp-15Fh]
  char v28; // [rsp+61h] [rbp-157h]
  __int16 v29; // [rsp+66h] [rbp-152h]
  __int64 v30; // [rsp+68h] [rbp-150h]
  _QWORD v31[8]; // [rsp+178h] [rbp-40h] BYREF

  v31[0] = __readfsqword(0x28u);
  v2 = &v22;
  v18 = -1;
  v19 = -1;
  v20 = 0;
  v21 = 0;
  do
  {
    *(_WORD *)v2 = 0;
    v2 += 40;
    *((_WORD *)v2 - 19) = 0;
    *((_WORD *)v2 - 18) = 0;
    *((_DWORD *)v2 - 2) = 0;
    *((_WORD *)v2 - 17) = 0;
    *((_OWORD *)v2 - 2) = 0;
    *((_QWORD *)v2 - 2) = 0;
  }
  while ( v31 != (_QWORD *)v2 );
  if ( !(unsigned int)decode_insn(&v18, a2, v31, 0.0) )
    return -1;
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL);
  if ( v3 == sub_5550 )
  {
    if ( (_WORD)v20 != 92 || v23 != 1 )
      return -1;
    v5 = v24;
  }
  else
  {
    v5 = v3((__int64)a1, (__int64)&v18);
  }
  if ( v5 != 0xFFFF )
  {
    v6 = v19;
    if ( a1[16] - 1 > 0 )
    {
      for ( i = 0; i < a1[16] - 1; ++i )
      {
        v6 += WORD1(v20);
        if ( (get_flags_ex(v6, 4) & 0x10000) == 0
          || get_first_fcref_from(v6) != -1
          || !(unsigned int)decode_insn(&v18, v6, v8, 0.0) )
        {
          return -1;
        }
        if ( (_WORD)v20 == 122 && (unsigned __int8)(v23 - 2) <= 2u )
        {
          if ( v26 )
          {
            if ( (v20 & 0x1000000000LL) != 0 )
            {
              if ( (v21 & 0x200) == 0 && (v27 & 0x38) == 0x20 )
              {
                if ( v23 != 2 )
                {
                  v14 = v27 & 7;
                  if ( (v21 & 0x100) != 0 )
                    v14 = v27 & 7 | 8;
                  v17 = v14;
                  goto LABEL_29;
                }
                goto LABEL_63;
              }
            }
            else if ( (v27 & 0x38) == 0x20 )
            {
              if ( v23 != 2 )
              {
                v17 = v27 & 7;
                goto LABEL_29;
              }
              goto LABEL_63;
            }
            continue;
          }
          v9 = WORD2(v20) & 0x1018;
          v10 = v24;
          if ( v9 != 4096 && v9 != 8 )
            goto LABEL_28;
          if ( v24 > 3u )
          {
            if ( (unsigned __int16)(v24 - 4) <= 3u )
            {
              v10 = dword_7300[v24];
LABEL_28:
              v17 = v10;
              goto LABEL_29;
            }
            while ( 1 )
            {
              sub_55A0();
LABEL_63:
              v17 = -1;
LABEL_29:
              if ( v28 != 1 || v5 != v29 )
                goto LABEL_12;
              v11 = v19 + WORD1(v20);
              if ( (get_flags_ex(v11, 4) & 0x10000) == 0 )
                return -1;
              v16 = v25;
              if ( (int)decode_insn(&v18, v11, v12, 0.0) <= 0 || (_WORD)v20 != 122 || (unsigned __int8)(v23 - 2) > 2u )
                goto LABEL_12;
              if ( v26 )
                break;
              v15 = WORD2(v20) & 0x1018;
              v13 = v24;
              if ( v15 != 4096 && v15 != 8 )
                goto LABEL_40;
              if ( v24 <= 3u )
                goto LABEL_12;
              if ( (unsigned __int16)(v24 - 4) <= 3u )
              {
                v13 = dword_7300[v24];
                goto LABEL_40;
              }
            }
            if ( (v20 & 0x1000000000LL) != 0 )
            {
              if ( (v21 & 0x200) != 0 || (v27 & 0x38) != 0x20 )
                continue;
              if ( v23 == 2 )
              {
LABEL_64:
                v13 = -1;
                goto LABEL_40;
              }
              v13 = v27 & 7 | 8;
              if ( (v21 & 0x100) == 0 )
                v13 = v27 & 7;
            }
            else
            {
              if ( (v27 & 0x38) != 0x20 )
                continue;
              if ( v23 == 2 )
                goto LABEL_64;
              v13 = v27 & 7;
            }
LABEL_40:
            if ( v17 == v13 && v28 == 5 && v25 == v16 + 8 )
              return v30;
          }
        }
LABEL_12:
        ;
      }
    }
  }
  return -1;
}

