__int64 __fastcall sub_C1380(__int64 *a1)
{
  __int64 v2; // r12
  __int64 v3; // r13
  int v4; // r14d
  unsigned int v5; // r13d
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // [rsp+8h] [rbp-238h]
  __int64 v14; // [rsp+18h] [rbp-228h]
  __int64 v15; // [rsp+28h] [rbp-218h]
  __int64 v16; // [rsp+30h] [rbp-210h] BYREF
  __int64 v17; // [rsp+38h] [rbp-208h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-200h] BYREF
  __int64 v19; // [rsp+48h] [rbp-1F8h]
  __int64 v20; // [rsp+50h] [rbp-1F0h] BYREF
  __int128 v21; // [rsp+58h] [rbp-1E8h]
  __int128 v22; // [rsp+70h] [rbp-1D0h] BYREF
  __int64 v23; // [rsp+80h] [rbp-1C0h]
  __int128 v24; // [rsp+88h] [rbp-1B8h]
  __int64 v25; // [rsp+98h] [rbp-1A8h]
  __int128 v26; // [rsp+A0h] [rbp-1A0h]
  __int128 v27; // [rsp+B0h] [rbp-190h]
  __int64 v28; // [rsp+E0h] [rbp-160h]
  int v29; // [rsp+E8h] [rbp-158h]
  __int64 v30; // [rsp+F0h] [rbp-150h]
  char v31; // [rsp+F8h] [rbp-148h]
  unsigned __int64 v32; // [rsp+208h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  v14 = a1[4];
  if ( (unsigned int)(*(_DWORD *)v14 - 1) > 1 )
    return 0;
  v2 = v14 + 64;
  if ( *(_DWORD *)v14 == 2 )
    v2 = v14 + 48;
  if ( *(_BYTE *)v2 != 4 )
    goto LABEL_7;
  v3 = *(_QWORD *)(v2 + 8);
  if ( (unsigned int)(*(_DWORD *)v3 - 12) > 1 )
  {
LABEL_6:
    if ( *(_BYTE *)(v3 + 64) == 8 && *(_DWORD *)(*(_QWORD *)(v3 + 72) + 284LL) == 14 )
      return 0;
LABEL_7:
    v4 = 0;
    get_flags_ex();
    while ( !(unsigned __int8)is_stroff() )
    {
      if ( ++v4 == 8 )
        return 0;
    }
    if ( !(unsigned int)get_stroff_path() || !v15 )
      return 0;
    v16 = 0;
    v17 = 0;
    if ( (unsigned int)guess_tinfo() == 2 )
    {
      v23 = 0;
      v25 = 0;
      v28 = 1;
      v29 = -1;
      v30 = 0;
      v31 = 0;
      v22 = 0;
      v24 = 0;
      v26 = 0;
      v27 = 0;
      v7 = sub_32D810(&v22, (__int64)&v16, v15);
      v8 = a1[1];
      if ( v7 == -1 )
      {
        sub_C0A20((_QWORD *)v8, *(_QWORD *)(v14 + 24), (__int64)&v17, v15);
      }
      else if ( (unsigned __int8)sub_BA670(v8, &v17, 0, 0, (char *)v2, *(_QWORD ***)(v8 + 800), 0, 0, a1 + 6)
             && !get_tinfo_property() )
      {
        v20 = 0;
        v21 = 0;
        v5 = sub_B9100((__int64)&v20, (__int64)&v22);
        if ( (_BYTE)v5 )
        {
          v18 = 0xFFFFFFFF00000000LL;
          v19 = 0;
          v13 = j__qalloc_or_throw(80, (__int64)&v22, v9, v10);
          v11 = *(_QWORD *)(v14 + 24);
          *(_QWORD *)(v13 + 40) = 0;
          *(_QWORD *)(v13 + 56) = 0;
          *(_QWORD *)(v13 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v13 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v13 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v13 + 72) = 0;
          sub_330970(v13, v11);
          v12 = *(_DWORD *)(v2 + 4);
          LOBYTE(v18) = 4;
          *(_DWORD *)(v13 + 68) = v12;
          v19 = v13;
          HIDWORD(v18) = *(_DWORD *)(v2 + 4);
          sub_11CA10((char *)&v18, (char *)v2);
          sub_C0E10(a1, *(_QWORD *)(v2 + 8), (char *)&v18, &v17, (int)&v16, &v20, v15);
          sub_11CDA0((__int64)&v18);
          if ( v20 )
          {
            *(_QWORD *)&v21 = 0;
            qfree(v20);
          }
          sub_A1E90(&v22);
          goto LABEL_16;
        }
        sub_C0A20((_QWORD *)a1[1], *(_QWORD *)(v14 + 24), (__int64)&v17, v15);
        if ( v20 )
        {
          *(_QWORD *)&v21 = 0;
          qfree(v20);
        }
      }
      clear_tinfo_t();
      if ( v25 )
      {
        *(_QWORD *)&v26 = 0;
        qfree(v25);
      }
      if ( v23 )
      {
        *(_QWORD *)&v24 = 0;
        qfree(v23);
      }
    }
    v5 = 0;
LABEL_16:
    clear_tinfo_t();
    clear_tinfo_t();
    return v5;
  }
  if ( !sub_11C8A0(*(_QWORD *)(v2 + 8), nullptr) )
  {
    if ( *(_BYTE *)(v3 + 32) == 4 )
      v3 = *(_QWORD *)(v3 + 40);
    goto LABEL_6;
  }
  return 0;
}

