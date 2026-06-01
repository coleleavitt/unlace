__int64 __fastcall sub_12350(__int64 a1, FILE *a2)
{
  int v3; // ebx
  int v5; // ecx
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rdx
  unsigned int v9; // eax
  char v10; // si
  char v11; // cl
  int v12; // edi
  int v13; // r11d
  __int16 v14; // cx
  int v15; // esi
  int v16; // ebp
  unsigned int v17; // edi
  bool v18; // zf
  int v19; // r15d
  int v20; // r13d
  int v21; // ecx
  __int64 v22; // rax
  unsigned int v23; // ebx
  unsigned __int16 v24; // r10
  __int64 v25; // rbp
  unsigned __int16 v26; // ax
  const char *v27; // rdx
  char *v28; // r9
  __int64 (__fastcall **v29)(); // rax
  int v30; // eax
  __int64 v31; // rax
  int v32; // r13d
  const char *v33; // r8
  int v34; // ebx
  unsigned int v35; // r8d
  __int64 v37; // rcx
  int v38; // ebp
  int v39; // eax
  FILE *stream; // [rsp+10h] [rbp-498h]
  unsigned __int16 v41; // [rsp+1Eh] [rbp-48Ah]
  unsigned __int16 v42; // [rsp+20h] [rbp-488h]
  unsigned __int16 v43; // [rsp+20h] [rbp-488h]
  char v44; // [rsp+25h] [rbp-483h]
  unsigned __int16 v45; // [rsp+26h] [rbp-482h]
  int v46; // [rsp+28h] [rbp-480h]
  int v47; // [rsp+2Ch] [rbp-47Ch]
  __int16 v48; // [rsp+36h] [rbp-472h] BYREF
  __int16 v49; // [rsp+38h] [rbp-470h] BYREF
  __int16 v50; // [rsp+3Ah] [rbp-46Eh] BYREF
  unsigned __int16 v51; // [rsp+3Ch] [rbp-46Ch] BYREF
  __int16 v52; // [rsp+3Eh] [rbp-46Ah] BYREF
  __int64 v53; // [rsp+40h] [rbp-468h] BYREF
  __int64 v54; // [rsp+48h] [rbp-460h] BYREF
  unsigned __int8 v55; // [rsp+54h] [rbp-454h] BYREF
  char v56; // [rsp+55h] [rbp-453h]
  unsigned __int16 v57; // [rsp+58h] [rbp-450h]
  unsigned __int16 v58; // [rsp+5Ah] [rbp-44Eh]
  unsigned __int16 v59; // [rsp+5Ch] [rbp-44Ch]
  unsigned __int16 v60; // [rsp+5Eh] [rbp-44Ah]
  char v61[1032]; // [rsp+60h] [rbp-448h] BYREF
  unsigned __int64 v62; // [rsp+468h] [rbp-40h]

  v3 = *(_DWORD *)(a1 + 148);
  v62 = __readfsqword(0x28u);
  v49 = 1;
  v48 = 1;
  v51 = 63;
  v50 = 0;
  v52 = ((v3 & 0x10) == 0) + 2;
  v53 = 80;
  if ( !(unsigned int)sub_E5D0(
                        (__int64)"Map format\n"
                                 "\n"
                                 "<~W~idth:D::::> [72-%D], 0 - unlimited \n"
                                 " Printing\n"
                                 "<~A~ll:R>       Included constant types\n"
                                 "<~U~nused  :R>>    <Utf~8~:C>\n"
                                 " Sorting by<~C~lass:C>\n"
                                 "<~T~ype:R><~R~eferences:C>\n"
                                 "<U~n~sorted:R>><Na~m~eAndType :C>\n"
                                 " Number in pool<Num~b~ers:C>\n"
                                 "<~D~ecimal :R><~S~tring:C>>\n"
                                 "<~H~ex:R>>\n"
                                 "\n"
                                 "<~O~ut Utf8 string without encoding :C>\n"
                                 "<~I~nclude loader problem messages  :C>>\n"
                                 "\n",
                        &v53,
                        &v54,
                        &v48,
                        &v49,
                        &v51,
                        &v50,
                        &v52) )
    return 0;
  if ( (v52 & 2) != 0 )
    v48 = 0;
  v5 = *(_DWORD *)(a1 + 148);
  v6 = v5 | 0x10;
  v7 = v5 & 0xFFFFFFEF;
  if ( (v52 & 1) != 0 )
    v6 = v7;
  *(_DWORD *)(a1 + 148) = v6;
  if ( v53 <= 71 )
  {
    if ( v53 )
    {
      v53 = 72;
      v8 = 72;
      goto LABEL_9;
    }
LABEL_46:
    v53 = 992;
    v8 = 992;
    goto LABEL_9;
  }
  if ( v53 > 992 )
    goto LABEL_46;
  v8 = (unsigned int)v53;
LABEL_9:
  v9 = v51;
  if ( !v51 )
  {
    v51 = 63;
    v9 = 63;
  }
  if ( v50 )
  {
    v10 = 52;
    v11 = 88;
    v12 = 16;
  }
  else
  {
    v10 = 53;
    v11 = 117;
    v12 = 17;
  }
  *(_BYTE *)(a1 + 32982) = v11;
  v13 = 1;
  *(_BYTE *)(a1 + 32993) = v11;
  *(_BYTE *)(a1 + 33003) = v11;
  v14 = v49;
  *(_BYTE *)(a1 + 32981) = v10;
  *(_BYTE *)(a1 + 32992) = v10;
  *(_BYTE *)(a1 + 33002) = v10;
  *(_DWORD *)(a1 + 164) = v12;
  if ( v14 )
  {
    v13 = v9;
    *(_DWORD *)(a1 + 164) = v12 + 7;
  }
  stream = a2;
  v15 = (__int16)v9;
  v16 = (unsigned __int16)v13;
  *(_DWORD *)(a1 + 160) = v8;
  v17 = 0;
  *(_QWORD *)(a1 + 33312) = a2;
  while ( 1 )
  {
    while ( (v16 & v15) == 0 )
    {
      v13 *= 2;
      v16 = (unsigned __int16)v13;
    }
    v18 = *(_WORD *)(a1 + 33017) == 0;
    v54 = 10;
    if ( v18 )
    {
      v37 = v9;
    }
    else
    {
      v44 = v14;
      v19 = 1;
      v20 = v17;
      v41 = v13;
      v46 = v3;
      v47 = v16;
      do
      {
        v23 = (unsigned __int16)v19;
        if ( !(unsigned __int8)sub_13D40(a1, 1, (unsigned __int16)v19, 0, &v55) || v55 == 2 )
LABEL_72:
          sub_E6A0();
        v24 = v55 - 1;
        if ( !v48 || (v25 = (unsigned __int16)(v55 - 1), (v56 & 1) == 0) )
        {
          v25 = (unsigned __int16)(v55 - 1);
          if ( (*(_WORD *)(&off_2C7C0 + 3 * v25 + 1) & v41) != 0 )
          {
            if ( !v20 )
            {
              v32 = ((unsigned __int64)*(unsigned int *)(a1 + 160) - 27) >> 1;
              if ( v32 )
              {
                v45 = v55 - 1;
                do
                {
                  qfputc(32, stream);
                  --v32;
                }
                while ( v32 );
                v24 = v45;
              }
              v43 = v24;
              if ( netnode_supstr(*(_QWORD *)(a1 + 33336), -2, v61, 1024, 83) < 0 )
                goto LABEL_72;
              v33 = "dec";
              if ( v50 )
                v33 = "hex";
              v20 = 5;
              sub_11D90(
                (__int64)stream,
                (__int64)"%s\n\n   Constant Pool for \"%s\"\n\n offset  #(%s)\n",
                "This file generated by IDA",
                v61,
                v33);
              v24 = v43;
            }
            if ( !v44 )
            {
              v26 = *((_WORD *)&off_2C7C0 + 12 * v25 + 10);
              if ( v26 > 2u )
              {
                v27 = "(program references)";
                if ( v26 != 3 )
                  v27 = "(numeric values)";
              }
              else
              {
                v27 = (char *)&off_2C7C0 + 24 * v24 + 12;
              }
              v42 = v24;
              v20 += 2;
              sub_11D90((__int64)stream, (__int64)"\n-----CONSTANT-%s-----\n", v27);
              v44 = 1;
              v24 = v42;
            }
            if ( v49 || (v28 = (char *)&unk_228D8, *((_WORD *)&off_2C7C0 + 12 * v25 + 10) > 2u) )
              v28 = (char *)&off_2C7C0 + 24 * v24 + 12;
            sub_11D90(
              (__int64)stream,
              a1 + 32995,
              (unsigned int)v54,
              (unsigned __int16)v19,
              (v56 & 1) == 0 ? 42 : 32,
              v28);
            v29 = &off_2C7C0 + 3 * v25;
            if ( *((_WORD *)v29 + 10) )
              v23 = *((unsigned __int16 *)v29 + 10);
            v30 = ((__int64 (__fastcall *)(__int64, _QWORD, unsigned __int8 *))*v29)(a1, v23, &v55);
            if ( v30 <= 0 )
              goto LABEL_62;
            v20 += v30;
            if ( v48 )
            {
              if ( v49 )
              {
                if ( v55 > 6u )
                {
                  v20 += sub_122B0(a1, v57);
                  if ( v55 > 8u )
                  {
                    if ( v55 == 12 )
                    {
                      v20 += sub_122B0(a1, v58);
                    }
                    else
                    {
                      v34 = sub_122B0(a1, v60);
                      v20 += sub_122B0(a1, v59) + v34;
                    }
                  }
                }
              }
            }
            if ( feof(stream) || ferror(stream) )
            {
LABEL_62:
              v3 = v46;
              goto LABEL_63;
            }
          }
        }
        v8 = v54 + 1;
        v31 = *((unsigned __int16 *)&off_2C7C0 + 12 * v25 + 5);
        if ( (_WORD)v31 )
        {
          v21 = (_WORD)v31 == 8;
          v22 = v8 + v31;
          v19 += v21;
        }
        else
        {
          v22 = v8 + v59 + 2;
        }
        v54 = v22;
        ++v19;
      }
      while ( *(_WORD *)(a1 + 33017) >= (unsigned __int16)v19 );
      v13 = v41;
      v3 = v46;
      v17 = v20;
      v16 = v47;
      v37 = v51;
    }
    v9 = v37 ^ v13;
    v51 = v37 ^ v13;
    if ( (_WORD)v13 == (_WORD)v37 )
      break;
    LOBYTE(v14) = v49;
    v15 = (__int16)v9;
  }
  v35 = v17;
  if ( !v17 )
    goto LABEL_64;
  sub_11D90((__int64)stream, (__int64)"\nEnd of map\n", v8, v37, v17);
  v38 = v17 + 2;
  if ( (v52 & 2) != 0 && *(_QWORD *)(a1 + 33101) )
  {
    sub_11D90((__int64)stream, (__int64)"\nLoader problem messages\n\n");
    v39 = sub_120B0(a1, v61, nullptr, 0);
    if ( v39 == -1 )
      goto LABEL_63;
    v38 = v39 + v17 + 7;
    sub_11D90((__int64)stream, (__int64)"\nEnd of messages\n");
  }
  if ( !feof(stream) && !ferror(stream) )
  {
    v35 = v38;
    goto LABEL_64;
  }
LABEL_63:
  v35 = -1;
LABEL_64:
  *(_QWORD *)(a1 + 33312) = 0;
  *(_DWORD *)(a1 + 148) = v3;
  return v35;
}

