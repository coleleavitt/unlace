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
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  int flags; // eax
  __int64 v24; // rbx
  unsigned int v25; // r12d
  _BYTE *v26; // rax
  int v27; // eax
  int v28; // r14d
  _BYTE *v29; // rax
  __int16 v30; // ax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  _BYTE v35[368]; // [rsp+0h] [rbp-1A8h] BYREF
  char v36; // [rsp+170h] [rbp-38h]
  unsigned __int64 v37; // [rsp+178h] [rbp-30h]

  v37 = __readfsqword(0x28u);
  *(_QWORD *)v35 = a1;
  qmemcpy(&v35[8], a2, 0x168u);
  v36 = 1;
  v4 = sub_269F0((__int64)v35, 0, nullptr, nullptr, nullptr);
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
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        v20 = a2[7] + 16LL * *a2;
        if ( v19 != v20 )
        {
          v21 = v20 & v19;
          if ( v20 != -1 )
            v20 = v21;
        }
        if ( a2[2] == v20 )
          return 100;
        if ( !(unsigned __int8)has_jump_or_flow_xref() )
        {
          v22 = a2[2];
          if ( v22 < v20 && v20 < v22 + 16 )
            return 1;
          flags = get_flags_ex();
          v24 = flags & 0x600;
          if ( v24 == 1536 )
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
            if ( (unsigned int)get_auto_state() != 200 || v24 )
              return 1;
          }
          v25 = a3 & 0xFFFFFFFE;
          v26 = &v35[40];
          memset(v35, 255, 24);
          *(_QWORD *)&v35[24] = 0;
          *(_QWORD *)&v35[32] = 0;
          do
          {
            *(_WORD *)v26 = 0;
            v26 += 40;
            *((_WORD *)v26 - 19) = 0;
            *((_WORD *)v26 - 18) = 0;
            *((_DWORD *)v26 - 2) = 0;
            *((_WORD *)v26 - 17) = 0;
            *((_OWORD *)v26 - 2) = 0;
            *((_QWORD *)v26 - 2) = 0;
          }
          while ( v26 != &v35[360] );
          if ( sub_283C0(a1, (__int64)v35, v20, v25) )
            return (unsigned int)((__int64 (__fastcall *)(__int64, _BYTE *, _QWORD, double))sub_323C0)(
                                   a1,
                                   v35,
                                   v25,
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
          v11 = getinf();
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
              sub_23800((__int64)v35);
              if ( sub_283C0(a1, (__int64)v35, a2[2] + *((unsigned __int16 *)a2 + 13), a3) && (v35[28] & 0xA0) == 0 )
              {
                if ( *(_WORD *)&v35[24] == 32 )
                {
                  if ( v12 != 4 )
                    goto LABEL_10;
                  v13 = &v35[40];
                }
                else
                {
                  if ( v12 != 8 || *(_WORD *)&v35[24] != 71 )
                    goto LABEL_10;
                  v13 = &v35[80];
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
              && (getinf() & 0x1006) != 0x1002
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
              v15 = &v35[40];
              *(_QWORD *)&v35[24] = 0;
              *(_QWORD *)&v35[32] = 0;
              memset(v35, 255, 24);
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
              while ( v15 != &v35[360] );
              if ( sub_283C0(a1, (__int64)v35, a2[2] + *((unsigned __int16 *)a2 + 13), a3) )
              {
                if ( *(_WORD *)&v35[24] == 30 )
                {
                  if ( v35[41] == 1 && *(_WORD *)&v35[46] == 12 && v35[81] == 2 )
                  {
                    v16 = *(_QWORD *)&v35[96];
                    if ( sub_283C0(a1, (__int64)v35, *(_QWORD *)&v35[16] + *(unsigned __int16 *)&v35[26], a3)
                      && *(_WORD *)&v35[24] == 41
                      && v35[41] == 1
                      && *(_WORD *)&v35[46] == 12 )
                    {
LABEL_62:
                      if ( *(_QWORD *)&v35[16] + *(unsigned __int16 *)&v35[26] == v16 )
                      {
                        get_dword();
                        v17 = get_flags_ex();
                        if ( (~(_WORD)v17 & 0x600) == 0 && (v17 & 0x10000000) != 0 )
                          return 100;
                      }
                    }
                  }
                }
                else if ( *(_WORD *)&v35[24] == 31 && v35[81] == 2 )
                {
                  v16 = *(_QWORD *)&v35[96];
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
            v18 = v9[2];
            if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
              v18 = (int)v18;
            if ( v18 < 0 )
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
          sub_23800((__int64)v35);
          if ( sub_283C0(a1, (__int64)v35, a2[2] + *((unsigned __int16 *)a2 + 13), a3)
            && (*(_QWORD *)&v35[24] & 0xA00000FFFFLL) == 0x1DB
            && (*(_QWORD *)&v35[120] & 0xFFFF00000000FF00LL) == 0xA1000000000400LL )
          {
            v32 = *(_QWORD *)&v35[136];
            if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
              v32 = *(int *)&v35[136];
            if ( v32 >= 0 )
              return 100;
          }
        }
        goto LABEL_10;
      }
LABEL_21:
      v10 = getinf();
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
      v27 = bitcount();
      *(_QWORD *)&v35[24] = 0;
      v28 = v27;
      v29 = &v35[40];
      *(_QWORD *)&v35[32] = 0;
      memset(v35, 255, 24);
      do
      {
        *(_WORD *)v29 = 0;
        v29 += 40;
        *((_WORD *)v29 - 19) = 0;
        *((_WORD *)v29 - 18) = 0;
        *((_DWORD *)v29 - 2) = 0;
        *((_WORD *)v29 - 17) = 0;
        *((_OWORD *)v29 - 2) = 0;
        *((_QWORD *)v29 - 2) = 0;
      }
      while ( &v35[360] != v29 );
      if ( (int)decode_insn() <= 0 )
        goto LABEL_100;
      v30 = *(_WORD *)&v35[24];
      if ( *(_WORD *)&v35[24] > 0x1Eu )
      {
        if ( *(_WORD *)&v35[24] != 344 )
          goto LABEL_100;
      }
      else
      {
        if ( *(_WORD *)&v35[24] <= 0xDu )
        {
LABEL_98:
          if ( v30 == 12
            && v35[41] == 1
            && *(_WORD *)&v35[46] == 13
            && v35[81] == 1
            && *(_WORD *)&v35[86] == 13
            && v35[121] == 5 )
          {
            return 100;
          }
          goto LABEL_100;
        }
        v31 = 1083195392;
        if ( !_bittest64(&v31, *(unsigned __int16 *)&v35[24]) )
        {
LABEL_100:
          v8 = *((_WORD *)a2 + 12);
          goto LABEL_23;
        }
        if ( *(_WORD *)&v35[24] == 30 && (*(_QWORD *)&v35[80] & 0xFFFF00000000FF00LL) == 0xD000000000400LL )
        {
          v33 = *(_QWORD *)&v35[96];
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
            v33 = *(int *)&v35[96];
          v34 = 4LL * v28;
          if ( v34 <= v33 && v34 + 16 > v33 )
            return 100;
        }
      }
      if ( (int)decode_insn() > 0 )
      {
        v30 = *(_WORD *)&v35[24];
        goto LABEL_98;
      }
      goto LABEL_100;
    }
  }
  return v5;
}

