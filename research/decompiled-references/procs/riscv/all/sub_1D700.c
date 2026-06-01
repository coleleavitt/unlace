unsigned __int64 __fastcall sub_1D700(__int64 a1)
{
  unsigned __int8 v1; // dl
  char v2; // dl
  __int64 v3; // rdx
  char **v4; // rax
  char v6; // al
  int v7; // r12d
  __int64 v8; // rbp
  __int64 v9; // rsi
  char *v10; // rdx
  char *v11; // rcx
  char *v12; // rax
  char v13; // si
  char v14; // cl
  int v15; // edx
  __int64 v16; // rax
  char *v17; // rsi
  char *v18; // rax
  char v19; // cl
  char *i; // rdx
  char v21; // si
  char v22; // r12
  char v23; // r13
  char v24; // dl
  char v25; // r14
  char *v26; // rsi
  unsigned __int8 v27; // al
  char *v28; // rdx
  char v29; // cl
  char *v30; // rsi
  char *v31; // rdx
  char v32; // si
  char *v33; // rsi
  char *j; // rdx
  char v35; // si
  _BYTE v36[13]; // [rsp+Ah] [rbp-4Eh] BYREF
  char v37; // [rsp+17h] [rbp-41h] BYREF
  char v38[64]; // [rsp+18h] [rbp-40h] BYREF

  v1 = *(_BYTE *)(a1 + 252);
  *(_QWORD *)v38 = __readfsqword(0x28u);
  switch ( v1 & 0xF )
  {
    case 0:
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 616) + 468LL) & 0x20) == 0 )
        return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 280LL))(a1, 16, 0);
      v8 = (__int64)*(&off_31780 + 2 * *(unsigned __int16 *)(a1 + 248));
      v9 = v8 + 4;
      if ( !strncmp((const char *)v8, "nds.", 4u) )
        goto LABEL_18;
      if ( *(_BYTE *)v8 != 116 || *(_BYTE *)(v8 + 1) != 104 || *(_BYTE *)(v8 + 2) != 46 )
        return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 280LL))(a1, 16, 0);
      v9 = v8 + 3;
LABEL_18:
      if ( v9 != v8 )
        return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(a1, v9, 16, 0);
      else
        return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 280LL))(a1, 16, 0);
    case 1:
      if ( (v1 & 0xEF) != 1 )
        goto LABEL_104;
      (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "c.", 5);
      if ( (*(_BYTE *)(a1 + 252) & 0x10) != 0 )
        v10 = "64";
      else
        v10 = nullptr;
      return (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)a1 + 280LL))(a1, 14, v10);
    case 2:
      if ( (v1 & 0xEF) != 2 )
        goto LABEL_96;
      v11 = (char *)*(&off_33D80 + *(unsigned __int8 *)(a1 + 253));
      v12 = v36;
      do
      {
        v13 = *v11++;
        *v12 = v13;
        if ( !v13 )
        {
          if ( v1 == 2 )
            goto LABEL_5;
          if ( v12 < v38 )
          {
            v31 = off_33D20[*(unsigned __int8 *)(a1 + 254)];
            if ( v12 != &v37 )
            {
              while ( 1 )
              {
                v32 = *v31++;
                *v12 = v32;
                if ( !v32 )
                  goto LABEL_5;
                if ( ++v12 == &v37 )
                  goto LABEL_29;
              }
            }
            goto LABEL_29;
          }
          goto LABEL_94;
        }
        ++v12;
      }
      while ( v12 != &v37 );
      v37 = 0;
      if ( v1 != 2 )
        goto LABEL_29;
LABEL_5:
      (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 280LL))(a1, 16, v36);
      return *(_QWORD *)v38 - __readfsqword(0x28u);
    case 3:
      v14 = v1 & 0x20;
      v15 = v1 & 0x10;
      if ( v15 )
      {
        if ( v14 )
          goto LABEL_102;
        v16 = *(unsigned __int8 *)(a1 + 254);
      }
      else
      {
        v16 = *(unsigned __int8 *)(a1 + 254);
        if ( v14 )
        {
          v28 = (char *)*(&off_33D40 + v16);
          v18 = v36;
          while ( 1 )
          {
            v29 = *v28++;
            *v18 = v29;
            if ( !v29 )
              goto LABEL_87;
            if ( ++v18 == &v37 )
              goto LABEL_29;
          }
        }
      }
      v17 = (char *)*(&off_33D80 + v16);
      v18 = v36;
      while ( 1 )
      {
        v19 = *v17++;
        *v18 = v19;
        if ( !v19 )
          break;
        if ( ++v18 == &v37 )
        {
          v37 = 0;
          if ( (_BYTE)v15 )
          {
LABEL_37:
            for ( i = (char *)*(&off_33D40 + *(unsigned __int8 *)(a1 + 253)); v18 != &v37; ++v18 )
            {
              v21 = *i++;
              *v18 = v21;
              if ( !v21 )
                goto LABEL_5;
            }
          }
LABEL_29:
          v37 = 0;
          goto LABEL_5;
        }
      }
      if ( (_BYTE)v15 )
      {
        if ( v18 < v38 )
          goto LABEL_37;
LABEL_94:
        if ( under_debugger )
          goto LABEL_106;
        interr(520);
LABEL_96:
        if ( under_debugger )
          goto LABEL_106;
        interr(10408);
LABEL_98:
        if ( under_debugger )
          goto LABEL_106;
        interr(10438);
LABEL_100:
        if ( under_debugger )
          goto LABEL_106;
        interr(10439);
LABEL_102:
        if ( !under_debugger )
        {
          interr(10407);
LABEL_104:
          if ( !under_debugger )
          {
            interr(0);
            return sub_1E120();
          }
        }
LABEL_106:
        BUG();
      }
LABEL_87:
      if ( v18 < v38 )
      {
        for ( j = (char *)*(&off_33D80 + *(unsigned __int8 *)(a1 + 253)); v18 != &v37; ++v18 )
        {
          v35 = *j++;
          *v18 = v35;
          if ( !v35 )
            goto LABEL_5;
        }
        goto LABEL_29;
      }
      goto LABEL_94;
    case 4:
      v22 = v1 >> 4;
      qstrncpy(v36, *(&off_33CA0 + ((v1 >> 4) & 3)), 14);
      v23 = *(_BYTE *)(a1 + 252) & 0xC0;
      v24 = *(_BYTE *)(a1 + 253) & 7;
      v25 = (*(_BYTE *)(a1 + 253) >> 3) & 3;
      if ( v23 == (char)0x80 )
      {
        qstrncat(v36, "m", 14);
      }
      else if ( v23 == 64 )
      {
        append_snprintf(v36, v38, "%ur", (unsigned __int8)(v24 + 1));
        if ( *(_WORD *)(a1 + 248) == 169 && v25 )
          append_snprintf(
            v36,
            v38,
            "%s%s",
            (const char *)*(&off_33C80 + (v22 & 1)),
            (const char *)*(&off_33D00 + (v25 & 3)));
      }
      else
      {
        if ( v24 )
          append_snprintf(v36, v38, "seg%u", (unsigned __int8)(v24 + 1));
        append_snprintf(
          v36,
          v38,
          "%s%s",
          (const char *)*(&off_33C80 + (v22 & 1)),
          (const char *)*(&off_33D00 + (v25 & 3)));
        if ( v23 == -64 )
          qstrncat(v36, "ff", 14);
      }
      v26 = ".v";
      goto LABEL_48;
    case 5:
      qstrncpy(v36, "", 14);
      v27 = *(_BYTE *)(a1 + 253);
      if ( (v27 & 2) != 0 )
      {
        qstrncat(v36, *(&off_33BC0 + ((v27 >> 2) & 7)), 14);
        v27 = *(_BYTE *)(a1 + 253);
      }
      if ( (v27 & 0x20) != 0 )
        append_snprintf(v36, v38, "%ur", (*(_BYTE *)(a1 + 254) & 7) + 1);
      qstrncat(v36, *(&off_33C00 + ((*(_BYTE *)(a1 + 252) >> 4) & 0xF)), 14);
      if ( (*(_BYTE *)(a1 + 253) & 1) != 0 )
        qstrncat(v36, "m", 14);
      goto LABEL_5;
    case 6:
      v4 = off_33BA0;
      v3 = v1 >> 4;
      goto LABEL_4;
    case 7:
      if ( v1 > 0xCFu )
        goto LABEL_98;
      qstrncpy(v36, (&off_33B20)[v1 >> 4], 14);
      goto LABEL_5;
    case 8:
      v2 = (v1 >> 4) & 7;
      if ( v2 == 7 )
        goto LABEL_100;
      v3 = v2 & 7;
      v4 = (char **)&off_33AE0;
LABEL_4:
      qstrncpy(v36, v4[v3], 14);
      goto LABEL_5;
    case 9:
      v6 = *(_BYTE *)(a1 + 253);
      if ( (v6 & 8) != 0 )
      {
        v30 = "1";
        if ( (v6 & 1) == 0 )
          v30 = "0";
        qstrncpy(v36, v30, 14);
      }
      else
      {
        v7 = (v1 >> 4) & 7;
        if ( (v1 & 0x40) != 0 )
        {
          qstrncpy(v36, *(&off_33AA0 + ((v1 >> 4) & 7)), 14);
          if ( *(char *)(a1 + 252) < 0 )
          {
            v33 = "1";
            if ( (*(_BYTE *)(a1 + 253) & 1) == 0 )
              v33 = "0";
            qstrncat(v36, v33, 14);
            if ( (*(_BYTE *)(a1 + 258) & 4) == 0 )
            {
              v26 = (char *)*(&off_33A80 + ((*(_BYTE *)(a1 + 253) >> 1) & 3));
LABEL_48:
              qstrncat(v36, v26, 14);
            }
          }
        }
        else
        {
          if ( (*(_BYTE *)(a1 + 258) & 4) != 0 )
            qstrncpy(v36, "64", 14);
          else
            qstrncpy(v36, "32", 14);
          qstrncat(v36, *(&off_33AA0 + v7), 14);
          if ( (*(_BYTE *)(a1 + 258) & 4) == 0 )
            qstrncat(v36, "i", 14);
        }
      }
      goto LABEL_5;
    default:
      if ( !under_debugger )
        interr(10409);
      goto LABEL_106;
  }
}
