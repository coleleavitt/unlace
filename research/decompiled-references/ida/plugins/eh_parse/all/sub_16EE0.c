__int64 __fastcall sub_16EE0(unsigned __int8 (***a1)(void), _DWORD *a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned __int8 (*v10)(void); // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 *v14; // rax
  __int64 result; // rax
  unsigned __int8 v16; // dl
  unsigned int v17; // edi
  unsigned __int8 (*v18)(void); // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  unsigned __int8 (**v21)(void); // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  unsigned __int64 v25; // [rsp+8h] [rbp-60h]
  char v26; // [rsp+18h] [rbp-50h] BYREF
  __int16 v27; // [rsp+19h] [rbp-4Fh]
  char v28; // [rsp+1Bh] [rbp-4Dh]
  __int64 v29; // [rsp+1Ch] [rbp-4Ch] BYREF
  unsigned int v30; // [rsp+24h] [rbp-44h]
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( a5 == 101 )
    return 0xFFFFFFFFLL;
  v10 = **a1;
  if ( (char *)v10 == (char *)sub_16E00 )
  {
    v11 = a3;
    if ( !a2 || (v12 = a3, *a2 != 3) )
    {
      v13 = (__int64)a1[2] - 1;
      if ( v13 < 0 )
        goto LABEL_10;
      v14 = (unsigned __int64 *)&a1[1][4 * (_QWORD)a1[2] - 4];
      while ( v11 < *v14 || v11 >= v14[1] )
      {
        --v13;
        v14 -= 4;
        if ( v13 == -1 )
          goto LABEL_10;
      }
      v12 = v11 + v14[2] - *v14;
      if ( v12 == -1 )
      {
LABEL_10:
        v12 = v11;
        if ( (__int64)v11 >= (__int64)a1[74] + *((unsigned int *)a1 + 39) )
        {
          if ( *((_BYTE *)a1 + 985)
            || (v25 = v11,
                v24 = sub_16C70(
                        1u,
                        (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
                        a3),
                v11 = v25,
                v24 > 0) )
          {
            *((_BYTE *)a1 + 985) = 1;
            qlseek(a2, v11, 0);
            return 0xFFFFFFFFLL;
          }
          goto LABEL_43;
        }
      }
    }
    if ( qlseek(a2, v12, 0) == -1 )
      return 0xFFFFFFFFLL;
  }
  else if ( !v10() )
  {
    return 0xFFFFFFFFLL;
  }
  lread(a2, &v26, 4);
  if ( (unsigned __int8)((v26 & 7) - 1) > 1u )
    return 0xFFFFFFFFLL;
  v16 = HIBYTE(v27);
  if ( (v26 & 0x20) != 0 )
  {
    if ( (v27 & 0x100) != 0 )
      v16 = ++HIBYTE(v27);
    v17 = a3 + 2 * v16 + 4;
    v18 = **a1;
    if ( (char *)v18 != (char *)sub_16E00 )
    {
      if ( !((unsigned __int8 (__fastcall *)(unsigned __int8 (***)(void), _DWORD *, _QWORD, _QWORD))v18)(
              a1,
              a2,
              v17,
              v26 & 0x20) )
        return 0xFFFFFFFFLL;
LABEL_37:
      lread(a2, &v29, 12);
      if ( (v30 & 3) == 0 )
      {
        result = sub_16EE0(a1, a2, v30, a4, (unsigned int)(a5 + 1));
        if ( (_DWORD)result )
        {
          if ( (_DWORD)result == 2 )
            return 1;
        }
        else
        {
          *(_QWORD *)a4 = v29;
          *(_DWORD *)(a4 + 8) = v30;
          return 1;
        }
        return result;
      }
      return 0xFFFFFFFFLL;
    }
    if ( a2 )
    {
      v19 = v17;
      if ( *a2 == 3 )
        goto LABEL_36;
    }
    v20 = (__int64)a1[2] - 1;
    if ( v20 >= 0 )
    {
      v21 = &a1[1][4 * (_QWORD)a1[2] - 4];
      while ( v17 < (unsigned __int64)*v21 || v17 >= (unsigned __int64)v21[1] )
      {
        --v20;
        v21 -= 4;
        if ( v20 == -1 )
          goto LABEL_28;
      }
      v19 = v17 + (char *)v21[2] - (char *)*v21;
      if ( v19 != -1 )
      {
LABEL_36:
        if ( qlseek(a2, v19, 0) == -1 )
          return 0xFFFFFFFFLL;
        goto LABEL_37;
      }
    }
LABEL_28:
    v19 = v17;
    if ( v17 < (__int64)a1[74] + *((unsigned int *)a1 + 39) )
      goto LABEL_36;
    if ( *((_BYTE *)a1 + 985)
      || (int)sub_16C70(
                1u,
                (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
                v17) > 0 )
    {
      *((_BYTE *)a1 + 985) = 1;
      qlseek(a2, v17, 0);
      return 0xFFFFFFFFLL;
    }
LABEL_43:
    sub_16D50(0, "HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?", v22, v23, v11);
  }
  result = 0;
  if ( !v27 )
    return 2 * (unsigned int)(v28 == 0);
  return result;
}

