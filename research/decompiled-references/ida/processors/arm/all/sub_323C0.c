__int64 __fastcall sub_323C0(__int64 a1, _QWORD *a2, int a3)
{
  int v4; // eax
  unsigned int v5; // edx
  __int16 v6; // cx
  __int16 v8; // dx
  _QWORD *v9; // rdx
  __int16 v10; // ax
  __int16 v11; // ax
  __int64 v12; // r14
  _BYTE *v13; // rax
  char v14; // al
  _BYTE *v15; // rax
  __int64 v16; // r14
  int dword; // eax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  int flags; // eax
  __int64 v25; // rbx
  unsigned int v26; // r12d
  _BYTE *v27; // rax
  int v28; // eax
  int v29; // r14d
  _BYTE *v30; // rax
  __int16 v31; // ax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  _BYTE v36[368]; // [rsp+0h] [rbp-1A8h] BYREF
  char v37; // [rsp+170h] [rbp-38h]
  unsigned __int64 v38; // [rsp+178h] [rbp-30h]

  v38 = __readfsqword(0x28u);
  *(_QWORD *)v36 = a1;
  qmemcpy(&v36[8], a2, 0x168u);
  v37 = 1;
  v4 = sub_269F0((__int64)v36, 0, 0, 0, 0);
  v5 = 90;
  if ( v4 != 1 )
  {
    v5 = 100;
    if ( v4 != 2 )
    {
      if ( (unsigned __int8)sub_27FE0((__int64)a2, 0, 0x64u) )
        return 100;
      if ( (a3 & 1) != 0 && *((_WORD *)a2 + 12) == 3 )
      {
        if ( (a2[4] & 0xF) != 0xE )
        {
          v6 = 3;
          if ( (*((_BYTE *)a2 + 34) & 4) != 0 )
            goto LABEL_8;
          goto LABEL_21;
        }
        v20 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        v21 = a2[7] + 16LL * *a2;
        if ( v20 != v21 )
        {
          v22 = v21 & v20;
          if ( v21 != -1 )
            v21 = v22;
        }
        if ( a2[2] == v21 )
          return 100;
        if ( !(unsigned __int8)has_jump_or_flow_xref() )
        {
          v23 = a2[2];
          if ( v23 < v21 && v21 < v23 + 16 )
            return 1;
          flags = get_flags_ex(v21, 4);
          v25 = flags & 0x600;
          if ( v25 == 1536 )
          {
            if ( (flags & 0x10000000) != 0 )
              return 100;
            if ( (unsigned int)get_auto_state() != 40 )
            {
              get_auto_state();
              return 1;
            }
          }
          else
          {
            get_auto_state();
            if ( (unsigned int)get_auto_state() != 200 || v25 )
              return 1;
          }
          v26 = a3 & 0xFFFFFFFE;
          v27 = &v36[40];
          memset(v36, 255, 24);
          *(_QWORD *)&v36[24] = 0;
          *(_QWORD *)&v36[32] = 0;
          do
          {
            *(_WORD *)v27 = 0;
            v27 += 40;
            *((_WORD *)v27 - 19) = 0;
            *((_WORD *)v27 - 18) = 0;
            *((_DWORD *)v27 - 2) = 0;
            *((_WORD *)v27 - 17) = 0;
            *((_OWORD *)v27 - 2) = 0;
            *((_QWORD *)v27 - 2) = 0;
          }
          while ( v27 != &v36[360] );
          if ( sub_283C0(a1, (__int64)v36, v21, v26) )
            return (unsigned int)((__int64 (__fastcall *)(__int64, _BYTE *, _QWORD, double))sub_323C0)(
                                   a1,
                                   v36,
                                   v26,
                                   0.0);
          return 1;
        }
      }
      if ( (*((_BYTE *)a2 + 34) & 4) != 0 )
      {
        v8 = *((_WORD *)a2 + 12);
        v6 = v8;
        if ( v8 != 32 )
        {
LABEL_8:
          if ( (*((_DWORD *)a2 + 7) & 0xA0) != 0x20 )
            goto LABEL_9;
          goto LABEL_66;
        }
        if ( *((_BYTE *)a2 + 41) != 1 )
          goto LABEL_17;
LABEL_25:
        if ( *((_WORD *)a2 + 23) == 14 && *((_WORD *)a2 + 43) == 13 )
          return 100;
LABEL_27:
        if ( (*((_BYTE *)a2 + 34) & 4) == 0 )
        {
          v11 = getinf(3);
          v6 = *((_WORD *)a2 + 12);
          if ( (v11 & 0x1006) != 0x1002 )
          {
            if ( v6 == 12
              && *((_BYTE *)a2 + 41) == 1
              && *((_WORD *)a2 + 23) == 13
              && *((_BYTE *)a2 + 81) == 1
              && *((_WORD *)a2 + 43) == 13
              && *((_BYTE *)a2 + 121) == 5 )
            {
              v12 = a2[16];
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
                v12 = (int)v12;
              sub_23800((__int64)v36);
              if ( sub_283C0(a1, (__int64)v36, a2[2] + *((unsigned __int16 *)a2 + 13), a3) && (v36[28] & 0xA0) == 0 )
              {
                if ( *(_WORD *)&v36[24] == 32 )
                {
                  if ( v12 != 4 )
                    goto LABEL_10;
                  v13 = &v36[40];
                }
                else
                {
                  if ( v12 != 8 || *(_WORD *)&v36[24] != 71 )
                    goto LABEL_10;
                  v13 = &v36[80];
                }
                if ( v13[1] == 1
                  && *((_WORD *)v13 + 3) == 14
                  && (*((_QWORD *)v13 + 5) & 0xFFFF00000000FF00LL) == 0xD000000000400LL
                  && !*((_QWORD *)v13 + 7) )
                {
                  return 100;
                }
              }
            }
LABEL_10:
            if ( (*((_BYTE *)a2 + 34) & 4) == 0
              && (getinf(3) & 0x1006) != 0x1002
              && *((_WORD *)a2 + 12) == 12
              && *((_BYTE *)a2 + 41) == 1
              && !*((_WORD *)a2 + 23) )
            {
              v14 = *((_BYTE *)a2 + 81);
              if ( v14 == 1 )
              {
                if ( *((_WORD *)a2 + 43) || *((_BYTE *)a2 + 121) != 5 )
                  goto LABEL_11;
              }
              else if ( v14 != 5 || *((_BYTE *)a2 + 121) )
              {
                goto LABEL_11;
              }
              v15 = &v36[40];
              *(_QWORD *)&v36[24] = 0;
              *(_QWORD *)&v36[32] = 0;
              memset(v36, 255, 24);
              do
              {
                *(_WORD *)v15 = 0;
                v15 += 40;
                *((_WORD *)v15 - 19) = 0;
                *((_WORD *)v15 - 18) = 0;
                *((_DWORD *)v15 - 2) = 0;
                *((_WORD *)v15 - 17) = 0;
                *((_OWORD *)v15 - 2) = 0;
                *((_QWORD *)v15 - 2) = 0;
              }
              while ( v15 != &v36[360] );
              if ( sub_283C0(a1, (__int64)v36, a2[2] + *((unsigned __int16 *)a2 + 13), a3) )
              {
                if ( *(_WORD *)&v36[24] == 30 )
                {
                  if ( v36[41] == 1 && *(_WORD *)&v36[46] == 12 && v36[81] == 2 )
                  {
                    v16 = *(_QWORD *)&v36[96];
                    if ( sub_283C0(a1, (__int64)v36, *(_QWORD *)&v36[16] + *(unsigned __int16 *)&v36[26], a3)
                      && *(_WORD *)&v36[24] == 41
                      && v36[41] == 1
                      && *(_WORD *)&v36[46] == 12 )
                    {
LABEL_62:
                      if ( *(_QWORD *)&v36[16] + *(unsigned __int16 *)&v36[26] == v16 )
                      {
                        dword = get_dword(v16);
                        v18 = get_flags_ex(dword & 0xFFFFFFFE, 4);
                        if ( (~(_WORD)v18 & 0x600) == 0 && (v18 & 0x10000000) != 0 )
                          return 100;
                      }
                    }
                  }
                }
                else if ( *(_WORD *)&v36[24] == 31 && v36[81] == 2 )
                {
                  v16 = *(_QWORD *)&v36[96];
                  goto LABEL_62;
                }
              }
            }
LABEL_11:
            if ( !sub_315D0(a1, a2, a3) )
              return 1;
            return 100;
          }
          goto LABEL_18;
        }
LABEL_17:
        v6 = v8;
LABEL_18:
        if ( (*((_DWORD *)a2 + 7) & 0xA0) != 0x20 )
          goto LABEL_9;
        if ( v6 == 32 )
        {
          v9 = a2 + 10;
LABEL_68:
          if ( (*v9 & 0xFFFF00000000FF00LL) == 0xA1000000000400LL )
          {
            v19 = v9[2];
            if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
              v19 = (int)v19;
            if ( v19 < 0 )
              return 100;
          }
          goto LABEL_10;
        }
LABEL_66:
        if ( v6 == 475 )
        {
          v9 = a2 + 15;
          goto LABEL_68;
        }
LABEL_9:
        if ( v6 == 12
          && *((_BYTE *)a2 + 41) == 1
          && *((_WORD *)a2 + 23) == 161
          && *((_BYTE *)a2 + 81) == 1
          && *((_WORD *)a2 + 43) == 161
          && *((_BYTE *)a2 + 121) == 5 )
        {
          sub_23800((__int64)v36);
          if ( sub_283C0(a1, (__int64)v36, a2[2] + *((unsigned __int16 *)a2 + 13), a3)
            && (*(_QWORD *)&v36[24] & 0xA00000FFFFLL) == 0x1DB
            && (*(_QWORD *)&v36[120] & 0xFFFF00000000FF00LL) == 0xA1000000000400LL )
          {
            v33 = *(_QWORD *)&v36[136];
            if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
              v33 = *(int *)&v36[136];
            if ( v33 >= 0 )
              return 100;
          }
        }
        goto LABEL_10;
      }
LABEL_21:
      v10 = getinf(3);
      v8 = *((_WORD *)a2 + 12);
      if ( (v10 & 0x1006) == 0x1002 || v8 != 43 )
      {
LABEL_23:
        if ( v8 != 32 || *((_BYTE *)a2 + 41) != 1 )
          goto LABEL_27;
        goto LABEL_25;
      }
      if ( (a2[8] & 0x10) == 0 )
        goto LABEL_27;
      v28 = bitcount();
      *(_QWORD *)&v36[24] = 0;
      v29 = v28;
      v30 = &v36[40];
      *(_QWORD *)&v36[32] = 0;
      memset(v36, 255, 24);
      do
      {
        *(_WORD *)v30 = 0;
        v30 += 40;
        *((_WORD *)v30 - 19) = 0;
        *((_WORD *)v30 - 18) = 0;
        *((_DWORD *)v30 - 2) = 0;
        *((_WORD *)v30 - 17) = 0;
        *((_OWORD *)v30 - 2) = 0;
        *((_QWORD *)v30 - 2) = 0;
      }
      while ( &v36[360] != v30 );
      if ( (int)decode_insn() <= 0 )
        goto LABEL_100;
      v31 = *(_WORD *)&v36[24];
      if ( *(_WORD *)&v36[24] > 0x1Eu )
      {
        if ( *(_WORD *)&v36[24] != 344 )
          goto LABEL_100;
      }
      else
      {
        if ( *(_WORD *)&v36[24] <= 0xDu )
        {
LABEL_98:
          if ( v31 == 12
            && v36[41] == 1
            && *(_WORD *)&v36[46] == 13
            && v36[81] == 1
            && *(_WORD *)&v36[86] == 13
            && v36[121] == 5 )
          {
            return 100;
          }
          goto LABEL_100;
        }
        v32 = 1083195392;
        if ( !_bittest64(&v32, *(unsigned __int16 *)&v36[24]) )
        {
LABEL_100:
          v8 = *((_WORD *)a2 + 12);
          goto LABEL_23;
        }
        if ( *(_WORD *)&v36[24] == 30 && (*(_QWORD *)&v36[80] & 0xFFFF00000000FF00LL) == 0xD000000000400LL )
        {
          v34 = *(_QWORD *)&v36[96];
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
            v34 = *(int *)&v36[96];
          v35 = 4LL * v29;
          if ( v35 <= v34 && v35 + 16 > v34 )
            return 100;
        }
      }
      if ( (int)decode_insn() > 0 )
      {
        v31 = *(_WORD *)&v36[24];
        goto LABEL_98;
      }
      goto LABEL_100;
    }
  }
  return v5;
}
