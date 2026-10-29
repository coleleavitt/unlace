__int64 __fastcall sub_144100(__int64 a1, char a2, unsigned __int8 *a3, _BYTE *a4, double a5)
{
  __int64 *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  const char *v11; // rdx
  __int64 *v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // r12
  __int64 *v16; // rax
  const char *v17; // rsi
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 *v20; // rax
  char **v21; // rax
  __int64 v22; // r9
  __int64 v23; // rsi
  __int64 *v24; // [rsp+8h] [rbp-60h]
  __int64 v25; // [rsp+10h] [rbp-58h]
  __int64 v26; // [rsp+10h] [rbp-58h]
  __int64 v27; // [rsp+18h] [rbp-50h]
  _QWORD *v28[9]; // [rsp+20h] [rbp-48h] BYREF

  v7 = *(__int64 **)a1;
  v28[1] = (_QWORD *)__readfsqword(0x28u);
  if ( (*((_BYTE *)v7 + 44) & 0x10) == 0 && (unsigned int)sub_143A40((__int64 **)a1, a5) )
    return 0;
  v8 = sub_CA640((__int64)v7, a3, a4);
  v9 = v8;
  if ( !v8 )
  {
    if ( !*(_BYTE *)(a1 + 37) && !*((_BYTE *)v7 + 197) )
    {
      v12 = (__int64 *)sub_C2AB0((__int64)(v7 + 67), a3, nullptr)[2];
      if ( v12
        || a3
        && !(unsigned int)sub_CA590(a3, "pragma_", 7)
        && (v21 = sub_CA4F0(a3 + 7)) != nullptr
        && (*((_BYTE *)v21 + 9) & 0x30) != 0
        && (v12 = (__int64 *)sub_E3520((__int64)v7, a3, (__int64)&unk_23AB80, (__int64)v21, 0)) != nullptr )
      {
        v9 = v12[5];
        v13 = *v12;
        v28[0] = nullptr;
        if ( v9 )
          return v9;
        v14 = *(_QWORD *)(v13 + 8);
        if ( !v14 || v14 == *(_QWORD *)(v13 + 16) )
        {
          v27 = v13;
          v25 = (__int64)v12;
          v24 = *(__int64 **)a1;
          v15 = sub_DC1C0(*(_QWORD *)a1, 0x68u);
          if ( v15 )
          {
            v16 = sub_DC720((__int64)v24, *(const char **)(v25 + 8));
            *v15 = (__int64)v16;
            if ( v16 )
            {
              *(_QWORD *)(v25 + 40) = v15;
              *((_DWORD *)v15 + 11) = 1;
              *((_BYTE *)v15 + 63) = 1;
              v17 = (const char *)*v15;
              v18 = *(_QWORD *)(v24[4] + 24);
              *((_DWORD *)v15 + 12) |= 0x8000u;
              v15[12] = v18;
              *((_WORD *)v15 + 26) = -1;
              v19 = sub_DC720((__int64)v24, v17);
              sub_E4210(a1, (__int64)v15, v19);
              sub_E4210(a1, (__int64)v15, nullptr);
              v20 = sub_DC720((__int64)v24, (const char *)*v15);
              sub_E4210(a1, (__int64)v15, v20);
              if ( !(unsigned int)sub_E8340(
                                    (__int64)v24,
                                    (const char **)v15,
                                    v25,
                                    *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, const char *, __int64, const char **))(v27 + 16),
                                    (__int64 *)v28) )
                return *(_QWORD *)(v25 + 40);
              sub_DBD10(a1, "%s", (const char *)v28[0]);
              v22 = v25;
              if ( v28[0] )
              {
                sub_C9250((__int64)v24, v28[0]);
                v22 = v25;
              }
              v23 = *(_QWORD *)(v22 + 40);
              v26 = v22;
              if ( v23 )
              {
                *(_DWORD *)(v23 + 48) |= 0x4000u;
                sub_D8230((__int64)v24, (_QWORD *)v23);
                *(_QWORD *)(v26 + 40) = 0;
                return v9;
              }
              return 0;
            }
            sub_C9250((__int64)v24, v15);
          }
        }
      }
    }
    if ( (a2 & 2) != 0 )
      return 0;
    *(_BYTE *)(a1 + 29) = 1;
LABEL_7:
    v11 = "no such table";
    if ( (a2 & 1) != 0 )
      v11 = "no such view";
    if ( a4 )
    {
      v9 = 0;
      sub_DBD10(a1, "%s: %s.%s", v11, a4, (const char *)a3);
      return v9;
    }
    sub_DBD10(a1, "%s: %s", v11, (const char *)a3);
    return 0;
  }
  if ( *(_BYTE *)(v8 + 63) == 1 && *(_BYTE *)(a1 + 37) )
    goto LABEL_7;
  return v9;
}
