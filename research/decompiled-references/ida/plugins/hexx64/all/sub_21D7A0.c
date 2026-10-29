__int64 __fastcall sub_21D7A0(__int64 a1, _QWORD *a2, char a3, double a4, __m128 a5)
{
  unsigned int v5; // r13d
  int v8; // eax
  __int64 v9; // rdx
  int v10; // edx
  __int64 v11; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+18h] [rbp-C0h]
  _BYTE v13[16]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v15; // [rsp+38h] [rbp-A0h] BYREF
  __int128 v16; // [rsp+48h] [rbp-90h]
  __int64 v17; // [rsp+58h] [rbp-80h]
  __int128 v18; // [rsp+60h] [rbp-78h]
  __int64 v19; // [rsp+70h] [rbp-68h]
  __int128 v20; // [rsp+78h] [rbp-60h]
  char v21; // [rsp+88h] [rbp-50h]
  unsigned __int64 v22; // [rsp+98h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( (unsigned __int8)*a2 && (get_tinfo_property() & 0xF) != 0xB )
  {
    v8 = *(_DWORD *)(a1 + 148);
    v11 = 0;
    v12 = 0;
    v14 = 0;
    v16 = 0u;
    v17 = 0;
    v19 = 0;
    v15 = 0;
    v18 = 0;
    v20 = 0;
    if ( (v8 & 0xFFFFFF0F) != 0 || v8 == 192 )
    {
      DWORD1(v16) = v8;
      LOBYTE(v8) = -64;
    }
    v21 = v8;
    copy_tinfo_t();
    v5 = calc_retloc();
    if ( (_BYTE)v5 )
    {
      v9 = v18;
      *(_QWORD *)&v18 = v12;
      v12 = v9;
      LODWORD(v9) = v17;
      LODWORD(v17) = v11;
      LODWORD(v11) = v9;
    }
    cleanup_argloc();
    clear_tinfo_t();
    if ( !(_BYTE)v5 )
      goto LABEL_17;
    sub_1C6010((__int64)v13, *(_QWORD *)(a1 + 16), (__int64)&v11, *(unsigned int *)(a1 + 144), 0.0);
    v10 = *(_DWORD *)(a1 + 144);
    v14 = 0;
    v16 = 0;
    v15 = 0u;
    sub_1C31B0((__int64)v13, (__int64)&v14, v10, 0, 0, 0.0, a5);
    if ( a3 )
    {
      if ( !sub_122C30((__int64)&v14, a1 + 48) )
      {
LABEL_13:
        copy_argloc();
LABEL_14:
        if ( *((_QWORD *)&v15 + 1) )
        {
          *(_QWORD *)&v16 = 0;
          qfree(*((__int64 *)&v15 + 1));
        }
        qfree(v14);
        cleanup_argloc();
LABEL_17:
        cleanup_argloc();
        return v5;
      }
    }
    else if ( (unsigned __int8)sub_64820((_QWORD *)(a1 + 48), &v14)
           && (unsigned __int8)sub_317F40((__int64 *)&v15 + 1, a1 + 64) )
    {
      goto LABEL_13;
    }
    v5 = 0;
    goto LABEL_14;
  }
  return 0;
}

