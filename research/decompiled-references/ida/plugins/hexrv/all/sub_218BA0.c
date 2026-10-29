__int64 __fastcall sub_218BA0(__int64 a1, _QWORD *a2, char a3)
{
  unsigned int v3; // r13d
  int v6; // eax
  __int64 v7; // rdx
  int v8; // edx
  __int64 v9; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+18h] [rbp-C0h]
  _BYTE v11[16]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v13; // [rsp+38h] [rbp-A0h] BYREF
  __int128 v14; // [rsp+48h] [rbp-90h]
  __int64 v15; // [rsp+58h] [rbp-80h]
  __int128 v16; // [rsp+60h] [rbp-78h]
  __int64 v17; // [rsp+70h] [rbp-68h]
  __int128 v18; // [rsp+78h] [rbp-60h]
  char v19; // [rsp+88h] [rbp-50h]
  unsigned __int64 v20; // [rsp+98h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( (unsigned __int8)*a2 && (get_tinfo_property() & 0xF) != 0xB )
  {
    v6 = *(_DWORD *)(a1 + 148);
    v9 = 0;
    v10 = 0;
    v12 = 0;
    v14 = 0u;
    v15 = 0;
    v17 = 0;
    v13 = 0;
    v16 = 0;
    v18 = 0;
    if ( (v6 & 0xFFFFFF0F) != 0 || v6 == 192 )
    {
      DWORD1(v14) = v6;
      LOBYTE(v6) = -64;
    }
    v19 = v6;
    copy_tinfo_t();
    v3 = calc_retloc();
    if ( (_BYTE)v3 )
    {
      v7 = v16;
      *(_QWORD *)&v16 = v10;
      v10 = v7;
      LODWORD(v7) = v15;
      LODWORD(v15) = v9;
      LODWORD(v9) = v7;
    }
    cleanup_argloc();
    clear_tinfo_t();
    if ( !(_BYTE)v3 )
      goto LABEL_17;
    sub_1C1990((__int64)v11, *(_QWORD *)(a1 + 16), (__int64)&v9, *(_DWORD *)(a1 + 144));
    v8 = *(_DWORD *)(a1 + 144);
    v12 = 0;
    v14 = 0;
    v13 = 0u;
    sub_1BEB30((__int64)v11, (__int64)&v12, v8, 0, 0);
    if ( a3 )
    {
      if ( !sub_11E770((__int64)&v12, a1 + 48) )
      {
LABEL_13:
        copy_argloc();
LABEL_14:
        if ( *((_QWORD *)&v13 + 1) )
        {
          *(_QWORD *)&v14 = 0;
          qfree();
        }
        qfree();
        cleanup_argloc();
LABEL_17:
        cleanup_argloc();
        return v3;
      }
    }
    else if ( (unsigned __int8)sub_604A0((_QWORD *)(a1 + 48), &v12)
           && (unsigned __int8)sub_312E40((char *)&v13 + 8, a1 + 64) )
    {
      goto LABEL_13;
    }
    v3 = 0;
    goto LABEL_14;
  }
  return 0;
}

