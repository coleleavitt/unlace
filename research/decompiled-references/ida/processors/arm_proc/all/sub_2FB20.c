__int64 __fastcall sub_2FB20(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int16 v4; // ax
  __int64 v6; // r15
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  int v12; // r14d
  int v13; // edx
  __int64 v14; // r13
  __int64 v15; // r14
  int v16; // r15d
  char v17; // al
  char v18; // dl
  int v19; // eax
  int v20; // eax
  __int64 v21; // r9
  char v22; // [rsp+0h] [rbp-88h]
  unsigned __int16 v23; // [rsp+Eh] [rbp-7Ah]
  int v24; // [rsp+14h] [rbp-74h] BYREF
  __int64 v25; // [rsp+18h] [rbp-70h] BYREF
  char *v26; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int16 v27; // [rsp+28h] [rbp-60h]
  char v28; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v4 = *(_WORD *)(a3 + 24);
  v29 = __readfsqword(0x28u);
  v25 = 0;
  if ( v4 == 23 )
  {
    if ( *(_BYTE *)(a3 + 41) == 1 )
    {
      v10 = *(unsigned __int16 *)(a3 + 46);
      if ( (v10 == 13 || v10 == 161) && *(_BYTE *)(a3 + 81) == 1 )
      {
        v11 = sub_29A20(a1, &v24, (_BYTE *)a3, *(unsigned __int16 *)(a3 + 86));
        v12 = v24;
        v6 = v11;
        if ( v24 == 13 || v24 == 161 )
          goto LABEL_7;
        if ( a2 )
        {
          if ( netnode_supval() > 0 )
          {
            v26 = &v28;
            if ( (unsigned int)unpack_dd() == 1 )
            {
              v23 = unpack_dw();
              unpack_dq();
              if ( v23 != 0xFFFF && v12 == v23 )
              {
                v6 = v6 - (get_spd() + *(unsigned __int16 *)(a2 + 40)) - *(_QWORD *)(a2 + 56);
                goto LABEL_7;
              }
            }
          }
        }
      }
    }
LABEL_6:
    v6 = 0;
    goto LABEL_7;
  }
  if ( v4 > 0x17u )
  {
    if ( v4 == 33 )
    {
      if ( a2 )
      {
        v8 = *(_DWORD *)(a3 + 28);
        if ( (v8 & 0x90) == 0x80 && (v8 & 0x40) == 0 && (*(_BYTE *)(a3 + 105) & 0x20) != 0 && !*(_BYTE *)(a3 + 112) )
        {
          v6 = -get_spd();
          goto LABEL_7;
        }
      }
    }
  }
  else
  {
    if ( v4 == 4 )
    {
      v6 = sub_25E60(a1, a3);
      goto LABEL_7;
    }
    if ( (unsigned __int16)(v4 - 12) <= 2u )
    {
      if ( *(_BYTE *)(a3 + 41) == 1 )
      {
        v13 = *(unsigned __int16 *)(a3 + 46);
        if ( v13 == 13 || v13 == 161 )
        {
          v14 = a3 + 80;
          if ( !*(_BYTE *)(a3 + 121) )
            v14 = a3 + 40;
          v15 = v14 + 40;
          if ( v4 != 13 )
          {
            v15 = v14;
            v14 += 40;
          }
          if ( *(_BYTE *)(v15 + 1) == 1 )
          {
            v16 = *(unsigned __int16 *)(v15 + 6);
            if ( v16 == 13 || v16 == 161 )
              goto LABEL_61;
            v22 = a4;
            if ( a2 )
            {
              v17 = sub_2F860(a1, (__int64)&v26, *(_QWORD *)a2);
              a4 = v22;
              v18 = v17;
              v19 = 0xFFFF;
              if ( v18 )
                v19 = v27;
              if ( v16 == v19 )
              {
LABEL_61:
                if ( (a4 || *(_BYTE *)(v14 + 1) == 5) && (unsigned __int8)sub_839C0(a1, &v26, a3, v14, 0) )
                {
                  v20 = *(unsigned __int16 *)(v15 + 6);
                  if ( v20 == 13 || v20 == 161 )
                  {
                    v21 = (__int64)v26;
                  }
                  else
                  {
                    if ( !a2 )
                    {
                      if ( !under_debugger )
                        interr();
                      BUG();
                    }
                    v21 = (__int64)&v26[*(_QWORD *)(a2 + 56) + get_spd() + *(unsigned __int16 *)(a2 + 40)];
                  }
                  v6 = v21;
                  if ( *(_WORD *)(a3 + 24) != 14 )
                    v6 = -v21;
                  goto LABEL_7;
                }
              }
            }
          }
        }
      }
      goto LABEL_6;
    }
  }
  v9 = sub_29B70(a1, &v25, a3, a4);
  if ( v9 != 13 )
  {
    v6 = 0;
    if ( v9 != 161 )
      return v6;
  }
  v6 = v25;
LABEL_7:
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
    return (int)v6;
  return v6;
}

