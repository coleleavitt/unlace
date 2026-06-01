__int64 __fastcall sub_11C00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 (__fastcall *a5)(_QWORD, unsigned __int64, _QWORD, __int64, __int64, __int64, _QWORD, _QWORD, __int64),
        unsigned __int64 a6)
{
  __int64 result; // rax
  unsigned __int64 *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int128 v23; // [rsp+0h] [rbp-198h] BYREF
  __int64 v24; // [rsp+10h] [rbp-188h]
  __int64 v25; // [rsp+18h] [rbp-180h]
  __int64 v26; // [rsp+20h] [rbp-178h]
  char v27; // [rsp+28h] [rbp-170h] BYREF
  _BYTE v28[15]; // [rsp+29h] [rbp-16Fh]
  _QWORD v29[38]; // [rsp+38h] [rbp-160h]
  unsigned __int64 v30; // [rsp+168h] [rbp-30h] BYREF

  v30 = __readfsqword(0x28u);
  if ( a4 > 4 )
    return 0;
  v23 = -1;
  v24 = -1;
  v12 = (unsigned __int64 *)&v27;
  v25 = 0;
  v26 = 0;
  do
  {
    *(_WORD *)v12 = 0;
    v12 += 5;
    *((_WORD *)v12 - 19) = 0;
    *((_WORD *)v12 - 18) = 0;
    *((_DWORD *)v12 - 2) = 0;
    *((_WORD *)v12 - 17) = 0;
    *((_OWORD *)v12 - 2) = 0;
    *(v12 - 2) = 0;
  }
  while ( v12 != &v30 );
  if ( (int)decode_insn(&v23, a3, 0.0) <= 0 )
    return 0;
  v15 = *(_QWORD *)(a1 + 16);
  v16 = 0;
  v17 = *(_DWORD *)(v15 + 104);
  v18 = (unsigned __int16)v25;
  if ( (unsigned __int16)v25 >= v17 && (unsigned __int16)v25 < *(int *)(v15 + 108) )
  {
    v16 = (unsigned __int64)dword_25580;
    LOBYTE(v16) = (dword_25580[a4] & *(_DWORD *)(*(_QWORD *)(v15 + 112) + 16LL * ((unsigned __int16)v25 - v17) + 8)) != 0;
  }
  *(_BYTE *)a2 = v16;
  v19 = 40LL * (int)a4;
  if ( v28[v19] > 0xBu )
    return 0;
  switch ( v28[40 * a4] )
  {
    case 0:
    case 3:
    case 6:
    case 8:
    case 0xA:
      return 0;
    case 1:
      v22 = *(unsigned __int16 *)&v28[40 * a4 + 5];
      if ( (unsigned __int16)v22 > 0x7Fu )
      {
        v16 = (unsigned __int16)v22;
        sub_EDD0((__int64)"Bad register number passed to nec850.get_register_value: %d", (unsigned __int16)v22);
LABEL_14:
        v21 = 0;
      }
      else
      {
        v16 = a6;
        v21 = *(_QWORD *)(a5(
                            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8 * v22),
                            a6,
                            *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL),
                            v19,
                            v13,
                            v14,
                            v23,
                            *((_QWORD *)&v23 + 1),
                            v24)
                        + 8);
      }
LABEL_15:
      *(_QWORD *)(a2 + 24) = v21;
      *(_DWORD *)(a2 + 52) = get_dtype_size((unsigned __int8)v28[40 * a4 + 4], v16, v18, v19);
      result = 1;
      break;
    case 2:
      goto LABEL_12;
    case 4:
    case 9:
    case 0xB:
      goto LABEL_14;
    case 5:
      v21 = *(_QWORD *)&v28[40 * a4 + 7];
      goto LABEL_15;
    case 7:
      if ( (_WORD)v18 == 79 )
      {
        v20 = -1;
        if ( v28[0] == 7 )
          v20 = v29[0];
      }
      else
      {
LABEL_12:
        v20 = v29[5 * (int)a4];
      }
      *(_QWORD *)(a2 + 8) = v20;
      goto LABEL_14;
  }
  return result;
}

