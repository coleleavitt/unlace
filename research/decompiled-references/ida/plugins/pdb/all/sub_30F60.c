__int64 __fastcall sub_30F60(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned __int8 v6; // al
  __int64 v7; // rdx
  char scalar_bt; // al
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 idati; // rax
  __int64 v12; // rbp
  const char *v13; // rdx
  _QWORD v14[2]; // [rsp+0h] [rbp-48h] BYREF
  __int16 v15; // [rsp+10h] [rbp-38h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  switch ( a3 )
  {
    case 0:
      *(_BYTE *)(a2 + 4) = 1;
      return 0;
    case 1:
      v7 = 1;
      goto LABEL_8;
    case 2:
      v7 = 50;
      goto LABEL_8;
    case 3:
      idati = *(_QWORD *)(a1 + 312);
      v12 = a2 + 8;
      v13 = "wchar_t";
      goto LABEL_20;
    case 6:
    case 13:
      goto LABEL_6;
    case 7:
    case 14:
      if ( a4 == 1 )
      {
        v7 = 34;
        goto LABEL_8;
      }
      scalar_bt = get_scalar_bt((unsigned int)a4);
      if ( !scalar_bt )
        return 0;
      v6 = scalar_bt | 0x20;
      goto LABEL_7;
    case 8:
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      if ( (unsigned __int8)getinf(66) )
        v10 = (unsigned __int8)getinf(66);
      else
        v10 = *(_QWORD *)(v9 + 120);
      v7 = 41;
      if ( a4 != v10 )
      {
        v7 = 9;
        if ( a4 != 4 )
        {
          v7 = 57;
          if ( a4 != 10 )
            v7 = 25;
        }
      }
      goto LABEL_8;
    case 10:
      if ( (unsigned __int8)getinf(60) == a4 )
      {
        v7 = 8;
        goto LABEL_8;
      }
      if ( a4 == 4 )
      {
        v7 = 56;
        goto LABEL_8;
      }
      if ( a4 > 4 )
      {
        if ( a4 == 8 && (unsigned __int8)getinf_flag(3, 4) )
          goto LABEL_33;
      }
      else
      {
        if ( a4 == 1 )
        {
          v7 = 24;
          goto LABEL_8;
        }
        if ( a4 == 2 && !(unsigned __int8)getinf_flag(3, 4) )
        {
LABEL_33:
          v7 = 40;
          goto LABEL_8;
        }
      }
LABEL_6:
      v6 = get_scalar_bt((unsigned int)a4);
      if ( !v6 )
        return 0;
LABEL_7:
      v7 = v6;
LABEL_8:
      v14[0] = v7;
      copy_tinfo_t(a2 + 8, v14);
      clear_tinfo_t(v14);
      return 1;
    case 25:
      idati = *(_QWORD *)(a1 + 312);
      v12 = a2 + 8;
      v13 = "CURRENCY";
      goto LABEL_20;
    case 26:
      idati = *(_QWORD *)(a1 + 312);
      v12 = a2 + 8;
      v13 = "DATE";
      goto LABEL_20;
    case 27:
      idati = *(_QWORD *)(a1 + 312);
      v12 = a2 + 8;
      v13 = "VARIANT";
      goto LABEL_20;
    case 28:
      idati = *(_QWORD *)(a1 + 312);
      v12 = a2 + 8;
      v13 = "complex";
      goto LABEL_20;
    case 30:
      idati = *(_QWORD *)(a1 + 312);
      v12 = a2 + 8;
      v13 = "BSTR";
      goto LABEL_20;
    case 31:
      idati = *(_QWORD *)(a1 + 312);
      v12 = a2 + 8;
      v13 = "HRESULT";
LABEL_20:
      v14[1] = v13;
      v15 = 0;
      if ( !idati )
        idati = get_idati();
      v14[0] = idati;
      create_tinfo(v12, 61, 61, v14);
      return 2;
    default:
      return 0;
  }
}

